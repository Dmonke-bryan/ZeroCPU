// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"

#include "VSimTop___024root.h"

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vdly__SimTop__DOT__u_zerocore__DOT__pc;
    CData/*4:0*/ __Vdlyvdim0__SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap__v0;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap__v0;
    // Body
    __Vdly__SimTop__DOT__u_zerocore__DOT__pc = vlSelf->SimTop__DOT__u_zerocore__DOT__pc;
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__u_zerocore__DOT__pc = 0x80000000ULL;
        vlSelf->SimTop__DOT__r_inst = vlSelf->SimTop__DOT__u_zerocore__DOT__instW;
        __Vdlyvval__SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap__v0 = 0ULL;
    } else {
        __Vdly__SimTop__DOT__u_zerocore__DOT__pc = 
            (4ULL + vlSelf->SimTop__DOT__u_zerocore__DOT__pc);
        vlSelf->SimTop__DOT__r_inst = vlSelf->SimTop__DOT__u_zerocore__DOT__instW;
        __Vdlyvval__SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap__v0 
            = vlSelf->SimTop__DOT__u_zerocore__DOT__rw;
    }
    __Vdlyvdim0__SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap__v0 
        = (0x1fU & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                    >> 7U));
    vlSelf->SimTop__DOT__r_valid = ((0U != vlSelf->SimTop__DOT__u_zerocore__DOT__instW) 
                                    & (vlSelf->SimTop__DOT__u_zerocore__DOT__pcW 
                                       != vlSelf->SimTop__DOT__r_pc));
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[__Vdlyvdim0__SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap__v0] 
        = __Vdlyvval__SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap__v0;
    vlSelf->SimTop__DOT__r_pc = vlSelf->SimTop__DOT__u_zerocore__DOT__pcW;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_zerocore__DOT__instW = 0U;
        vlSelf->SimTop__DOT__u_zerocore__DOT__pcW = 0ULL;
        vlSelf->SimTop__DOT__u_zerocore__DOT__instM = 0U;
        vlSelf->SimTop__DOT__u_zerocore__DOT__pcM = 0ULL;
        vlSelf->SimTop__DOT__u_zerocore__DOT__instE = 0U;
        vlSelf->SimTop__DOT__u_zerocore__DOT__pcE = 0ULL;
        vlSelf->SimTop__DOT__u_zerocore__DOT__instD = 0U;
        vlSelf->SimTop__DOT__u_zerocore__DOT__pcD = 0ULL;
    } else {
        vlSelf->SimTop__DOT__u_zerocore__DOT__instW 
            = vlSelf->SimTop__DOT__u_zerocore__DOT__instM;
        vlSelf->SimTop__DOT__u_zerocore__DOT__pcW = vlSelf->SimTop__DOT__u_zerocore__DOT__pcM;
        vlSelf->SimTop__DOT__u_zerocore__DOT__instM 
            = vlSelf->SimTop__DOT__u_zerocore__DOT__instE;
        vlSelf->SimTop__DOT__u_zerocore__DOT__pcM = vlSelf->SimTop__DOT__u_zerocore__DOT__pcE;
        vlSelf->SimTop__DOT__u_zerocore__DOT__instE 
            = vlSelf->SimTop__DOT__u_zerocore__DOT__instD;
        vlSelf->SimTop__DOT__u_zerocore__DOT__pcE = vlSelf->SimTop__DOT__u_zerocore__DOT__pcD;
        vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
            = (IData)(vlSelf->SimTop__DOT__ReadData);
        vlSelf->SimTop__DOT__u_zerocore__DOT__pcD = vlSelf->SimTop__DOT__u_zerocore__DOT__pc;
    }
    if ((IData)((0x13U == (0x707fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)))) {
        vlSelf->SimTop__DOT__u_zerocore__DOT__u_id__DOT__aluCtl__out__out0 = 0U;
    }
    vlSelf->SimTop__DOT__u_zerocore__DOT__pc = __Vdly__SimTop__DOT__u_zerocore__DOT__pc;
}

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
