// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop__Syms.h"
#include "VSimTop___024root.h"

void VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(QData/*63:0*/ wIdx, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ isRVC, CData/*0:0*/ scFailed, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata);
void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

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
    VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                    ((vlSelf->SimTop__DOT__WriteAddr 
                                                                      - 0x80000000ULL) 
                                                                     >> 3U), vlSelf->SimTop__DOT__WriteData, vlSelf->SimTop__DOT__WriteMask, (IData)(vlSelf->SimTop__DOT__WriteEnable));
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(0U, 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [1U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [2U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [3U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [4U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [5U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [6U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [7U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [8U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [9U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0xaU], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0xbU], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0xcU], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0xdU], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0xeU], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0xfU], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x10U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x11U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x12U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x13U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x14U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x15U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x16U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x17U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x18U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x19U], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x1aU], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x1bU], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x1cU], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x1dU], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x1eU], 
                                                                              vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                                                              [0x1fU]);
    if (vlSelf->SimTop__DOT__r_valid) {
        VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlSelf->SimTop__DOT__r_valid), vlSelf->SimTop__DOT__r_pc, vlSelf->SimTop__DOT__r_inst, 0U, 0U, 0U, (IData)(vlSelf->SimTop__DOT__U_inst_commit__DOT__wen), vlSelf->SimTop__DOT__U_inst_commit__DOT__wdest, vlSelf->SimTop__DOT__U_inst_commit__DOT__wdata);
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__u_zerocore__DOT__pc = 0x80000000ULL;
        __Vdlyvval__SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap__v0 = 0ULL;
    } else {
        __Vdly__SimTop__DOT__u_zerocore__DOT__pc = 
            (4ULL + vlSelf->SimTop__DOT__u_zerocore__DOT__pc);
        __Vdlyvval__SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap__v0 
            = vlSelf->SimTop__DOT__u_zerocore__DOT__rw;
    }
    __Vdlyvdim0__SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap__v0 
        = (0x1fU & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                    >> 7U));
    vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[__Vdlyvdim0__SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap__v0] 
        = __Vdlyvval__SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap__v0;
    vlSelf->SimTop__DOT__r_valid = 1U;
    vlSelf->SimTop__DOT__r_pc = vlSelf->SimTop__DOT__u_zerocore__DOT__pc;
    vlSelf->SimTop__DOT__r_inst = ((1U & (IData)((vlSelf->SimTop__DOT__u_zerocore__DOT__pc 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->SimTop__DOT__ReadData 
                                               >> 0x20U))
                                    : (IData)(vlSelf->SimTop__DOT__ReadData));
    vlSelf->SimTop__DOT__u_zerocore__DOT__instD = ((IData)(vlSelf->reset)
                                                    ? 0U
                                                    : (IData)(vlSelf->SimTop__DOT__ReadData));
    vlSelf->SimTop__DOT__u_zerocore__DOT__pc = __Vdly__SimTop__DOT__u_zerocore__DOT__pc;
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, 
                                                                   ((vlSelf->SimTop__DOT__u_zerocore__DOT__pc 
                                                                     - 0x80000000ULL) 
                                                                    >> 3U), vlSelf->__Vfunc_ram_read_helper__0__Vfuncout);
    vlSelf->SimTop__DOT__ReadData = vlSelf->__Vfunc_ram_read_helper__0__Vfuncout;
}
