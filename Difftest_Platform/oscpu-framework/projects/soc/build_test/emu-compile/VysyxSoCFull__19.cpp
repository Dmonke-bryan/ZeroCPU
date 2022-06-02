// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__49(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__49\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    // Body
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray = 0U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
               ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                        >> 1U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
               ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                        >> 1U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
               ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                        >> 1U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
               ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                        >> 1U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
               ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                        >> 1U)));
    }
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                 + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                 + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready))));
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                 + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                 + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin = 0U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_incremented_T_1)
                : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_incremented_T_1)
                : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_incremented_T_1)
                : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_incremented_T_1)
                : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_incremented_T_1)
                : 0U);
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                     + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready))) 
                 != (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                     + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready))) 
                 != (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                  ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                           >> 1U))) != (0xcU ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                  << 3U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                    << 2U)) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                  ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                           >> 1U))) != (0xcU ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                  << 3U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                    << 2U)) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                  ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                           >> 1U))) != (0xcU ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                  << 3U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                    << 2U)) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                  ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                           >> 1U))) != (0xcU ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                  << 3U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                    << 2U)) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                  ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                           >> 1U))) != (0xcU ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                  << 3U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                    << 2U)) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                          >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                          >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                          >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                          >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                          >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_a_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source_io_enq_ready) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_bT 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource_io_enq_ready) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_c_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source_io_enq_ready) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_d_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source_io_enq_ready) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_e_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source_io_enq_ready) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_gray));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_gray));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z 
        = (0x1fffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a 
                        + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_a_T)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin) 
                   + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q_io_enq_ready));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z_1 
        = (0x1fffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b 
                        + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_bT)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin) 
                   + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q_io_enq_ready));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z_2 
        = (0x1fffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c 
                        + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_c_T)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin) 
                   + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q_io_enq_ready));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z_3 
        = (0x1fffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d 
                        + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_d_T)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin) 
                   + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q_io_enq_ready));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z_4 
        = (0x1fffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e 
                        + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_e_T)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin) 
                   + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q_io_enq_ready));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_incremented_T_1)
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___do_enq_T) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_incremented_T_1)
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___do_enq_T) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_incremented_T_1)
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___do_enq_T) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_incremented_T_1)
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___do_enq_T) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_incremented_T_1)
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___do_enq_T) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_valid)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)));
}

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__50(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__50\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    // Body
    __Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray = 0U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
               ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                        >> 1U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
               ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                        >> 1U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
               ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                        >> 1U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
               ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                        >> 1U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
               ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                        >> 1U)));
    }
    __Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                 + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                 + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready))));
    __Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                 + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                 + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin = 0U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_incremented_T_1)
                : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_incremented_T_1)
                : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_incremented_T_1)
                : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_incremented_T_1)
                : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_incremented_T_1)
                : 0U);
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                     + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready))) 
                 != (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                     + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready))) 
                 != (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                  ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                           >> 1U))) != (0xcU ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                  << 3U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                    << 2U)) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                  ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                           >> 1U))) != (0xcU ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                  << 3U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                    << 2U)) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                  ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                           >> 1U))) != (0xcU ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                  << 3U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                    << 2U)) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                  ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                           >> 1U))) != (0xcU ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                  << 3U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                    << 2U)) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                  ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                           >> 1U))) != (0xcU ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                  << 3U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                    << 2U)) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                    << 1U) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = __Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = __Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                          >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                          >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                          >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                          >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                          >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_a_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source_io_enq_ready) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_bT 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource_io_enq_ready) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_c_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source_io_enq_ready) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_d_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source_io_enq_ready) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_e_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source_io_enq_ready) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_gray));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_gray));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z 
        = (0x1fffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a 
                        + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_a_T)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin) 
                   + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q_io_enq_ready));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z_1 
        = (0x1fffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b 
                        + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_bT)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin) 
                   + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q_io_enq_ready));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z_2 
        = (0x1fffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c 
                        + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_c_T)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin) 
                   + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q_io_enq_ready));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z_3 
        = (0x1fffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d 
                        + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_d_T)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin) 
                   + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q_io_enq_ready));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z_4 
        = (0x1fffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e 
                        + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_e_T)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin) 
                   + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q_io_enq_ready));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_incremented_T_1)
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___do_enq_T) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_incremented_T_1)
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___do_enq_T) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_incremented_T_1)
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___do_enq_T) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_incremented_T_1)
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___do_enq_T) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_incremented_T_1)
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___do_enq_T) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_valid)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)));
}

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__51(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__51\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    QData/*63:0*/ __Vtask_flash_read__1__data;
    // Body
    if (((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state)) 
         & (0x16U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter)))) {
        vlSymsp->TOP____024unit.__Vdpiimwrap_flash_read_TOP____024unit(
                                                                       ((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__addr)) 
                                                                        << 2U), __Vtask_flash_read__1__data);
        vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__rdata 
            = __Vtask_flash_read__1__data;
    }
}

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__52(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__52\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__state;
    CData/*7:0*/ __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter;
    CData/*7:0*/ __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__cmd;
    IData/*21:0*/ __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__addr;
    QData/*63:0*/ __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__data;
    // Body
    __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__cmd 
        = vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__cmd;
    __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter 
        = vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter;
    __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__data;
    __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__addr 
        = vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__addr;
    __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__state 
        = vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state;
    if (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__cmd = 0U;
    } else if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state))) {
        __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__cmd 
            = (1U | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__cmd) 
                              << 1U)));
    }
    __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__reset)
            ? 0U : (0xffU & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state))
                              ? ((7U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter))
                                  ? ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter))
                                  : 0U) : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state))
                                            ? ((0x17U 
                                                > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter))
                                                ? ((IData)(1U) 
                                                   + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter))
                                                : 0U)
                                            : ((IData)(1U) 
                                               + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter))))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__data = 0ULL;
    } else if (((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state)) 
                & (0x17U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter)))) {
        __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__data 
            = (((QData)((IData)(((0xff000000U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__rdata) 
                                                 << 0x18U)) 
                                 | ((0xff0000U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__rdata 
                                                           >> 8U)) 
                                                  << 0x10U)) 
                                    | ((0xff00U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__rdata 
                                                            >> 0x10U)) 
                                                   << 8U)) 
                                       | (0xffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__rdata 
                                                           >> 0x18U)))))))) 
                << 0x20U) | (QData)((IData)(((0xff000000U 
                                              & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__rdata 
                                                          >> 0x20U)) 
                                                 << 0x18U)) 
                                             | ((0xff0000U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__rdata 
                                                             >> 0x28U)) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__rdata 
                                                                >> 0x30U)) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__rdata 
                                                                 >> 0x38U)))))))));
    } else if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state))) {
        __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__data 
            = ((0xfffffffffffffffeULL & (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__data 
                                         << 1U)) | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__data 
                                                                               >> 0x3fU))))));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__addr = 0U;
    } else if (((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state)) 
                & (0x16U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter)))) {
        __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__addr 
            = (1U | (0x3ffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__addr 
                                  << 1U)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__state = 0U;
    } else if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state))) {
        __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__state 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter))
                ? 1U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state));
    } else if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state))) {
        __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__state 
            = ((3U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__cmd))
                ? 3U : ((0x17U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter))
                         ? 2U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state)));
    } else if (VL_LIKELY((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state)))) {
        __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__state 
            = vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state;
    } else {
        VL_FWRITEF(0x80000002U,"Assertion failed: only support `03h` read command\n");
        __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__state 
            = vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state;
        VL_WRITEF("[%0t] %%Error: spiFlash.v:47: Assertion failed in %NTestHarness.ldut.spiFlash\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/peripheral/spiFlash/spiFlash.v", 47, "");
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__data 
        = __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__data;
    vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__addr 
        = __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__addr;
    vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__cmd 
        = __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__cmd;
    vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter 
        = __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__counter;
    vlTOPp->TestHarness__DOT__ldut__DOT__spiFlash__DOT__state 
        = __Vdly__TestHarness__DOT__ldut__DOT__spiFlash__DOT__state;
}

