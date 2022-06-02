// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop__Syms.h"
#include "VSimTop___024root.h"

void VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ priviledgeMode, QData/*63:0*/ mstatus, QData/*63:0*/ sstatus, QData/*63:0*/ mepc, QData/*63:0*/ sepc, QData/*63:0*/ mtval, QData/*63:0*/ stval, QData/*63:0*/ mtvec, QData/*63:0*/ stvec, QData/*63:0*/ mcause, QData/*63:0*/ scause, QData/*63:0*/ satp, QData/*63:0*/ mip, QData/*63:0*/ mie, QData/*63:0*/ mscratch, QData/*63:0*/ sscratch, QData/*63:0*/ mideleg, QData/*63:0*/ medeleg);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ fpr_0, QData/*63:0*/ fpr_1, QData/*63:0*/ fpr_2, QData/*63:0*/ fpr_3, QData/*63:0*/ fpr_4, QData/*63:0*/ fpr_5, QData/*63:0*/ fpr_6, QData/*63:0*/ fpr_7, QData/*63:0*/ fpr_8, QData/*63:0*/ fpr_9, QData/*63:0*/ fpr_10, QData/*63:0*/ fpr_11, QData/*63:0*/ fpr_12, QData/*63:0*/ fpr_13, QData/*63:0*/ fpr_14, QData/*63:0*/ fpr_15, QData/*63:0*/ fpr_16, QData/*63:0*/ fpr_17, QData/*63:0*/ fpr_18, QData/*63:0*/ fpr_19, QData/*63:0*/ fpr_20, QData/*63:0*/ fpr_21, QData/*63:0*/ fpr_22, QData/*63:0*/ fpr_23, QData/*63:0*/ fpr_24, QData/*63:0*/ fpr_25, QData/*63:0*/ fpr_26, QData/*63:0*/ fpr_27, QData/*63:0*/ fpr_28, QData/*63:0*/ fpr_29, QData/*63:0*/ fpr_30, QData/*63:0*/ fpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt);
void VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ isRVC, CData/*0:0*/ scFailed, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata);
extern const VlUnpacked<CData/*0:0*/, 64> VSimTop__ConstPool__TABLE_hf9a29547_0;
extern const VlUnpacked<CData/*1:0*/, 64> VSimTop__ConstPool__TABLE_h5e1d8b80_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    CData/*7:0*/ __Vdly__SimTop__DOT__u_axi_rw__DOT__len;
    VlWide<3>/*64:0*/ __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o;
    QData/*63:0*/ __Vdly__SimTop__DOT__if_addr;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__0;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__1;
    VlWide<4>/*127:0*/ __Vtemp_hcf47a88b__0;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__2;
    VlWide<4>/*127:0*/ __Vtemp_h5c610474__0;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__3;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__4;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__5;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__6;
    // Body
    __Vdly__SimTop__DOT__u_axi_rw__DOT__len = vlSelf->SimTop__DOT__u_axi_rw__DOT__len;
    __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U] 
        = vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U];
    __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U] 
        = vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U];
    __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[2U] 
        = vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[2U];
    __Vdly__SimTop__DOT__if_addr = vlSelf->SimTop__DOT__if_addr;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32 = 0U;
    VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(0U, 3U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(0U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(0U, 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [1U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [2U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [3U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [4U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [5U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [6U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [7U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [8U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [9U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xaU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xbU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xcU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xdU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xeU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xfU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x10U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x11U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x12U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x13U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x14U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x15U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x16U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x17U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x18U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x19U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1aU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1bU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1cU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1dU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1eU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1fU]);
    VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap), 
                                                                        (7U 
                                                                         & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code)), vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc, vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt, vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt);
    if (vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid) {
        VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid), vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc, vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst, 0U, 0U, 0U, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen), vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest, vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata);
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_axi_rw__DOT__w_state = 0U;
        vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_resp = 0U;
    } else if (vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done) {
        vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_resp 
            = (1U & (IData)(vlSelf->io_memAXI_0_r_bits_resp));
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__fetched = ((~ (IData)(vlSelf->reset)) 
                                                & (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready));
    if (((IData)(vlSelf->reset) | (0U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state)))) {
        __Vdly__SimTop__DOT__u_axi_rw__DOT__len = 0U;
    } else if (vlSelf->SimTop__DOT__u_axi_rw__DOT__len_incr_en) {
        __Vdly__SimTop__DOT__u_axi_rw__DOT__len = (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__len)));
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U] = 0U;
        __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U] = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__pc = 0x80000000ULL;
        __Vdly__SimTop__DOT__if_addr = 0x80000000ULL;
    } else {
        if (((2U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state)) 
             & (IData)(vlSelf->io_memAXI_0_r_valid))) {
            VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__0, vlSelf->SimTop__DOT__if_addr);
            VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__1, vlSelf->SimTop__DOT__if_addr);
            if ((1U & ((0U != (7U & __Vtemp_hae6f3975__0[0U])) 
                       & (((IData)(3U) + (7U & __Vtemp_hae6f3975__1[0U])) 
                          >> 3U)))) {
                __Vtemp_hcf47a88b__0[0U] = 0xffffffffU;
                __Vtemp_hcf47a88b__0[1U] = 0U;
                __Vtemp_hcf47a88b__0[2U] = 0U;
                __Vtemp_hcf47a88b__0[3U] = 0U;
                VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__2, vlSelf->SimTop__DOT__if_addr);
                VL_SHIFTL_WWI(128,128,6, __Vtemp_h5c610474__0, __Vtemp_hcf47a88b__0, 
                              (0x38U & (__Vtemp_hae6f3975__2[0U] 
                                        << 3U)));
                VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__3, vlSelf->SimTop__DOT__if_addr);
                __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U] 
                    = (IData)(((1U & (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__len))
                                ? ((((QData)((IData)(
                                                     vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U]))) 
                                   | ((vlSelf->io_memAXI_0_r_bits_data
                                       [0U] & (((QData)((IData)(
                                                                __Vtemp_h5c610474__0[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 __Vtemp_h5c610474__0[2U])))) 
                                      << (0x3fU & (- 
                                                   (0x38U 
                                                    & (__Vtemp_hae6f3975__3[0U] 
                                                       << 3U))))))
                                : vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_r_data_l));
                __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U] 
                    = (IData)((((1U & (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__len))
                                 ? ((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U]))) 
                                    | ((vlSelf->io_memAXI_0_r_bits_data
                                        [0U] & (((QData)((IData)(
                                                                 __Vtemp_h5c610474__0[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  __Vtemp_h5c610474__0[2U])))) 
                                       << (0x3fU & 
                                           (- (0x38U 
                                               & (__Vtemp_hae6f3975__3[0U] 
                                                  << 3U))))))
                                 : vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_r_data_l) 
                               >> 0x20U));
            } else if ((0U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__len))) {
                __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U] 
                    = (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_r_data_l);
                __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U] 
                    = (IData)((vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_r_data_l 
                               >> 0x20U));
            }
        }
        if (vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready) {
            vlSelf->SimTop__DOT__u_cpu__DOT__pc = vlSelf->SimTop__DOT__if_addr;
            __Vdly__SimTop__DOT__if_addr = (4ULL + vlSelf->SimTop__DOT__if_addr);
        }
    }
    __Vtableidx1 = (2U | (((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done) 
                           << 5U) | (((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__ar_hs) 
                                      << 4U) | (((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state) 
                                                 << 2U) 
                                                | (IData)(vlSelf->reset)))));
    if (VSimTop__ConstPool__TABLE_hf9a29547_0[__Vtableidx1]) {
        vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state 
            = VSimTop__ConstPool__TABLE_h5e1d8b80_0
            [__Vtableidx1];
    }
    if (vlSelf->reset) {
        __Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v0 = 1U;
    } else if (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_ena) 
                & (0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr)))) {
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rd_data;
        __Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready) {
            vlSelf->SimTop__DOT__u_cpu__DOT__inst = 
                vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U];
        }
    }
    vlSelf->SimTop__DOT__u_axi_rw__DOT__len = __Vdly__SimTop__DOT__u_axi_rw__DOT__len;
    vlSelf->SimTop__DOT__if_addr = __Vdly__SimTop__DOT__if_addr;
    if (__Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[1U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[2U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[3U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[4U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[5U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[6U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[7U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[8U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[9U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0xaU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0xbU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0xcU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0xdU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0xeU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0xfU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x10U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x11U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x12U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x13U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x14U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x15U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x16U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x17U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x18U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x19U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x1aU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x1bU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x1cU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x1dU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x1eU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32) {
        vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[__Vdlyvdim0__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs__v32;
    }
    vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U] 
        = __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U];
    vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U] 
        = __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U];
    vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[2U] 
        = __Vdly__SimTop__DOT____Vcellout__u_axi_rw__data_read_o[2U];
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__4, vlSelf->SimTop__DOT__if_addr);
    vlSelf->io_memAXI_0_ar_bits_addr = (0xfffffffffffffff8ULL 
                                        & (((QData)((IData)(
                                                            __Vtemp_hae6f3975__4[1U])) 
                                            << 0x20U) 
                                           | (0xfffffffffffffff8ULL 
                                              & (QData)((IData)(
                                                                __Vtemp_hae6f3975__4[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__5, vlSelf->SimTop__DOT__if_addr);
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__6, vlSelf->SimTop__DOT__if_addr);
    vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_len = (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp_hae6f3975__5[0U]))
                                                    ? 0U
                                                    : 
                                                   (1U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        (7U 
                                                         & __Vtemp_hae6f3975__6[0U])) 
                                                       >> 3U)));
    vlSelf->io_memAXI_0_ar_valid = (1U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state));
    vlSelf->io_memAXI_0_r_ready = (2U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state));
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
        [0U];
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready = 0U;
    } else if (vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready_en) {
        vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready 
            = vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done;
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__Id_stage__DOT__inst_addi 
        = (IData)((0x10U == (0x703cU & vlSelf->SimTop__DOT__u_cpu__DOT__inst)));
    vlSelf->io_memAXI_0_ar_bits_len = vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_len;
}
