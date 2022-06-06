// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop__Syms.h"
#include "VSimTop___024root.h"

void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

VL_ATTR_COLD void VSimTop___024root___settle__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__0\n"); );
    // Body
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, 
                                                                   ((vlSelf->SimTop__DOT__u_zerocore__DOT__pc 
                                                                     - 0x80000000ULL) 
                                                                    >> 3U), vlSelf->__Vfunc_ram_read_helper__0__Vfuncout);
    vlSelf->SimTop__DOT__ReadData = vlSelf->__Vfunc_ram_read_helper__0__Vfuncout;
    if ((IData)((0x13ULL == (0x707fULL & vlSelf->SimTop__DOT__ReadData)))) {
        vlSelf->SimTop__DOT__u_zerocore__DOT__u_id__DOT__aluCtl__out__out0 = 0U;
    }
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
