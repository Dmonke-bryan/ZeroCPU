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
    vlSelf->SimTop__DOT__u_zerocore__DOT__res = ((0U 
                                                  == (IData)(vlSelf->SimTop__DOT__u_zerocore__DOT__u_id__DOT__aluCtl__out__out0))
                                                  ? 
                                                 (vlSelf->SimTop__DOT__u_zerocore__DOT__ra 
                                                  + (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__ReadData 
                                                                                >> 0x14U))))))
                                                  : 0ULL);
    vlSelf->SimTop__DOT__u_zerocore__DOT__ra = ((IData)(vlSelf->reset)
                                                 ? 0ULL
                                                 : 
                                                (((0x1fU 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__ReadData 
                                                              >> 0xfU))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__ReadData 
                                                              >> 7U))))
                                                  ? vlSelf->SimTop__DOT__u_zerocore__DOT__res
                                                  : 
                                                 vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                 [(0x1fU 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__ReadData 
                                                              >> 0xfU)))]));
}

void VSimTop___024root___sequent__TOP__0(VSimTop___024root* vlSelf);

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__0(vlSelf);
    }
    VSimTop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf);

VL_INLINE_OPT QData VSimTop___024root___change_request(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request\n"); );
    // Body
    return (VSimTop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->SimTop__DOT__u_zerocore__DOT__ra ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_zerocore__DOT__ra));
    VL_DEBUG_IF( if(__req && ((vlSelf->SimTop__DOT__u_zerocore__DOT__ra ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_zerocore__DOT__ra))) VL_DBG_MSGF("        CHANGE: /home/bryan/ZeroCPU/Difftest_Platform/oscpu-framework/projects/zerocpu/build/zerocore.v:47: SimTop.u_zerocore.ra\n"); );
    // Final
    vlSelf->__Vchglast__TOP__SimTop__DOT__u_zerocore__DOT__ra 
        = vlSelf->SimTop__DOT__u_zerocore__DOT__ra;
    return __req;
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