VL_INLINE_OPT void VysyxSoCFull::_combo__TOP__53(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_combo__TOP__53\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<4>/*127:0*/ __Vtemp4817;
    VlWide<4>/*127:0*/ __Vtemp4818;
    VlWide<4>/*127:0*/ __Vtemp4819;
    VlWide<4>/*127:0*/ __Vtemp4820;
    VlWide<4>/*127:0*/ __Vtemp4821;
    VlWide<4>/*127:0*/ __Vtemp4822;
    VlWide<4>/*127:0*/ __Vtemp4823;
    VlWide<4>/*127:0*/ __Vtemp4824;
    VlWide<4>/*127:0*/ __Vtemp4825;
    VlWide<4>/*127:0*/ __Vtemp4826;
    VlWide<4>/*127:0*/ __Vtemp4828;
    VlWide<4>/*127:0*/ __Vtemp4829;
    VlWide<4>/*127:0*/ __Vtemp4830;
    VlWide<4>/*127:0*/ __Vtemp4833;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0) 
           | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__stallD 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__CoreLock));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__stallE 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__CoreLock));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__stallM 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__CoreLock));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_r 
        = (((QData)((IData)(((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
                             & ((3U == (3U & (IData)(
                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_t 
                                                      >> 0xfU)))) 
                                | (3U == (3U & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_t 
                                                        >> 0xdU)))))))) 
            << 0x3fU) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)
                            ? 0ULL : (0x3ffffffffffffULL 
                                      & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_t 
                                         >> 0xdU))) 
                          << 0xdU) | (QData)((IData)(
                                                     ((((0U 
                                                         != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtypeW_dff__DOT__qout_r))
                                                         ? 3U
                                                         : 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQretW_dff__DOT__qout_r)
                                                          ? 0U
                                                          : 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_t 
                                                                     >> 0xbU))))) 
                                                       << 0xbU) 
                                                      | ((0x80U 
                                                          & (((0U 
                                                               != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtypeW_dff__DOT__qout_r))
                                                               ? (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_t 
                                                                          >> 3U))
                                                               : 
                                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQretW_dff__DOT__qout_r) 
                                                               | (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_t 
                                                                          >> 7U)))) 
                                                             << 7U)) 
                                                         | (8U 
                                                            & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQretW_dff__DOT__qout_r) 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_t 
                                                                            >> 7U)))
                                                                 ? (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_t 
                                                                            >> 7U))
                                                                 : 
                                                                ((0U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtypeW_dff__DOT__qout_r)) 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_t 
                                                                            >> 3U)))) 
                                                               << 3U))))))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mie_r = 0ULL;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mscratch_r = 0ULL;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mcycle_r = 0ULL;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__minstret_t = 0ULL;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__medeleg_t = 0ULL;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mideleg_t = 0ULL;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mie_r 
            = (((0x304U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mie_dff__DOT__qout_r);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mscratch_r 
            = (((0x340U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mscratch_dff__DOT__qout_r);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mcycle_r 
            = (1ULL + ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)
                        ? 0ULL : (((0xb00U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                                   ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                   : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mcycle_dff__DOT__qout_r)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__minstret_t 
            = (((0xb02U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__minstret_dff__DOT__qout_r);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__medeleg_t 
            = (((0x302U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__medeleg_dff__DOT__qout_r);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mideleg_t 
            = (((0x303U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mideleg_dff__DOT__qout_r);
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__sstatus_r 
        = (((QData)((IData)(((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
                             & ((3U == (3U & (IData)(
                                                     ((((0x100U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                                        : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__sstatus_dff__DOT__qout_r) 
                                                      >> 0xfU)))) 
                                | (3U == (3U & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_t 
                                                        >> 0xdU)))))))) 
            << 0x3fU) | ((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)
                                           ? 0U : (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_t 
                                                              >> 0xdU)))))) 
                         << 0xdU));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusWriteData = 0ULL;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__ReadData_r = 0ULL;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1 = 0ULL;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2 = 0ULL;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusWriteAddr = 0ULL;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusReadAddr = 0ULL;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusWriteData 
            = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r
                : ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                    ? (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                       << (0x38U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                    << 3U))) : ((4U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                 ? 
                                                (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                                                 << 
                                                 (0x38U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                     << 3U)))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                  ? 
                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                                                  << 
                                                  (0x38U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                      << 3U)))
                                                  : 0ULL))));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__ReadData_r 
            = ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                     >> 0x14U))) ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__sstatus_dff__DOT__qout_r
                : ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                         >> 0x14U)))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_dff__DOT__qout_r
                    : ((0x301U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                             >> 0x14U)))
                        ? 0x4000000000000100ULL : (
                                                   (0x302U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__medeleg_dff__DOT__qout_r
                                                    : 
                                                   ((0x303U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mideleg_dff__DOT__qout_r
                                                     : 
                                                    ((0x304U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                          >> 0x14U)))
                                                      ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mie_dff__DOT__qout_r
                                                      : 
                                                     ((0x305U 
                                                       == 
                                                       (0xfffU 
                                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                           >> 0x14U)))
                                                       ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mtvec_dff__DOT__qout_r
                                                       : 
                                                      ((0xf11U 
                                                        == 
                                                        (0xfffU 
                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                            >> 0x14U)))
                                                        ? 0x20000915ULL
                                                        : 
                                                       ((0xf12U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                             >> 0x14U)))
                                                         ? 0x8000000000000000ULL
                                                         : 
                                                        ((0xf13U 
                                                          == 
                                                          (0xfffU 
                                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                              >> 0x14U)))
                                                          ? 1ULL
                                                          : 
                                                         ((0xf14U 
                                                           == 
                                                           (0xfffU 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                               >> 0x14U)))
                                                           ? 0ULL
                                                           : 
                                                          ((0x340U 
                                                            == 
                                                            (0xfffU 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                                >> 0x14U)))
                                                            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mscratch_dff__DOT__qout_r
                                                            : 
                                                           ((0x341U 
                                                             == 
                                                             (0xfffU 
                                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                                 >> 0x14U)))
                                                             ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mepc_dff__DOT__qout_r
                                                             : 
                                                            ((0x342U 
                                                              == 
                                                              (0xfffU 
                                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                                  >> 0x14U)))
                                                              ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mcause_dff__DOT__qout_r
                                                              : 
                                                             ((0x344U 
                                                               == 
                                                               (0xfffU 
                                                                & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                                   >> 0x14U)))
                                                               ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mip_dff__DOT__qout_r
                                                               : 
                                                              ((0xb00U 
                                                                == 
                                                                (0xfffU 
                                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                                    >> 0x14U)))
                                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mcycle_dff__DOT__qout_r
                                                                : 
                                                               ((0xb02U 
                                                                 == 
                                                                 (0xfffU 
                                                                  & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                                     >> 0x14U)))
                                                                 ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__minstret_dff__DOT__qout_r
                                                                 : 0ULL)))))))))))))))));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__rs1Data;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2 
            = ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__imm_dff__DOT__qout_r
                : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__rs2Data);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusWriteAddr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusReadAddr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusReadAddrM_clk_diff__DOT__qout_r;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__ITtime_r 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
           & (((0ULL != vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__pcE_dff__DOT__qout_r) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__jalbranch_dff__DOT__qout_r))) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__itWhit) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__ITtime_dff__DOT__qout_r))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusWriteEnable 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusWriteEnableM_clk_diff__DOT__qout_r));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusReadEnable 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusReadEnableM_clk_diff__DOT__qout_r));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__result 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
            ? (QData)((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1 
                               != vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2)))
            : ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
                ? (QData)((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1 
                                   == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2)))
                : ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
                    ? (QData)((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1 
                                       >= vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2)))
                    : ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
                        ? (QData)((IData)(VL_GTES_IQQ(1,64,64, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2)))
                        : ((0x10U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
                            ? (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1 
                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2)
                            : ((0x20U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                ? (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1 
                                   | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2)
                                : ((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                    ? (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1 
                                       ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2)
                                    : ((0x80U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                            ? (QData)((IData)(
                                                              VL_SHIFTRS_III(32,32,5, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1), 
                                                                             (0x1fU 
                                                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2)))))
                                            : VL_SHIFTRS_QQI(64,64,6, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1, 
                                                             (0x3fU 
                                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2))))
                                        : ((0x100U 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                            ? ((1U 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                ? (QData)((IData)(
                                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1) 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2)))))
                                                : (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2))))
                                            : ((0x200U 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                ? (QData)((IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1 
                                                                   < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2)))
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                    ? (QData)((IData)(
                                                                      VL_LTS_IQQ(1,64,64, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2)))
                                                    : 
                                                   ((0x800U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                     ? 
                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1 
                                                     << 
                                                     (0x3fU 
                                                      & ((1U 
                                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2))
                                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2))))
                                                     : 
                                                    ((0x1000U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                      ? 
                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op1 
                                                      - vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__op2)
                                                      : 
                                                     ((0x2000U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                       ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__resADD
                                                       : 0ULL))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__jump 
        = (1U & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__jalbranch_dff__DOT__qout_r) 
                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                      >> 0xaU)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                   >> 0xbU)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__ITtime_r)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtype_r 
        = ((2U & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
                   << 1U) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                             >> 9U))) | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__ITtime_r)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__LoadStoreM 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusWriteEnableM_clk_diff__DOT__qout_r) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusReadEnable)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintBus 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusReadEnable)
            ? (0x200U == (0xffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusReadAddr 
                                             >> 0x10U))))
            : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusWriteEnable) 
               & (0x200U == (0xffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusWriteAddr 
                                                >> 0x10U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__jalbranch_r 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
                 & (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                       >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__result)) 
                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                        >> 4U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                   >> 5U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__jAddr 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtype_r))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mtvec_dff__DOT__qout_r
            : ((0x800U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mepc_dff__DOT__qout_r
                : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__jalbranch_dff__DOT__qout_r)
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__jumpAddr_dff__DOT__qout_r
                    : 0ULL)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__flushE 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__CoreLock)) 
                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__LoadStoreM) 
                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtype_r) 
                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__jalbranch_dff__DOT__qout_r))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__flushD 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__CoreLock)) 
                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
                    & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                        >> 0xbU) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQret_dff__DOT__qout_r) 
                                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQretW_dff__DOT__qout_r) 
                                       | ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtype_r)) 
                                          | ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtype_dff__DOT__qout_r)) 
                                             | ((0U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtypeW_dff__DOT__qout_r)) 
                                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__jalbranch_dff__DOT__qout_r) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__LoadStoreE) 
                                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__LoadStoreM))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__stallF 
        = ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__CoreLock)) 
               & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
                  & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                      >> 0xbU) | ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtype_r)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__jalbranch_dff__DOT__qout_r)))))) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__CoreLock) 
                 | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__LoadStoreE) 
                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__LoadStoreM)) 
                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQret_dff__DOT__qout_r) 
                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQretW_dff__DOT__qout_r) 
                          | ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtype_dff__DOT__qout_r)) 
                             | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtypeW_dff__DOT__qout_r)))))))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintBus) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintWriteAddr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusWriteAddr;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintWriteData 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusWriteData;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintWriteEnable 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusWriteEnable) 
               & 1U);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintReadAddr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusReadAddr;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintReadEnable 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusReadEnable) 
               & 1U);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamWriteMask = 0U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintWriteAddr = 0ULL;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintWriteData = 0ULL;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintWriteEnable = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintReadAddr = 0ULL;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintReadEnable = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamWriteMask 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)
                ? 0U : ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                         ? 0xffU : (0xffU & ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                              ? ((IData)(0xfU) 
                                                 << 
                                                 (7U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r)))
                                              : ((4U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                   ? 
                                                  ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r)))
                                                   : 0U))))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamReadEnable 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintBus)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusReadEnable));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamWriteEnable 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintBus)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusWriteEnable));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__pcF 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)
            ? 0x30000000ULL : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__jump)
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__jAddr
                                : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__pc));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__loadRes 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintBus)
             ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)
                 ? 0ULL : (((0x200bff8ULL == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintReadAddr) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintReadEnable))
                            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mtime
                            : (((0x2004000ULL == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintReadAddr) 
                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintReadEnable))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mtimecmp
                                : 0ULL))) : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamReadEnable)
                                              ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_data_read
                                              : 0ULL)) 
           >> (0x38U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__BusReadAddrM_clk_diff__DOT__qout_r) 
                        << 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__rw_ready)) 
                 & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamReadEnable)) 
                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamWriteEnable))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__req 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)) 
           & ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamWriteEnable)) 
                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamReadEnable) 
                     | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset))))) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamWriteEnable)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_size 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamReadEnable) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamWriteEnable))
            ? ((IData)((0U != (0x608U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))))
                ? 0U : ((IData)((0U != (0x184U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))))
                         ? 1U : ((IData)((0U != (0x62U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))))
                                  ? 2U : ((IData)((0U 
                                                   != 
                                                   (0x11U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))))
                                           ? 3U : 0U))))
            : 2U);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamReadEnable)
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintBus)
                ? 0ULL : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusReadAddr)
            : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamWriteEnable)
                ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintBus)
                    ? 0ULL : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusWriteAddr)
                : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__pcF));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__rdWriteDataM_r 
        = ((0x400U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)
                ? 0ULL : ((0xffffffffffffff00ULL & 
                           ((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__loadRes 
                                                           >> 7U)))))) 
                            << 8U)) | (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__loadRes))))))
            : ((0x200U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)
                    ? 0ULL : (QData)((IData)((0xffU 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__loadRes)))))
                : ((0x100U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                    ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)
                        ? 0ULL : ((0xffffffffffff0000ULL 
                                   & ((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__loadRes 
                                                                     >> 0xfU)))))) 
                                      << 0x10U)) | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__loadRes))))))
                    : ((0x80U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                        ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)
                            ? 0ULL : (QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__loadRes)))))
                        : ((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)
                                ? 0ULL : (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__loadRes 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__loadRes))))
                            : ((0x20U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)
                                    ? 0ULL : (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__loadRes)))
                                : ((0x10U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                    ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset)
                                        ? 0ULL : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__loadRes)
                                    : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_size
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_size));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_size
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_addr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_addr
            [0U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_size;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_addr 
            = (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr);
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_addr
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0 
        = ((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                     (0x40000000U 
                                                      ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr)))))) 
           | (0ULL == (0x80000000ULL & (QData)((IData)(
                                                       (0x80000000U 
                                                        ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 
        = ((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                     (0x40000000U 
                                                      ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr)))))) 
           | (0ULL == (0x80000000ULL & (QData)((IData)(
                                                       (0x80000000U 
                                                        ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wrapMask_T_3 
        = (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad_1 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst)) 
           | (3U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wrapMask_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_burst)) 
           | (3U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__busy)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__r_addr
            : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_addr);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__busy_1)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__r_addr_1
            : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_arready 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full))) 
           | ((0ULL == (0xc0000000ULL & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr)))) 
              & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___arTag_T 
        = (((0ULL == (0xc0000000ULL & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr)))) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_awready 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full))) 
           | ((0ULL == (0xc0000000ULL & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr)))) 
              & ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__bundleIn_0_awready_REG)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits 
        = (((0ULL == (0xc0000000ULL & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr)))) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T 
        = (((0ULL == (0xc0000000ULL & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr)))) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5 
        = ((~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr) 
           | (7U & (~ (0x3ffU & ((IData)(7U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_2 
        = (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
                     >> 3U) | (0xfeU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
                                        >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12 
        = ((~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1) 
           | (7U & (~ (0x3ffU & ((IData)(7U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_12 
        = (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
                     >> 3U) | (0xfeU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
                                        >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___GEN_47 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)) 
            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last) 
               == (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                         >> 1U)))) & (7U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits)
            : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__deq_ptr_value]);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___GEN_63 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)) 
            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last) 
               == (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                         >> 1U)))) & (7U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_15 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_12) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_12) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__ar_hs 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_arready) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___GEN_47)) 
           & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__r_state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_arready) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___GEN_47)) 
           & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__r_state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__r_state)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___GEN_47));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_1_wvalid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits) 
              >> 1U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_wready 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits) 
                     >> 1U) & ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__bundleIn_0_wready_REG))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_0_wvalid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_in_awready 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__latched) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___GEN_63));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__latched) 
                | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___GEN_63)) 
           & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__w_state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__w_state)) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__latched) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___GEN_63));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T 
        = (0xffU & (((0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                >> 1U) | (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                                >> 5U)))) 
                     | (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                           | (0xf0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                       << 4U))))) & 
                    (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_5) 
                        | (0xf0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_5) 
                                    << 4U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T_1 
        = (0xffU & (((0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                >> 1U) | (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                                >> 5U)))) 
                     | (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                           | (0xf0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                       << 4U))))) & 
                    (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_15) 
                        | (0xf0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_15) 
                                    << 4U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_1_arvalid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (0ULL == (0xc0000000ULL & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_0_arvalid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT___wdata_reg_T 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__bundleIn_0_wready_REG))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_1_wvalid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__w_done 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid)) 
            & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__w_state))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_last));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_ready 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__w_state)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_last)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_0_wvalid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_0_wvalid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__aw_hs 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_in_awready) 
           & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__w_state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_1_awvalid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (0ULL == (0xc0000000ULL & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_addr)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_0_awvalid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad)
            ? 0U : (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
        = (0x7fffffU & ((0xffU | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad)
                                    ? 0U : (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T))) 
                                  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad_1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1 = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen = 0U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T_1));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T_1));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT___rid_reg_T 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_1_arvalid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___do_enq_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_0_arvalid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_0_arvalid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_ready) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___GEN_9 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_ready)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___do_enq_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT___bid_reg_T 
        = (((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__bundleIn_0_awready_REG))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_1_awvalid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_0_awvalid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_0_awvalid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__ar_last 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_arecho_real_last 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4 
        = ((1U | (0xfffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                             >> 7U))) & (~ (0x7fffU 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                                               >> 8U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__aw_last 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awecho_real_last 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen) 
                                  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___GEN_9)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___do_enq_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awvalid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___in_awready_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_latched)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__inc_addr 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
           + (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats) 
                         << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4) 
                     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__inc_addr_1 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
           + (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats) 
                         << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4 
        = ((1U | (0xfffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                             >> 7U))) & (~ (0x7fffU 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                                               >> 8U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awvalid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_9));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___GEN_10 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter))) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_latched));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter))
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats)
                : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_valid) 
           & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter)) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4) 
                     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size 
        = (((IData)((0U != (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4) 
                                     >> 8U)))) << 3U) 
           | (((IData)((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5) 
                                       >> 4U)))) << 2U) 
              | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                                        >> 2U)))) << 1U) 
                 | (IData)((0U != (0xaU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___T_50 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid)) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_1) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter_lo 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
        = (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)) 
            & (((0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ 
                                                            (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5)))))) 
                | (0ULL == (0x1c0000000ULL & (QData)((IData)(
                                                             (0x40000000U 
                                                              ^ 
                                                              (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5))))))) 
               | (0ULL == (0x180000000ULL & (QData)((IData)(
                                                            (0x80000000U 
                                                             ^ 
                                                             (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5))))))))
            ? (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5)
            : (0x1000U | (7U & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size 
        = (((IData)((0U != (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4) 
                                     >> 8U)))) << 3U) 
           | (((IData)((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5) 
                                       >> 4U)))) << 2U) 
              | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6) 
                                        >> 2U)))) << 1U) 
                 | (IData)((0U != (0xaU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___T_50)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___sink_ACancel_earlyValid_T_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter_lo) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_mask))) 
            << 2U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid) 
                       << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2 
        = (IData)((0U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3 
        = (IData)((2U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4 
        = (IData)((4U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5 
        = (IData)((6U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_unready 
        = ((7U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter) 
                   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter) 
                                   >> 2U)))) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_mask) 
                                                << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_unready) 
                  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_unready)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_mask_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter_lo));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__allowed_0 
        = (1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2))
                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid));
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_0;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_1;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
             ? ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                  | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                     & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                 << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                            << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4) 
                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                                       << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4) 
                                                      & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                                                  << 4U) 
                                                 | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3) 
                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                                                     << 3U) 
                                                    | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3) 
                                                            & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                                                        << 2U) 
                                                       | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2) 
                                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                                                           << 1U) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2) 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2) 
                                                                & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))))))))))
             : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                       ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
                           ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb
                          [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamWriteMask))
                       : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_data 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data
               [0U] : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_data)
            : 0ULL);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)
                   : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size)
                             : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
             ? 4U : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                            ? 1U : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
             ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id) 
                 << 3U) | (6U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)
                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_1)
                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_0)) 
                                 << 1U))) : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                                                    ? 
                                                   (1U 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id) 
                                                        << 3U) 
                                                       | (6U 
                                                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)
                                                               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_1)
                                                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_0)) 
                                                             << 1U))))
                                                    : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
             ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr
             : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                       ? (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size)) 
                           & (((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ 
                                                            (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)))))) 
                               | (0ULL == (0x1c0000000ULL 
                                           & (QData)((IData)(
                                                             (0x40000000U 
                                                              ^ 
                                                              (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))))) 
                              | (0ULL == (0x180000000ULL 
                                          & (QData)((IData)(
                                                            (0x80000000U 
                                                             ^ 
                                                             (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))))))
                           ? (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)
                           : (0x1000U | (7U & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))
                       : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__saved_mask)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__cated_bits_data 
        = (((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__full)
                               ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__saved_data
                               : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_data) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_data)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__saved_size)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__saved_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__source_ok = 1U;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__saved_source)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_77 
        = ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
           & (0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                        (0x1000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__saved_address
            : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size));
    if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30 = 2U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___GEN_30 = 2U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_30 = 2U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_30 = 2U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_30 = 2U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_30 = 2U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30 
            = ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                         ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 1U : 0U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___GEN_30 
            = ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                         ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 1U : 0U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_30 
            = ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                         ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 1U : 0U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_30 
            = ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                         ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 1U : 0U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_30 
            = ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                         ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 1U : 0U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_30 
            = ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                         ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 1U : 0U)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeat_last 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeat_count) 
                  == (1U & (~ (0xffU & (((IData)(7U) 
                                         << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                        >> 2U))))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
            ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                     ? 4U : ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                              ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                       ? 1U : ((3U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                                ? 1U
                                                : (
                                                   (2U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                                    ? 1U
                                                    : 0U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last_counter)) 
           | (0U == ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                      ? 0U : (0x3ffU & (~ (0x1ffffffU 
                                           & (((IData)(0xfffU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                              >> 2U)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok = 1U;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__source_ok = 1U;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__source_ok = 1U;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok = 1U;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__source_ok = 1U;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_source
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_88 
        = ((0ULL == (0x1c0000000ULL & (QData)((IData)(
                                                      (0x40000000U 
                                                       ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
           | (0ULL == (0x180000000ULL & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_88 
        = ((0ULL == (0x1c0000000ULL & (QData)((IData)(
                                                      (0x40000000U 
                                                       ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
           | (0ULL == (0x180000000ULL & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77 
        = ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
           & (0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                        (0x1000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_77 
        = ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
           & (0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                        (0x1000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                        >> 1U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                     >> 1U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                        >> 1U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                     >> 1U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                        >> 1U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                     >> 1U)))));
    VL_EXTEND_WI(128,32, __Vtemp4817, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (__Vtemp4817[0U] 
                                        >> 1U))))));
    VL_EXTEND_WI(128,32, __Vtemp4818, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (__Vtemp4818[0U] 
                                     >> 1U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                        >> 1U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                     >> 1U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                        >> 1U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                     >> 1U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeat_index 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                  >> 2U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeat_count)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__requestAIO_0_0 
        = ((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                     (0x40000000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
           | (0ULL == (0x80000000ULL & (QData)((IData)(
                                                       (0x80000000U 
                                                        ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id 
        = (((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                      (0x40000000U 
                                                       ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
            | (0ULL == (0x80000000ULL & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
           | ((0ULL == (0xc0000000ULL & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))
               ? 2U : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_13 
        = (0x1fU & ((IData)(3U) + (((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                                     ? 0U : ((0x1eU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                                 >> 2U)) 
                                             | (2U 
                                                >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)))) 
                                   + ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                                       ? ((2U & (((IData)(1U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                                 >> 5U)) 
                                          | (5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)))
                                       : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter)) 
           | (0U == ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                      ? 0U : (0xfU & (~ (0x7ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                                   >> 2U)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state) 
           == ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                ? 2U : 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__counter)) 
           | (0U == ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode))
                      ? (0x3ffU & (~ (0x1ffffffU & 
                                      (((IData)(0xfffU) 
                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                       >> 2U)))) : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__header 
        = ((((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
              ? 7U : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                       ? 6U : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                ? 5U : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                         ? 4U : ((0xbU 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                  ? 3U
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                   ? 2U
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                    ? 1U
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                     ? 0U
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                       ? 6U
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                        ? 5U
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                         ? 4U
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                          ? 3U
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                           ? 2U
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                            ? 1U
                                                            : 0U))))))))))))))) 
            << 0x10U) | ((((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                            ? 2U : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                     ? 2U : ((0xdU 
                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                              ? 2U : 
                                             ((0xcU 
                                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                               ? 2U
                                               : ((0xbU 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                   ? 2U
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                    ? 2U
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                     ? 2U
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                      ? 2U
                                                      : 1U)))))))) 
                          << 0xdU) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size) 
                                       << 9U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_param
                                                   [0U]
                                                    : 0U) 
                                                  << 6U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode) 
                                                    << 3U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             << 2U) 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_acc_1) 
                      | (IData)((2U == (3U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                     << 2U)) | ((2U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_acc) 
                                        | (IData)((1U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_acc) 
                                                     | (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             << 2U) 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__mask_acc_1) 
                      | (IData)((2U == (3U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                     << 2U)) | ((2U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__mask_acc) 
                                        | (IData)((1U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__mask_acc) 
                                                     | (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             << 2U) 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask_acc_1) 
                      | (IData)((2U == (3U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                     << 2U)) | ((2U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask_acc) 
                                        | (IData)((1U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask_acc) 
                                                     | (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))));
    VL_EXTEND_WI(128,32, __Vtemp4819, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp4820, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp4821, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp4822, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp4823, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp4824, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp4825, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp4826, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((__Vtemp4819[0U] 
                                             << 2U) 
                                            & (__Vtemp4820[0U] 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc_1) 
                      << 2U) | (0xfffffffcU & ((__Vtemp4821[0U] 
                                                << 1U) 
                                               & ((~ 
                                                   __Vtemp4822[0U]) 
                                                  << 2U))))) 
              | ((2U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc) 
                         | ((~ (__Vtemp4823[0U] >> 1U)) 
                            & __Vtemp4824[0U])) << 1U)) 
                 | (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc) 
                          | ((~ (__Vtemp4825[0U] >> 1U)) 
                             & (~ __Vtemp4826[0U])))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             << 2U) 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask_acc_1) 
                      | (IData)((2U == (3U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                     << 2U)) | ((2U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask_acc) 
                                        | (IData)((1U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask_acc) 
                                                     | (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             << 2U) 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
                      | (IData)((2U == (3U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                     << 2U)) | ((2U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask_acc) 
                                        | (IData)((1U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask_acc) 
                                                     | (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeat_index) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_mask) 
                       >> 4U));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_data 
            = (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__cated_bits_data 
                       >> 0x20U));
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask 
            = (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_mask));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_data 
            = (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__cated_bits_data);
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__stall 
        = (((((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                  >> 3U)) & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_first_counter))) 
             & ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_0) 
                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_1)) 
                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_2)) 
                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_3)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_4)) 
                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_5)) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_6)) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_7))) 
            & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id)) 
               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__stalls_id) 
                  != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id)))) 
           | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                 >> 3U) & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_first_counter))) 
               & ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_8) 
                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_9)) 
                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_10)) 
                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_11)) 
                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_12)) 
                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_13)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_14)) 
                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_15))) 
              & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id)) 
                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__stalls_id_1) 
                    != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data
            [0U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_data;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__stall)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA_io_q_bits_last 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___GEN_2 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
            ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                ? 0U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
                               ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last)
                                   ? 0U : 3U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
            ? ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last) 
                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                       >> 3U)) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)))) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready));
    VL_EXTEND_WI(99,32, __Vtemp4828, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift);
    VL_EXTEND_WQ(99,36, __Vtemp4829, (((QData)((IData)(
                                                       (0xffU 
                                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                           >> 0x18U)))) 
                                       << 0x1cU) | (QData)((IData)(
                                                                   ((0x8000000U 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask) 
                                                                        << 0x18U)) 
                                                                    | ((0x7f80000U 
                                                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                                           << 3U)) 
                                                                       | ((0x40000U 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask) 
                                                                              << 0x10U)) 
                                                                          | ((0x3fc00U 
                                                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                                                << 2U)) 
                                                                             | ((0x200U 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask) 
                                                                                << 8U)) 
                                                                                | ((0x1feU 
                                                                                & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask))))))))))));
    VL_SHIFTL_WWI(99,99,6, __Vtemp4830, __Vtemp4829, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[0U] 
        = (__Vtemp4828[0U] | __Vtemp4830[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[1U] 
        = (__Vtemp4828[1U] | __Vtemp4830[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[2U] 
        = (__Vtemp4828[2U] | __Vtemp4830[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[3U] 
        = (7U & (__Vtemp4828[3U] | __Vtemp4830[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_1_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
           & (0ULL == (0xc0000000ULL & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__requestAIO_0_0));
    VL_EXTEND_WI(99,32, __Vtemp4833, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA_io_q_bits_data 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
            ? ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[0U]
                : __Vtemp4833[0U]) : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
                                       ? 0U : ((1U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
                                                ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_address
                                                   [0U]
                                                    : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)
                                                : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__header)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_set_wo_ready 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_1_a_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1)))
            ? (0xffffU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_1_a_valid));
}

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__54(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__54\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__55(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__55\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__56(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__56\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr 
        = ((((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state)) 
             | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state))) 
            | (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state)))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__awaddr_reg
            : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__araddr_reg);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                     ? ((1U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                         ? (((4U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__awaddr_reg)
                              ? (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
                                         >> 0x20U))
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__wdata_reg)) 
                            >> 0x18U) : (((4U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__awaddr_reg)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
                                                      >> 0x20U))
                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__wdata_reg)) 
                                         >> 0x10U))
                     : ((1U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                         ? (((4U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__awaddr_reg)
                              ? (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
                                         >> 0x20U))
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__wdata_reg)) 
                            >> 8U) : ((4U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__awaddr_reg)
                                       ? (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
                                                  >> 0x20U))
                                       : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__wdata_reg)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar_auto_out_1_psel 
        = ((0U == (0x20001000U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_psel));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar_auto_out_1_penable 
        = ((0U == (0x20001000U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_penable));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == (0x20001000U & (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
           | (0U == (0x20000000U & (0x20000000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_pwrite)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar_auto_out_0_penable 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_penable));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar_auto_out_0_psel 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_psel));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__lspi__DOT__mspi__DOT__ren 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar_auto_out_0_psel) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_pwrite)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar__DOT___bundleIn_0_pready_T_4 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar__DOT__sel_0) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar_auto_out_0_penable) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__lspi__DOT__mspi__DOT__ren)))) 
           | ((0U == (0x20001000U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)) 
              & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar_auto_out_1_psel) 
                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar_auto_out_1_penable)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_in_rvalid 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar__DOT___bundleIn_0_pready_T_4)));
}

