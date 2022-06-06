// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"

#include "Vcore___024root.h"

VL_ATTR_COLD void Vcore___024root___initial__TOP__0(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->ReadEnable = 1U;
    vlSelf->iram__DOT__iram[4U] = 0x21028313U;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[1U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[2U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[3U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[4U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[5U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[6U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[7U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[8U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[9U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0xaU] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0xbU] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0xcU] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0xdU] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0xeU] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0xfU] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x10U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x11U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x12U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x13U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x14U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x15U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x16U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x17U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x18U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x19U] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x1aU] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x1bU] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x1cU] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x1dU] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x1eU] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__regsheap[0x1fU] = 0ULL;
    vlSelf->core__DOT__u_regs__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vcore___024root___settle__TOP__0(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___settle__TOP__0\n"); );
    // Body
    if ((IData)((0x13ULL == (0x707fULL & vlSelf->ReadData)))) {
        vlSelf->core__DOT__u_contrGen__DOT__aluCtl__out__out0 = 0U;
    }
    vlSelf->ReadAddr = (QData)((IData)(vlSelf->core__DOT__u_pcgen__DOT__pc));
    vlSelf->rd_data = ((IData)(vlSelf->rd_en) ? vlSelf->iram__DOT__iram
                       [vlSelf->rd_addr] : 0U);
    vlSelf->core__DOT__res = ((0U == (IData)(vlSelf->core__DOT__u_contrGen__DOT__aluCtl__out__out0))
                               ? (((0U == (0x1fU & (IData)(
                                                           (vlSelf->ReadData 
                                                            >> 0xfU))))
                                    ? 0ULL : vlSelf->core__DOT__u_regs__DOT__regsheap
                                   [(0x1fU & (IData)(
                                                     (vlSelf->ReadData 
                                                      >> 0xfU)))]) 
                                  + (QData)((IData)(
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->ReadData 
                                                                >> 0x14U))))))
                               : 0ULL);
}

VL_ATTR_COLD void Vcore___024root___eval_initial(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_initial\n"); );
    // Body
    Vcore___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__core__02Eclk = vlSelf->core__02Eclk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
    vlSelf->__Vclklast__TOP__iram__02Eclk = vlSelf->iram__02Eclk;
}

VL_ATTR_COLD void Vcore___024root___eval_settle(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_settle\n"); );
    // Body
    Vcore___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vcore___024root___final(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___final\n"); );
}

VL_ATTR_COLD void Vcore___024root___ctor_var_reset(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->iram__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->rd_en = VL_RAND_RESET_I(1);
    vlSelf->rd_addr = VL_RAND_RESET_I(12);
    vlSelf->rd_data = VL_RAND_RESET_I(32);
    vlSelf->wr_en = VL_RAND_RESET_I(1);
    vlSelf->wr_addr = VL_RAND_RESET_I(12);
    vlSelf->wr_data = VL_RAND_RESET_I(32);
    vlSelf->core__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->ReadData = VL_RAND_RESET_Q(64);
    vlSelf->ReadEnable = VL_RAND_RESET_I(1);
    vlSelf->WriteEnable = VL_RAND_RESET_I(1);
    vlSelf->ReadAddr = VL_RAND_RESET_Q(64);
    vlSelf->WriteAddr = VL_RAND_RESET_Q(64);
    vlSelf->WriteMask = VL_RAND_RESET_Q(64);
    vlSelf->WriteData = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->iram__DOT__iram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__res = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__u_pcgen__DOT__pc = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__u_contrGen__DOT__aluCtl__out__out0 = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->core__DOT__u_regs__DOT__regsheap[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->core__DOT__u_regs__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
