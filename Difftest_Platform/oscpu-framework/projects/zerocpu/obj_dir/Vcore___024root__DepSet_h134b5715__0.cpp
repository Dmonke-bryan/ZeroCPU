// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"

#include "Vcore___024root.h"

VL_INLINE_OPT void Vcore___024root___sequent__TOP__0(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__core__DOT__u_regs__DOT__regsheap__v0;
    QData/*63:0*/ __Vdlyvval__core__DOT__u_regs__DOT__regsheap__v0;
    // Body
    __Vdlyvval__core__DOT__u_regs__DOT__regsheap__v0 
        = vlSelf->core__DOT__res;
    __Vdlyvdim0__core__DOT__u_regs__DOT__regsheap__v0 
        = (0x1fU & (vlSelf->core__DOT__inst >> 7U));
    vlSelf->core__DOT__u_regs__DOT__regsheap[__Vdlyvdim0__core__DOT__u_regs__DOT__regsheap__v0] 
        = __Vdlyvval__core__DOT__u_regs__DOT__regsheap__v0;
}

VL_INLINE_OPT void Vcore___024root___sequent__TOP__1(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->core__DOT__u_pcgen__DOT__pc = ((IData)(vlSelf->rst_n)
                                            ? (0xfffU 
                                               & ((IData)(4U) 
                                                  + (IData)(vlSelf->core__DOT__u_pcgen__DOT__pc)))
                                            : 0U);
    vlSelf->core__DOT__inst = vlSelf->core__DOT__iram_inst__DOT__iram
        [vlSelf->core__DOT__u_pcgen__DOT__pc];
    if ((IData)((0x13U == (0x707fU & vlSelf->core__DOT__inst)))) {
        vlSelf->core__DOT__u_contrGen__DOT__aluCtl__out__out0 = 0U;
    }
}

VL_INLINE_OPT void Vcore___024root___multiclk__TOP__0(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___multiclk__TOP__0\n"); );
    // Body
    vlSelf->core__DOT__res = ((0U == (IData)(vlSelf->core__DOT__u_contrGen__DOT__aluCtl__out__out0))
                               ? (((0U == (0x1fU & 
                                           (vlSelf->core__DOT__inst 
                                            >> 0xfU)))
                                    ? 0ULL : vlSelf->core__DOT__u_regs__DOT__regsheap
                                   [(0x1fU & (vlSelf->core__DOT__inst 
                                              >> 0xfU))]) 
                                  + (QData)((IData)(
                                                    (vlSelf->core__DOT__inst 
                                                     >> 0x14U))))
                               : 0ULL);
}

void Vcore___024root___eval(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vcore___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vcore___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vcore___024root___multiclk__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

#ifdef VL_DEBUG
void Vcore___024root___eval_debug_assertions(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
