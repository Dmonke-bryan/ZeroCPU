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
    if ((IData)((0x13U == (0x707fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)))) {
        vlSelf->SimTop__DOT__u_zerocore__DOT__u_id__DOT__aluCtl__out__out0 = 0U;
    }
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, 
                                                                   ((vlSelf->SimTop__DOT__u_zerocore__DOT__pc 
                                                                     - 0x80000000ULL) 
                                                                    >> 3U), vlSelf->__Vfunc_ram_read_helper__0__Vfuncout);
    vlSelf->SimTop__DOT__ReadData = vlSelf->__Vfunc_ram_read_helper__0__Vfuncout;
}
