// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__46(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__46\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    CData/*7:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    CData/*7:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    CData/*2:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    CData/*4:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    CData/*6:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    CData/*2:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    CData/*3:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    CData/*4:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    CData/*3:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    CData/*2:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    CData/*7:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    CData/*7:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    CData/*3:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    CData/*3:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    CData/*4:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    CData/*0:0*/ __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    CData/*0:0*/ __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    CData/*3:0*/ __Vdlyvdim0__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    CData/*2:0*/ __Vdlyvval__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    CData/*0:0*/ __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    CData/*3:0*/ __Vdlyvdim0__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    CData/*0:0*/ __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    CData/*3:0*/ __Vdlyvdim0__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    CData/*2:0*/ __Vdlyvval__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    CData/*0:0*/ __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    SData/*15:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    SData/*9:0*/ __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    VlWide<17>/*543:0*/ __Vtemp4463;
    VlWide<17>/*543:0*/ __Vtemp4464;
    VlWide<17>/*543:0*/ __Vtemp4470;
    VlWide<17>/*543:0*/ __Vtemp4477;
    VlWide<17>/*543:0*/ __Vtemp4478;
    VlWide<17>/*543:0*/ __Vtemp4484;
    VlWide<17>/*543:0*/ __Vtemp4491;
    VlWide<17>/*543:0*/ __Vtemp4492;
    VlWide<17>/*543:0*/ __Vtemp4498;
    VlWide<17>/*543:0*/ __Vtemp4505;
    VlWide<17>/*543:0*/ __Vtemp4506;
    VlWide<17>/*543:0*/ __Vtemp4512;
    VlWide<4>/*127:0*/ __Vtemp4519;
    VlWide<4>/*127:0*/ __Vtemp4520;
    VlWide<4>/*127:0*/ __Vtemp4525;
    VlWide<4>/*127:0*/ __Vtemp4526;
    VlWide<33>/*1055:0*/ __Vtemp4532;
    VlWide<33>/*1055:0*/ __Vtemp4533;
    VlWide<33>/*1055:0*/ __Vtemp4539;
    VlWide<4>/*127:0*/ __Vtemp4546;
    VlWide<4>/*127:0*/ __Vtemp4547;
    VlWide<4>/*127:0*/ __Vtemp4552;
    VlWide<4>/*127:0*/ __Vtemp4553;
    VlWide<33>/*1055:0*/ __Vtemp4559;
    VlWide<33>/*1055:0*/ __Vtemp4560;
    VlWide<33>/*1055:0*/ __Vtemp4566;
    VlWide<4>/*127:0*/ __Vtemp4573;
    VlWide<4>/*127:0*/ __Vtemp4574;
    VlWide<4>/*127:0*/ __Vtemp4579;
    VlWide<4>/*127:0*/ __Vtemp4580;
    VlWide<33>/*1055:0*/ __Vtemp4586;
    VlWide<33>/*1055:0*/ __Vtemp4587;
    VlWide<33>/*1055:0*/ __Vtemp4593;
    VlWide<17>/*543:0*/ __Vtemp4600;
    VlWide<17>/*543:0*/ __Vtemp4601;
    VlWide<17>/*543:0*/ __Vtemp4607;
    VlWide<4>/*127:0*/ __Vtemp4614;
    VlWide<4>/*127:0*/ __Vtemp4615;
    VlWide<4>/*127:0*/ __Vtemp4620;
    VlWide<4>/*127:0*/ __Vtemp4621;
    VlWide<33>/*1055:0*/ __Vtemp4627;
    VlWide<33>/*1055:0*/ __Vtemp4628;
    VlWide<33>/*1055:0*/ __Vtemp4634;
    VlWide<4>/*127:0*/ __Vtemp4641;
    VlWide<4>/*127:0*/ __Vtemp4642;
    VlWide<4>/*127:0*/ __Vtemp4647;
    VlWide<4>/*127:0*/ __Vtemp4648;
    VlWide<33>/*1055:0*/ __Vtemp4654;
    VlWide<33>/*1055:0*/ __Vtemp4655;
    VlWide<33>/*1055:0*/ __Vtemp4661;
    VlWide<4>/*127:0*/ __Vtemp4668;
    VlWide<4>/*127:0*/ __Vtemp4669;
    VlWide<4>/*127:0*/ __Vtemp4674;
    VlWide<4>/*127:0*/ __Vtemp4675;
    VlWide<33>/*1055:0*/ __Vtemp4681;
    VlWide<33>/*1055:0*/ __Vtemp4682;
    VlWide<33>/*1055:0*/ __Vtemp4688;
    VlWide<4>/*127:0*/ __Vtemp4695;
    VlWide<4>/*127:0*/ __Vtemp4696;
    VlWide<4>/*127:0*/ __Vtemp4701;
    VlWide<4>/*127:0*/ __Vtemp4702;
    VlWide<33>/*1055:0*/ __Vtemp4708;
    VlWide<33>/*1055:0*/ __Vtemp4709;
    VlWide<33>/*1055:0*/ __Vtemp4715;
    VlWide<17>/*543:0*/ __Vtemp4722;
    VlWide<17>/*543:0*/ __Vtemp4723;
    VlWide<17>/*543:0*/ __Vtemp4729;
    VlWide<4>/*127:0*/ __Vtemp4736;
    VlWide<4>/*127:0*/ __Vtemp4737;
    VlWide<4>/*127:0*/ __Vtemp4742;
    VlWide<4>/*127:0*/ __Vtemp4743;
    VlWide<33>/*1055:0*/ __Vtemp4749;
    VlWide<33>/*1055:0*/ __Vtemp4750;
    VlWide<33>/*1055:0*/ __Vtemp4756;
    VlWide<4>/*127:0*/ __Vtemp4763;
    VlWide<4>/*127:0*/ __Vtemp4764;
    VlWide<4>/*127:0*/ __Vtemp4769;
    VlWide<4>/*127:0*/ __Vtemp4770;
    VlWide<33>/*1055:0*/ __Vtemp4776;
    VlWide<33>/*1055:0*/ __Vtemp4777;
    VlWide<33>/*1055:0*/ __Vtemp4783;
    VlWide<4>/*127:0*/ __Vtemp4790;
    VlWide<4>/*127:0*/ __Vtemp4791;
    VlWide<4>/*127:0*/ __Vtemp4796;
    VlWide<4>/*127:0*/ __Vtemp4797;
    VlWide<33>/*1055:0*/ __Vtemp4803;
    VlWide<33>/*1055:0*/ __Vtemp4804;
    VlWide<33>/*1055:0*/ __Vtemp4810;
    // Body
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin 
        = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin 
        = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
    }
    if (vlTOPp->reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd)
                                                ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))
                                                : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd)
                                                     ? 
                                                    (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd)
                                                      ? 
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read))))
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd)
                                                       ? 
                                                      (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read))
                                                       : 0U)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlTOPp->reset) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlTOPp->reset) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                          >> 2U) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                          >> 1U) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin) 
                                            + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid))));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin) 
                                            + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid))));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin) 
                                            + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid))));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin) 
                                            + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin = 0U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray_io_q))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin = 0U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_incremented) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_incremented) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_incremented) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_incremented) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin = 0U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray_io_q))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                & (7U == (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                & (2U == (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
            = (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                     >> 6U));
    }
    if (vlTOPp->reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
    } else {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | (0xeU ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(__Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((((0x10U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
                     ? (1U & ((0xcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       << 2U)) | ((2U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                      >> 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                        >> 3U)))))
                     : 0U) << 7U) | ((0x40U & (((0x10U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
                                                 ? 
                                                ((0xcU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                          >> 3U))))
                                                 : 8U) 
                                               << 5U)) 
                                     | ((0x20U & ((
                                                   (0x10U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
                                                    ? 
                                                   ((0xcU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                             >> 3U))))
                                                    : 8U) 
                                                  << 3U)) 
                                        | (0x10U & 
                                           (((0x10U 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
                                              ? ((0xcU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                          >> 3U))))
                                              : 8U) 
                                            << 1U))))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((((1U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
                                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                                                ? 0U
                                                : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    if (vlTOPp->reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
    } else if ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
                 & (0U == (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
                & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                      >> 7U)))) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
    }
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                                                ? 0U
                                                : (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 3U))))));
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                                                ? 0U
                                                : (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                                                ? 0U
                                                : (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                | (IData)(
                                                          ((1U 
                                                            == 
                                                            (1U 
                                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read))) 
                                                           & (2U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir))))))
                                                ? 0U
                                                : (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 1U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                & (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
    }
    if (vlTOPp->reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                        >> 2U));
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                        - (IData)(1U)));
    }
    if (vlTOPp->reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
            = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                        - (IData)(1U)));
    }
    if (vlTOPp->reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0x27fU;
    } else if ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                | (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
            = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t) 
                         - (IData)(1U)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffU & 
                                          ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                                  | (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))))
                                            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                               - (IData)(1U))
                                            : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                               - (IData)(1U)))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if ((2U == (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY((0x10U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
            VL_WRITEF("%c",8,vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i);
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count) 
                            - (IData)(1U)));
        }
    } else if (VL_UNLIKELY((3U == (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                    << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop))))) {
        VL_WRITEF("%c",8,vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i);
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    if (vlTOPp->reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
    } else if ((2U == (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                        << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
        if ((0x10U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
            __Vdlyvval__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
            __Vdlyvdim0__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                        << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
        if ((0U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                            - (IData)(1U)));
            __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
            __Vdlyvdim0__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
        }
    } else if ((3U == (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                        << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
            = (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
        __Vdlyvval__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
        __Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
        __Vdlyvdim0__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___ridx_incremented_T_1)
                                           : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___ridx_incremented_T_1)
                                           : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___ridx_incremented_T_1)
                                           : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___ridx_incremented_T_1)
                                           : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx) 
                                            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    if (__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __Vdlyvval__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __Vdlyvval__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = vlTOPp->reset;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                               >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                               >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr))
            ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr))
                ? 0xeU : 8U) : ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr))
                                 ? 4U : 1U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals 
        = ((IData)(vlTOPp->reset) ? 0U : 0xeU);
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                & (4U == (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
            = (0x1fU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir 
        = ((IData)(vlTOPp->reset) ? 1U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd)
                                           ? 6U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd)
                                                     ? 0xcU
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd)
                                                       ? 0U
                                                       : 1U))))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                & (1U == (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)))) {
        if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                      >> 7U)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                = (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
            << 7U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                       << 6U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                  << 5U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                             << 4U) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                << 3U) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                   << 2U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                      << 1U) 
                                                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                            >> 7U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == 
                                             (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                                            >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
                                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                               >> 7U))));
    if (vlTOPp->reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
        if ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
            if ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
            } else if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                if ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                    if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out)));
                    } else {
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x7fU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    }
                } else if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                        = (1U & VL_REDXOR_32((0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                } else {
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                        = (1U & VL_REDXOR_32((0x1fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                }
                __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                    = (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out) 
                                >> 1U));
                __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                    = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
            } else {
                if ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                    } else {
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                        = ((0U == (4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                            ? 0xdU : ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                       ? 0x15U : 0x1dU));
                }
                vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else if ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
            if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                    } else {
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
            } else {
                vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                if ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((0U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                         - (IData)(1U)));
                            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                = ((0x40U & (IData)(__Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                   | (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                               >> 1U)));
                            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                        } else if ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                = (1U & ((0x10U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                          ? ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                 >> 5U)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                          : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                              >> 5U) 
                                             | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                        } else {
                            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        }
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                    } else {
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
            }
        } else if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
            if ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                } else {
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                    - (IData)(1U)));
                }
            } else {
                __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
            }
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
        } else if ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
        } else {
            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    if (vlTOPp->reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
        if ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
            if ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
            } else if ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                            | (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))
                            ? 4U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                     << 3U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                << 1U) 
                                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                            << 3U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                       << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            } else if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                } else {
                    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else {
                vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                    = (1U & (VL_REDXOR_32((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                             ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
            }
        } else if ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
            if ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                        if ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                        } else {
                            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                        }
                    } else {
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                     - (IData)(1U)));
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                    }
                    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                } else {
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                        = ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                            ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? 7U : 6U) : ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                               ? 5U
                                               : 4U));
                    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                    } else {
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                    }
                    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                    = (1U & ((0x10U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                              ? ((0x20U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                              : ((0x20U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                  : (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
            } else {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)));
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0xaU;
                }
                vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            }
        } else if ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
            if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                }
                vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    if ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                    << 7U) | (0x7fU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                 >> 1U)));
                        } else {
                            __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((0x80U & (IData)(__Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                   | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                       << 6U) | (0x3fU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                    >> 1U))));
                        }
                    } else {
                        __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                            = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((0xc0U & (IData)(__Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                   | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                       << 5U) | (0x1fU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                    >> 1U))))
                                : ((0xe0U & (IData)(__Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                   | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                    >> 1U)))));
                    }
                }
                if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                    __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                }
                vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            }
        } else if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
            if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
                    = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)
                        ? 0U : 6U);
            }
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
        } else {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
            if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                 & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
            }
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
            [vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
            << 3U) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                               >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                               >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                               >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                               >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                               >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                               >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                               >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                               >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                               >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                               >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                               >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                               >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                               >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                               >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                               >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                               >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                               >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                               >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                               >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                               >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                               >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                               >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                               >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                               >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                               >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                               >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                               >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                               >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                               >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                               >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                  >> 2U) & (IData)((0U != (0x1eU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                  >> 1U) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr) 
                            >> 5U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
    } else if ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                & (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)) 
           & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)) 
            & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt))))) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable 
        = ((~ (IData)(vlTOPp->reset)) & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___q_last_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin) 
                   + ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_ready) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink_io_deq_valid))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___q_last_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin) 
                   + ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_ready) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink_io_deq_valid))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin) 
                   + (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink_io_deq_valid))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin) 
                   + (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink_io_deq_valid))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink_io_deq_valid) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__stall))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_valid 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first)) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink_io_deq_valid)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_in_1_c_ready));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin) 
                   + ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_ready) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink_io_deq_valid))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink_io_deq_valid) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__stall))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_valid 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_release) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__c_first)) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink_io_deq_valid)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_in_1_c_ready));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___q_last_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin) 
                   + ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_ready) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink_io_deq_valid))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = __Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink_io_deq_valid) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__stall))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink_io_deq_valid) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__stall))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink_io_deq_valid) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__stall))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_e_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_e_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_in_c_ready) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___T 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_in_c_ready) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___T 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (((((((((((((((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U] | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [2U]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [5U]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                            [6U]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [7U]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                          [8U]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                         [9U]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                        [0xaU]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                       [0xbU]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                      [0xcU]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                     [0xdU]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                    [0xeU]) | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0xfU])) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t))) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == 
                                             (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                                            >> 1U)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                & (1U == (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)))) {
        if ((0x80U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                = ((0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                      << 8U));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                & (0U == (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)))) {
        if ((0x80U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                = ((0xff00U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
            ? ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state)) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
            ? ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state)) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT___GEN_13 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_e_valid) 
           | ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT___T) 
                  & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode)))) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__idle)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT___GEN_13 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_e_valid) 
           | ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT___T) 
                  & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__da_bits_opcode)))) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__idle)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_3) 
             & ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_3)) 
                | (0U == ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                           ? (0xfU & (~ (0x7ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                                   >> 2U))))
                           : 0U)))) << 3U) | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_2) 
                                                 & ((1U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_2)) 
                                                    | (0U 
                                                       == 
                                                       ((1U 
                                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_opcode))
                                                         ? 
                                                        (0xfU 
                                                         & (~ 
                                                            (0x7ffU 
                                                             & (((IData)(0x3fU) 
                                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_size)) 
                                                                >> 2U))))
                                                         : 0U)))) 
                                                & (IData)(
                                                          (6U 
                                                           != 
                                                           (6U 
                                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_opcode))))) 
                                               << 1U) 
                                              | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink_io_deq_valid)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor_io_in_c_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_T_5 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T))
                : 0ULL)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                : 0ULL)));
    VL_EXTEND_WI(515,4, __Vtemp4463, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                                       ? (1U | (0xeU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3) 
                                                   << 1U)))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4464, __Vtemp4463, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4470, __Vconst621, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0U] 
            | (__Vconst611[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                                   ? __Vtemp4464[0U]
                                   : __Vconst614[0U]))) 
           & (~ (__Vconst620[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4470[0U]
                                     : __Vconst623[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[1U] 
            | (__Vconst611[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                                   ? __Vtemp4464[1U]
                                   : __Vconst614[1U]))) 
           & (~ (__Vconst620[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4470[1U]
                                     : __Vconst623[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[2U] 
            | (__Vconst611[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                                   ? __Vtemp4464[2U]
                                   : __Vconst614[2U]))) 
           & (~ (__Vconst620[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4470[2U]
                                     : __Vconst623[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[3U] 
            | (__Vconst611[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                                   ? __Vtemp4464[3U]
                                   : __Vconst614[3U]))) 
           & (~ (__Vconst620[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4470[3U]
                                     : __Vconst623[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[4U] 
            | (__Vconst611[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                                   ? __Vtemp4464[4U]
                                   : __Vconst614[4U]))) 
           & (~ (__Vconst620[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4470[4U]
                                     : __Vconst623[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[5U] 
            | (__Vconst611[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                                   ? __Vtemp4464[5U]
                                   : __Vconst614[5U]))) 
           & (~ (__Vconst620[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4470[5U]
                                     : __Vconst623[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[6U] 
            | (__Vconst611[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                                   ? __Vtemp4464[6U]
                                   : __Vconst614[6U]))) 
           & (~ (__Vconst620[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4470[6U]
                                     : __Vconst623[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[7U] 
            | (__Vconst611[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                                   ? __Vtemp4464[7U]
                                   : __Vconst614[7U]))) 
           & (~ (__Vconst620[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4470[7U]
                                     : __Vconst623[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___T)
                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel)
                   : 0U))) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___T) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_3) 
             & ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_3)) 
                | (0U == ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                           ? (0x3fU & (~ (0x1fffffU 
                                          & (((IData)(0xffU) 
                                              << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                             >> 2U))))
                           : 0U)))) << 3U) | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_2) 
                                                 & ((1U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_2)) 
                                                    | (0U 
                                                       == 
                                                       ((1U 
                                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_opcode))
                                                         ? 
                                                        (0x3fU 
                                                         & (~ 
                                                            (0x1fffffU 
                                                             & (((IData)(0xffU) 
                                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_size)) 
                                                                >> 2U))))
                                                         : 0U)))) 
                                                & (IData)(
                                                          (6U 
                                                           != 
                                                           (6U 
                                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_opcode))))) 
                                               << 1U) 
                                              | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink_io_deq_valid)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor_io_in_c_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__last_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_T_5 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T))
                : 0ULL)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                : 0ULL)));
    VL_EXTEND_WI(516,5, __Vtemp4477, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(516,516,9, __Vtemp4478, __Vtemp4477, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                   << 3U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4484, __Vconst878, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0U] 
            | (__Vconst869[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                   ? __Vtemp4478[0U]
                                   : __Vconst872[0U]))) 
           & (~ (__Vconst620[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4484[0U]
                                     : __Vconst623[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[1U] 
            | (__Vconst869[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                   ? __Vtemp4478[1U]
                                   : __Vconst872[1U]))) 
           & (~ (__Vconst620[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4484[1U]
                                     : __Vconst623[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[2U] 
            | (__Vconst869[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                   ? __Vtemp4478[2U]
                                   : __Vconst872[2U]))) 
           & (~ (__Vconst620[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4484[2U]
                                     : __Vconst623[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[3U] 
            | (__Vconst869[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                   ? __Vtemp4478[3U]
                                   : __Vconst872[3U]))) 
           & (~ (__Vconst620[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4484[3U]
                                     : __Vconst623[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[4U] 
            | (__Vconst869[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                   ? __Vtemp4478[4U]
                                   : __Vconst872[4U]))) 
           & (~ (__Vconst620[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4484[4U]
                                     : __Vconst623[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[5U] 
            | (__Vconst869[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                   ? __Vtemp4478[5U]
                                   : __Vconst872[5U]))) 
           & (~ (__Vconst620[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4484[5U]
                                     : __Vconst623[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[6U] 
            | (__Vconst869[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                   ? __Vtemp4478[6U]
                                   : __Vconst872[6U]))) 
           & (~ (__Vconst620[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4484[6U]
                                     : __Vconst623[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[7U] 
            | (__Vconst869[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                   ? __Vtemp4478[7U]
                                   : __Vconst872[7U]))) 
           & (~ (__Vconst620[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4484[7U]
                                     : __Vconst623[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[8U] 
            | (__Vconst869[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                   ? __Vtemp4478[8U]
                                   : __Vconst872[8U]))) 
           & (~ (__Vconst620[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4484[8U]
                                     : __Vconst623[8U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[9U] 
            | (__Vconst869[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                   ? __Vtemp4478[9U]
                                   : __Vconst872[9U]))) 
           & (~ (__Vconst620[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4484[9U]
                                     : __Vconst623[9U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xaU] 
            | (__Vconst869[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                     ? __Vtemp4478[0xaU]
                                     : __Vconst872[0xaU]))) 
           & (~ (__Vconst620[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                       ? __Vtemp4484[0xaU]
                                       : __Vconst623[0xaU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xbU] 
            | (__Vconst869[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                     ? __Vtemp4478[0xbU]
                                     : __Vconst872[0xbU]))) 
           & (~ (__Vconst620[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                       ? __Vtemp4484[0xbU]
                                       : __Vconst623[0xbU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xcU] 
            | (__Vconst869[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                     ? __Vtemp4478[0xcU]
                                     : __Vconst872[0xcU]))) 
           & (~ (__Vconst620[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                       ? __Vtemp4484[0xcU]
                                       : __Vconst623[0xcU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xdU] 
            | (__Vconst869[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                     ? __Vtemp4478[0xdU]
                                     : __Vconst872[0xdU]))) 
           & (~ (__Vconst620[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                       ? __Vtemp4484[0xdU]
                                       : __Vconst623[0xdU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xeU] 
            | (__Vconst869[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                     ? __Vtemp4478[0xeU]
                                     : __Vconst872[0xeU]))) 
           & (~ (__Vconst620[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                       ? __Vtemp4484[0xeU]
                                       : __Vconst623[0xeU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xfU] 
            | (__Vconst869[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610))
                                     ? __Vtemp4478[0xfU]
                                     : __Vconst872[0xfU]))) 
           & (~ (__Vconst620[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                       ? __Vtemp4484[0xfU]
                                       : __Vconst623[0xfU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___T)
                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel)
                   : 0U))) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___T) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state))) 
                               & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___bundleOut_0_a_valid_T_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_set_wo_ready 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
            ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source))
            : 0ULL);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___bundleOut_0_a_valid_T_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_set_wo_ready 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
            ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source))
            : 0ULL);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_T_5 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_1 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2469))
                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                : 0ULL)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                : 0ULL)));
    VL_EXTEND_WI(515,4, __Vtemp4491, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2469))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4492, __Vtemp4491, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4498, __Vconst621, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst611[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4492[0U]
                                   : __Vconst614[0U]))) 
           & (~ (__Vconst620[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4498[0U]
                                     : __Vconst623[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst611[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4492[1U]
                                   : __Vconst614[1U]))) 
           & (~ (__Vconst620[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4498[1U]
                                     : __Vconst623[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst611[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4492[2U]
                                   : __Vconst614[2U]))) 
           & (~ (__Vconst620[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4498[2U]
                                     : __Vconst623[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst611[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4492[3U]
                                   : __Vconst614[3U]))) 
           & (~ (__Vconst620[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4498[3U]
                                     : __Vconst623[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst611[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4492[4U]
                                   : __Vconst614[4U]))) 
           & (~ (__Vconst620[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4498[4U]
                                     : __Vconst623[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst611[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4492[5U]
                                   : __Vconst614[5U]))) 
           & (~ (__Vconst620[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4498[5U]
                                     : __Vconst623[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst611[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4492[6U]
                                   : __Vconst614[6U]))) 
           & (~ (__Vconst620[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4498[6U]
                                     : __Vconst623[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst611[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4492[7U]
                                   : __Vconst614[7U]))) 
           & (~ (__Vconst620[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4498[7U]
                                     : __Vconst623[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_T_5 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_1 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                : 0ULL)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                : 0ULL)));
    VL_EXTEND_WI(516,5, __Vtemp4505, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(516,516,9, __Vtemp4506, __Vtemp4505, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4512, __Vconst878, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst869[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4506[0U]
                                   : __Vconst872[0U]))) 
           & (~ (__Vconst620[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4512[0U]
                                     : __Vconst623[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst869[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4506[1U]
                                   : __Vconst872[1U]))) 
           & (~ (__Vconst620[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4512[1U]
                                     : __Vconst623[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst869[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4506[2U]
                                   : __Vconst872[2U]))) 
           & (~ (__Vconst620[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4512[2U]
                                     : __Vconst623[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst869[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4506[3U]
                                   : __Vconst872[3U]))) 
           & (~ (__Vconst620[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4512[3U]
                                     : __Vconst623[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst869[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4506[4U]
                                   : __Vconst872[4U]))) 
           & (~ (__Vconst620[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4512[4U]
                                     : __Vconst623[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst869[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4506[5U]
                                   : __Vconst872[5U]))) 
           & (~ (__Vconst620[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4512[5U]
                                     : __Vconst623[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst869[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4506[6U]
                                   : __Vconst872[6U]))) 
           & (~ (__Vconst620[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4512[6U]
                                     : __Vconst623[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst869[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4506[7U]
                                   : __Vconst872[7U]))) 
           & (~ (__Vconst620[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4512[7U]
                                     : __Vconst623[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
            | (__Vconst869[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4506[8U]
                                   : __Vconst872[8U]))) 
           & (~ (__Vconst620[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4512[8U]
                                     : __Vconst623[8U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
            | (__Vconst869[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4506[9U]
                                   : __Vconst872[9U]))) 
           & (~ (__Vconst620[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? __Vtemp4512[9U]
                                     : __Vconst623[9U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            | (__Vconst869[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                     ? __Vtemp4506[0xaU]
                                     : __Vconst872[0xaU]))) 
           & (~ (__Vconst620[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                       ? __Vtemp4512[0xaU]
                                       : __Vconst623[0xaU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            | (__Vconst869[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                     ? __Vtemp4506[0xbU]
                                     : __Vconst872[0xbU]))) 
           & (~ (__Vconst620[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                       ? __Vtemp4512[0xbU]
                                       : __Vconst623[0xbU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            | (__Vconst869[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                     ? __Vtemp4506[0xcU]
                                     : __Vconst872[0xcU]))) 
           & (~ (__Vconst620[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                       ? __Vtemp4512[0xcU]
                                       : __Vconst623[0xcU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            | (__Vconst869[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                     ? __Vtemp4506[0xdU]
                                     : __Vconst872[0xdU]))) 
           & (~ (__Vconst620[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                       ? __Vtemp4512[0xdU]
                                       : __Vconst623[0xdU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            | (__Vconst869[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                     ? __Vtemp4506[0xeU]
                                     : __Vconst872[0xeU]))) 
           & (~ (__Vconst620[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                       ? __Vtemp4512[0xeU]
                                       : __Vconst623[0xeU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            | (__Vconst869[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                     ? __Vtemp4506[0xfU]
                                     : __Vconst872[0xfU]))) 
           & (~ (__Vconst620[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                       ? __Vtemp4512[0xfU]
                                       : __Vconst623[0xfU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__full));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                & (3U == (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT___GEN_0 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT___T) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last_1))) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full));
    __Vtemp4519[0U] = 1U;
    __Vtemp4519[1U] = 0U;
    __Vtemp4519[2U] = 0U;
    __Vtemp4519[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4520, __Vtemp4519, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp4525[0U] = 1U;
    __Vtemp4525[1U] = 0U;
    __Vtemp4525[2U] = 0U;
    __Vtemp4525[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4526, __Vtemp4525, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[0U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                ? __Vtemp4520[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4526[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[1U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                ? __Vtemp4520[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4526[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[2U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                ? __Vtemp4520[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4526[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[3U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                ? __Vtemp4520[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4526[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4532, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4533, __Vtemp4532, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4539, __Vconst536, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst526[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                   ? __Vtemp4533[0U]
                                   : __Vconst529[0U]))) 
           & (~ (__Vconst535[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4539[0U]
                                     : __Vconst538[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst526[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                   ? __Vtemp4533[1U]
                                   : __Vconst529[1U]))) 
           & (~ (__Vconst535[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4539[1U]
                                     : __Vconst538[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst526[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                   ? __Vtemp4533[2U]
                                   : __Vconst529[2U]))) 
           & (~ (__Vconst535[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4539[2U]
                                     : __Vconst538[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst526[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                   ? __Vtemp4533[3U]
                                   : __Vconst529[3U]))) 
           & (~ (__Vconst535[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4539[3U]
                                     : __Vconst538[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst526[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                   ? __Vtemp4533[4U]
                                   : __Vconst529[4U]))) 
           & (~ (__Vconst535[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4539[4U]
                                     : __Vconst538[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst526[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                   ? __Vtemp4533[5U]
                                   : __Vconst529[5U]))) 
           & (~ (__Vconst535[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4539[5U]
                                     : __Vconst538[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst526[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                   ? __Vtemp4533[6U]
                                   : __Vconst529[6U]))) 
           & (~ (__Vconst535[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4539[6U]
                                     : __Vconst538[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst526[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                   ? __Vtemp4533[7U]
                                   : __Vconst529[7U]))) 
           & (~ (__Vconst535[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4539[7U]
                                     : __Vconst538[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[8U] 
            | (__Vconst526[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                   ? __Vtemp4533[8U]
                                   : __Vconst529[8U]))) 
           & (~ (__Vconst535[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4539[8U]
                                     : __Vconst538[8U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[9U] 
            | (__Vconst526[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                   ? __Vtemp4533[9U]
                                   : __Vconst529[9U]))) 
           & (~ (__Vconst535[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4539[9U]
                                     : __Vconst538[9U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            | (__Vconst526[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                     ? __Vtemp4533[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ (__Vconst535[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4539[0xaU]
                                       : __Vconst538[0xaU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            | (__Vconst526[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                     ? __Vtemp4533[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ (__Vconst535[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4539[0xbU]
                                       : __Vconst538[0xbU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            | (__Vconst526[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                     ? __Vtemp4533[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ (__Vconst535[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4539[0xcU]
                                       : __Vconst538[0xcU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            | (__Vconst526[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                     ? __Vtemp4533[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ (__Vconst535[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4539[0xdU]
                                       : __Vconst538[0xdU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            | (__Vconst526[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                     ? __Vtemp4533[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ (__Vconst535[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4539[0xeU]
                                       : __Vconst538[0xeU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            | (__Vconst526[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475))
                                     ? __Vtemp4533[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ (__Vconst535[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4539[0xfU]
                                       : __Vconst538[0xfU]))));
    __Vtemp4546[0U] = 1U;
    __Vtemp4546[1U] = 0U;
    __Vtemp4546[2U] = 0U;
    __Vtemp4546[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4547, __Vtemp4546, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp4552[0U] = 1U;
    __Vtemp4552[1U] = 0U;
    __Vtemp4552[2U] = 0U;
    __Vtemp4552[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4553, __Vtemp4552, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                ? __Vtemp4547[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4553[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[1U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                ? __Vtemp4547[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4553[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[2U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                ? __Vtemp4547[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4553[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[3U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                ? __Vtemp4547[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4553[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4559, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4560, __Vtemp4559, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4566, __Vconst536, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst526[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4560[0U]
                                   : __Vconst529[0U]))) 
           & (~ (__Vconst535[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4566[0U]
                                     : __Vconst538[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst526[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4560[1U]
                                   : __Vconst529[1U]))) 
           & (~ (__Vconst535[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4566[1U]
                                     : __Vconst538[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst526[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4560[2U]
                                   : __Vconst529[2U]))) 
           & (~ (__Vconst535[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4566[2U]
                                     : __Vconst538[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst526[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4560[3U]
                                   : __Vconst529[3U]))) 
           & (~ (__Vconst535[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4566[3U]
                                     : __Vconst538[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst526[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4560[4U]
                                   : __Vconst529[4U]))) 
           & (~ (__Vconst535[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4566[4U]
                                     : __Vconst538[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst526[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4560[5U]
                                   : __Vconst529[5U]))) 
           & (~ (__Vconst535[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4566[5U]
                                     : __Vconst538[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst526[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4560[6U]
                                   : __Vconst529[6U]))) 
           & (~ (__Vconst535[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4566[6U]
                                     : __Vconst538[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst526[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4560[7U]
                                   : __Vconst529[7U]))) 
           & (~ (__Vconst535[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4566[7U]
                                     : __Vconst538[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[8U] 
            | (__Vconst526[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4560[8U]
                                   : __Vconst529[8U]))) 
           & (~ (__Vconst535[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4566[8U]
                                     : __Vconst538[8U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[9U] 
            | (__Vconst526[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4560[9U]
                                   : __Vconst529[9U]))) 
           & (~ (__Vconst535[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4566[9U]
                                     : __Vconst538[9U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            | (__Vconst526[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                     ? __Vtemp4560[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ (__Vconst535[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4566[0xaU]
                                       : __Vconst538[0xaU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            | (__Vconst526[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                     ? __Vtemp4560[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ (__Vconst535[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4566[0xbU]
                                       : __Vconst538[0xbU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            | (__Vconst526[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                     ? __Vtemp4560[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ (__Vconst535[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4566[0xcU]
                                       : __Vconst538[0xcU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            | (__Vconst526[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                     ? __Vtemp4560[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ (__Vconst535[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4566[0xdU]
                                       : __Vconst538[0xdU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            | (__Vconst526[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                     ? __Vtemp4560[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ (__Vconst535[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4566[0xeU]
                                       : __Vconst538[0xeU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            | (__Vconst526[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                     ? __Vtemp4560[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ (__Vconst535[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4566[0xfU]
                                       : __Vconst538[0xfU]))));
    __Vtemp4573[0U] = 1U;
    __Vtemp4573[1U] = 0U;
    __Vtemp4573[2U] = 0U;
    __Vtemp4573[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4574, __Vtemp4573, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp4579[0U] = 1U;
    __Vtemp4579[1U] = 0U;
    __Vtemp4579[2U] = 0U;
    __Vtemp4579[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4580, __Vtemp4579, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                ? __Vtemp4574[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4580[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                ? __Vtemp4574[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4580[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                ? __Vtemp4574[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4580[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                ? __Vtemp4574[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4580[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4586, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4587, __Vtemp4586, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4593, __Vconst536, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst526[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4587[0U]
                                   : __Vconst529[0U]))) 
           & (~ (__Vconst535[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4593[0U]
                                     : __Vconst538[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst526[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4587[1U]
                                   : __Vconst529[1U]))) 
           & (~ (__Vconst535[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4593[1U]
                                     : __Vconst538[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst526[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4587[2U]
                                   : __Vconst529[2U]))) 
           & (~ (__Vconst535[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4593[2U]
                                     : __Vconst538[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst526[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4587[3U]
                                   : __Vconst529[3U]))) 
           & (~ (__Vconst535[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4593[3U]
                                     : __Vconst538[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst526[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4587[4U]
                                   : __Vconst529[4U]))) 
           & (~ (__Vconst535[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4593[4U]
                                     : __Vconst538[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst526[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4587[5U]
                                   : __Vconst529[5U]))) 
           & (~ (__Vconst535[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4593[5U]
                                     : __Vconst538[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst526[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4587[6U]
                                   : __Vconst529[6U]))) 
           & (~ (__Vconst535[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4593[6U]
                                     : __Vconst538[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst526[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4587[7U]
                                   : __Vconst529[7U]))) 
           & (~ (__Vconst535[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4593[7U]
                                     : __Vconst538[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
            | (__Vconst526[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4587[8U]
                                   : __Vconst529[8U]))) 
           & (~ (__Vconst535[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4593[8U]
                                     : __Vconst538[8U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
            | (__Vconst526[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp4587[9U]
                                   : __Vconst529[9U]))) 
           & (~ (__Vconst535[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4593[9U]
                                     : __Vconst538[9U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            | (__Vconst526[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                     ? __Vtemp4587[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ (__Vconst535[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                       ? __Vtemp4593[0xaU]
                                       : __Vconst538[0xaU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            | (__Vconst526[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                     ? __Vtemp4587[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ (__Vconst535[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                       ? __Vtemp4593[0xbU]
                                       : __Vconst538[0xbU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            | (__Vconst526[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                     ? __Vtemp4587[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ (__Vconst535[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                       ? __Vtemp4593[0xcU]
                                       : __Vconst538[0xcU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            | (__Vconst526[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                     ? __Vtemp4587[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ (__Vconst535[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                       ? __Vtemp4593[0xdU]
                                       : __Vconst538[0xdU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            | (__Vconst526[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                     ? __Vtemp4587[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ (__Vconst535[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                       ? __Vtemp4593[0xeU]
                                       : __Vconst538[0xeU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            | (__Vconst526[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                     ? __Vtemp4587[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ (__Vconst535[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                       ? __Vtemp4593[0xfU]
                                       : __Vconst538[0xfU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_T_5 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                : 0ULL)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                ? (1ULL << (0x3fU & 
                                            ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 1U)))
                                : 0ULL)));
    VL_EXTEND_WI(515,4, __Vtemp4600, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4601, __Vtemp4600, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4607, __Vconst621, 
                  (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                            << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst611[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4601[0U]
                                   : __Vconst614[0U]))) 
           & (~ (__Vconst620[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4607[0U]
                                     : __Vconst623[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst611[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4601[1U]
                                   : __Vconst614[1U]))) 
           & (~ (__Vconst620[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4607[1U]
                                     : __Vconst623[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst611[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4601[2U]
                                   : __Vconst614[2U]))) 
           & (~ (__Vconst620[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4607[2U]
                                     : __Vconst623[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst611[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4601[3U]
                                   : __Vconst614[3U]))) 
           & (~ (__Vconst620[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4607[3U]
                                     : __Vconst623[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst611[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4601[4U]
                                   : __Vconst614[4U]))) 
           & (~ (__Vconst620[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4607[4U]
                                     : __Vconst623[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst611[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4601[5U]
                                   : __Vconst614[5U]))) 
           & (~ (__Vconst620[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4607[5U]
                                     : __Vconst623[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst611[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4601[6U]
                                   : __Vconst614[6U]))) 
           & (~ (__Vconst620[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4607[6U]
                                     : __Vconst623[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst611[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                                   ? __Vtemp4601[7U]
                                   : __Vconst614[7U]))) 
           & (~ (__Vconst620[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4607[7U]
                                     : __Vconst623[7U]))));
    __Vtemp4614[0U] = 1U;
    __Vtemp4614[1U] = 0U;
    __Vtemp4614[2U] = 0U;
    __Vtemp4614[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4615, __Vtemp4614, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp4620[0U] = 1U;
    __Vtemp4620[1U] = 0U;
    __Vtemp4620[2U] = 0U;
    __Vtemp4620[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4621, __Vtemp4620, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[0U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                ? __Vtemp4615[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4621[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[1U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                ? __Vtemp4615[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4621[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[2U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                ? __Vtemp4615[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4621[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[3U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                ? __Vtemp4615[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4621[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4627, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4628, __Vtemp4627, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4634, __Vconst536, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst526[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4628[0U]
                                   : __Vconst529[0U]))) 
           & (~ (__Vconst535[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4634[0U]
                                     : __Vconst538[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst526[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4628[1U]
                                   : __Vconst529[1U]))) 
           & (~ (__Vconst535[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4634[1U]
                                     : __Vconst538[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst526[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4628[2U]
                                   : __Vconst529[2U]))) 
           & (~ (__Vconst535[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4634[2U]
                                     : __Vconst538[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst526[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4628[3U]
                                   : __Vconst529[3U]))) 
           & (~ (__Vconst535[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4634[3U]
                                     : __Vconst538[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst526[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4628[4U]
                                   : __Vconst529[4U]))) 
           & (~ (__Vconst535[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4634[4U]
                                     : __Vconst538[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst526[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4628[5U]
                                   : __Vconst529[5U]))) 
           & (~ (__Vconst535[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4634[5U]
                                     : __Vconst538[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst526[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4628[6U]
                                   : __Vconst529[6U]))) 
           & (~ (__Vconst535[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4634[6U]
                                     : __Vconst538[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst526[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4628[7U]
                                   : __Vconst529[7U]))) 
           & (~ (__Vconst535[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4634[7U]
                                     : __Vconst538[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[8U] 
            | (__Vconst526[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4628[8U]
                                   : __Vconst529[8U]))) 
           & (~ (__Vconst535[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4634[8U]
                                     : __Vconst538[8U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[9U] 
            | (__Vconst526[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4628[9U]
                                   : __Vconst529[9U]))) 
           & (~ (__Vconst535[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4634[9U]
                                     : __Vconst538[9U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            | (__Vconst526[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4628[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ (__Vconst535[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                       ? __Vtemp4634[0xaU]
                                       : __Vconst538[0xaU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            | (__Vconst526[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4628[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ (__Vconst535[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                       ? __Vtemp4634[0xbU]
                                       : __Vconst538[0xbU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            | (__Vconst526[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4628[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ (__Vconst535[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                       ? __Vtemp4634[0xcU]
                                       : __Vconst538[0xcU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            | (__Vconst526[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4628[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ (__Vconst535[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                       ? __Vtemp4634[0xdU]
                                       : __Vconst538[0xdU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            | (__Vconst526[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4628[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ (__Vconst535[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                       ? __Vtemp4634[0xeU]
                                       : __Vconst538[0xeU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            | (__Vconst526[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4628[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ (__Vconst535[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                       ? __Vtemp4634[0xfU]
                                       : __Vconst538[0xfU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT___GEN_0 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT___T) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeat_last_1))) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__full));
    __Vtemp4641[0U] = 1U;
    __Vtemp4641[1U] = 0U;
    __Vtemp4641[2U] = 0U;
    __Vtemp4641[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4642, __Vtemp4641, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp4647[0U] = 1U;
    __Vtemp4647[1U] = 0U;
    __Vtemp4647[2U] = 0U;
    __Vtemp4647[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4648, __Vtemp4647, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[0U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                ? __Vtemp4642[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4648[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[1U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                ? __Vtemp4642[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4648[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[2U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                ? __Vtemp4642[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4648[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[3U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                ? __Vtemp4642[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4648[3U]
                                                : 0U)));
    VL_EXTEND_WI(1028,5, __Vtemp4654, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1028,1028,10, __Vtemp4655, __Vtemp4654, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 4U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4661, __Vconst834, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst825[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                   ? __Vtemp4655[0U]
                                   : __Vconst828[0U]))) 
           & (~ (__Vconst535[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4661[0U]
                                     : __Vconst538[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst825[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                   ? __Vtemp4655[1U]
                                   : __Vconst828[1U]))) 
           & (~ (__Vconst535[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4661[1U]
                                     : __Vconst538[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst825[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                   ? __Vtemp4655[2U]
                                   : __Vconst828[2U]))) 
           & (~ (__Vconst535[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4661[2U]
                                     : __Vconst538[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst825[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                   ? __Vtemp4655[3U]
                                   : __Vconst828[3U]))) 
           & (~ (__Vconst535[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4661[3U]
                                     : __Vconst538[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst825[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                   ? __Vtemp4655[4U]
                                   : __Vconst828[4U]))) 
           & (~ (__Vconst535[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4661[4U]
                                     : __Vconst538[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst825[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                   ? __Vtemp4655[5U]
                                   : __Vconst828[5U]))) 
           & (~ (__Vconst535[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4661[5U]
                                     : __Vconst538[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst825[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                   ? __Vtemp4655[6U]
                                   : __Vconst828[6U]))) 
           & (~ (__Vconst535[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4661[6U]
                                     : __Vconst538[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst825[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                   ? __Vtemp4655[7U]
                                   : __Vconst828[7U]))) 
           & (~ (__Vconst535[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4661[7U]
                                     : __Vconst538[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[8U] 
            | (__Vconst825[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                   ? __Vtemp4655[8U]
                                   : __Vconst828[8U]))) 
           & (~ (__Vconst535[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4661[8U]
                                     : __Vconst538[8U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[9U] 
            | (__Vconst825[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                   ? __Vtemp4655[9U]
                                   : __Vconst828[9U]))) 
           & (~ (__Vconst535[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4661[9U]
                                     : __Vconst538[9U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            | (__Vconst825[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                     ? __Vtemp4655[0xaU]
                                     : __Vconst828[0xaU]))) 
           & (~ (__Vconst535[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4661[0xaU]
                                       : __Vconst538[0xaU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            | (__Vconst825[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                     ? __Vtemp4655[0xbU]
                                     : __Vconst828[0xbU]))) 
           & (~ (__Vconst535[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4661[0xbU]
                                       : __Vconst538[0xbU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            | (__Vconst825[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                     ? __Vtemp4655[0xcU]
                                     : __Vconst828[0xcU]))) 
           & (~ (__Vconst535[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4661[0xcU]
                                       : __Vconst538[0xcU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            | (__Vconst825[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                     ? __Vtemp4655[0xdU]
                                     : __Vconst828[0xdU]))) 
           & (~ (__Vconst535[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4661[0xdU]
                                       : __Vconst538[0xdU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            | (__Vconst825[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                     ? __Vtemp4655[0xeU]
                                     : __Vconst828[0xeU]))) 
           & (~ (__Vconst535[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4661[0xeU]
                                       : __Vconst538[0xeU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            | (__Vconst825[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                     ? __Vtemp4655[0xfU]
                                     : __Vconst828[0xfU]))) 
           & (~ (__Vconst535[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4661[0xfU]
                                       : __Vconst538[0xfU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
            | (__Vconst825[0x10U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x10U]
                                      : __Vconst828[0x10U]))) 
           & (~ (__Vconst535[0x10U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x10U]
                                        : __Vconst538[0x10U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x11U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
            | (__Vconst825[0x11U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x11U]
                                      : __Vconst828[0x11U]))) 
           & (~ (__Vconst535[0x11U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x11U]
                                        : __Vconst538[0x11U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x12U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
            | (__Vconst825[0x12U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x12U]
                                      : __Vconst828[0x12U]))) 
           & (~ (__Vconst535[0x12U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x12U]
                                        : __Vconst538[0x12U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x13U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
            | (__Vconst825[0x13U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x13U]
                                      : __Vconst828[0x13U]))) 
           & (~ (__Vconst535[0x13U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x13U]
                                        : __Vconst538[0x13U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x14U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
            | (__Vconst825[0x14U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x14U]
                                      : __Vconst828[0x14U]))) 
           & (~ (__Vconst535[0x14U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x14U]
                                        : __Vconst538[0x14U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x15U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
            | (__Vconst825[0x15U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x15U]
                                      : __Vconst828[0x15U]))) 
           & (~ (__Vconst535[0x15U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x15U]
                                        : __Vconst538[0x15U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x16U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
            | (__Vconst825[0x16U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x16U]
                                      : __Vconst828[0x16U]))) 
           & (~ (__Vconst535[0x16U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x16U]
                                        : __Vconst538[0x16U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x17U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
            | (__Vconst825[0x17U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x17U]
                                      : __Vconst828[0x17U]))) 
           & (~ (__Vconst535[0x17U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x17U]
                                        : __Vconst538[0x17U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x18U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
            | (__Vconst825[0x18U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x18U]
                                      : __Vconst828[0x18U]))) 
           & (~ (__Vconst535[0x18U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x18U]
                                        : __Vconst538[0x18U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x19U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
            | (__Vconst825[0x19U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x19U]
                                      : __Vconst828[0x19U]))) 
           & (~ (__Vconst535[0x19U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x19U]
                                        : __Vconst538[0x19U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
            | (__Vconst825[0x1aU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x1aU]
                                      : __Vconst828[0x1aU]))) 
           & (~ (__Vconst535[0x1aU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x1aU]
                                        : __Vconst538[0x1aU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
            | (__Vconst825[0x1bU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x1bU]
                                      : __Vconst828[0x1bU]))) 
           & (~ (__Vconst535[0x1bU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x1bU]
                                        : __Vconst538[0x1bU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
            | (__Vconst825[0x1cU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x1cU]
                                      : __Vconst828[0x1cU]))) 
           & (~ (__Vconst535[0x1cU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x1cU]
                                        : __Vconst538[0x1cU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
            | (__Vconst825[0x1dU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x1dU]
                                      : __Vconst828[0x1dU]))) 
           & (~ (__Vconst535[0x1dU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x1dU]
                                        : __Vconst538[0x1dU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
            | (__Vconst825[0x1eU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x1eU]
                                      : __Vconst828[0x1eU]))) 
           & (~ (__Vconst535[0x1eU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x1eU]
                                        : __Vconst538[0x1eU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
            | (__Vconst825[0x1fU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                      ? __Vtemp4655[0x1fU]
                                      : __Vconst828[0x1fU]))) 
           & (~ (__Vconst535[0x1fU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4661[0x1fU]
                                        : __Vconst538[0x1fU]))));
    __Vtemp4668[0U] = 1U;
    __Vtemp4668[1U] = 0U;
    __Vtemp4668[2U] = 0U;
    __Vtemp4668[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4669, __Vtemp4668, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp4674[0U] = 1U;
    __Vtemp4674[1U] = 0U;
    __Vtemp4674[2U] = 0U;
    __Vtemp4674[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4675, __Vtemp4674, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                ? __Vtemp4669[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4675[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[1U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                ? __Vtemp4669[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4675[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[2U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                ? __Vtemp4669[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4675[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[3U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                ? __Vtemp4669[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4675[3U]
                                                : 0U)));
    VL_EXTEND_WI(1028,5, __Vtemp4681, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1028,1028,10, __Vtemp4682, __Vtemp4681, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 4U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4688, __Vconst834, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst825[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4682[0U]
                                   : __Vconst828[0U]))) 
           & (~ (__Vconst535[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4688[0U]
                                     : __Vconst538[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst825[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4682[1U]
                                   : __Vconst828[1U]))) 
           & (~ (__Vconst535[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4688[1U]
                                     : __Vconst538[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst825[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4682[2U]
                                   : __Vconst828[2U]))) 
           & (~ (__Vconst535[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4688[2U]
                                     : __Vconst538[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst825[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4682[3U]
                                   : __Vconst828[3U]))) 
           & (~ (__Vconst535[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4688[3U]
                                     : __Vconst538[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst825[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4682[4U]
                                   : __Vconst828[4U]))) 
           & (~ (__Vconst535[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4688[4U]
                                     : __Vconst538[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst825[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4682[5U]
                                   : __Vconst828[5U]))) 
           & (~ (__Vconst535[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4688[5U]
                                     : __Vconst538[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst825[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4682[6U]
                                   : __Vconst828[6U]))) 
           & (~ (__Vconst535[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4688[6U]
                                     : __Vconst538[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst825[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4682[7U]
                                   : __Vconst828[7U]))) 
           & (~ (__Vconst535[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4688[7U]
                                     : __Vconst538[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[8U] 
            | (__Vconst825[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4682[8U]
                                   : __Vconst828[8U]))) 
           & (~ (__Vconst535[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4688[8U]
                                     : __Vconst538[8U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[9U] 
            | (__Vconst825[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4682[9U]
                                   : __Vconst828[9U]))) 
           & (~ (__Vconst535[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4688[9U]
                                     : __Vconst538[9U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            | (__Vconst825[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                     ? __Vtemp4682[0xaU]
                                     : __Vconst828[0xaU]))) 
           & (~ (__Vconst535[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4688[0xaU]
                                       : __Vconst538[0xaU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            | (__Vconst825[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                     ? __Vtemp4682[0xbU]
                                     : __Vconst828[0xbU]))) 
           & (~ (__Vconst535[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4688[0xbU]
                                       : __Vconst538[0xbU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            | (__Vconst825[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                     ? __Vtemp4682[0xcU]
                                     : __Vconst828[0xcU]))) 
           & (~ (__Vconst535[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4688[0xcU]
                                       : __Vconst538[0xcU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            | (__Vconst825[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                     ? __Vtemp4682[0xdU]
                                     : __Vconst828[0xdU]))) 
           & (~ (__Vconst535[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4688[0xdU]
                                       : __Vconst538[0xdU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            | (__Vconst825[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                     ? __Vtemp4682[0xeU]
                                     : __Vconst828[0xeU]))) 
           & (~ (__Vconst535[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4688[0xeU]
                                       : __Vconst538[0xeU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            | (__Vconst825[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                     ? __Vtemp4682[0xfU]
                                     : __Vconst828[0xfU]))) 
           & (~ (__Vconst535[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4688[0xfU]
                                       : __Vconst538[0xfU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
            | (__Vconst825[0x10U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x10U]
                                      : __Vconst828[0x10U]))) 
           & (~ (__Vconst535[0x10U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x10U]
                                        : __Vconst538[0x10U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x11U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
            | (__Vconst825[0x11U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x11U]
                                      : __Vconst828[0x11U]))) 
           & (~ (__Vconst535[0x11U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x11U]
                                        : __Vconst538[0x11U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x12U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
            | (__Vconst825[0x12U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x12U]
                                      : __Vconst828[0x12U]))) 
           & (~ (__Vconst535[0x12U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x12U]
                                        : __Vconst538[0x12U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x13U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
            | (__Vconst825[0x13U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x13U]
                                      : __Vconst828[0x13U]))) 
           & (~ (__Vconst535[0x13U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x13U]
                                        : __Vconst538[0x13U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x14U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
            | (__Vconst825[0x14U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x14U]
                                      : __Vconst828[0x14U]))) 
           & (~ (__Vconst535[0x14U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x14U]
                                        : __Vconst538[0x14U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x15U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
            | (__Vconst825[0x15U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x15U]
                                      : __Vconst828[0x15U]))) 
           & (~ (__Vconst535[0x15U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x15U]
                                        : __Vconst538[0x15U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x16U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
            | (__Vconst825[0x16U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x16U]
                                      : __Vconst828[0x16U]))) 
           & (~ (__Vconst535[0x16U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x16U]
                                        : __Vconst538[0x16U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x17U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
            | (__Vconst825[0x17U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x17U]
                                      : __Vconst828[0x17U]))) 
           & (~ (__Vconst535[0x17U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x17U]
                                        : __Vconst538[0x17U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x18U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
            | (__Vconst825[0x18U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x18U]
                                      : __Vconst828[0x18U]))) 
           & (~ (__Vconst535[0x18U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x18U]
                                        : __Vconst538[0x18U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x19U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
            | (__Vconst825[0x19U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x19U]
                                      : __Vconst828[0x19U]))) 
           & (~ (__Vconst535[0x19U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x19U]
                                        : __Vconst538[0x19U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
            | (__Vconst825[0x1aU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x1aU]
                                      : __Vconst828[0x1aU]))) 
           & (~ (__Vconst535[0x1aU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x1aU]
                                        : __Vconst538[0x1aU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
            | (__Vconst825[0x1bU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x1bU]
                                      : __Vconst828[0x1bU]))) 
           & (~ (__Vconst535[0x1bU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x1bU]
                                        : __Vconst538[0x1bU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
            | (__Vconst825[0x1cU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x1cU]
                                      : __Vconst828[0x1cU]))) 
           & (~ (__Vconst535[0x1cU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x1cU]
                                        : __Vconst538[0x1cU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
            | (__Vconst825[0x1dU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x1dU]
                                      : __Vconst828[0x1dU]))) 
           & (~ (__Vconst535[0x1dU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x1dU]
                                        : __Vconst538[0x1dU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
            | (__Vconst825[0x1eU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x1eU]
                                      : __Vconst828[0x1eU]))) 
           & (~ (__Vconst535[0x1eU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x1eU]
                                        : __Vconst538[0x1eU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
            | (__Vconst825[0x1fU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4682[0x1fU]
                                      : __Vconst828[0x1fU]))) 
           & (~ (__Vconst535[0x1fU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                        ? __Vtemp4688[0x1fU]
                                        : __Vconst538[0x1fU]))));
    __Vtemp4695[0U] = 1U;
    __Vtemp4695[1U] = 0U;
    __Vtemp4695[2U] = 0U;
    __Vtemp4695[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4696, __Vtemp4695, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp4701[0U] = 1U;
    __Vtemp4701[1U] = 0U;
    __Vtemp4701[2U] = 0U;
    __Vtemp4701[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4702, __Vtemp4701, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                ? __Vtemp4696[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4702[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                ? __Vtemp4696[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4702[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                ? __Vtemp4696[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4702[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                ? __Vtemp4696[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4702[3U]
                                                : 0U)));
    VL_EXTEND_WI(1028,5, __Vtemp4708, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1028,1028,10, __Vtemp4709, __Vtemp4708, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 4U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4715, __Vconst834, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst825[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4709[0U]
                                   : __Vconst828[0U]))) 
           & (~ (__Vconst535[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4715[0U]
                                     : __Vconst538[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst825[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4709[1U]
                                   : __Vconst828[1U]))) 
           & (~ (__Vconst535[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4715[1U]
                                     : __Vconst538[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst825[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4709[2U]
                                   : __Vconst828[2U]))) 
           & (~ (__Vconst535[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4715[2U]
                                     : __Vconst538[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst825[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4709[3U]
                                   : __Vconst828[3U]))) 
           & (~ (__Vconst535[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4715[3U]
                                     : __Vconst538[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst825[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4709[4U]
                                   : __Vconst828[4U]))) 
           & (~ (__Vconst535[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4715[4U]
                                     : __Vconst538[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst825[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4709[5U]
                                   : __Vconst828[5U]))) 
           & (~ (__Vconst535[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4715[5U]
                                     : __Vconst538[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst825[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4709[6U]
                                   : __Vconst828[6U]))) 
           & (~ (__Vconst535[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4715[6U]
                                     : __Vconst538[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst825[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4709[7U]
                                   : __Vconst828[7U]))) 
           & (~ (__Vconst535[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4715[7U]
                                     : __Vconst538[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
            | (__Vconst825[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4709[8U]
                                   : __Vconst828[8U]))) 
           & (~ (__Vconst535[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4715[8U]
                                     : __Vconst538[8U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
            | (__Vconst825[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp4709[9U]
                                   : __Vconst828[9U]))) 
           & (~ (__Vconst535[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                     ? __Vtemp4715[9U]
                                     : __Vconst538[9U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            | (__Vconst825[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                     ? __Vtemp4709[0xaU]
                                     : __Vconst828[0xaU]))) 
           & (~ (__Vconst535[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                       ? __Vtemp4715[0xaU]
                                       : __Vconst538[0xaU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            | (__Vconst825[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                     ? __Vtemp4709[0xbU]
                                     : __Vconst828[0xbU]))) 
           & (~ (__Vconst535[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                       ? __Vtemp4715[0xbU]
                                       : __Vconst538[0xbU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            | (__Vconst825[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                     ? __Vtemp4709[0xcU]
                                     : __Vconst828[0xcU]))) 
           & (~ (__Vconst535[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                       ? __Vtemp4715[0xcU]
                                       : __Vconst538[0xcU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            | (__Vconst825[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                     ? __Vtemp4709[0xdU]
                                     : __Vconst828[0xdU]))) 
           & (~ (__Vconst535[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                       ? __Vtemp4715[0xdU]
                                       : __Vconst538[0xdU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            | (__Vconst825[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                     ? __Vtemp4709[0xeU]
                                     : __Vconst828[0xeU]))) 
           & (~ (__Vconst535[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                       ? __Vtemp4715[0xeU]
                                       : __Vconst538[0xeU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            | (__Vconst825[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                     ? __Vtemp4709[0xfU]
                                     : __Vconst828[0xfU]))) 
           & (~ (__Vconst535[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                       ? __Vtemp4715[0xfU]
                                       : __Vconst538[0xfU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
            | (__Vconst825[0x10U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x10U]
                                      : __Vconst828[0x10U]))) 
           & (~ (__Vconst535[0x10U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x10U]
                                        : __Vconst538[0x10U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x11U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
            | (__Vconst825[0x11U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x11U]
                                      : __Vconst828[0x11U]))) 
           & (~ (__Vconst535[0x11U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x11U]
                                        : __Vconst538[0x11U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x12U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
            | (__Vconst825[0x12U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x12U]
                                      : __Vconst828[0x12U]))) 
           & (~ (__Vconst535[0x12U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x12U]
                                        : __Vconst538[0x12U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x13U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
            | (__Vconst825[0x13U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x13U]
                                      : __Vconst828[0x13U]))) 
           & (~ (__Vconst535[0x13U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x13U]
                                        : __Vconst538[0x13U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x14U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
            | (__Vconst825[0x14U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x14U]
                                      : __Vconst828[0x14U]))) 
           & (~ (__Vconst535[0x14U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x14U]
                                        : __Vconst538[0x14U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x15U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
            | (__Vconst825[0x15U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x15U]
                                      : __Vconst828[0x15U]))) 
           & (~ (__Vconst535[0x15U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x15U]
                                        : __Vconst538[0x15U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x16U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
            | (__Vconst825[0x16U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x16U]
                                      : __Vconst828[0x16U]))) 
           & (~ (__Vconst535[0x16U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x16U]
                                        : __Vconst538[0x16U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x17U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
            | (__Vconst825[0x17U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x17U]
                                      : __Vconst828[0x17U]))) 
           & (~ (__Vconst535[0x17U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x17U]
                                        : __Vconst538[0x17U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x18U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
            | (__Vconst825[0x18U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x18U]
                                      : __Vconst828[0x18U]))) 
           & (~ (__Vconst535[0x18U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x18U]
                                        : __Vconst538[0x18U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x19U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
            | (__Vconst825[0x19U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x19U]
                                      : __Vconst828[0x19U]))) 
           & (~ (__Vconst535[0x19U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x19U]
                                        : __Vconst538[0x19U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
            | (__Vconst825[0x1aU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x1aU]
                                      : __Vconst828[0x1aU]))) 
           & (~ (__Vconst535[0x1aU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x1aU]
                                        : __Vconst538[0x1aU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
            | (__Vconst825[0x1bU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x1bU]
                                      : __Vconst828[0x1bU]))) 
           & (~ (__Vconst535[0x1bU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x1bU]
                                        : __Vconst538[0x1bU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
            | (__Vconst825[0x1cU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x1cU]
                                      : __Vconst828[0x1cU]))) 
           & (~ (__Vconst535[0x1cU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x1cU]
                                        : __Vconst538[0x1cU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
            | (__Vconst825[0x1dU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x1dU]
                                      : __Vconst828[0x1dU]))) 
           & (~ (__Vconst535[0x1dU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x1dU]
                                        : __Vconst538[0x1dU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
            | (__Vconst825[0x1eU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x1eU]
                                      : __Vconst828[0x1eU]))) 
           & (~ (__Vconst535[0x1eU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x1eU]
                                        : __Vconst538[0x1eU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
            | (__Vconst825[0x1fU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                      ? __Vtemp4709[0x1fU]
                                      : __Vconst828[0x1fU]))) 
           & (~ (__Vconst535[0x1fU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                        ? __Vtemp4715[0x1fU]
                                        : __Vconst538[0x1fU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_T_5 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_1 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                : 0ULL)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                ? (1ULL << (0x3fU & 
                                            ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 1U)))
                                : 0ULL)));
    VL_EXTEND_WI(516,5, __Vtemp4722, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(516,516,9, __Vtemp4723, __Vtemp4722, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4729, __Vconst878, 
                  (0x1f8U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                             << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst869[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4723[0U]
                                   : __Vconst872[0U]))) 
           & (~ (__Vconst620[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4729[0U]
                                     : __Vconst623[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst869[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4723[1U]
                                   : __Vconst872[1U]))) 
           & (~ (__Vconst620[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4729[1U]
                                     : __Vconst623[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst869[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4723[2U]
                                   : __Vconst872[2U]))) 
           & (~ (__Vconst620[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4729[2U]
                                     : __Vconst623[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst869[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4723[3U]
                                   : __Vconst872[3U]))) 
           & (~ (__Vconst620[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4729[3U]
                                     : __Vconst623[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst869[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4723[4U]
                                   : __Vconst872[4U]))) 
           & (~ (__Vconst620[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4729[4U]
                                     : __Vconst623[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst869[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4723[5U]
                                   : __Vconst872[5U]))) 
           & (~ (__Vconst620[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4729[5U]
                                     : __Vconst623[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst869[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4723[6U]
                                   : __Vconst872[6U]))) 
           & (~ (__Vconst620[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4729[6U]
                                     : __Vconst623[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst869[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4723[7U]
                                   : __Vconst872[7U]))) 
           & (~ (__Vconst620[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4729[7U]
                                     : __Vconst623[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[8U] 
            | (__Vconst869[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4723[8U]
                                   : __Vconst872[8U]))) 
           & (~ (__Vconst620[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4729[8U]
                                     : __Vconst623[8U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[9U] 
            | (__Vconst869[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                   ? __Vtemp4723[9U]
                                   : __Vconst872[9U]))) 
           & (~ (__Vconst620[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4729[9U]
                                     : __Vconst623[9U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            | (__Vconst869[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                     ? __Vtemp4723[0xaU]
                                     : __Vconst872[0xaU]))) 
           & (~ (__Vconst620[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4729[0xaU]
                                       : __Vconst623[0xaU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            | (__Vconst869[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                     ? __Vtemp4723[0xbU]
                                     : __Vconst872[0xbU]))) 
           & (~ (__Vconst620[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4729[0xbU]
                                       : __Vconst623[0xbU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            | (__Vconst869[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                     ? __Vtemp4723[0xcU]
                                     : __Vconst872[0xcU]))) 
           & (~ (__Vconst620[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4729[0xcU]
                                       : __Vconst623[0xcU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            | (__Vconst869[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                     ? __Vtemp4723[0xdU]
                                     : __Vconst872[0xdU]))) 
           & (~ (__Vconst620[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4729[0xdU]
                                       : __Vconst623[0xdU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            | (__Vconst869[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                     ? __Vtemp4723[0xeU]
                                     : __Vconst872[0xeU]))) 
           & (~ (__Vconst620[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4729[0xeU]
                                       : __Vconst623[0xeU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            | (__Vconst869[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                     ? __Vtemp4723[0xfU]
                                     : __Vconst872[0xfU]))) 
           & (~ (__Vconst620[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4729[0xfU]
                                       : __Vconst623[0xfU]))));
    __Vtemp4736[0U] = 1U;
    __Vtemp4736[1U] = 0U;
    __Vtemp4736[2U] = 0U;
    __Vtemp4736[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4737, __Vtemp4736, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp4742[0U] = 1U;
    __Vtemp4742[1U] = 0U;
    __Vtemp4742[2U] = 0U;
    __Vtemp4742[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4743, __Vtemp4742, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[0U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                ? __Vtemp4737[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4743[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[1U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                ? __Vtemp4737[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4743[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[2U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                ? __Vtemp4737[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4743[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[3U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                ? __Vtemp4737[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4743[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4749, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                        ? (1U | (0xeU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                                                    << 1U)))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4750, __Vtemp4749, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4756, __Vconst536, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst526[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4750[0U]
                                   : __Vconst529[0U]))) 
           & (~ (__Vconst535[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4756[0U]
                                     : __Vconst538[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst526[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4750[1U]
                                   : __Vconst529[1U]))) 
           & (~ (__Vconst535[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4756[1U]
                                     : __Vconst538[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst526[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4750[2U]
                                   : __Vconst529[2U]))) 
           & (~ (__Vconst535[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4756[2U]
                                     : __Vconst538[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst526[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4750[3U]
                                   : __Vconst529[3U]))) 
           & (~ (__Vconst535[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4756[3U]
                                     : __Vconst538[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst526[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4750[4U]
                                   : __Vconst529[4U]))) 
           & (~ (__Vconst535[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4756[4U]
                                     : __Vconst538[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst526[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4750[5U]
                                   : __Vconst529[5U]))) 
           & (~ (__Vconst535[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4756[5U]
                                     : __Vconst538[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst526[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4750[6U]
                                   : __Vconst529[6U]))) 
           & (~ (__Vconst535[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4756[6U]
                                     : __Vconst538[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst526[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4750[7U]
                                   : __Vconst529[7U]))) 
           & (~ (__Vconst535[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4756[7U]
                                     : __Vconst538[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[8U] 
            | (__Vconst526[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4750[8U]
                                   : __Vconst529[8U]))) 
           & (~ (__Vconst535[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4756[8U]
                                     : __Vconst538[8U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[9U] 
            | (__Vconst526[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4750[9U]
                                   : __Vconst529[9U]))) 
           & (~ (__Vconst535[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                     ? __Vtemp4756[9U]
                                     : __Vconst538[9U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            | (__Vconst526[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4750[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ (__Vconst535[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                       ? __Vtemp4756[0xaU]
                                       : __Vconst538[0xaU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            | (__Vconst526[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4750[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ (__Vconst535[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                       ? __Vtemp4756[0xbU]
                                       : __Vconst538[0xbU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            | (__Vconst526[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4750[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ (__Vconst535[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                       ? __Vtemp4756[0xcU]
                                       : __Vconst538[0xcU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            | (__Vconst526[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4750[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ (__Vconst535[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                       ? __Vtemp4756[0xdU]
                                       : __Vconst538[0xdU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            | (__Vconst526[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4750[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ (__Vconst535[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                       ? __Vtemp4756[0xeU]
                                       : __Vconst538[0xeU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            | (__Vconst526[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4750[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ (__Vconst535[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                       ? __Vtemp4756[0xfU]
                                       : __Vconst538[0xfU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid));
    __Vtemp4763[0U] = 1U;
    __Vtemp4763[1U] = 0U;
    __Vtemp4763[2U] = 0U;
    __Vtemp4763[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4764, __Vtemp4763, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source));
    __Vtemp4769[0U] = 1U;
    __Vtemp4769[1U] = 0U;
    __Vtemp4769[2U] = 0U;
    __Vtemp4769[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4770, __Vtemp4769, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[0U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                ? __Vtemp4764[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4770[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[1U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                ? __Vtemp4764[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4770[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[2U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                ? __Vtemp4764[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4770[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[3U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                ? __Vtemp4764[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4770[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4776, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4777, __Vtemp4776, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4783, __Vconst536, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst526[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4777[0U]
                                   : __Vconst529[0U]))) 
           & (~ (__Vconst535[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4783[0U]
                                     : __Vconst538[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst526[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4777[1U]
                                   : __Vconst529[1U]))) 
           & (~ (__Vconst535[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4783[1U]
                                     : __Vconst538[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst526[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4777[2U]
                                   : __Vconst529[2U]))) 
           & (~ (__Vconst535[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4783[2U]
                                     : __Vconst538[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst526[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4777[3U]
                                   : __Vconst529[3U]))) 
           & (~ (__Vconst535[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4783[3U]
                                     : __Vconst538[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst526[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4777[4U]
                                   : __Vconst529[4U]))) 
           & (~ (__Vconst535[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4783[4U]
                                     : __Vconst538[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst526[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4777[5U]
                                   : __Vconst529[5U]))) 
           & (~ (__Vconst535[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4783[5U]
                                     : __Vconst538[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst526[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4777[6U]
                                   : __Vconst529[6U]))) 
           & (~ (__Vconst535[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4783[6U]
                                     : __Vconst538[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst526[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4777[7U]
                                   : __Vconst529[7U]))) 
           & (~ (__Vconst535[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4783[7U]
                                     : __Vconst538[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[8U] 
            | (__Vconst526[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4777[8U]
                                   : __Vconst529[8U]))) 
           & (~ (__Vconst535[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4783[8U]
                                     : __Vconst538[8U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[9U] 
            | (__Vconst526[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4777[9U]
                                   : __Vconst529[9U]))) 
           & (~ (__Vconst535[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4783[9U]
                                     : __Vconst538[9U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            | (__Vconst526[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4777[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ (__Vconst535[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4783[0xaU]
                                       : __Vconst538[0xaU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            | (__Vconst526[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4777[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ (__Vconst535[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4783[0xbU]
                                       : __Vconst538[0xbU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            | (__Vconst526[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4777[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ (__Vconst535[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4783[0xcU]
                                       : __Vconst538[0xcU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            | (__Vconst526[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4777[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ (__Vconst535[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4783[0xdU]
                                       : __Vconst538[0xdU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            | (__Vconst526[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4777[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ (__Vconst535[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4783[0xeU]
                                       : __Vconst538[0xeU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            | (__Vconst526[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4777[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ (__Vconst535[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4783[0xfU]
                                       : __Vconst538[0xfU]))));
    __Vtemp4790[0U] = 1U;
    __Vtemp4790[1U] = 0U;
    __Vtemp4790[2U] = 0U;
    __Vtemp4790[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4791, __Vtemp4790, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source));
    __Vtemp4796[0U] = 1U;
    __Vtemp4796[1U] = 0U;
    __Vtemp4796[2U] = 0U;
    __Vtemp4796[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4797, __Vtemp4796, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[0U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                ? __Vtemp4791[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4797[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[1U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                ? __Vtemp4791[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4797[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[2U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                ? __Vtemp4791[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4797[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[3U] 
            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                ? __Vtemp4791[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4797[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4803, ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4804, __Vtemp4803, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4810, __Vconst536, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0U] 
            | (__Vconst526[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4804[0U]
                                   : __Vconst529[0U]))) 
           & (~ (__Vconst535[0U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4810[0U]
                                     : __Vconst538[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[1U] 
            | (__Vconst526[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4804[1U]
                                   : __Vconst529[1U]))) 
           & (~ (__Vconst535[1U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4810[1U]
                                     : __Vconst538[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[2U] 
            | (__Vconst526[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4804[2U]
                                   : __Vconst529[2U]))) 
           & (~ (__Vconst535[2U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4810[2U]
                                     : __Vconst538[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[3U] 
            | (__Vconst526[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4804[3U]
                                   : __Vconst529[3U]))) 
           & (~ (__Vconst535[3U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4810[3U]
                                     : __Vconst538[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[4U] 
            | (__Vconst526[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4804[4U]
                                   : __Vconst529[4U]))) 
           & (~ (__Vconst535[4U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4810[4U]
                                     : __Vconst538[4U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[5U] 
            | (__Vconst526[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4804[5U]
                                   : __Vconst529[5U]))) 
           & (~ (__Vconst535[5U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4810[5U]
                                     : __Vconst538[5U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[6U] 
            | (__Vconst526[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4804[6U]
                                   : __Vconst529[6U]))) 
           & (~ (__Vconst535[6U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4810[6U]
                                     : __Vconst538[6U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[7U] 
            | (__Vconst526[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4804[7U]
                                   : __Vconst529[7U]))) 
           & (~ (__Vconst535[7U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4810[7U]
                                     : __Vconst538[7U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[8U] 
            | (__Vconst526[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4804[8U]
                                   : __Vconst529[8U]))) 
           & (~ (__Vconst535[8U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4810[8U]
                                     : __Vconst538[8U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[9U] 
            | (__Vconst526[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp4804[9U]
                                   : __Vconst529[9U]))) 
           & (~ (__Vconst535[9U] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp4810[9U]
                                     : __Vconst538[9U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            | (__Vconst526[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4804[0xaU]
                                     : __Vconst529[0xaU]))) 
           & (~ (__Vconst535[0xaU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4810[0xaU]
                                       : __Vconst538[0xaU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            | (__Vconst526[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4804[0xbU]
                                     : __Vconst529[0xbU]))) 
           & (~ (__Vconst535[0xbU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4810[0xbU]
                                       : __Vconst538[0xbU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            | (__Vconst526[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4804[0xcU]
                                     : __Vconst529[0xcU]))) 
           & (~ (__Vconst535[0xcU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4810[0xcU]
                                       : __Vconst538[0xcU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            | (__Vconst526[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4804[0xdU]
                                     : __Vconst529[0xdU]))) 
           & (~ (__Vconst535[0xdU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4810[0xdU]
                                       : __Vconst538[0xdU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            | (__Vconst526[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4804[0xeU]
                                     : __Vconst529[0xeU]))) 
           & (~ (__Vconst535[0xeU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4810[0xeU]
                                       : __Vconst538[0xeU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            | (__Vconst526[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335))
                                     ? __Vtemp4804[0xfU]
                                     : __Vconst529[0xfU]))) 
           & (~ (__Vconst535[0xfU] & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                       ? __Vtemp4810[0xfU]
                                       : __Vconst538[0xfU]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                   >> 6U)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    vlTOPp->__Vtableidx3 = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = vlTOPp->__Vtable3_TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx4 = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = vlTOPp->__Vtable4_TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value
        [vlTOPp->__Vtableidx4];
}