VL_INLINE_OPT void VysyxSoCFull::_multiclk__TOP__57(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_multiclk__TOP__57\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<4>/*127:0*/ __Vtemp4836;
    VlWide<4>/*127:0*/ __Vtemp4837;
    VlWide<4>/*127:0*/ __Vtemp4841;
    VlWide<4>/*127:0*/ __Vtemp4842;
    VlWide<4>/*127:0*/ __Vtemp4846;
    VlWide<4>/*127:0*/ __Vtemp4847;
    VlWide<4>/*127:0*/ __Vtemp4851;
    VlWide<4>/*127:0*/ __Vtemp4852;
    VlWide<4>/*127:0*/ __Vtemp4856;
    VlWide<4>/*127:0*/ __Vtemp4857;
    VlWide<4>/*127:0*/ __Vtemp4861;
    VlWide<4>/*127:0*/ __Vtemp4862;
    VlWide<4>/*127:0*/ __Vtemp4867;
    VlWide<4>/*127:0*/ __Vtemp4868;
    VlWide<33>/*1055:0*/ __Vtemp4874;
    VlWide<33>/*1055:0*/ __Vtemp4875;
    VlWide<33>/*1055:0*/ __Vtemp4884;
    VlWide<33>/*1055:0*/ __Vtemp4885;
    VlWide<4>/*127:0*/ __Vtemp4894;
    VlWide<4>/*127:0*/ __Vtemp4895;
    VlWide<4>/*127:0*/ __Vtemp4899;
    VlWide<4>/*127:0*/ __Vtemp4900;
    VlWide<4>/*127:0*/ __Vtemp4905;
    VlWide<4>/*127:0*/ __Vtemp4906;
    VlWide<33>/*1055:0*/ __Vtemp4912;
    VlWide<33>/*1055:0*/ __Vtemp4913;
    VlWide<33>/*1055:0*/ __Vtemp4922;
    VlWide<33>/*1055:0*/ __Vtemp4923;
    VlWide<4>/*127:0*/ __Vtemp4932;
    VlWide<4>/*127:0*/ __Vtemp4933;
    VlWide<33>/*1055:0*/ __Vtemp4938;
    VlWide<33>/*1055:0*/ __Vtemp4939;
    VlWide<33>/*1055:0*/ __Vtemp4945;
    VlWide<33>/*1055:0*/ __Vtemp4946;
    VlWide<33>/*1055:0*/ __Vtemp4952;
    VlWide<33>/*1055:0*/ __Vtemp4953;
    VlWide<33>/*1055:0*/ __Vtemp4962;
    VlWide<33>/*1055:0*/ __Vtemp4963;
    VlWide<4>/*127:0*/ __Vtemp4972;
    VlWide<4>/*127:0*/ __Vtemp4973;
    VlWide<4>/*127:0*/ __Vtemp4978;
    VlWide<4>/*127:0*/ __Vtemp4979;
    VlWide<33>/*1055:0*/ __Vtemp4985;
    VlWide<33>/*1055:0*/ __Vtemp4986;
    VlWide<33>/*1055:0*/ __Vtemp4995;
    VlWide<33>/*1055:0*/ __Vtemp4996;
    VlWide<4>/*127:0*/ __Vtemp5005;
    VlWide<4>/*127:0*/ __Vtemp5006;
    VlWide<4>/*127:0*/ __Vtemp5011;
    VlWide<4>/*127:0*/ __Vtemp5012;
    VlWide<33>/*1055:0*/ __Vtemp5018;
    VlWide<33>/*1055:0*/ __Vtemp5019;
    VlWide<33>/*1055:0*/ __Vtemp5028;
    VlWide<33>/*1055:0*/ __Vtemp5029;
    VlWide<4>/*127:0*/ __Vtemp5038;
    VlWide<4>/*127:0*/ __Vtemp5039;
    VlWide<4>/*127:0*/ __Vtemp5044;
    VlWide<4>/*127:0*/ __Vtemp5045;
    VlWide<17>/*543:0*/ __Vtemp5051;
    VlWide<17>/*543:0*/ __Vtemp5052;
    VlWide<17>/*543:0*/ __Vtemp5061;
    VlWide<17>/*543:0*/ __Vtemp5062;
    VlWide<17>/*543:0*/ __Vtemp5071;
    VlWide<17>/*543:0*/ __Vtemp5072;
    VlWide<17>/*543:0*/ __Vtemp5081;
    VlWide<17>/*543:0*/ __Vtemp5082;
    VlWide<17>/*543:0*/ __Vtemp5091;
    VlWide<17>/*543:0*/ __Vtemp5092;
    VlWide<17>/*543:0*/ __Vtemp5101;
    VlWide<17>/*543:0*/ __Vtemp5102;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass_io_bypass 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_io_bypass 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__in_reset)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass_io_bypass)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass_reg));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) 
            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_io_bypass)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass) 
            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass_io_bypass)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall_counter)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_param = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_sink = 0U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_param 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_sink 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_sink;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___bundleOut_0_a_valid_T_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_set_wo_ready 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
            ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
            : 0ULL);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_set_wo_ready 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
            ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
            : 0ULL);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full));
    __Vtemp4836[0U] = 1U;
    __Vtemp4836[1U] = 0U;
    __Vtemp4836[2U] = 0U;
    __Vtemp4836[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4837, __Vtemp4836, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4837[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4837[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4837[2U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4837[3U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stall)));
    __Vtemp4841[0U] = 1U;
    __Vtemp4841[1U] = 0U;
    __Vtemp4841[2U] = 0U;
    __Vtemp4841[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4842, __Vtemp4841, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4842[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4842[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4842[2U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4842[3U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_allow));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___T_12 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_0) 
            & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_1) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid) 
            << 1U) | (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_valid 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___T_12)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___sink_ACancel_earlyValid_T_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T) 
           | (2U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T) 
                    << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__earlyWinner_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T_3)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__earlyWinner_1)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_isSupported)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)
                : 0U) : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_data 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_opcode))
                 ? (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo)))
                 : ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param))
                     ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__adder_out
                     : (((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param)) 
                         == (1U & (((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_a_ext 
                                                   >> 0x3fU))) 
                                    == (1U & (IData)(
                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_d_ext 
                                                      >> 0x3fU))))
                                    ? (~ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__adder_out 
                                                  >> 0x3fU)))
                                    : ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param) 
                                              >> 1U)) 
                                       == (1U & (IData)(
                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_a_ext 
                                                         >> 0x3fU)))))))
                         ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data
                         : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data)))
             : 0ULL) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                         ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_data
                         : 0ULL));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_5) 
                  | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_5) 
                     & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)) 
                 << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_5) 
                             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_5) 
                                & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address))) 
                            << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_4) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_4) 
                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                       << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_4) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_4) 
                                                      & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address))) 
                                                  << 4U) 
                                                 | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_3) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_3) 
                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                                     << 3U) 
                                                    | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_3) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_3) 
                                                            & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address))) 
                                                        << 2U) 
                                                       | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_2) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_2) 
                                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                                           << 1U) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_2) 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_2) 
                                                                & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address))))))))))
             : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask)
                       : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size)
             : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)
                       : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address
             : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                       ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address
                       : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_source)
             : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)
                       : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_isSupported)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode)
                : 4U) : 0U);
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_mask;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_size;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_282 
        = ((0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                      (0x1000U 
                                                       ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))) 
           | (0ULL == (0x180000000ULL & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address 
        = (0x1fffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_address)
                       : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_valid) 
           & (0ULL == (0x80000000ULL & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_valid) 
           & (0ULL == (0x80000000ULL & (QData)((IData)(
                                                       (0x80000000U 
                                                        ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok 
        = ((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                               >> 4U))) | (1U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                     >> 4U)))) 
                | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                >> 4U)))) | (3U == 
                                             (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
              | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                              >> 4U)))) | (5U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                     >> 4U)))) 
            | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                            >> 4U)))) | (7U == (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U))));
    __Vtemp4846[0U] = 1U;
    __Vtemp4846[1U] = 0U;
    __Vtemp4846[2U] = 0U;
    __Vtemp4846[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4847, __Vtemp4846, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_valid) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4847[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4847[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4847[2U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4847[3U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_source)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_22 
        = ((0x14U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
            ? 0U : ((0x13U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                     ? 0U : ((0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                              ? 0U : ((0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                       ? 0U : ((0x10U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? 0x16U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? 0x15U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? 0x14U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? 0x13U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? 0x12U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? 0x11U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? 0x10U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? 0xfU
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? 0xeU
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? 0xdU
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? 0xcU
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? 0xbU
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? 0xaU
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 9U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 8U
                                                                  : 7U))))))))))))))))))));
    if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_42 = 2U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_42 = 2U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_42 
            = ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                         ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 1U : 0U)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_42 
            = ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                         ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 1U : 0U)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__beats1 
        = ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
            ? 0U : (7U & (~ (0x3ffU & (((IData)(0x3fU) 
                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                       >> 3U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___out_arw_valid_T_4 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                  >> 2U) | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__doneAW)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__maybe_full)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___bundleIn_0_a_ready_T_3 
        = (1U & ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full))
                  : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__doneAW) 
                      | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full))) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__maybe_full)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_7)) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write_6) 
               != (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_7)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_6)) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write_5) 
               != (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_6)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_4)) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write_3) 
               != (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_4)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_5)) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write_4) 
               != (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_5)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_3)) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write_2) 
               != (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_3)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_2)) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write_1) 
               != (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_1)) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write) 
               != (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask 
        = (0xfU & ((1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                           >> 2U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count)))
                    ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask) 
                       >> 4U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                        >> 1U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                     >> 1U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5))));
    __Vtemp4851[0U] = 1U;
    __Vtemp4851[1U] = 0U;
    __Vtemp4851[2U] = 0U;
    __Vtemp4851[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4852, __Vtemp4851, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4852[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4852[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4852[2U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4852[3U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full));
    __Vtemp4856[0U] = 1U;
    __Vtemp4856[1U] = 0U;
    __Vtemp4856[2U] = 0U;
    __Vtemp4856[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4857, __Vtemp4856, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4857[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4857[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4857[2U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4857[3U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_43 
        = ((0x29U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
            ? 1U : ((0x28U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                     ? 1U : ((0x27U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                              ? 1U : ((0x26U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                       ? 1U : ((0x25U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? 1U
                                                : (
                                                   (0x24U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? 1U
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? 1U
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? 1U
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? 1U
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? 1U
                                                        : 
                                                       ((0x1fU 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? 0U
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? 0U
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? 0U
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? 0U
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? 0U
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? 0U
                                                              : 
                                                             ((0x19U 
                                                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? 0U
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? 0U
                                                                : 
                                                               ((0x17U 
                                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 0U
                                                                 : 
                                                                ((0x16U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x15U 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 0U
                                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_22))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_42 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count) 
                  == (1U & (~ (0xffU & (((IData)(7U) 
                                         << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                        >> 2U))))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_151 
        = ((0x15U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
            : ((0x14U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                : ((0x13U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                    : ((0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                        : ((0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                            : ((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                                : ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_23)
                                    : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_22)
                                        : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_21)
                                            : ((0xcU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_20)
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_19)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_18)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_17)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_16)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_15)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_14)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_13)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_12)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_11)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_10)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_9)
                                                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_8))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                             << 2U) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                      | (IData)((2U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))) 
                     << 2U)) | ((2U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc) 
                                        | (IData)((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc) 
                                                     | (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))))))));
    __Vtemp4861[0U] = 1U;
    __Vtemp4861[1U] = 0U;
    __Vtemp4861[2U] = 0U;
    __Vtemp4861[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4862, __Vtemp4861, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    __Vtemp4867[0U] = 1U;
    __Vtemp4867[1U] = 0U;
    __Vtemp4867[2U] = 0U;
    __Vtemp4867[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4868, __Vtemp4867, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4862[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4868[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4862[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4868[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4862[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4868[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4862[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4868[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4874, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4875, __Vtemp4874, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (__Vconst526[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4875[0U]
                                   : __Vconst529[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (__Vconst526[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4875[1U]
                                   : __Vconst529[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (__Vconst526[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4875[2U]
                                   : __Vconst529[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (__Vconst526[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4875[3U]
                                   : __Vconst529[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (__Vconst526[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4875[4U]
                                   : __Vconst529[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (__Vconst526[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4875[5U]
                                   : __Vconst529[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (__Vconst526[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4875[6U]
                                   : __Vconst529[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (__Vconst526[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4875[7U]
                                   : __Vconst529[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (__Vconst526[8U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4875[8U]
                                   : __Vconst529[8U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (__Vconst526[9U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4875[9U]
                                   : __Vconst529[9U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (__Vconst526[0xaU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4875[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (__Vconst526[0xbU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4875[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (__Vconst526[0xcU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4875[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (__Vconst526[0xdU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4875[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (__Vconst526[0xeU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4875[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (__Vconst526[0xfU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4875[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xfU]));
    VL_EXTEND_WI(1027,4, __Vtemp4884, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4885, __Vtemp4884, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0U] 
            | (__Vconst526[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4885[0U]
                                   : __Vconst529[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[1U] 
            | (__Vconst526[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4885[1U]
                                   : __Vconst529[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[2U] 
            | (__Vconst526[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4885[2U]
                                   : __Vconst529[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[3U] 
            | (__Vconst526[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4885[3U]
                                   : __Vconst529[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[4U] 
            | (__Vconst526[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4885[4U]
                                   : __Vconst529[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[5U] 
            | (__Vconst526[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4885[5U]
                                   : __Vconst529[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[6U] 
            | (__Vconst526[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4885[6U]
                                   : __Vconst529[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[7U] 
            | (__Vconst526[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4885[7U]
                                   : __Vconst529[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[8U] 
            | (__Vconst526[8U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4885[8U]
                                   : __Vconst529[8U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[9U] 
            | (__Vconst526[9U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4885[9U]
                                   : __Vconst529[9U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (__Vconst526[0xaU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4885[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (__Vconst526[0xbU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4885[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (__Vconst526[0xcU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4885[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (__Vconst526[0xdU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4885[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (__Vconst526[0xeU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4885[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (__Vconst526[0xfU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4885[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xfU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid));
    __Vtemp4894[0U] = 1U;
    __Vtemp4894[1U] = 0U;
    __Vtemp4894[2U] = 0U;
    __Vtemp4894[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4895, __Vtemp4894, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4895[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4895[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4895[2U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4895[3U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_64 
        = ((0x3eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
            ? 2U : ((0x3dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                     ? 2U : ((0x3cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                              ? 2U : ((0x3bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                       ? 2U : ((0x3aU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? 2U
                                                : (
                                                   (0x39U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? 2U
                                                    : 
                                                   ((0x38U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? 2U
                                                     : 
                                                    ((0x37U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? 2U
                                                      : 
                                                     ((0x36U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? 2U
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? 2U
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? 2U
                                                         : 
                                                        ((0x33U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? 2U
                                                          : 
                                                         ((0x32U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? 2U
                                                           : 
                                                          ((0x31U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? 2U
                                                            : 
                                                           ((0x30U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? 2U
                                                             : 
                                                            ((0x2fU 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? 1U
                                                              : 
                                                             ((0x2eU 
                                                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? 1U
                                                               : 
                                                              ((0x2dU 
                                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? 1U
                                                                : 
                                                               ((0x2cU 
                                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 1U
                                                                 : 
                                                                ((0x2bU 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 1U
                                                                  : 
                                                                 ((0x2aU 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 1U
                                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_43))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT___GEN_0 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT___T) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last))) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_172 
        = ((0x2aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
            : ((0x29U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                : ((0x28U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                    : ((0x27U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                        : ((0x26U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                            : ((0x25U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                                : ((0x24U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                                    : ((0x23U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                                        : ((0x22U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                                            : ((0x21U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                                                : (
                                                   (0x20U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                                                    : 
                                                   ((0x1fU 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                                                     : 
                                                    ((0x1eU 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                                                      : 
                                                     ((0x1dU 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                                                       : 
                                                      ((0x1cU 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                                                         : 
                                                        ((0x1aU 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                                                          : 
                                                         ((0x19U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                                                           : 
                                                          ((0x18U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                                                            : 
                                                           ((0x17U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                                                             : 
                                                            ((0x16U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                                                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_151))))))))))))))))))))));
    __Vtemp4899[0U] = 1U;
    __Vtemp4899[1U] = 0U;
    __Vtemp4899[2U] = 0U;
    __Vtemp4899[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4900, __Vtemp4899, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source));
    __Vtemp4905[0U] = 1U;
    __Vtemp4905[1U] = 0U;
    __Vtemp4905[2U] = 0U;
    __Vtemp4905[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4906, __Vtemp4905, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4900[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4906[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4900[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4906[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4900[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4906[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4900[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4906[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4912, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4913, __Vtemp4912, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (__Vconst526[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4913[0U]
                                   : __Vconst529[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (__Vconst526[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4913[1U]
                                   : __Vconst529[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (__Vconst526[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4913[2U]
                                   : __Vconst529[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (__Vconst526[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4913[3U]
                                   : __Vconst529[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (__Vconst526[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4913[4U]
                                   : __Vconst529[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (__Vconst526[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4913[5U]
                                   : __Vconst529[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (__Vconst526[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4913[6U]
                                   : __Vconst529[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (__Vconst526[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4913[7U]
                                   : __Vconst529[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (__Vconst526[8U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4913[8U]
                                   : __Vconst529[8U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (__Vconst526[9U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4913[9U]
                                   : __Vconst529[9U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (__Vconst526[0xaU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4913[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (__Vconst526[0xbU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4913[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (__Vconst526[0xcU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4913[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (__Vconst526[0xdU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4913[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (__Vconst526[0xeU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4913[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (__Vconst526[0xfU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4913[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xfU]));
    VL_EXTEND_WI(1027,4, __Vtemp4922, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4923, __Vtemp4922, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0U] 
            | (__Vconst526[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4923[0U]
                                   : __Vconst529[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[1U] 
            | (__Vconst526[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4923[1U]
                                   : __Vconst529[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[2U] 
            | (__Vconst526[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4923[2U]
                                   : __Vconst529[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[3U] 
            | (__Vconst526[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4923[3U]
                                   : __Vconst529[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[4U] 
            | (__Vconst526[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4923[4U]
                                   : __Vconst529[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[5U] 
            | (__Vconst526[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4923[5U]
                                   : __Vconst529[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[6U] 
            | (__Vconst526[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4923[6U]
                                   : __Vconst529[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[7U] 
            | (__Vconst526[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4923[7U]
                                   : __Vconst529[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[8U] 
            | (__Vconst526[8U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4923[8U]
                                   : __Vconst529[8U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[9U] 
            | (__Vconst526[9U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4923[9U]
                                   : __Vconst529[9U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (__Vconst526[0xaU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4923[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (__Vconst526[0xbU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4923[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (__Vconst526[0xcU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4923[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (__Vconst526[0xdU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4923[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (__Vconst526[0xeU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4923[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (__Vconst526[0xfU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4923[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xfU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_85 
        = ((0x53U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
            ? 4U : ((0x52U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                     ? 4U : ((0x51U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                              ? 4U : ((0x50U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                       ? 4U : ((0x4fU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? 3U
                                                : (
                                                   (0x4eU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? 3U
                                                    : 
                                                   ((0x4dU 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? 3U
                                                     : 
                                                    ((0x4cU 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? 3U
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? 3U
                                                       : 
                                                      ((0x4aU 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? 3U
                                                        : 
                                                       ((0x49U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? 3U
                                                         : 
                                                        ((0x48U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? 3U
                                                          : 
                                                         ((0x47U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? 3U
                                                           : 
                                                          ((0x46U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? 3U
                                                            : 
                                                           ((0x45U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? 3U
                                                             : 
                                                            ((0x44U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? 3U
                                                              : 
                                                             ((0x43U 
                                                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? 3U
                                                               : 
                                                              ((0x42U 
                                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? 3U
                                                                : 
                                                               ((0x41U 
                                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 3U
                                                                 : 
                                                                ((0x40U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 3U
                                                                  : 
                                                                 ((0x3fU 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 2U
                                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_64))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_193 
        = ((0x3fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
            : ((0x3eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                : ((0x3dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                    : ((0x3cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                        : ((0x3bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                            : ((0x3aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                                : ((0x39U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                                    : ((0x38U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                                        : ((0x37U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                                            : ((0x36U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                                                : (
                                                   (0x35U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                                                    : 
                                                   ((0x34U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                                                     : 
                                                    ((0x33U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                                                      : 
                                                     ((0x32U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                                                       : 
                                                      ((0x31U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                                                        : 
                                                       ((0x30U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2)
                                                         : 
                                                        ((0x2fU 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                                                          : 
                                                         ((0x2eU 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                                                           : 
                                                          ((0x2dU 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                                                            : 
                                                           ((0x2cU 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                                                             : 
                                                            ((0x2bU 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1)
                                                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_172))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_106 
        = ((0x68U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
            ? 5U : ((0x67U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                     ? 5U : ((0x66U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                              ? 5U : ((0x65U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                       ? 5U : ((0x64U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? 5U
                                                : (
                                                   (0x63U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? 5U
                                                    : 
                                                   ((0x62U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? 5U
                                                     : 
                                                    ((0x61U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? 5U
                                                      : 
                                                     ((0x60U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? 5U
                                                       : 
                                                      ((0x5fU 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? 4U
                                                        : 
                                                       ((0x5eU 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? 4U
                                                         : 
                                                        ((0x5dU 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? 4U
                                                          : 
                                                         ((0x5cU 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? 4U
                                                           : 
                                                          ((0x5bU 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? 4U
                                                            : 
                                                           ((0x5aU 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? 4U
                                                             : 
                                                            ((0x59U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? 4U
                                                              : 
                                                             ((0x58U 
                                                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? 4U
                                                               : 
                                                              ((0x57U 
                                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? 4U
                                                                : 
                                                               ((0x56U 
                                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 4U
                                                                 : 
                                                                ((0x55U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 4U
                                                                  : 
                                                                 ((0x54U 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 4U
                                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_85))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_214 
        = ((0x54U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
            : ((0x53U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                : ((0x52U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                    : ((0x51U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                        : ((0x50U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                            : ((0x4fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                : ((0x4eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                    : ((0x4dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                        : ((0x4cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                            : ((0x4bU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                                : (
                                                   (0x4aU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                                    : 
                                                   ((0x49U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                                     : 
                                                    ((0x48U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                                      : 
                                                     ((0x47U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                                       : 
                                                      ((0x46U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                                        : 
                                                       ((0x45U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                                         : 
                                                        ((0x44U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                                          : 
                                                         ((0x43U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                                           : 
                                                          ((0x42U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                                            : 
                                                           ((0x41U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                                             : 
                                                            ((0x40U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3)
                                                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_193))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_127 
        = ((0x7dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
            ? 6U : ((0x7cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                     ? 6U : ((0x7bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                              ? 6U : ((0x7aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                       ? 6U : ((0x79U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? 6U
                                                : (
                                                   (0x78U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? 6U
                                                    : 
                                                   ((0x77U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? 6U
                                                     : 
                                                    ((0x76U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? 6U
                                                      : 
                                                     ((0x75U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? 6U
                                                       : 
                                                      ((0x74U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? 6U
                                                        : 
                                                       ((0x73U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? 6U
                                                         : 
                                                        ((0x72U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? 6U
                                                          : 
                                                         ((0x71U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? 6U
                                                           : 
                                                          ((0x70U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? 6U
                                                            : 
                                                           ((0x6fU 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? 5U
                                                             : 
                                                            ((0x6eU 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? 5U
                                                              : 
                                                             ((0x6dU 
                                                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? 5U
                                                               : 
                                                              ((0x6cU 
                                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? 5U
                                                                : 
                                                               ((0x6bU 
                                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 5U
                                                                 : 
                                                                ((0x6aU 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 5U
                                                                  : 
                                                                 ((0x69U 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 5U
                                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_106))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_235 
        = ((0x69U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
            : ((0x68U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                : ((0x67U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                    : ((0x66U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                        : ((0x65U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                            : ((0x64U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                                : ((0x63U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                                    : ((0x62U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                                        : ((0x61U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                                            : ((0x60U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                                                : (
                                                   (0x5fU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                                                    : 
                                                   ((0x5eU 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                                                     : 
                                                    ((0x5dU 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                                                      : 
                                                     ((0x5cU 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                                                       : 
                                                      ((0x5bU 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                                                        : 
                                                       ((0x5aU 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                                                         : 
                                                        ((0x59U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                                                          : 
                                                         ((0x58U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                                                           : 
                                                          ((0x57U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                                                            : 
                                                           ((0x56U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                                                             : 
                                                            ((0x55U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4)
                                                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_214))))))))))))))))))))));
    if ((0x7eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_128 = 6U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_256 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_128 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_127;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_256 
            = ((0x7dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                : ((0x7cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                    : ((0x7bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                        : ((0x7aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                            : ((0x79U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                                : ((0x78U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                                    : ((0x77U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                                        : ((0x76U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                                            : ((0x75U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                                                : (
                                                   (0x74U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                                                    : 
                                                   ((0x73U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                                                     : 
                                                    ((0x72U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                                                      : 
                                                     ((0x71U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                                                       : 
                                                      ((0x70U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
                                                        : 
                                                       ((0x6fU 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                                                         : 
                                                        ((0x6eU 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                                                          : 
                                                         ((0x6dU 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                                                           : 
                                                          ((0x6cU 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                                                            : 
                                                           ((0x6bU 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                                                             : 
                                                            ((0x6aU 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5)
                                                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_235)))))))))))))))))))));
    }
    if ((0x7fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_enq_bits_id = 6U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id = 6U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_enq_bits_id 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_128;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_128;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__stall 
        = (((0x7fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6)
             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_256)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_enq_bits_id));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___T 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__stall)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___bundleIn_0_a_ready_T_3)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__stall)) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid)) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___out_arw_valid_T_4)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT___do_enq_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__maybe_full)) 
           & ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__stall)) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid)) 
               & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                     >> 2U))) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__doneAW) 
                                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__stall)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___bundleIn_0_a_ready_T_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__stall)) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid)) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___out_arw_valid_T_4)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4_auto_in_a_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__stall)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___bundleIn_0_a_ready_T_3));
    if ((0xcU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_12 
            = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__maybe_full)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_92 
            = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__maybe_full)));
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_12 
            = (1U & ((0xbU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                      ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__maybe_full))
                      : ((0xaU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                          ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__maybe_full))
                          : ((9U == (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                              ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__maybe_full))
                              : ((8U == (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                  ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__maybe_full))
                                  : ((7U == (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                      ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__maybe_full))
                                      : ((6U == (0xfU 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                          ? (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ptr_match) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__maybe_full)))
                                          : ((5U == 
                                              (0xfU 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                              ? (~ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ptr_match) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__maybe_full)))
                                              : ((4U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ptr_match) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__maybe_full)))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ptr_match) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__maybe_full)))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ptr_match) 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__maybe_full)))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                                     ? 
                                                    (~ 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ptr_match) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__maybe_full)))
                                                     : 
                                                    (~ 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ptr_match) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__maybe_full)))))))))))))));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_92 
            = (1U & ((0xbU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                      ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__maybe_full))
                      : ((0xaU == (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                          ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__maybe_full))
                          : ((9U == (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                              ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__maybe_full))
                              : ((8U == (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                  ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__maybe_full))
                                  : ((7U == (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                      ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__maybe_full))
                                      : ((6U == (0xfU 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                          ? (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ptr_match) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__maybe_full)))
                                          : ((5U == 
                                              (0xfU 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                              ? (~ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ptr_match) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__maybe_full)))
                                              : ((4U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ptr_match) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__maybe_full)))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ptr_match) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__maybe_full)))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ptr_match) 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__maybe_full)))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id)))
                                                     ? 
                                                    (~ 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ptr_match) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__maybe_full)))
                                                     : 
                                                    (~ 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ptr_match) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__maybe_full)))))))))))))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_30 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_8) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_34 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_9) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_38 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_10) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_42 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_11) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_46 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_12) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_50 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_13) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_54 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_14) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_58 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_15) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_62 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_16) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_66 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_17) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_70 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_18) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_74 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_19) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_78 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_20) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_82 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_21) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_86 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_22) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_90 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_23) 
                 + ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                     >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc 
        = (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_1 
        = ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
            >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_2 
        = ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
            >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_3 
        = ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
            >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_4 
        = ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
            >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_5 
        = ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
            >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_6 
        = ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__out_arw_bits_id)) 
            >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___inc_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_ready 
        = (((0ULL == (0x80000000ULL & (QData)((IData)(
                                                      (0x80000000U 
                                                       ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4_auto_in_a_ready)) 
           | ((0ULL == (0x80000000ULL & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_enq_ready)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_a_ready 
        = (((0ULL == (0x80000000ULL & (QData)((IData)(
                                                      (0x80000000U 
                                                       ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4_auto_in_a_ready)) 
           | ((0ULL == (0x80000000ULL & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_enq_ready)));
    __Vtemp4932[0U] = 1U;
    __Vtemp4932[1U] = 0U;
    __Vtemp4932[2U] = 0U;
    __Vtemp4932[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4933, __Vtemp4932, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_T[0U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight[0U] 
           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
               & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
               ? __Vtemp4933[0U] : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_T[1U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight[1U] 
           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
               & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
               ? __Vtemp4933[1U] : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_T[2U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight[2U] 
           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
               & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
               ? __Vtemp4933[2U] : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_T[3U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight[3U] 
           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
               & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
               ? __Vtemp4933[3U] : 0U));
    VL_EXTEND_WI(1027,4, __Vtemp4938, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4939, __Vtemp4938, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[0U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0U] 
           | (__Vconst526[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4939[0U]
                                  : __Vconst529[0U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[1U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[1U] 
           | (__Vconst526[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4939[1U]
                                  : __Vconst529[1U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[2U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[2U] 
           | (__Vconst526[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4939[2U]
                                  : __Vconst529[2U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[3U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[3U] 
           | (__Vconst526[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4939[3U]
                                  : __Vconst529[3U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[4U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[4U] 
           | (__Vconst526[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4939[4U]
                                  : __Vconst529[4U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[5U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[5U] 
           | (__Vconst526[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4939[5U]
                                  : __Vconst529[5U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[6U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[6U] 
           | (__Vconst526[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4939[6U]
                                  : __Vconst529[6U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[7U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[7U] 
           | (__Vconst526[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4939[7U]
                                  : __Vconst529[7U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[8U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[8U] 
           | (__Vconst526[8U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4939[8U]
                                  : __Vconst529[8U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[9U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[9U] 
           | (__Vconst526[9U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4939[9U]
                                  : __Vconst529[9U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[0xaU] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0xaU] 
           | (__Vconst526[0xaU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                    ? __Vtemp4939[0xaU]
                                    : __Vconst529[0xaU])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[0xbU] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0xbU] 
           | (__Vconst526[0xbU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                    ? __Vtemp4939[0xbU]
                                    : __Vconst529[0xbU])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[0xcU] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0xcU] 
           | (__Vconst526[0xcU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                    ? __Vtemp4939[0xcU]
                                    : __Vconst529[0xcU])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[0xdU] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0xdU] 
           | (__Vconst526[0xdU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                    ? __Vtemp4939[0xdU]
                                    : __Vconst529[0xdU])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[0xeU] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0xeU] 
           | (__Vconst526[0xeU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                    ? __Vtemp4939[0xeU]
                                    : __Vconst529[0xeU])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T[0xfU] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0xfU] 
           | (__Vconst526[0xfU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                    ? __Vtemp4939[0xfU]
                                    : __Vconst529[0xfU])));
    VL_EXTEND_WI(1027,4, __Vtemp4945, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4946, __Vtemp4945, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[0U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0U] 
           | (__Vconst526[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4946[0U]
                                  : __Vconst529[0U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[1U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[1U] 
           | (__Vconst526[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4946[1U]
                                  : __Vconst529[1U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[2U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[2U] 
           | (__Vconst526[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4946[2U]
                                  : __Vconst529[2U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[3U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[3U] 
           | (__Vconst526[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4946[3U]
                                  : __Vconst529[3U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[4U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[4U] 
           | (__Vconst526[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4946[4U]
                                  : __Vconst529[4U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[5U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[5U] 
           | (__Vconst526[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4946[5U]
                                  : __Vconst529[5U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[6U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[6U] 
           | (__Vconst526[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4946[6U]
                                  : __Vconst529[6U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[7U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[7U] 
           | (__Vconst526[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4946[7U]
                                  : __Vconst529[7U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[8U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[8U] 
           | (__Vconst526[8U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4946[8U]
                                  : __Vconst529[8U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[9U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[9U] 
           | (__Vconst526[9U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp4946[9U]
                                  : __Vconst529[9U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[0xaU] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0xaU] 
           | (__Vconst526[0xaU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                    ? __Vtemp4946[0xaU]
                                    : __Vconst529[0xaU])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[0xbU] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0xbU] 
           | (__Vconst526[0xbU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                    ? __Vtemp4946[0xbU]
                                    : __Vconst529[0xbU])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[0xcU] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0xcU] 
           | (__Vconst526[0xcU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                    ? __Vtemp4946[0xcU]
                                    : __Vconst529[0xcU])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[0xdU] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0xdU] 
           | (__Vconst526[0xdU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                    ? __Vtemp4946[0xdU]
                                    : __Vconst529[0xdU])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[0xeU] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0xeU] 
           | (__Vconst526[0xeU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                    ? __Vtemp4946[0xeU]
                                    : __Vconst529[0xeU])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T[0xfU] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0xfU] 
           | (__Vconst526[0xfU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                    ? __Vtemp4946[0xfU]
                                    : __Vconst529[0xfU])));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_2 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_1) 
                    + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_6 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_2) 
                    + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_10 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_3) 
                    + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_14 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_4) 
                    + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_3)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_18 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_5) 
                    + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_4)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_22 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_6) 
                    + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_5)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___count_T_26 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_7) 
                    + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_6)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__latch 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_a_ready));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___beatsLeft_T_4 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft) 
                 - ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_a_ready) 
                    & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___T_12)
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___sink_ACancel_earlyValid_T_3)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__out_1_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_a_ready) 
           & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))
               ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T_3))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_1)));
    VL_EXTEND_WI(1027,4, __Vtemp4952, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4953, __Vtemp4952, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (__Vconst526[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4953[0U]
                                   : __Vconst529[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (__Vconst526[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4953[1U]
                                   : __Vconst529[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (__Vconst526[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4953[2U]
                                   : __Vconst529[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (__Vconst526[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4953[3U]
                                   : __Vconst529[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (__Vconst526[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4953[4U]
                                   : __Vconst529[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (__Vconst526[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4953[5U]
                                   : __Vconst529[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (__Vconst526[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4953[6U]
                                   : __Vconst529[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (__Vconst526[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4953[7U]
                                   : __Vconst529[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (__Vconst526[8U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4953[8U]
                                   : __Vconst529[8U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (__Vconst526[9U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4953[9U]
                                   : __Vconst529[9U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (__Vconst526[0xaU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4953[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (__Vconst526[0xbU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4953[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (__Vconst526[0xcU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4953[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (__Vconst526[0xdU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4953[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (__Vconst526[0xeU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4953[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (__Vconst526[0xfU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4953[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xfU]));
    VL_EXTEND_WI(1027,4, __Vtemp4962, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4963, __Vtemp4962, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0U] 
            | (__Vconst526[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4963[0U]
                                   : __Vconst529[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[1U] 
            | (__Vconst526[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4963[1U]
                                   : __Vconst529[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[2U] 
            | (__Vconst526[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4963[2U]
                                   : __Vconst529[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[3U] 
            | (__Vconst526[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4963[3U]
                                   : __Vconst529[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[4U] 
            | (__Vconst526[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4963[4U]
                                   : __Vconst529[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[5U] 
            | (__Vconst526[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4963[5U]
                                   : __Vconst529[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[6U] 
            | (__Vconst526[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4963[6U]
                                   : __Vconst529[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[7U] 
            | (__Vconst526[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4963[7U]
                                   : __Vconst529[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[8U] 
            | (__Vconst526[8U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4963[8U]
                                   : __Vconst529[8U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[9U] 
            | (__Vconst526[9U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4963[9U]
                                   : __Vconst529[9U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (__Vconst526[0xaU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4963[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (__Vconst526[0xbU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4963[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (__Vconst526[0xcU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4963[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (__Vconst526[0xdU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4963[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (__Vconst526[0xeU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4963[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (__Vconst526[0xfU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4963[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xfU]));
    __Vtemp4972[0U] = 1U;
    __Vtemp4972[1U] = 0U;
    __Vtemp4972[2U] = 0U;
    __Vtemp4972[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4973, __Vtemp4972, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    __Vtemp4978[0U] = 1U;
    __Vtemp4978[1U] = 0U;
    __Vtemp4978[2U] = 0U;
    __Vtemp4978[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4979, __Vtemp4978, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4973[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4979[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4973[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4979[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4973[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4979[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4973[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4979[3U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___T_50 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__out_1_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__out_1_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_allow));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__out_1_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_allow));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___GEN_23 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___T_50) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_isSupported)))
            ? ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))
                ? 3U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stall)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___a_first_T 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_a_ready) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stall))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stall)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___GEN_25 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_a_ready) 
             & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft)) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_0))) 
            & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state)))
            ? ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))
                ? 1U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___GEN_23))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___GEN_23));
    VL_EXTEND_WI(1027,4, __Vtemp4985, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4986, __Vtemp4985, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (__Vconst526[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4986[0U]
                                   : __Vconst529[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (__Vconst526[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4986[1U]
                                   : __Vconst529[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (__Vconst526[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4986[2U]
                                   : __Vconst529[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (__Vconst526[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4986[3U]
                                   : __Vconst529[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (__Vconst526[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4986[4U]
                                   : __Vconst529[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (__Vconst526[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4986[5U]
                                   : __Vconst529[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (__Vconst526[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4986[6U]
                                   : __Vconst529[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (__Vconst526[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4986[7U]
                                   : __Vconst529[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (__Vconst526[8U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4986[8U]
                                   : __Vconst529[8U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (__Vconst526[9U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4986[9U]
                                   : __Vconst529[9U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (__Vconst526[0xaU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4986[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (__Vconst526[0xbU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4986[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (__Vconst526[0xcU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4986[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (__Vconst526[0xdU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4986[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (__Vconst526[0xeU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4986[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (__Vconst526[0xfU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4986[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xfU]));
    VL_EXTEND_WI(1027,4, __Vtemp4995, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4996, __Vtemp4995, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
            | (__Vconst526[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4996[0U]
                                   : __Vconst529[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
            | (__Vconst526[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4996[1U]
                                   : __Vconst529[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
            | (__Vconst526[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4996[2U]
                                   : __Vconst529[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
            | (__Vconst526[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4996[3U]
                                   : __Vconst529[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
            | (__Vconst526[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4996[4U]
                                   : __Vconst529[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
            | (__Vconst526[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4996[5U]
                                   : __Vconst529[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
            | (__Vconst526[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4996[6U]
                                   : __Vconst529[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
            | (__Vconst526[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4996[7U]
                                   : __Vconst529[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
            | (__Vconst526[8U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4996[8U]
                                   : __Vconst529[8U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[9U] 
            | (__Vconst526[9U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp4996[9U]
                                   : __Vconst529[9U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (__Vconst526[0xaU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4996[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (__Vconst526[0xbU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4996[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (__Vconst526[0xcU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4996[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (__Vconst526[0xdU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4996[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (__Vconst526[0xeU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4996[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (__Vconst526[0xfU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp4996[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xfU]));
    __Vtemp5005[0U] = 1U;
    __Vtemp5005[1U] = 0U;
    __Vtemp5005[2U] = 0U;
    __Vtemp5005[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp5006, __Vtemp5005, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source));
    __Vtemp5011[0U] = 1U;
    __Vtemp5011[1U] = 0U;
    __Vtemp5011[2U] = 0U;
    __Vtemp5011[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp5012, __Vtemp5011, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5006[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp5012[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5006[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp5012[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5006[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp5012[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5006[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp5012[3U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid));
    if (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___a_first_T))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_146 
            = ((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_16));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_147 
            = ((0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_17));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_148 
            = ((0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_18));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_149 
            = ((0x13U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_19));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_150 
            = ((0x14U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_20));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_151 
            = ((0x15U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_21));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_152 
            = ((0x16U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_22));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_153 
            = ((0x17U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_23));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_154 
            = ((0x18U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_24));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_155 
            = ((0x19U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_25));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_156 
            = ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_26));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_157 
            = ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_27));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_158 
            = ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_28));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_159 
            = ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_29));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_160 
            = ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_30));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_161 
            = ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_31));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_162 
            = ((0x20U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_32));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_163 
            = ((0x21U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_33));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_164 
            = ((0x22U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_34));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_165 
            = ((0x23U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_35));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_166 
            = ((0x24U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_36));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_167 
            = ((0x25U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_37));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_168 
            = ((0x26U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_38));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_169 
            = ((0x27U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_39));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_170 
            = ((0x28U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_40));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_171 
            = ((0x29U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_41));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_172 
            = ((0x2aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_42));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_173 
            = ((0x2bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_43));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_174 
            = ((0x2cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_44));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_175 
            = ((0x2dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_45));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_176 
            = ((0x2eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_46));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_177 
            = ((0x2fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_47));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_178 
            = ((0x30U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_48));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_179 
            = ((0x31U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_49));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_180 
            = ((0x32U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_50));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_181 
            = ((0x33U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_51));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_182 
            = ((0x34U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_52));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_183 
            = ((0x35U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_53));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_184 
            = ((0x36U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_54));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_185 
            = ((0x37U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_55));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_186 
            = ((0x38U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_56));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_187 
            = ((0x39U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_57));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_188 
            = ((0x3aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_58));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_189 
            = ((0x3bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_59));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_190 
            = ((0x3cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_60));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_191 
            = ((0x3dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_61));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_192 
            = ((0x3eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_62));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_193 
            = ((0x3fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_63));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_194 
            = ((0x40U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_64));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_195 
            = ((0x41U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_65));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_196 
            = ((0x42U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_66));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_197 
            = ((0x43U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_67));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_198 
            = ((0x44U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_68));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_199 
            = ((0x45U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_69));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_200 
            = ((0x46U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_70));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_201 
            = ((0x47U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_71));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_202 
            = ((0x48U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_72));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_203 
            = ((0x49U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_73));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_204 
            = ((0x4aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_74));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_205 
            = ((0x4bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_75));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_206 
            = ((0x4cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_76));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_207 
            = ((0x4dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_77));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_208 
            = ((0x4eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_78));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_209 
            = ((0x4fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_79));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_210 
            = ((0x50U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_80));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_211 
            = ((0x51U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_81));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_212 
            = ((0x52U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_82));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_213 
            = ((0x53U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_83));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_214 
            = ((0x54U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_84));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_215 
            = ((0x55U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_85));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_216 
            = ((0x56U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_86));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_217 
            = ((0x57U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_87));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_218 
            = ((0x58U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_88));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_219 
            = ((0x59U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_89));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_220 
            = ((0x5aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_90));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_221 
            = ((0x5bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_91));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_222 
            = ((0x5cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_92));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_223 
            = ((0x5dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_93));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_224 
            = ((0x5eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_94));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_225 
            = ((0x5fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_95));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_226 
            = ((0x60U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_96));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_227 
            = ((0x61U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_97));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_228 
            = ((0x62U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_98));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_229 
            = ((0x63U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_99));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_230 
            = ((0x64U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_100));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_231 
            = ((0x65U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_101));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_232 
            = ((0x66U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_102));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_233 
            = ((0x67U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_103));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_234 
            = ((0x68U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_104));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_235 
            = ((0x69U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_105));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_236 
            = ((0x6aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_106));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_237 
            = ((0x6bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_107));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_238 
            = ((0x6cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_108));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_239 
            = ((0x6dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_109));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_240 
            = ((0x6eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_110));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_241 
            = ((0x6fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_111));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_242 
            = ((0x70U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_112));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_243 
            = ((0x71U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_113));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_244 
            = ((0x72U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_114));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_245 
            = ((0x73U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_115));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_246 
            = ((0x74U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_116));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_247 
            = ((0x75U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_117));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_248 
            = ((0x76U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_118));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_249 
            = ((0x77U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_119));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_250 
            = ((0x78U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_120));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_251 
            = ((0x79U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_121));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_252 
            = ((0x7aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_122));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_253 
            = ((0x7bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_123));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_254 
            = ((0x7cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_124));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_255 
            = ((0x7dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_125));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_256 
            = ((0x7eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_126));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_257 
            = ((0x7fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_127));
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_146 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_16;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_147 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_17;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_148 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_18;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_149 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_19;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_150 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_20;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_151 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_21;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_152 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_22;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_153 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_23;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_154 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_24;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_155 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_25;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_156 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_26;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_157 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_27;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_158 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_28;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_159 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_29;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_160 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_30;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_161 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_31;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_162 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_32;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_163 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_33;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_164 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_34;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_165 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_35;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_166 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_36;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_167 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_37;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_168 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_38;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_169 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_39;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_170 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_40;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_171 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_41;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_172 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_42;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_173 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_43;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_174 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_44;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_175 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_45;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_176 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_46;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_177 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_47;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_178 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_48;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_179 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_49;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_180 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_50;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_181 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_51;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_182 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_52;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_183 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_53;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_184 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_54;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_185 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_55;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_186 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_56;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_187 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_57;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_188 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_58;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_189 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_59;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_190 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_60;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_191 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_61;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_192 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_62;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_193 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_63;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_194 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_64;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_195 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_65;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_196 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_66;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_197 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_67;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_198 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_68;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_199 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_69;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_200 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_70;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_201 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_71;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_202 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_72;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_203 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_73;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_204 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_74;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_205 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_75;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_206 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_76;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_207 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_77;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_208 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_78;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_209 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_79;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_210 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_80;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_211 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_81;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_212 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_82;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_213 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_83;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_214 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_84;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_215 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_85;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_216 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_86;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_217 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_87;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_218 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_88;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_219 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_89;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_220 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_90;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_221 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_91;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_222 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_92;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_223 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_93;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_224 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_94;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_225 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_95;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_226 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_96;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_227 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_97;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_228 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_98;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_229 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_99;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_230 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_100;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_231 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_101;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_232 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_102;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_233 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_103;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_234 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_104;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_235 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_105;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_236 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_106;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_237 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_107;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_238 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_108;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_239 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_109;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_240 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_110;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_241 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_111;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_242 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_112;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_243 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_113;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_244 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_114;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_245 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_115;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_246 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_116;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_247 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_117;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_248 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_118;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_249 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_119;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_250 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_120;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_251 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_121;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_252 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_122;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_253 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_123;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_254 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_124;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_255 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_125;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_256 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_126;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_257 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_127;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full)));
    VL_EXTEND_WI(1027,4, __Vtemp5018, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp5019, __Vtemp5018, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (__Vconst526[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5019[0U]
                                   : __Vconst529[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (__Vconst526[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5019[1U]
                                   : __Vconst529[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (__Vconst526[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5019[2U]
                                   : __Vconst529[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (__Vconst526[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5019[3U]
                                   : __Vconst529[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (__Vconst526[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5019[4U]
                                   : __Vconst529[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (__Vconst526[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5019[5U]
                                   : __Vconst529[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (__Vconst526[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5019[6U]
                                   : __Vconst529[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (__Vconst526[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5019[7U]
                                   : __Vconst529[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (__Vconst526[8U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5019[8U]
                                   : __Vconst529[8U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (__Vconst526[9U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5019[9U]
                                   : __Vconst529[9U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (__Vconst526[0xaU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp5019[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (__Vconst526[0xbU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp5019[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (__Vconst526[0xcU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp5019[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (__Vconst526[0xdU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp5019[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (__Vconst526[0xeU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp5019[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (__Vconst526[0xfU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp5019[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xfU]));
    VL_EXTEND_WI(1027,4, __Vtemp5028, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp5029, __Vtemp5028, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0U] 
            | (__Vconst526[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5029[0U]
                                   : __Vconst529[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[1U] 
            | (__Vconst526[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5029[1U]
                                   : __Vconst529[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[2U] 
            | (__Vconst526[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5029[2U]
                                   : __Vconst529[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[3U] 
            | (__Vconst526[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5029[3U]
                                   : __Vconst529[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[4U] 
            | (__Vconst526[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5029[4U]
                                   : __Vconst529[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[5U] 
            | (__Vconst526[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5029[5U]
                                   : __Vconst529[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[6U] 
            | (__Vconst526[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5029[6U]
                                   : __Vconst529[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[7U] 
            | (__Vconst526[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5029[7U]
                                   : __Vconst529[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[8U] 
            | (__Vconst526[8U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5029[8U]
                                   : __Vconst529[8U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[9U] 
            | (__Vconst526[9U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5029[9U]
                                   : __Vconst529[9U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (__Vconst526[0xaU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp5029[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (__Vconst526[0xbU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp5029[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (__Vconst526[0xcU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp5029[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (__Vconst526[0xdU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp5029[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (__Vconst526[0xeU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp5029[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (__Vconst526[0xfU] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp5029[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xfU]));
    __Vtemp5038[0U] = 1U;
    __Vtemp5038[1U] = 0U;
    __Vtemp5038[2U] = 0U;
    __Vtemp5038[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp5039, __Vtemp5038, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source));
    __Vtemp5044[0U] = 1U;
    __Vtemp5044[1U] = 0U;
    __Vtemp5044[2U] = 0U;
    __Vtemp5044[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp5045, __Vtemp5044, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5039[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp5045[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5039[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp5045[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5039[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp5045[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp5039[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp5045[3U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___T 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready) 
            | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor_io_in_a_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_in_a_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT___GEN_0 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT___T) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_4 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___T) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last))) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_written_once));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_6 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___T) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last))) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_rdata_written_once));
    VL_EXTEND_WI(515,4, __Vtemp5051, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp5052, __Vtemp5051, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (__Vconst611[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5052[0U]
                                   : __Vconst614[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (__Vconst611[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5052[1U]
                                   : __Vconst614[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (__Vconst611[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5052[2U]
                                   : __Vconst614[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (__Vconst611[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5052[3U]
                                   : __Vconst614[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (__Vconst611[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5052[4U]
                                   : __Vconst614[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (__Vconst611[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5052[5U]
                                   : __Vconst614[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (__Vconst611[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5052[6U]
                                   : __Vconst614[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (__Vconst611[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5052[7U]
                                   : __Vconst614[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[7U]));
    VL_EXTEND_WI(515,4, __Vtemp5061, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp5062, __Vtemp5061, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[0U] 
            | (__Vconst611[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5062[0U]
                                   : __Vconst614[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[1U] 
            | (__Vconst611[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5062[1U]
                                   : __Vconst614[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[2U] 
            | (__Vconst611[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5062[2U]
                                   : __Vconst614[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[3U] 
            | (__Vconst611[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5062[3U]
                                   : __Vconst614[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[4U] 
            | (__Vconst611[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5062[4U]
                                   : __Vconst614[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[5U] 
            | (__Vconst611[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5062[5U]
                                   : __Vconst614[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[6U] 
            | (__Vconst611[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5062[6U]
                                   : __Vconst614[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[7U] 
            | (__Vconst611[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5062[7U]
                                   : __Vconst614[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_T_2 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
                : 0ULL)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                ? (1ULL << (0x3fU & 
                                            ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 1U)))
                                : 0ULL)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor_io_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_in_a_ready) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall)) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___bundleOut_0_a_valid_T_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___bundleIn_0_a_ready_T_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_in_a_ready));
    VL_EXTEND_WI(515,4, __Vtemp5071, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp5072, __Vtemp5071, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (__Vconst611[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5072[0U]
                                   : __Vconst614[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (__Vconst611[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5072[1U]
                                   : __Vconst614[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (__Vconst611[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5072[2U]
                                   : __Vconst614[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (__Vconst611[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5072[3U]
                                   : __Vconst614[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (__Vconst611[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5072[4U]
                                   : __Vconst614[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (__Vconst611[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5072[5U]
                                   : __Vconst614[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (__Vconst611[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5072[6U]
                                   : __Vconst614[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (__Vconst611[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5072[7U]
                                   : __Vconst614[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[7U]));
    VL_EXTEND_WI(515,4, __Vtemp5081, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp5082, __Vtemp5081, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0U] 
            | (__Vconst611[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5082[0U]
                                   : __Vconst614[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[1U] 
            | (__Vconst611[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5082[1U]
                                   : __Vconst614[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[2U] 
            | (__Vconst611[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5082[2U]
                                   : __Vconst614[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[3U] 
            | (__Vconst611[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5082[3U]
                                   : __Vconst614[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[4U] 
            | (__Vconst611[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5082[4U]
                                   : __Vconst614[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[5U] 
            | (__Vconst611[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5082[5U]
                                   : __Vconst614[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[6U] 
            | (__Vconst611[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5082[6U]
                                   : __Vconst614[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[7U] 
            | (__Vconst611[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp5082[7U]
                                   : __Vconst614[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_T_2 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
                : 0ULL)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                : 0ULL)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter))) 
            << 4U) | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_3) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_3))) 
                        & (IData)((4U == (6U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))))) 
                       << 3U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_2) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_2))) 
                                  & (IData)((6U == 
                                             (6U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_opcode))))) 
                                 << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___bundleIn_0_a_ready_T_1) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___bundleIn_0_a_ready_T_1) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__next_flight 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__flight) 
                     + (7U & ((3U & ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc)) 
                                     + (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                              >> 1U)))) 
                              + (3U & ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                              >> 2U)) 
                                       + ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                                 >> 3U)) 
                                          + (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                                   >> 4U)))))))) 
                    - (7U & ((3U & ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec)) 
                                    + (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                             >> 1U)))) 
                             + (3U & ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                             >> 2U)) 
                                      + ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                                >> 3U)) 
                                         + (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                                  >> 4U)))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
            ? ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready));
    VL_EXTEND_WI(515,4, __Vtemp5091, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp5092, __Vtemp5091, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[0U] 
            | (__Vconst611[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5092[0U]
                                   : __Vconst614[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[1U] 
            | (__Vconst611[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5092[1U]
                                   : __Vconst614[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[2U] 
            | (__Vconst611[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5092[2U]
                                   : __Vconst614[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[3U] 
            | (__Vconst611[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5092[3U]
                                   : __Vconst614[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[4U] 
            | (__Vconst611[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5092[4U]
                                   : __Vconst614[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[5U] 
            | (__Vconst611[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5092[5U]
                                   : __Vconst614[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[6U] 
            | (__Vconst611[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5092[6U]
                                   : __Vconst614[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[7U] 
            | (__Vconst611[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5092[7U]
                                   : __Vconst614[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[7U]));
    VL_EXTEND_WI(515,4, __Vtemp5101, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                       ? (1U | (0xeU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3) 
                                                   << 1U)))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp5102, __Vtemp5101, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0U] 
            | (__Vconst611[0U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5102[0U]
                                   : __Vconst614[0U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[1U] 
            | (__Vconst611[1U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5102[1U]
                                   : __Vconst614[1U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[2U] 
            | (__Vconst611[2U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5102[2U]
                                   : __Vconst614[2U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[3U] 
            | (__Vconst611[3U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5102[3U]
                                   : __Vconst614[3U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[4U] 
            | (__Vconst611[4U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5102[4U]
                                   : __Vconst614[4U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[5U] 
            | (__Vconst611[5U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5102[5U]
                                   : __Vconst614[5U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[6U] 
            | (__Vconst611[6U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5102[6U]
                                   : __Vconst614[6U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[7U] 
            | (__Vconst611[7U] & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                   ? __Vtemp5102[7U]
                                   : __Vconst614[7U]))) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_T_2 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source))
                : 0ULL)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                                & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                : 0ULL)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_ready 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__stall))) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_valid 
        = (0xffU & ((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid)) 
                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_valid 
        = (0x7fU & (((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                        >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid)) 
                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_valid 
        = (0x3fU & (((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                        >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid)) 
                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_valid 
        = (0x1fU & (((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                        >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid)) 
                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_valid 
        = (0xfU & (((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                       >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_valid 
        = (7U & (((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                     >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_valid 
        = (3U & (((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                     >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_valid 
        = (1U & (((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                     >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN_10 
        = (0x7ffffffffffffffULL & ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                    ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___T)
                                        ? ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state))
                                            ? (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))
                                            : (((QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[1U])) 
                                                  >> 4U)))
                                        : (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__shift)))
                                    : (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__shift))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin) 
                   + ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_ready) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T)
                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel)
                   : 0U))) | ((0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & ((IData)(1U) 
                                           << (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                >> 3U)))))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T)
                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel)
                   : 0U))) | ((0x7fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & (((IData)(1U) 
                                            << (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                           >> 1U)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T)
                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel)
                   : 0U))) | ((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & (((IData)(1U) 
                                            << (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                           >> 2U)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T)
                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel)
                   : 0U))) | ((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & (((IData)(1U) 
                                            << (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                           >> 3U)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T)
                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel)
                   : 0U))) | ((0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                       & (((IData)(1U) 
                                           << (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                >> 3U))) 
                                          >> 4U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T)
                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel)
                   : 0U))) | ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                     & (((IData)(1U) 
                                         << (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                        >> 5U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T)
                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel)
                   : 0U))) | ((3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                     & (((IData)(1U) 
                                         << (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                        >> 6U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T)
                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel)
                   : 0U))) | ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                     & (((IData)(1U) 
                                         << (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                        >> 7U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_q_bits_data 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data
               [0U] : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_in_d_bits_data)
            : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state))
                ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
                   & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_sink
                   [0U]) : (3U | ((((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                                     ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___T) 
                                         & ((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam_io_key)))
                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_bits)
                                         : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data
                                        [(7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                     : ((7U == (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U)))
                                         ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T) 
                                             & ((7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_key)))
                                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_bits)
                                             : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data
                                            [(7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                         : ((6U == 
                                             (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                               >> 3U)))
                                             ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T) 
                                                 & ((7U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_key)))
                                                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_bits)
                                                 : 
                                                vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data
                                                [(7U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                             : ((5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                     >> 3U)))
                                                 ? 
                                                (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T) 
                                                  & ((7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_key)))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_bits)
                                                  : 
                                                 vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data
                                                 [(7U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                      >> 3U)))
                                                  ? 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T) 
                                                   & ((7U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_key)))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_bits)
                                                   : 
                                                  vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data
                                                  [
                                                  (7U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                       >> 3U)))
                                                   ? 
                                                  (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T) 
                                                    & ((7U 
                                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_key)))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_bits)
                                                    : 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data
                                                   [
                                                   (7U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                        >> 3U)))
                                                    ? 
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T) 
                                                     & ((7U 
                                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_key)))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_bits)
                                                     : 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data
                                                    [
                                                    (7U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                         >> 3U)))
                                                     ? 
                                                    (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T) 
                                                      & ((7U 
                                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_key)))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_bits)
                                                      : 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data
                                                     [
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                     : 
                                                    (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T) 
                                                      & ((7U 
                                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_key)))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_bits)
                                                      : 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data
                                                     [
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))]))))))))) 
                                   << 0x10U) | ((0xe000U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                    << 0xaU)) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size) 
                                                    << 9U) 
                                                   | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied
                                                        [0U]
                                                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                                                       << 8U) 
                                                      | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param
                                                           [0U]
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                                                          << 6U) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode) 
                                                            << 3U)))))))));
}
