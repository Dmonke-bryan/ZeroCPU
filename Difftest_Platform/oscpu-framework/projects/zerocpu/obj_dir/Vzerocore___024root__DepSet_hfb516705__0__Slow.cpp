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
    vlSelf->RamReadEnable = 0U;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[1U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[2U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[3U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[4U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[5U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[6U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[7U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[8U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[9U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0xaU] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0xbU] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0xcU] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0xdU] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0xeU] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0xfU] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x10U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x11U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x12U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x13U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x14U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x15U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x16U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x17U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x18U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x19U] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x1aU] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x1bU] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x1cU] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x1dU] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x1eU] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0x1fU] = 0ULL;
    vlSelf->zerocore__DOT__u_regs__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vzerocore___024root___settle__TOP__0(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___settle__TOP__0\n"); );
    // Body
<<<<<<< HEAD
    vlSelf->RamReadAddr = vlSelf->zerocore__DOT__pcF;
=======
    vlSelf->RamReadEnable = (1U & (~ (IData)(vlSelf->rst)));
    vlSelf->RamReadAddr = vlSelf->zerocore__DOT__pc;
>>>>>>> c5d3714addcabc440caec53b5c140c9c63927893
    if ((IData)((0x13U == (0x707fU & vlSelf->zerocore__DOT__instD)))) {
        vlSelf->zerocore__DOT__u_id__DOT__aluCtl__out__out0 = 0U;
    }
    vlSelf->zerocore__DOT__ina = ((IData)(vlSelf->rst)
                                   ? 0ULL : (((0x1fU 
                                               & (vlSelf->zerocore__DOT__instD 
                                                  >> 0xfU)) 
                                              == (0x1fU 
                                                  & (vlSelf->zerocore__DOT__instD 
                                                     >> 7U)))
<<<<<<< HEAD
                                              ? vlSelf->zerocore__DOT__u_regs__DOT__Rw
=======
                                              ? vlSelf->zerocore__DOT__rw
>>>>>>> c5d3714addcabc440caec53b5c140c9c63927893
                                              : vlSelf->zerocore__DOT__u_regs__DOT__regsheap
                                             [(0x1fU 
                                               & (vlSelf->zerocore__DOT__instD 
                                                  >> 0xfU))]));
<<<<<<< HEAD
=======
    vlSelf->zerocore__DOT__res = ((0U == (IData)(vlSelf->zerocore__DOT__u_id__DOT__aluCtl__out__out0))
                                   ? (vlSelf->zerocore__DOT__ina 
                                      + (QData)((IData)(
                                                        (vlSelf->zerocore__DOT__instD 
                                                         >> 0x14U))))
                                   : 0ULL);
>>>>>>> c5d3714addcabc440caec53b5c140c9c63927893
}

VL_ATTR_COLD void Vzerocore___024root___eval_initial(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___eval_initial\n"); );
    // Body
    Vzerocore___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->zerocore__DOT__instD = VL_RAND_RESET_I(32);
    vlSelf->zerocore__DOT__pcD = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__ra = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__rw = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__instD = VL_RAND_RESET_I(32);
    vlSelf->zerocore__DOT__pcD = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__ina = VL_RAND_RESET_Q(64);
<<<<<<< HEAD
=======
    vlSelf->zerocore__DOT__res = VL_RAND_RESET_Q(64);
>>>>>>> c5d3714addcabc440caec53b5c140c9c63927893
    vlSelf->zerocore__DOT__instE = VL_RAND_RESET_I(32);
    vlSelf->zerocore__DOT__pcE = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__instM = VL_RAND_RESET_I(32);
    vlSelf->zerocore__DOT__pcM = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__instW = VL_RAND_RESET_I(32);
    vlSelf->zerocore__DOT__pcW = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__u_id__DOT__aluCtl__out__out0 = 0;
    vlSelf->zerocore__DOT__u_regs__DOT__Rw = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->zerocore__DOT__u_regs__DOT__regsheap[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->zerocore__DOT__u_regs__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
