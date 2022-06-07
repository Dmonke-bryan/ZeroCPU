// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"

#include "VSimTop___024root.h"

VL_ATTR_COLD void VSimTop___024root___settle__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__0\n"); );
    // Body
    if ((IData)((0x13U == (0x707fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)))) {
        vlSelf->SimTop__DOT__u_zerocore__DOT__u_id__DOT__aluCtl__out__out0 = 0U;
    }
}

VL_ATTR_COLD void VSimTop___024root___initial__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[1U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[2U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[3U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[4U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[5U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[6U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[7U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[8U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[9U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0xaU] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0xbU] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0xcU] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0xdU] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0xeU] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0xfU] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x10U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x11U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x12U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x13U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x14U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x15U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x16U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x17U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x18U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x19U] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x1aU] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x1bU] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x1cU] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x1dU] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x1eU] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0x1fU] = 0ULL;
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__i = 0x20U;
}

VL_ATTR_COLD void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    VSimTop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VSimTop___024root___combo__TOP__0(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Body
    VSimTop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VSimTop___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSimTop___024root___final(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___final\n"); );
}

VL_ATTR_COLD void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_logCtrl_log_begin = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_end = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_level = VL_RAND_RESET_Q(64);
    vlSelf->io_perfInfo_clean = VL_RAND_RESET_I(1);
    vlSelf->io_perfInfo_dump = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_ch = VL_RAND_RESET_I(8);
    vlSelf->io_uart_in_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_in_ch = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__WriteEnable = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__ReadData = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__WriteAddr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__WriteData = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__WriteMask = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__r_pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__r_inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_zerocore__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_zerocore__DOT__ra = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_zerocore__DOT__rw = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_zerocore__DOT__instD = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_zerocore__DOT__pcD = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_zerocore__DOT__ina = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_zerocore__DOT__res = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_zerocore__DOT__instE = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_zerocore__DOT__pcE = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_zerocore__DOT__instM = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_zerocore__DOT__pcM = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_zerocore__DOT__instW = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_zerocore__DOT__pcW = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_id__DOT__aluCtl__out__out0 = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
