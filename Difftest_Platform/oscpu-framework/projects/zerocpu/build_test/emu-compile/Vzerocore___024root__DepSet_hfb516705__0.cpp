// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vzerocore.h for the primary calling header

#include "verilated.h"

#include "Vzerocore___024root.h"

VL_INLINE_OPT void Vzerocore___024root___combo__TOP__0(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___combo__TOP__0\n"); );
    // Body
    if ((IData)((0x13ULL == (0x707fULL & vlSelf->RamReadData)))) {
        vlSelf->zerocore__DOT__u_id__DOT__aluCtl__out__out0 = 0U;
    }
}

VL_INLINE_OPT void Vzerocore___024root___sequent__TOP__0(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__zerocore__DOT__u_regs__DOT__regsheap__v0;
    QData/*63:0*/ __Vdlyvval__zerocore__DOT__u_regs__DOT__regsheap__v0;
    // Body
    if (vlSelf->rst) {
        vlSelf->zerocore__DOT__pc = 0ULL;
        __Vdlyvval__zerocore__DOT__u_regs__DOT__regsheap__v0 = 0ULL;
    } else {
        vlSelf->zerocore__DOT__pc = (4ULL + vlSelf->zerocore__DOT__pc);
        __Vdlyvval__zerocore__DOT__u_regs__DOT__regsheap__v0 
            = vlSelf->zerocore__DOT__rw;
    }
    __Vdlyvdim0__zerocore__DOT__u_regs__DOT__regsheap__v0 
        = (0x1fU & (IData)((vlSelf->RamReadData >> 7U)));
    vlSelf->zerocore__DOT__u_regs__DOT__regsheap[__Vdlyvdim0__zerocore__DOT__u_regs__DOT__regsheap__v0] 
        = __Vdlyvval__zerocore__DOT__u_regs__DOT__regsheap__v0;
    vlSelf->RamReadAddr = vlSelf->zerocore__DOT__pc;
}

VL_INLINE_OPT void Vzerocore___024root___combo__TOP__1(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->zerocore__DOT__ina = ((IData)(vlSelf->rst)
                                   ? 0ULL : (((0x1fU 
                                               & (IData)(
                                                         (vlSelf->RamReadData 
                                                          >> 0xfU))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->RamReadData 
                                                             >> 7U))))
                                              ? vlSelf->zerocore__DOT__rw
                                              : vlSelf->zerocore__DOT__u_regs__DOT__regsheap
                                             [(0x1fU 
                                               & (IData)(
                                                         (vlSelf->RamReadData 
                                                          >> 0xfU)))]));
    vlSelf->zerocore__DOT__res = ((0U == (IData)(vlSelf->zerocore__DOT__u_id__DOT__aluCtl__out__out0))
                                   ? (vlSelf->zerocore__DOT__ina 
                                      + (QData)((IData)(
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->RamReadData 
                                                                    >> 0x14U))))))
                                   : 0ULL);
}

void Vzerocore___024root___eval(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___eval\n"); );
    // Body
    Vzerocore___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vzerocore___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vzerocore___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vzerocore___024root___eval_debug_assertions(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
