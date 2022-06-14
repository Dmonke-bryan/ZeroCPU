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
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    vlSelf->RamReadAddr = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__pcF = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__instM = VL_RAND_RESET_I(32);
    vlSelf->zerocore__DOT__pcM = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__pcD = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__instW = VL_RAND_RESET_I(32);
    vlSelf->zerocore__DOT__pcW = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__instE = VL_RAND_RESET_I(32);
    vlSelf->zerocore__DOT__pcE = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__rs1ReadEnable = VL_RAND_RESET_I(1);
    vlSelf->zerocore__DOT__rs1ReadAddr = VL_RAND_RESET_I(5);
    vlSelf->zerocore__DOT__rs2ReadAddr = VL_RAND_RESET_I(5);
    vlSelf->zerocore__DOT__rdWriteEnableM = VL_RAND_RESET_I(1);
    vlSelf->zerocore__DOT__u_id__DOT__Rtype = VL_RAND_RESET_I(1);
    vlSelf->zerocore__DOT__rs1Data_D2E__DOT__dout_r = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__rs2Data_D2E__DOT__dout_r = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__u_ex__DOT__resADD = VL_RAND_RESET_Q(64);
    vlSelf->zerocore__DOT__u_ex__DOT__rdWriteAddr_E2M__DOT__dout_r = VL_RAND_RESET_I(5);
    vlSelf->zerocore__DOT__u_mem__DOT__rdWriteEnable_M2W__DOT__dout_r = VL_RAND_RESET_I(1);
    vlSelf->zerocore__DOT__u_mem__DOT__rdWriteAddr_M2W__DOT__dout_r = VL_RAND_RESET_I(5);
    vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect1_r = VL_RAND_RESET_I(2);
    vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect1_dff__DOT__dout_r = VL_RAND_RESET_I(2);
    vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect2_dff__DOT__dout_r = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->zerocore__DOT__u_regs__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
