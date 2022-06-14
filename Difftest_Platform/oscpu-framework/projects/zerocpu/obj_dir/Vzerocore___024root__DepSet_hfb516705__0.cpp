// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vzerocore.h for the primary calling header

#include "verilated.h"

#include "Vzerocore___024root.h"

VL_INLINE_OPT void Vzerocore___024root___sequent__TOP__0(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__zerocore__DOT__u_regs__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v32;
    CData/*4:0*/ __Vdlyvdim0__zerocore__DOT__u_regs__DOT__regs__v33;
    QData/*63:0*/ __Vdlyvval__zerocore__DOT__u_regs__DOT__regs__v33;
    CData/*0:0*/ __Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v33;
    CData/*0:0*/ __Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v34;
    // Body
    __Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v0 = 0U;
    __Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v32 = 0U;
    __Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v33 = 0U;
    __Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v34 = 0U;
    if (vlSelf->rst) {
        vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect1_dff__DOT__dout_r = 0U;
        vlSelf->zerocore__DOT__pcF = 0ULL;
        vlSelf->zerocore__DOT__rs1Data_D2E__DOT__dout_r = 0ULL;
        vlSelf->zerocore__DOT__rs2Data_D2E__DOT__dout_r = 0ULL;
        vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect2_dff__DOT__dout_r = 0U;
        __Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v0 = 1U;
        __Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v32 = 1U;
        __Vdlyvdim0__zerocore__DOT__u_regs__DOT__regs__v32 
            = vlSelf->zerocore__DOT__u_mem__DOT__rdWriteAddr_M2W__DOT__dout_r;
    } else {
        vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect1_dff__DOT__dout_r 
            = vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect1_r;
        vlSelf->zerocore__DOT__pcF = (1ULL + vlSelf->zerocore__DOT__pcF);
        if (vlSelf->rst) {
            vlSelf->zerocore__DOT__rs1Data_D2E__DOT__dout_r = 0ULL;
            vlSelf->zerocore__DOT__rs2Data_D2E__DOT__dout_r = 0ULL;
        } else {
            vlSelf->zerocore__DOT__rs1Data_D2E__DOT__dout_r 
                = ((IData)(vlSelf->zerocore__DOT__rs1ReadEnable)
                    ? (((IData)(vlSelf->zerocore__DOT__rs1ReadAddr) 
                        == (IData)(vlSelf->zerocore__DOT__u_mem__DOT__rdWriteAddr_M2W__DOT__dout_r))
                        ? vlSelf->zerocore__DOT__u_ex__DOT__resADD
                        : vlSelf->zerocore__DOT__u_regs__DOT__regs
                       [vlSelf->zerocore__DOT__rs1ReadAddr])
                    : 0ULL);
            vlSelf->zerocore__DOT__rs2Data_D2E__DOT__dout_r 
                = ((IData)(vlSelf->zerocore__DOT__u_id__DOT__Rtype)
                    ? (((IData)(vlSelf->zerocore__DOT__rs2ReadAddr) 
                        == (IData)(vlSelf->zerocore__DOT__u_mem__DOT__rdWriteAddr_M2W__DOT__dout_r))
                        ? vlSelf->zerocore__DOT__u_ex__DOT__resADD
                        : vlSelf->zerocore__DOT__u_regs__DOT__regs
                       [vlSelf->zerocore__DOT__rs2ReadAddr])
                    : 0ULL);
        }
        vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect2_dff__DOT__dout_r 
            = (((~ (IData)(vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect1_r)) 
                & (((0U != (IData)(vlSelf->zerocore__DOT__rs2ReadAddr)) 
                    << 1U) | (0U != (IData)(vlSelf->zerocore__DOT__rs1ReadAddr)))) 
               & (((((IData)(vlSelf->zerocore__DOT__u_ex__DOT__rdWriteAddr_E2M__DOT__dout_r) 
                     == (IData)(vlSelf->zerocore__DOT__rs2ReadAddr)) 
                    & (IData)(vlSelf->zerocore__DOT__u_id__DOT__Rtype)) 
                   << 1U) | (((IData)(vlSelf->zerocore__DOT__u_ex__DOT__rdWriteAddr_E2M__DOT__dout_r) 
                              == (IData)(vlSelf->zerocore__DOT__rs1ReadAddr)) 
                             & (IData)(vlSelf->zerocore__DOT__rs1ReadEnable))));
        if (vlSelf->zerocore__DOT__u_mem__DOT__rdWriteEnable_M2W__DOT__dout_r) {
            __Vdlyvval__zerocore__DOT__u_regs__DOT__regs__v33 
                = vlSelf->zerocore__DOT__u_ex__DOT__resADD;
            __Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v33 = 1U;
            __Vdlyvdim0__zerocore__DOT__u_regs__DOT__regs__v33 
                = vlSelf->zerocore__DOT__u_mem__DOT__rdWriteAddr_M2W__DOT__dout_r;
        } else {
            __Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v34 = 1U;
        }
    }
    if (__Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v0) {
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[1U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[2U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[3U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[4U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[5U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[6U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[7U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[8U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[9U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0xaU] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0xbU] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0xcU] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0xdU] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0xeU] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0xfU] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x10U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x11U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x12U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x13U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x14U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x15U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x16U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x17U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x18U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x19U] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x1aU] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x1bU] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x1cU] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x1dU] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x1eU] = 0ULL;
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v32) {
        vlSelf->zerocore__DOT__u_regs__DOT__regs[__Vdlyvdim0__zerocore__DOT__u_regs__DOT__regs__v32] = 0ULL;
    }
    if (__Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v33) {
        vlSelf->zerocore__DOT__u_regs__DOT__regs[__Vdlyvdim0__zerocore__DOT__u_regs__DOT__regs__v33] 
            = __Vdlyvval__zerocore__DOT__u_regs__DOT__regs__v33;
    }
    if (__Vdlyvset__zerocore__DOT__u_regs__DOT__regs__v34) {
        vlSelf->zerocore__DOT__u_regs__DOT__regs[0U] = 0ULL;
    }
    vlSelf->RamReadAddr = vlSelf->zerocore__DOT__pcF;
    vlSelf->zerocore__DOT__u_mem__DOT__rdWriteAddr_M2W__DOT__dout_r 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->zerocore__DOT__u_ex__DOT__rdWriteAddr_E2M__DOT__dout_r));
    vlSelf->zerocore__DOT__u_mem__DOT__rdWriteEnable_M2W__DOT__dout_r 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->zerocore__DOT__rdWriteEnableM));
    vlSelf->zerocore__DOT__u_ex__DOT__rdWriteAddr_E2M__DOT__dout_r 
        = ((IData)(vlSelf->rst) ? 0U : (0x1fU & (IData)(
                                                        (vlSelf->RamReadData 
                                                         >> 7U))));
}

