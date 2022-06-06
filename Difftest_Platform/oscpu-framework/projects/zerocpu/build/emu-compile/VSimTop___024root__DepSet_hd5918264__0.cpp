// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_INLINE_OPT void VSimTop___024root___combo__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->SimTop__DOT__u_zerocore__DOT__ina = ((IData)(vlSelf->reset)
                                                  ? 0ULL
                                                  : 
                                                 (((0x1fU 
                                                    & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                       >> 0xfU)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                       >> 7U)))
                                                   ? vlSelf->SimTop__DOT__u_zerocore__DOT__rw
                                                   : 
                                                  vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                      >> 0xfU))]));
    vlSelf->SimTop__DOT__u_zerocore__DOT__res = ((0U 
                                                  == (IData)(vlSelf->SimTop__DOT__u_zerocore__DOT__u_id__DOT__aluCtl__out__out0))
                                                  ? 
                                                 (vlSelf->SimTop__DOT__u_zerocore__DOT__ina 
                                                  + (QData)((IData)(
                                                                    (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                                     >> 0x14U))))
                                                  : 0ULL);
}

void VSimTop___024root___sequent__TOP__0(VSimTop___024root* vlSelf);

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VSimTop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_clean & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_clean");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_dump & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_dump");}
}
#endif  // VL_DEBUG
