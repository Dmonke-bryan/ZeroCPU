// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vzerocore.h for the primary calling header

#include "verilated.h"

#include "Vzerocore___024root.h"

VL_ATTR_COLD void Vzerocore___024root___initial__TOP__0(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->RamReadEnable = 1U;
}

VL_ATTR_COLD void Vzerocore___024root___settle__TOP__0(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->RamReadAddr = vlSelf->zerocore__DOT__pcF;
    vlSelf->zerocore__DOT__u_ex__DOT__resADD = (vlSelf->zerocore__DOT__rs1DataE 
                                                + ((IData)(
                                                           (0x13U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->zerocore__DOT__instD)))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->zerocore__DOT__instD 
                                                                       >> 0x14U)))
                                                    : vlSelf->zerocore__DOT__rs2DataE));
}

VL_ATTR_COLD void Vzerocore___024root___eval_initial(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___eval_initial\n"); );
    // Body
    Vzerocore___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vzerocore___024root___eval_settle(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___eval_settle\n"); );
    // Body
    Vzerocore___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vzerocore___024root___final(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___final\n"); );
}

VL_ATTR_COLD void Vzerocore___024root___ctor_var_reset(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->RamReadData = VL_RAND_RESET_Q(64);
    vlSelf->RamReadEnable = VL_RAND_RESET_I(1);
    vlSelf->RamWriteEnable = VL_RAND_RESET_I(1);
    vlSelf->RamReadAddr = VL_RAND_RESET_Q(64);
    vlSelf->RamWriteAddr = VL_RAND_RESET_Q(64);
    vlSelf->RamWriteMask = VL_RAND_RESET_Q(64);
    vlSelf->RamWriteData = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__pcF = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__instM = VL_RAND_RESET_I(32);
    vlSelf->zerocore__DOT__pcM = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__pcD = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__instD = VL_RAND_RESET_I(32);
    vlSelf->zerocore__DOT__instW = VL_RAND_RESET_I(32);
    vlSelf->zerocore__DOT__pcW = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__instE = VL_RAND_RESET_I(32);
    vlSelf->zerocore__DOT__pcE = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__rs1DataE = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__rs2DataE = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__u_ex__DOT__resADD = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->zerocore__DOT__u_regs__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
