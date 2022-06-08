// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop__Syms.h"
#include "VSimTop___024root.h"

void VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(QData/*63:0*/ wIdx, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);
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
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, 
                                                                   ((vlSelf->SimTop__DOT__u_zerocore__DOT__pc 
                                                                     - 0x80000000ULL) 
                                                                    >> 3U), vlSelf->__Vfunc_ram_read_helper__0__Vfuncout);
    vlSelf->SimTop__DOT__ReadData = vlSelf->__Vfunc_ram_read_helper__0__Vfuncout;
}
