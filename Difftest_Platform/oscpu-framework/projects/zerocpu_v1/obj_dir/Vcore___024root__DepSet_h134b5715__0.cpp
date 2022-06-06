// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"

#include "Vcore___024root.h"

VL_INLINE_OPT void Vcore___024root___combo__TOP__0(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___combo__TOP__0\n"); );
    // Body
    if ((IData)((0x13ULL == (0x707fULL & vlSelf->ReadData)))) {
        vlSelf->core__DOT__u_contrGen__DOT__aluCtl__out__out0 = 0U;
    }
}

VL_INLINE_OPT void Vcore___024root___sequent__TOP__0(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->core__DOT__u_pcgen__DOT__pc = ((IData)(vlSelf->rst_n)
                                            ? (0xfffU 
                                               & ((IData)(4U) 
                                                  + (IData)(vlSelf->core__DOT__u_pcgen__DOT__pc)))
                                            : 0U);
    vlSelf->ReadAddr = (QData)((IData)(vlSelf->core__DOT__u_pcgen__DOT__pc));
}

VL_INLINE_OPT void Vcore___024root___sequent__TOP__1(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___sequent__TOP__1\n"); );
    // Init
    SData/*11:0*/ __Vdlyvdim0__iram__DOT__iram__v0;
    IData/*31:0*/ __Vdlyvval__iram__DOT__iram__v0;
    CData/*0:0*/ __Vdlyvset__iram__DOT__iram__v0;
    // Body
    __Vdlyvset__iram__DOT__iram__v0 = 0U;
    if (vlSelf->wr_en) {
        __Vdlyvval__iram__DOT__iram__v0 = vlSelf->wr_data;
        __Vdlyvset__iram__DOT__iram__v0 = 1U;
        __Vdlyvdim0__iram__DOT__iram__v0 = vlSelf->wr_addr;
    }
    if (__Vdlyvset__iram__DOT__iram__v0) {
        vlSelf->iram__DOT__iram[__Vdlyvdim0__iram__DOT__iram__v0] 
            = __Vdlyvval__iram__DOT__iram__v0;
    }
}

VL_INLINE_OPT void Vcore___024root___sequent__TOP__2(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__core__DOT__u_regs__DOT__regsheap__v0;
    QData/*63:0*/ __Vdlyvval__core__DOT__u_regs__DOT__regsheap__v0;
    // Body
    __Vdlyvval__core__DOT__u_regs__DOT__regsheap__v0 
        = vlSelf->core__DOT__res;
    __Vdlyvdim0__core__DOT__u_regs__DOT__regsheap__v0 
        = (0x1fU & (IData)((vlSelf->ReadData >> 7U)));
    vlSelf->core__DOT__u_regs__DOT__regsheap[__Vdlyvdim0__core__DOT__u_regs__DOT__regsheap__v0] 
        = __Vdlyvval__core__DOT__u_regs__DOT__regsheap__v0;
}

VL_INLINE_OPT void Vcore___024root___combo__TOP__1(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___combo__TOP__1\n"); );
    // Body
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

void Vcore___024root___eval(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval\n"); );
    // Body
    Vcore___024root___combo__TOP__0(vlSelf);
    if ((((IData)(vlSelf->core__02Eclk) & (~ (IData)(vlSelf->__Vclklast__TOP__core__02Eclk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vcore___024root___sequent__TOP__0(vlSelf);
    }
    if (((~ (IData)(vlSelf->iram__02Eclk)) & (IData)(vlSelf->__Vclklast__TOP__iram__02Eclk))) {
        Vcore___024root___sequent__TOP__1(vlSelf);
    }
    if (((~ (IData)(vlSelf->core__02Eclk)) & (IData)(vlSelf->__Vclklast__TOP__core__02Eclk))) {
        Vcore___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vcore___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__core__02Eclk = vlSelf->core__02Eclk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
    vlSelf->__Vclklast__TOP__iram__02Eclk = vlSelf->iram__02Eclk;
}

#ifdef VL_DEBUG
void Vcore___024root___eval_debug_assertions(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->iram__02Eclk & 0xfeU))) {
        Verilated::overWidthError("iram.clk");}
    if (VL_UNLIKELY((vlSelf->rd_en & 0xfeU))) {
        Verilated::overWidthError("rd_en");}
    if (VL_UNLIKELY((vlSelf->rd_addr & 0xf000U))) {
        Verilated::overWidthError("rd_addr");}
    if (VL_UNLIKELY((vlSelf->wr_en & 0xfeU))) {
        Verilated::overWidthError("wr_en");}
    if (VL_UNLIKELY((vlSelf->wr_addr & 0xf000U))) {
        Verilated::overWidthError("wr_addr");}
    if (VL_UNLIKELY((vlSelf->core__02Eclk & 0xfeU))) {
        Verilated::overWidthError("core.clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