VL_INLINE_OPT void Vzerocore___024root___sequent__TOP__1(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->zerocore__DOT__rdWriteEnableM = ((IData)(vlSelf->zerocore__DOT__u_id__DOT__Rtype) 
                                             | (0x13U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->RamReadData))));
}

VL_INLINE_OPT void Vzerocore___024root___combo__TOP__0(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->zerocore__DOT__u_ex__DOT__resADD = (vlSelf->zerocore__DOT__rs1Data_D2E__DOT__dout_r 
                                                + ((IData)(
                                                           (0x13ULL 
                                                            == 
                                                            (0x707fULL 
                                                             & vlSelf->RamReadData)))
                                                    ? (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->RamReadData 
                                                                                >> 0x14U)))))
                                                    : vlSelf->zerocore__DOT__rs2Data_D2E__DOT__dout_r));
    vlSelf->zerocore__DOT__u_id__DOT__Rtype = ((0x33U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->RamReadData))) 
                                               | (0x3bU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->RamReadData))));
    vlSelf->zerocore__DOT__rs2ReadAddr = ((IData)(vlSelf->zerocore__DOT__u_id__DOT__Rtype)
                                           ? (0x1fU 
                                              & (IData)(
                                                        (vlSelf->RamReadData 
                                                         >> 0x14U)))
                                           : 0U);
    vlSelf->zerocore__DOT__rs1ReadEnable = ((IData)(vlSelf->zerocore__DOT__u_id__DOT__Rtype) 
                                            | (0x13U 
                                               == (0x7fU 
                                                   & (IData)(vlSelf->RamReadData))));
    vlSelf->zerocore__DOT__rs1ReadAddr = ((IData)(vlSelf->zerocore__DOT__rs1ReadEnable)
                                           ? (0x1fU 
                                              & (IData)(
                                                        (vlSelf->RamReadData 
                                                         >> 0xfU)))
                                           : 0U);
    vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect1_r 
        = ((((0U != (IData)(vlSelf->zerocore__DOT__rs2ReadAddr)) 
             << 1U) | (0U != (IData)(vlSelf->zerocore__DOT__rs1ReadAddr))) 
           & (((((0x1fU & (IData)((vlSelf->RamReadData 
                                   >> 7U))) == (IData)(vlSelf->zerocore__DOT__rs2ReadAddr)) 
                & (IData)(vlSelf->zerocore__DOT__u_id__DOT__Rtype)) 
               << 1U) | (((0x1fU & (IData)((vlSelf->RamReadData 
                                            >> 7U))) 
                          == (IData)(vlSelf->zerocore__DOT__rs1ReadAddr)) 
                         & (IData)(vlSelf->zerocore__DOT__rs1ReadEnable))));
}

void Vzerocore___024root___eval(Vzerocore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vzerocore___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vzerocore___024root___sequent__TOP__1(vlSelf);
    }
    Vzerocore___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
