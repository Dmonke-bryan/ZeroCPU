// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvcpu.h for the primary calling header

#include "verilated.h"

#include "Vrvcpu___024root.h"

VL_INLINE_OPT void Vrvcpu___024root___sequent__TOP__0(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vdly__rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r;
    SData/*9:0*/ __Vdly__rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r;
    SData/*10:0*/ __Vdly__rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r;
    QData/*63:0*/ __Vdly__rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r;
    QData/*63:0*/ __Vdly__rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r;
    CData/*5:0*/ __Vdly__rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r;
    CData/*4:0*/ __Vdlyvdim0__rvcpu__DOT__Regfile__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__rvcpu__DOT__Regfile__DOT__regs__v1;
    QData/*63:0*/ __Vdlyvval__rvcpu__DOT__Regfile__DOT__regs__v1;
    CData/*0:0*/ __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v1;
    CData/*0:0*/ __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v2;
    // Body
    __Vdly__rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r 
        = vlSelf->rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r;
    __Vdly__rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r 
        = vlSelf->rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r;
    __Vdly__rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r 
        = vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r;
    __Vdly__rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r 
        = vlSelf->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r;
    __Vdly__rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r 
        = vlSelf->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r;
    __Vdly__rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r 
        = vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r;
    __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v1 = 0U;
    __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v2 = 0U;
    __Vdly__rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                                           ? vlSelf->rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r
                                           : vlSelf->pcF));
    vlSelf->rvcpu__DOT__If_stage__DOT__pcEnableF_dff__DOT__qout_r 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                                              ? (IData)(vlSelf->rvcpu__DOT__If_stage__DOT__pcEnableF_dff__DOT__qout_r)
                                              : (~ (IData)(vlSelf->rst)))));
    __Vdly__rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->rvcpu__DOT__flushD)
                                         ? 0U : ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                                                  ? (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r)
                                                  : (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__memFuncE_r))));
    vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteEnableM_clk_diff__DOT__qout_r 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->rvcpu__DOT__flushD)) 
                                       & ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                                           ? (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteEnableM_clk_diff__DOT__qout_r)
                                           : (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__RamWriteEnableE_dff__DOT__qout_r))));
    vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadEnableM_clk_diff__DOT__qout_r 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->rvcpu__DOT__flushD)) 
                                       & ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                                           ? (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadEnableM_clk_diff__DOT__qout_r)
                                           : (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__RamReadEnableE_dff__DOT__qout_r))));
    if (vlSelf->rst) {
        __Vdly__rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r = 0U;
        vlSelf->rvcpu__DOT__If_stage__DOT__pc = 0ULL;
    } else {
        __Vdly__rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r 
            = ((IData)(vlSelf->rvcpu__DOT__flushD) ? 0U
                : ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                    ? (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)
                    : (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r)));
        vlSelf->rvcpu__DOT__If_stage__DOT__pc = ((IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_dff__DOT__qout_r)
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r)
                                                  : 
                                                 ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                                                   ? vlSelf->rvcpu__DOT__If_stage__DOT__pc
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->rvcpu__DOT__If_stage__DOT__pc)));
    }
    vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_dff__DOT__qout_r 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->rvcpu__DOT__flushD)) 
                                       & ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                                           ? (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_dff__DOT__qout_r)
                                           : (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_r))));
    if (vlSelf->rst) {
        vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r = 0ULL;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r = 0ULL;
        vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r = 0U;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r = 0ULL;
        __Vdly__rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r = 0ULL;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r = 0U;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r = 0ULL;
        __Vdly__rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r = 0ULL;
    } else if (vlSelf->rvcpu__DOT__flushD) {
        vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r = 0ULL;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r = 0ULL;
        vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r = 0U;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r = 0ULL;
        __Vdly__rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r = 0ULL;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r = 0U;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r = 0ULL;
        __Vdly__rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r = 0ULL;
    } else if (vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r) {
        vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r 
            = vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r 
            = vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r;
        vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r 
            = vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r 
            = vlSelf->rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r;
        __Vdly__rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r 
            = vlSelf->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r 
            = vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r 
            = vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r;
        __Vdly__rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r 
            = vlSelf->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r;
    } else {
        if (vlSelf->rst) {
            vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r = 0ULL;
            vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r = 0ULL;
        } else {
            vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r 
                = vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD;
            vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r 
                = vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD;
        }
        vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r 
            = vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_r;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r 
            = ((IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_r)
                ? vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD
                : 0ULL);
        __Vdly__rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r 
            = vlSelf->rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r 
            = vlSelf->rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r 
            = ((IData)(vlSelf->rst) ? 0ULL : vlSelf->rvcpu__DOT__Exe_stage__DOT__rs2Data);
        __Vdly__rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r 
            = vlSelf->rvcpu__DOT__Id_stage__DOT__imm_r;
    }
    vlSelf->rvcpu__DOT__Id_stage__DOT__RamWriteEnableE_dff__DOT__qout_r 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->rvcpu__DOT__flushD)) 
                                       & ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                                           ? (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__RamWriteEnableE_dff__DOT__qout_r)
                                           : (0x23U 
                                              == (0x7fU 
                                                  & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    vlSelf->rvcpu__DOT__Id_stage__DOT__RamReadEnableE_dff__DOT__qout_r 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->rvcpu__DOT__flushD)) 
                                       & ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                                           ? (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__RamReadEnableE_dff__DOT__qout_r)
                                           : (3U == 
                                              (0x7fU 
                                               & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    if (vlSelf->rst) {
        vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r = 0U;
        vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r = 0U;
        vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r = 0U;
        __Vdly__rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r = 0U;
        vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r = 0U;
        vlSelf->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r = 0ULL;
        vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r = 0U;
        vlSelf->rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r = 0ULL;
        vlSelf->rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r = 0ULL;
        __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v0 = 1U;
        __Vdlyvdim0__rvcpu__DOT__Regfile__DOT__regs__v0 
            = vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r;
    } else {
        vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r 
            = ((IData)(vlSelf->rvcpu__DOT__flushD) ? 0U
                : ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                    ? (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r)
                    : (((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r) 
                        << 5U) | ((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                                   ? (0x1fU & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 7U))
                                   : 0U))));
        if (vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r) {
            vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r 
                = vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r;
            vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r 
                = vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r;
        } else {
            vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r 
                = vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_r;
            vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r 
                = vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad;
        }
        __Vdly__rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r 
            = ((IData)(vlSelf->rvcpu__DOT__flushD) ? 0U
                : ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                    ? (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r)
                    : (((0x37U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                        << 9U) | (((0x17U == (0x7fU 
                                              & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                   << 8U) | (((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                              << 7U) 
                                             | (((IData)(
                                                         (0x206fU 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                 << 6U) 
                                                | (((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                    << 5U) 
                                                   | (((3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                       << 4U) 
                                                      | (((0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                          << 3U) 
                                                         | ((((0x13U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                              | (0x1bU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                             << 2U) 
                                                            | ((((0x33U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                 | (0x3bU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                << 1U) 
                                                               | ((0x1bU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                  | (0x3bU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))))))))))));
        vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r 
            = ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                ? (IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r)
                : ((~ (IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_r)) 
                   & (((((0x1fU & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                         == (IData)(vlSelf->rvcpu__DOT__rs2ReadAddr)) 
                        & (IData)(vlSelf->rvcpu__DOT__rs2ReadEnable)) 
                       << 1U) | (((0x1fU & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                  == (IData)(vlSelf->rvcpu__DOT__rs1ReadAddr)) 
                                 & (IData)(vlSelf->rvcpu__DOT__rs1ReadEnable)))));
        vlSelf->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r 
            = ((IData)(vlSelf->rvcpu__DOT__flushD) ? 0ULL
                : ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                    ? vlSelf->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r
                    : ((IData)(vlSelf->rst) ? 0ULL : 
                       ((IData)((0U != (0xc0U & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                         ? (4ULL + vlSelf->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)
                         : ((1U & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                             ? (QData)((IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__result))
                             : ((0x100U & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                 ? vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD
                                 : ((0x200U & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                     ? vlSelf->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r
                                     : vlSelf->rvcpu__DOT__Exe_stage__DOT__result)))))));
        vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
            = ((IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r)
                ? vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r
                : vlSelf->instF);
        if (vlSelf->rvcpu__DOT__flushD) {
            vlSelf->rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r = 0ULL;
            vlSelf->rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r = 0ULL;
        } else if (vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r) {
            vlSelf->rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r 
                = vlSelf->rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r;
            vlSelf->rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r 
                = vlSelf->rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r;
        } else if (vlSelf->rst) {
            vlSelf->rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r = 0ULL;
            vlSelf->rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r = 0ULL;
        } else {
            vlSelf->rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r 
                = ((IData)(vlSelf->rvcpu__DOT__rs1ReadEnable)
                    ? (((IData)(vlSelf->rvcpu__DOT__rs1ReadAddr) 
                        == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                        ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                        : vlSelf->rvcpu__DOT__Regfile__DOT__regs
                       [vlSelf->rvcpu__DOT__rs1ReadAddr])
                    : 0ULL);
            vlSelf->rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r 
                = ((IData)(vlSelf->rvcpu__DOT__rs2ReadEnable)
                    ? (((IData)(vlSelf->rvcpu__DOT__rs2ReadAddr) 
                        == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                        ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                        : vlSelf->rvcpu__DOT__Regfile__DOT__regs
                       [vlSelf->rvcpu__DOT__rs2ReadAddr])
                    : 0ULL);
        }
        if (vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) {
            __Vdlyvval__rvcpu__DOT__Regfile__DOT__regs__v1 
                = vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r;
            __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v1 = 1U;
            __Vdlyvdim0__rvcpu__DOT__Regfile__DOT__regs__v1 
                = vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r;
        } else {
            __Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v2 = 1U;
        }
    }
    vlSelf->rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r 
        = __Vdly__rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r;
    vlSelf->rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r 
        = __Vdly__rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r;
    vlSelf->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r 
        = __Vdly__rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r;
    vlSelf->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r 
        = __Vdly__rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r;
    vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r 
        = __Vdly__rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r;
    if (__Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v0) {
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[__Vdlyvdim0__rvcpu__DOT__Regfile__DOT__regs__v0] = 0ULL;
    }
    if (__Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v1) {
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[__Vdlyvdim0__rvcpu__DOT__Regfile__DOT__regs__v1] 
            = __Vdlyvval__rvcpu__DOT__Regfile__DOT__regs__v1;
    }
    if (__Vdlyvset__rvcpu__DOT__Regfile__DOT__regs__v2) {
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0U] = 0ULL;
    }
    vlSelf->pcEnableF = vlSelf->rvcpu__DOT__If_stage__DOT__pcEnableF_dff__DOT__qout_r;
    if ((((((((((0x400U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                | (0x200U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
               | ((0x100U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                  | (0x80U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))) 
              | ((0x40U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                 | (0x20U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))) 
             | (0x10U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
            | (8U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
           | (4U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
          | (2U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
         | (1U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))) {
        if ((1U & (~ ((0x400U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                      | (0x200U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))))) {
            if ((1U & (~ ((0x100U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                          | (0x80U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))))) {
                if ((1U & (~ ((0x40U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                              | (0x20U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))))) {
                    if ((0x10U != (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) {
                        vlSelf->rvcpu__DOT__Mem_stage__DOT__RamWriteMask_r 
                            = ((8U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                ? 0xffULL : ((4U == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                              ? 0xffffULL
                                              : ((2U 
                                                  == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                  ? 0xffffffffULL
                                                  : 0xffffffffffffffffULL)));
                    }
                }
            }
        }
    } else {
        vlSelf->rvcpu__DOT__Mem_stage__DOT__RamWriteMask_r = 0ULL;
    }
    vlSelf->rvcpu__DOT__Id_stage__DOT__memFuncE_r = 
        (((IData)((3U == (0x707fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
          << 0xaU) | (((IData)((0x4003U == (0x707fU 
                                            & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                       << 9U) | (((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                  << 8U) | (((IData)(
                                                     (0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                             << 7U) 
                                            | (((IData)(
                                                        (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                << 6U) 
                                               | (((IData)(
                                                           (0x6003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                   << 5U) 
                                                  | (((IData)(
                                                              (0x3003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                      << 4U) 
                                                     | (((IData)(
                                                                 (0x23U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                         << 3U) 
                                                        | (((IData)(
                                                                    (0x1023U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                            << 2U) 
                                                           | (((IData)(
                                                                       (0x2023U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                               << 1U) 
                                                              | (IData)(
                                                                        (0x3023U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))))))))))));
    vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_r 
        = ((((((IData)((0x33U == (0xfe00707fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
               | (IData)((0x13U == (0x707fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
              | (IData)((0x3bU == (0xfe00707fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
             | (IData)((0x1bU == (0x707fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
            << 0xdU) | (((IData)((0x40000033U == (0xfe00707fU 
                                                  & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                         << 0xcU) | ((((((IData)((0x1033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                         | (IData)(
                                                   (0x1013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                        | (IData)((0x103bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                       | (IData)((0x101bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                      << 0xbU) | ((
                                                   (((IData)(
                                                             (0x2033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                     | (IData)(
                                                               (0x2013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                    | (IData)(
                                                              (0x4063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                   << 0xaU) 
                                                  | (((((IData)(
                                                                (0x3033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                        | (IData)(
                                                                  (0x3013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                       | (IData)(
                                                                 (0x6063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                      << 9U) 
                                                     | ((((((IData)(
                                                                    (0x5033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                            | (IData)(
                                                                      (0x5013U 
                                                                       == 
                                                                       (0xfc00707fU 
                                                                        & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                           | (IData)(
                                                                     (0x503bU 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                          | (IData)(
                                                                    (0x501bU 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                         << 8U) 
                                                        | ((((((IData)(
                                                                       (0x40005033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                               | (IData)(
                                                                         (0x40005013U 
                                                                          == 
                                                                          (0xfc00707fU 
                                                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                              | (IData)(
                                                                        (0x4000503bU 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                             | (IData)(
                                                                       (0x4000501bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                            << 7U) 
                                                           | ((((IData)(
                                                                        (0x4033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                | (IData)(
                                                                          (0x4013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                               << 6U) 
                                                              | ((((IData)(
                                                                           (0x6033U 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                   | (IData)(
                                                                             (0x6013U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                                  << 5U) 
                                                                 | ((((IData)(
                                                                              (0x7033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                      | (IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                                     << 4U) 
                                                                    | (((IData)(
                                                                                (0x5063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                        << 3U) 
                                                                       | (((IData)(
                                                                                (0x7063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                           << 2U) 
                                                                          | (((IData)(
                                                                                (0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                              << 1U) 
                                                                             | (IData)(
                                                                                (0x1063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))))))))))))));
    vlSelf->rvcpu__DOT__Id_stage__DOT__Utype = ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                | (0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)));
    vlSelf->rvcpu__DOT__Id_stage__DOT__Itype = ((((
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                    | (0xfU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                   | (0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                  | (0x73U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                 | (0x1bU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                | (0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)));
    vlSelf->rvcpu__DOT__Id_stage__DOT__Rtype = ((0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                | (0x3bU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)));
    vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r 
        = ((~ (IData)(vlSelf->rst)) & (0U != (IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad)));
    vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r) 
                                       >> 5U));
    if (vlSelf->rst) {
        vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r = 0U;
        vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r = 0ULL;
    } else {
        vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r 
            = (0x1fU & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r));
        vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r 
            = vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r;
    }
    vlSelf->rvcpu__DOT__Id_stage__DOT__imm_r = ((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                      >> 0x1fU)))) 
                                                  << 0xdU) 
                                                 | (QData)((IData)(
                                                                   ((0x1000U 
                                                                     & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                        >> 0x13U)) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                           << 4U)) 
                                                                       | ((0x7e0U 
                                                                           & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                              >> 0x14U)) 
                                                                          | (0x1eU 
                                                                             & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                                >> 7U))))))))
                                                 : 
                                                ((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                           >> 7U))))))
                                                  : 
                                                 ((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__Itype)
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                      >> 0x14U))))
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                         >> 0x1fU)))) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      ((0x100000U 
                                                                        & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                           >> 0xbU)) 
                                                                       | ((0xff000U 
                                                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                                >> 9U)) 
                                                                             | (0x7feU 
                                                                                & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                                >> 0x14U))))))))
                                                    : 
                                                   ((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__Utype)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0xfffff000U 
                                                                        & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))
                                                     : 0ULL)))));
    vlSelf->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r 
        = ((((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__Rtype) 
             | (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__Itype)) 
            | (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__Utype)) 
           | (0x6fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)));
    vlSelf->rvcpu__DOT__rs2ReadEnable = (((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__Rtype) 
                                          | (0x23U 
                                             == (0x7fU 
                                                 & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)));
    vlSelf->rvcpu__DOT__rs1ReadEnable = ((((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__Rtype) 
                                           | (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__Itype)) 
                                          | (0x23U 
                                             == (0x7fU 
                                                 & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)));
    vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r 
        = __Vdly__rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r;
    vlSelf->rvcpu__DOT__rs2ReadAddr = ((IData)(vlSelf->rvcpu__DOT__rs2ReadEnable)
                                        ? (0x1fU & 
                                           (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0x14U))
                                        : 0U);
    vlSelf->rvcpu__DOT__rs1ReadAddr = ((IData)(vlSelf->rvcpu__DOT__rs1ReadEnable)
                                        ? (0x1fU & 
                                           (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0xfU))
                                        : 0U);
    vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data = (
                                                   (1U 
                                                    & (IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r))
                                                    ? vlSelf->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r))
                                                     ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r))
                                                      ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                      : vlSelf->rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r)));
    vlSelf->rvcpu__DOT__Exe_stage__DOT__rs2Data = (
                                                   (2U 
                                                    & (IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r))
                                                    ? vlSelf->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r))
                                                     ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r))
                                                      ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                      : vlSelf->rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r)));
    vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_r = ((~ 
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                                  >> 4U))))) 
                                                  & (((((0x1fU 
                                                         & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r)) 
                                                        == (IData)(vlSelf->rvcpu__DOT__rs2ReadAddr)) 
                                                       & (IData)(vlSelf->rvcpu__DOT__rs2ReadEnable)) 
                                                      << 1U) 
                                                     | (((0x1fU 
                                                          & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r)) 
                                                         == (IData)(vlSelf->rvcpu__DOT__rs1ReadAddr)) 
                                                        & (IData)(vlSelf->rvcpu__DOT__rs1ReadEnable))));
    vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad = ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                              >> 4U)))) 
                                               & (((((0x1fU 
                                                      & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r)) 
                                                     == (IData)(vlSelf->rvcpu__DOT__rs2ReadAddr)) 
                                                    & (IData)(vlSelf->rvcpu__DOT__rs2ReadEnable)) 
                                                   << 1U) 
                                                  | (((0x1fU 
                                                       & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r)) 
                                                      == (IData)(vlSelf->rvcpu__DOT__rs1ReadAddr)) 
                                                     & (IData)(vlSelf->rvcpu__DOT__rs1ReadEnable))));
    vlSelf->rvcpu__DOT__Exe_stage__DOT__op2 = ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x24U 
                                                         & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                                ? vlSelf->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r
                                                : vlSelf->rvcpu__DOT__Exe_stage__DOT__rs2Data);
    vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1a0U 
                                                             & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                                    ? vlSelf->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                                                    : vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data) 
                                                  + 
                                                  ((2U 
                                                    & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                    ? vlSelf->rvcpu__DOT__Exe_stage__DOT__rs2Data
                                                    : vlSelf->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r));
    vlSelf->rvcpu__DOT__Exe_stage__DOT__result = ((1U 
                                                   & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                                      != vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                                       == vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                     ? (QData)((IData)(
                                                                       VL_GTS_IQQ(64, vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data, vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                      ? (QData)((IData)(
                                                                        (vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                                         > vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                       ? 
                                                      (vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                       & vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)
                                                       : 
                                                      ((0x20U 
                                                        & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                        ? 
                                                       (vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                        | vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)
                                                        : 
                                                       ((0x40U 
                                                         & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                         ? 
                                                        (vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                         ^ vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)
                                                         : 
                                                        ((0x80U 
                                                          & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                          ? 
                                                         VL_SHIFTRS_QQI(64,64,6, vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data, 
                                                                        (0x3fU 
                                                                         & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                          : 
                                                         ((0x100U 
                                                           & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                           ? 
                                                          (vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                           : 
                                                          ((0x200U 
                                                            & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                            ? (QData)((IData)(
                                                                              VL_LTS_IQQ(64, vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data, vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                            : 
                                                           ((0x400U 
                                                             & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                             ? (QData)((IData)(
                                                                               (vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                                                < vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                             : 
                                                            ((0x800U 
                                                              & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                              ? 
                                                             (vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                              << 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                              : 
                                                             ((0x1000U 
                                                               & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                               ? 
                                                              (vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                               - vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)
                                                               : 
                                                              ((0x2000U 
                                                                & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                                ? vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD
                                                                : 0ULL))))))))))))));
}

VL_INLINE_OPT void Vrvcpu___024root___combo__TOP__0(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___combo__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[1U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[2U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[3U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[4U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[5U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[6U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[7U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[8U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[9U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0xaU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0xbU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0xcU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0xdU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0xeU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0xfU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x10U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x11U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x12U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x13U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x14U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x15U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x16U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x17U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x18U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x19U] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x1aU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x1bU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x1cU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x1dU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x1eU] = 0ULL;
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0x1fU] = 0ULL;
    } else {
        vlSelf->rvcpu__DOT__Regfile__DOT__regs[0U] = 0ULL;
    }
    vlSelf->RamWriteEnable = ((~ (IData)(vlSelf->rst)) 
                              & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteEnableM_clk_diff__DOT__qout_r));
    vlSelf->RamReadEnable = ((~ (IData)(vlSelf->rst)) 
                             & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadEnableM_clk_diff__DOT__qout_r));
    vlSelf->rvcpu__DOT__flushD = ((~ (IData)(vlSelf->rst)) 
                                  & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_dff__DOT__qout_r));
    if (vlSelf->rst) {
        vlSelf->RamReadAddr = 0ULL;
        vlSelf->RamWriteAddr = 0ULL;
        vlSelf->pcF = 0ULL;
    } else {
        vlSelf->RamReadAddr = vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r;
        vlSelf->RamWriteAddr = vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r;
        vlSelf->pcF = ((IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_dff__DOT__qout_r)
                        ? vlSelf->rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r
                        : vlSelf->rvcpu__DOT__If_stage__DOT__pc);
    }
    vlSelf->rvcpu__DOT__Mem_stage__DOT__result = ((
                                                   ((((((((0x400U 
                                                           == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                                                          | (0x200U 
                                                             == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
                                                         | ((0x100U 
                                                             == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                                                            | (0x80U 
                                                               == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))) 
                                                        | ((0x40U 
                                                            == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                                                           | (0x20U 
                                                              == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))) 
                                                       | (0x10U 
                                                          == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
                                                      | (8U 
                                                         == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
                                                     | (4U 
                                                        == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
                                                    | (2U 
                                                       == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
                                                   | (1U 
                                                      == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))
                                                   ? 
                                                  (((0x400U 
                                                     == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                                                    | (0x200U 
                                                       == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))
                                                    ? vlSelf->RamReadData
                                                    : 
                                                   (((0x100U 
                                                      == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                                                     | (0x80U 
                                                        == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))
                                                     ? vlSelf->RamReadData
                                                     : 
                                                    (((0x40U 
                                                       == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                                                      | (0x20U 
                                                         == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))
                                                      ? vlSelf->RamReadData
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                       ? vlSelf->RamReadData
                                                       : vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r))))
                                                   : 0ULL);
    vlSelf->RamWriteMask = ((IData)(vlSelf->rst) ? 0ULL
                             : vlSelf->rvcpu__DOT__Mem_stage__DOT__RamWriteMask_r);
    vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_r = (1U 
                                                  & ((~ (IData)(vlSelf->rst)) 
                                                     & (((((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                           >> 5U) 
                                                          & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__result)) 
                                                         | ((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                            >> 6U)) 
                                                        | ((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                           >> 7U))));
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0U] 
        = vlSelf->rvcpu__DOT__Regfile__DOT__regs[0U];
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[1U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (1U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [1U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[2U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (2U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [2U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[3U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (3U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [3U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[4U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (4U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [4U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[5U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (5U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [5U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[6U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (6U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [6U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[7U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (7U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [7U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[8U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (8U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [8U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[9U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (9U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [9U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0xaU] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0xaU == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0xaU]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0xbU] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0xbU == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0xbU]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0xcU] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0xcU == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0xcU]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0xdU] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0xdU == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0xdU]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0xeU] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0xeU == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0xeU]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0xfU] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0xfU == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0xfU]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x10U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x10U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x10U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x11U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x11U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x11U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x12U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x12U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x12U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x13U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x13U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x13U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x14U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x14U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x14U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x15U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x15U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x15U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x16U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x16U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x16U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x17U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x17U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x17U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x18U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x18U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x18U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x19U] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x19U == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x19U]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x1aU] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x1aU == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x1aU]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x1bU] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x1bU == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x1bU]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x1cU] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x1cU == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x1cU]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x1dU] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x1dU == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x1dU]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x1eU] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x1eU == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x1eU]);
    vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0x1fU] 
        = (((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x1fU == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->rvcpu__DOT__Regfile__DOT__regs
           [0x1fU]);
    vlSelf->RamWriteData = ((IData)(vlSelf->rst) ? 0ULL
                             : vlSelf->rvcpu__DOT__Mem_stage__DOT__result);
    vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r 
        = ((0x400U & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
            ? ((IData)(vlSelf->rst) ? 0ULL : (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->rvcpu__DOT__Mem_stage__DOT__result 
                                                                              >> 7U)))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result))))))
            : ((0x200U & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                ? ((IData)(vlSelf->rst) ? 0ULL : (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result)))))
                : ((0x100U & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                    ? ((IData)(vlSelf->rst) ? 0ULL : 
                       (((- (QData)((IData)((1U & (IData)(
                                                          (vlSelf->rvcpu__DOT__Mem_stage__DOT__result 
                                                           >> 0xfU)))))) 
                         << 0x10U) | (QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result))))))
                    : ((0x80U & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                        ? ((IData)(vlSelf->rst) ? 0ULL
                            : (QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result)))))
                        : ((0x40U & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                            ? ((IData)(vlSelf->rst)
                                ? 0ULL : (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->rvcpu__DOT__Mem_stage__DOT__result 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result))))
                            : ((0x20U & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                ? ((IData)(vlSelf->rst)
                                    ? 0ULL : (QData)((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result)))
                                : ((0x10U & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                    ? ((IData)(vlSelf->rst)
                                        ? 0ULL : vlSelf->rvcpu__DOT__Mem_stage__DOT__result)
                                    : vlSelf->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r)))))));
    vlSelf->regs_o[0U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0U];
    vlSelf->regs_o[1U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [1U];
    vlSelf->regs_o[2U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [2U];
    vlSelf->regs_o[3U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [3U];
    vlSelf->regs_o[4U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [4U];
    vlSelf->regs_o[5U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [5U];
    vlSelf->regs_o[6U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [6U];
    vlSelf->regs_o[7U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [7U];
    vlSelf->regs_o[8U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [8U];
    vlSelf->regs_o[9U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [9U];
    vlSelf->regs_o[0xaU] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0xaU];
    vlSelf->regs_o[0xbU] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0xbU];
    vlSelf->regs_o[0xcU] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0xcU];
    vlSelf->regs_o[0xdU] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0xdU];
    vlSelf->regs_o[0xeU] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0xeU];
    vlSelf->regs_o[0xfU] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0xfU];
    vlSelf->regs_o[0x10U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x10U];
    vlSelf->regs_o[0x11U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x11U];
    vlSelf->regs_o[0x12U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x12U];
    vlSelf->regs_o[0x13U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x13U];
    vlSelf->regs_o[0x14U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x14U];
    vlSelf->regs_o[0x15U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x15U];
    vlSelf->regs_o[0x16U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x16U];
    vlSelf->regs_o[0x17U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x17U];
    vlSelf->regs_o[0x18U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x18U];
    vlSelf->regs_o[0x19U] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x19U];
    vlSelf->regs_o[0x1aU] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x1aU];
    vlSelf->regs_o[0x1bU] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x1bU];
    vlSelf->regs_o[0x1cU] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x1cU];
    vlSelf->regs_o[0x1dU] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x1dU];
    vlSelf->regs_o[0x1eU] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x1eU];
    vlSelf->regs_o[0x1fU] = vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x1fU];
}

void Vrvcpu___024root___eval(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vrvcpu___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vrvcpu___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vrvcpu___024root___eval_debug_assertions(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
