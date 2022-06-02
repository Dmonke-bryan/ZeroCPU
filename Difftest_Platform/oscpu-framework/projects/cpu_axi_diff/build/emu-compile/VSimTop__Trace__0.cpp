// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__trace_chg_sub_0(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

void VSimTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_top_0\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSimTop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VSimTop___024root__trace_chg_sub_0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__0;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__1;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__2;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__3;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__4;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__5;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__6;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__7;
    VlWide<4>/*127:0*/ __Vtemp_hcf47a88b__0;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__8;
    VlWide<4>/*127:0*/ __Vtemp_he9eb5b00__0;
    VlWide<4>/*127:0*/ __Vtemp_hcf47a88b__1;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__9;
    VlWide<4>/*127:0*/ __Vtemp_h4038c311__0;
    VlWide<4>/*127:0*/ __Vtemp_hcf47a88b__2;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__10;
    VlWide<4>/*127:0*/ __Vtemp_h604c0fc1__0;
    VlWide<4>/*127:0*/ __Vtemp_hcf47a88b__3;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__11;
    VlWide<4>/*127:0*/ __Vtemp_hab772c2a__0;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__12;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgBit(oldp+0,(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_hs));
        tracep->chgBit(oldp+1,(((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_hs) 
                                & (IData)(vlSelf->SimTop__DOT__w_last))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+2,((1U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state))));
        VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__0, vlSelf->SimTop__DOT__if_addr);
        tracep->chgQData(oldp+3,((0xfffffffffffffff8ULL 
                                  & (((QData)((IData)(
                                                      __Vtemp_hae6f3975__0[1U])) 
                                      << 0x20U) | (0xfffffffffffffff8ULL 
                                                   & (QData)((IData)(
                                                                     __Vtemp_hae6f3975__0[0U])))))),64);
        tracep->chgCData(oldp+5,(vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_len),8);
        tracep->chgBit(oldp+6,((2U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state))));
        tracep->chgBit(oldp+7,(vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready));
        tracep->chgQData(oldp+8,((((QData)((IData)(
                                                   vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U])))),64);
        tracep->chgQData(oldp+10,(vlSelf->SimTop__DOT__if_addr),64);
        tracep->chgCData(oldp+12,(vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_resp),2);
        tracep->chgWData(oldp+13,(vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o),65);
        VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__1, vlSelf->SimTop__DOT__if_addr);
        tracep->chgWData(oldp+16,(__Vtemp_hae6f3975__1),65);
        tracep->chgCData(oldp+19,(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_state),2);
        tracep->chgCData(oldp+20,(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state),2);
        tracep->chgBit(oldp+21,((0U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_state))));
        tracep->chgBit(oldp+22,((1U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_state))));
        tracep->chgBit(oldp+23,((2U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_state))));
        tracep->chgBit(oldp+24,((3U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_state))));
        tracep->chgBit(oldp+25,((0U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state))));
        tracep->chgCData(oldp+26,(vlSelf->SimTop__DOT__u_axi_rw__DOT__len),8);
        VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__2, vlSelf->SimTop__DOT__if_addr);
        tracep->chgBit(oldp+27,((0U == (7U & __Vtemp_hae6f3975__2[0U]))));
        VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__3, vlSelf->SimTop__DOT__if_addr);
        tracep->chgCData(oldp+28,((7U & __Vtemp_hae6f3975__3[0U])),4);
        VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__4, vlSelf->SimTop__DOT__if_addr);
        tracep->chgCData(oldp+29,((0xfU & ((IData)(3U) 
                                           + (7U & 
                                              __Vtemp_hae6f3975__4[0U])))),4);
        VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__5, vlSelf->SimTop__DOT__if_addr);
        tracep->chgBit(oldp+30,((1U & (((IData)(3U) 
                                        + (7U & __Vtemp_hae6f3975__5[0U])) 
                                       >> 3U))));
        VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__6, vlSelf->SimTop__DOT__if_addr);
        tracep->chgCData(oldp+31,((0x38U & (__Vtemp_hae6f3975__6[0U] 
                                            << 3U))),6);
        VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__7, vlSelf->SimTop__DOT__if_addr);
        tracep->chgCData(oldp+32,((0x3fU & (- (0x38U 
                                               & (__Vtemp_hae6f3975__7[0U] 
                                                  << 3U))))),6);
        __Vtemp_hcf47a88b__0[0U] = 0xffffffffU;
        __Vtemp_hcf47a88b__0[1U] = 0U;
        __Vtemp_hcf47a88b__0[2U] = 0U;
        __Vtemp_hcf47a88b__0[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__8, vlSelf->SimTop__DOT__if_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp_he9eb5b00__0, __Vtemp_hcf47a88b__0, 
                      (0x38U & (__Vtemp_hae6f3975__8[0U] 
                                << 3U)));
        tracep->chgWData(oldp+33,(__Vtemp_he9eb5b00__0),128);
        __Vtemp_hcf47a88b__1[0U] = 0xffffffffU;
        __Vtemp_hcf47a88b__1[1U] = 0U;
        __Vtemp_hcf47a88b__1[2U] = 0U;
        __Vtemp_hcf47a88b__1[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__9, vlSelf->SimTop__DOT__if_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp_h4038c311__0, __Vtemp_hcf47a88b__1, 
                      (0x38U & (__Vtemp_hae6f3975__9[0U] 
                                << 3U)));
        tracep->chgQData(oldp+37,((((QData)((IData)(
                                                    __Vtemp_h4038c311__0[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp_h4038c311__0[0U])))),64);
        __Vtemp_hcf47a88b__2[0U] = 0xffffffffU;
        __Vtemp_hcf47a88b__2[1U] = 0U;
        __Vtemp_hcf47a88b__2[2U] = 0U;
        __Vtemp_hcf47a88b__2[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__10, vlSelf->SimTop__DOT__if_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp_h604c0fc1__0, __Vtemp_hcf47a88b__2, 
                      (0x38U & (__Vtemp_hae6f3975__10[0U] 
                                << 3U)));
        tracep->chgQData(oldp+39,((((QData)((IData)(
                                                    __Vtemp_h604c0fc1__0[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp_h604c0fc1__0[2U])))),64);
        tracep->chgQData(oldp+41,(vlSelf->SimTop__DOT__u_cpu__DOT__pc),64);
        tracep->chgIData(oldp+43,(vlSelf->SimTop__DOT__u_cpu__DOT__inst),32);
        tracep->chgBit(oldp+44,(vlSelf->SimTop__DOT__u_cpu__DOT__fetched));
        tracep->chgBit(oldp+45,(vlSelf->SimTop__DOT__u_cpu__DOT__Id_stage__DOT__inst_addi));
        tracep->chgCData(oldp+46,((0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst)),7);
        tracep->chgCData(oldp+47,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+48,((7U & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+49,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                            >> 0xfU))),5);
        tracep->chgSData(oldp+50,((vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                   >> 0x14U)),12);
        tracep->chgQData(oldp+51,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0]),64);
        tracep->chgQData(oldp+53,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[1]),64);
        tracep->chgQData(oldp+55,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[2]),64);
        tracep->chgQData(oldp+57,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[3]),64);
        tracep->chgQData(oldp+59,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[4]),64);
        tracep->chgQData(oldp+61,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[5]),64);
        tracep->chgQData(oldp+63,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[6]),64);
        tracep->chgQData(oldp+65,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[7]),64);
        tracep->chgQData(oldp+67,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[8]),64);
        tracep->chgQData(oldp+69,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[9]),64);
        tracep->chgQData(oldp+71,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[10]),64);
        tracep->chgQData(oldp+73,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[11]),64);
        tracep->chgQData(oldp+75,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[12]),64);
        tracep->chgQData(oldp+77,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[13]),64);
        tracep->chgQData(oldp+79,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[14]),64);
        tracep->chgQData(oldp+81,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[15]),64);
        tracep->chgQData(oldp+83,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[16]),64);
        tracep->chgQData(oldp+85,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[17]),64);
        tracep->chgQData(oldp+87,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[18]),64);
        tracep->chgQData(oldp+89,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[19]),64);
        tracep->chgQData(oldp+91,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[20]),64);
        tracep->chgQData(oldp+93,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[21]),64);
        tracep->chgQData(oldp+95,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[22]),64);
        tracep->chgQData(oldp+97,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[23]),64);
        tracep->chgQData(oldp+99,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[24]),64);
        tracep->chgQData(oldp+101,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[25]),64);
        tracep->chgQData(oldp+103,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[26]),64);
        tracep->chgQData(oldp+105,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[27]),64);
        tracep->chgQData(oldp+107,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[28]),64);
        tracep->chgQData(oldp+109,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[29]),64);
        tracep->chgQData(oldp+111,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[30]),64);
        tracep->chgQData(oldp+113,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[31]),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgBit(oldp+115,((((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__len) 
                                   != (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_len)) 
                                  & ((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_hs) 
                                     | (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_hs)))));
        tracep->chgBit(oldp+116,(((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done) 
                                  | (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready))));
        tracep->chgQData(oldp+117,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0]),64);
        tracep->chgQData(oldp+119,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[1]),64);
        tracep->chgQData(oldp+121,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[2]),64);
        tracep->chgQData(oldp+123,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[3]),64);
        tracep->chgQData(oldp+125,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[4]),64);
        tracep->chgQData(oldp+127,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[5]),64);
        tracep->chgQData(oldp+129,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[6]),64);
        tracep->chgQData(oldp+131,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[7]),64);
        tracep->chgQData(oldp+133,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[8]),64);
        tracep->chgQData(oldp+135,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[9]),64);
        tracep->chgQData(oldp+137,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[10]),64);
        tracep->chgQData(oldp+139,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[11]),64);
        tracep->chgQData(oldp+141,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[12]),64);
        tracep->chgQData(oldp+143,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[13]),64);
        tracep->chgQData(oldp+145,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[14]),64);
        tracep->chgQData(oldp+147,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[15]),64);
        tracep->chgQData(oldp+149,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[16]),64);
        tracep->chgQData(oldp+151,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[17]),64);
        tracep->chgQData(oldp+153,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[18]),64);
        tracep->chgQData(oldp+155,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[19]),64);
        tracep->chgQData(oldp+157,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[20]),64);
        tracep->chgQData(oldp+159,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[21]),64);
        tracep->chgQData(oldp+161,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[22]),64);
        tracep->chgQData(oldp+163,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[23]),64);
        tracep->chgQData(oldp+165,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[24]),64);
        tracep->chgQData(oldp+167,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[25]),64);
        tracep->chgQData(oldp+169,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[26]),64);
        tracep->chgQData(oldp+171,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[27]),64);
        tracep->chgQData(oldp+173,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[28]),64);
        tracep->chgQData(oldp+175,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[29]),64);
        tracep->chgQData(oldp+177,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[30]),64);
        tracep->chgQData(oldp+179,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[31]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+181,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen));
        tracep->chgCData(oldp+182,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest),8);
        tracep->chgQData(oldp+183,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata),64);
        tracep->chgQData(oldp+185,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc),64);
        tracep->chgIData(oldp+187,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst),32);
        tracep->chgBit(oldp+188,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid));
        tracep->chgBit(oldp+189,(vlSelf->SimTop__DOT__u_cpu__DOT__trap));
        tracep->chgCData(oldp+190,(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code),8);
        tracep->chgQData(oldp+191,(vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt),64);
        tracep->chgQData(oldp+193,(vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt),64);
        tracep->chgQData(oldp+195,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0]),64);
        tracep->chgQData(oldp+197,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[1]),64);
        tracep->chgQData(oldp+199,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[2]),64);
        tracep->chgQData(oldp+201,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[3]),64);
        tracep->chgQData(oldp+203,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[4]),64);
        tracep->chgQData(oldp+205,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[5]),64);
        tracep->chgQData(oldp+207,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[6]),64);
        tracep->chgQData(oldp+209,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[7]),64);
        tracep->chgQData(oldp+211,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[8]),64);
        tracep->chgQData(oldp+213,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[9]),64);
        tracep->chgQData(oldp+215,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[10]),64);
        tracep->chgQData(oldp+217,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[11]),64);
        tracep->chgQData(oldp+219,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[12]),64);
        tracep->chgQData(oldp+221,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[13]),64);
        tracep->chgQData(oldp+223,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[14]),64);
        tracep->chgQData(oldp+225,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[15]),64);
        tracep->chgQData(oldp+227,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[16]),64);
        tracep->chgQData(oldp+229,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[17]),64);
        tracep->chgQData(oldp+231,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[18]),64);
        tracep->chgQData(oldp+233,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[19]),64);
        tracep->chgQData(oldp+235,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[20]),64);
        tracep->chgQData(oldp+237,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[21]),64);
        tracep->chgQData(oldp+239,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[22]),64);
        tracep->chgQData(oldp+241,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[23]),64);
        tracep->chgQData(oldp+243,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[24]),64);
        tracep->chgQData(oldp+245,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[25]),64);
        tracep->chgQData(oldp+247,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[26]),64);
        tracep->chgQData(oldp+249,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[27]),64);
        tracep->chgQData(oldp+251,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[28]),64);
        tracep->chgQData(oldp+253,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[29]),64);
        tracep->chgQData(oldp+255,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[30]),64);
        tracep->chgQData(oldp+257,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[31]),64);
        tracep->chgQData(oldp+259,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0U]),64);
        tracep->chgQData(oldp+261,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [1U]),64);
        tracep->chgQData(oldp+263,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [2U]),64);
        tracep->chgQData(oldp+265,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [3U]),64);
        tracep->chgQData(oldp+267,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [4U]),64);
        tracep->chgQData(oldp+269,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [5U]),64);
        tracep->chgQData(oldp+271,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [6U]),64);
        tracep->chgQData(oldp+273,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [7U]),64);
        tracep->chgQData(oldp+275,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [8U]),64);
        tracep->chgQData(oldp+277,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [9U]),64);
        tracep->chgQData(oldp+279,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0xaU]),64);
        tracep->chgQData(oldp+281,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0xbU]),64);
        tracep->chgQData(oldp+283,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0xcU]),64);
        tracep->chgQData(oldp+285,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0xdU]),64);
        tracep->chgQData(oldp+287,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0xeU]),64);
        tracep->chgQData(oldp+289,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0xfU]),64);
        tracep->chgQData(oldp+291,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x10U]),64);
        tracep->chgQData(oldp+293,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x11U]),64);
        tracep->chgQData(oldp+295,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x12U]),64);
        tracep->chgQData(oldp+297,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x13U]),64);
        tracep->chgQData(oldp+299,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x14U]),64);
        tracep->chgQData(oldp+301,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x15U]),64);
        tracep->chgQData(oldp+303,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x16U]),64);
        tracep->chgQData(oldp+305,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x17U]),64);
        tracep->chgQData(oldp+307,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x18U]),64);
        tracep->chgQData(oldp+309,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x19U]),64);
        tracep->chgQData(oldp+311,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x1aU]),64);
        tracep->chgQData(oldp+313,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x1bU]),64);
        tracep->chgQData(oldp+315,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x1cU]),64);
        tracep->chgQData(oldp+317,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x1dU]),64);
        tracep->chgQData(oldp+319,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x1eU]),64);
        tracep->chgQData(oldp+321,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                   [0x1fU]),64);
        tracep->chgCData(oldp+323,((7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code))),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+324,(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_hs));
        tracep->chgBit(oldp+325,(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done));
        tracep->chgQData(oldp+326,(vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_r_data_l),64);
        tracep->chgBit(oldp+328,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_ena));
        tracep->chgCData(oldp+329,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr),5);
        tracep->chgCData(oldp+330,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type),5);
        tracep->chgCData(oldp+331,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_opcode),8);
        tracep->chgQData(oldp+332,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[0]),64);
        tracep->chgQData(oldp+334,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[1]),64);
        tracep->chgQData(oldp+336,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[2]),64);
        tracep->chgQData(oldp+338,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[3]),64);
        tracep->chgQData(oldp+340,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[4]),64);
        tracep->chgQData(oldp+342,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[5]),64);
        tracep->chgQData(oldp+344,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[6]),64);
        tracep->chgQData(oldp+346,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[7]),64);
        tracep->chgQData(oldp+348,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[8]),64);
        tracep->chgQData(oldp+350,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[9]),64);
        tracep->chgQData(oldp+352,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[10]),64);
        tracep->chgQData(oldp+354,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[11]),64);
        tracep->chgQData(oldp+356,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[12]),64);
        tracep->chgQData(oldp+358,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[13]),64);
        tracep->chgQData(oldp+360,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[14]),64);
        tracep->chgQData(oldp+362,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[15]),64);
        tracep->chgQData(oldp+364,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[16]),64);
        tracep->chgQData(oldp+366,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[17]),64);
        tracep->chgQData(oldp+368,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[18]),64);
        tracep->chgQData(oldp+370,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[19]),64);
        tracep->chgQData(oldp+372,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[20]),64);
        tracep->chgQData(oldp+374,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[21]),64);
        tracep->chgQData(oldp+376,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[22]),64);
        tracep->chgQData(oldp+378,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[23]),64);
        tracep->chgQData(oldp+380,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[24]),64);
        tracep->chgQData(oldp+382,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[25]),64);
        tracep->chgQData(oldp+384,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[26]),64);
        tracep->chgQData(oldp+386,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[27]),64);
        tracep->chgQData(oldp+388,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[28]),64);
        tracep->chgQData(oldp+390,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[29]),64);
        tracep->chgQData(oldp+392,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[30]),64);
        tracep->chgQData(oldp+394,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[31]),64);
        tracep->chgQData(oldp+396,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_data),64);
    }
    tracep->chgBit(oldp+398,(vlSelf->clock));
    tracep->chgBit(oldp+399,(vlSelf->reset));
    tracep->chgQData(oldp+400,(vlSelf->io_logCtrl_log_begin),64);
    tracep->chgQData(oldp+402,(vlSelf->io_logCtrl_log_end),64);
    tracep->chgQData(oldp+404,(vlSelf->io_logCtrl_log_level),64);
    tracep->chgBit(oldp+406,(vlSelf->io_perfInfo_clean));
    tracep->chgBit(oldp+407,(vlSelf->io_perfInfo_dump));
    tracep->chgBit(oldp+408,(vlSelf->io_uart_out_valid));
    tracep->chgCData(oldp+409,(vlSelf->io_uart_out_ch),8);
    tracep->chgBit(oldp+410,(vlSelf->io_uart_in_valid));
    tracep->chgCData(oldp+411,(vlSelf->io_uart_in_ch),8);
    tracep->chgBit(oldp+412,(vlSelf->io_memAXI_0_aw_ready));
    tracep->chgBit(oldp+413,(vlSelf->io_memAXI_0_aw_valid));
    tracep->chgQData(oldp+414,(vlSelf->io_memAXI_0_aw_bits_addr),64);
    tracep->chgCData(oldp+416,(vlSelf->io_memAXI_0_aw_bits_prot),3);
    tracep->chgCData(oldp+417,(vlSelf->io_memAXI_0_aw_bits_id),4);
    tracep->chgBit(oldp+418,(vlSelf->io_memAXI_0_aw_bits_user));
    tracep->chgCData(oldp+419,(vlSelf->io_memAXI_0_aw_bits_len),8);
    tracep->chgCData(oldp+420,(vlSelf->io_memAXI_0_aw_bits_size),3);
    tracep->chgCData(oldp+421,(vlSelf->io_memAXI_0_aw_bits_burst),2);
    tracep->chgBit(oldp+422,(vlSelf->io_memAXI_0_aw_bits_lock));
    tracep->chgCData(oldp+423,(vlSelf->io_memAXI_0_aw_bits_cache),4);
    tracep->chgCData(oldp+424,(vlSelf->io_memAXI_0_aw_bits_qos),4);
    tracep->chgBit(oldp+425,(vlSelf->io_memAXI_0_w_ready));
    tracep->chgBit(oldp+426,(vlSelf->io_memAXI_0_w_valid));
    tracep->chgQData(oldp+427,(vlSelf->io_memAXI_0_w_bits_data[0]),64);
    tracep->chgQData(oldp+429,(vlSelf->io_memAXI_0_w_bits_data[1]),64);
    tracep->chgQData(oldp+431,(vlSelf->io_memAXI_0_w_bits_data[2]),64);
    tracep->chgQData(oldp+433,(vlSelf->io_memAXI_0_w_bits_data[3]),64);
    tracep->chgCData(oldp+435,(vlSelf->io_memAXI_0_w_bits_strb),8);
    tracep->chgBit(oldp+436,(vlSelf->io_memAXI_0_w_bits_last));
    tracep->chgBit(oldp+437,(vlSelf->io_memAXI_0_b_ready));
    tracep->chgBit(oldp+438,(vlSelf->io_memAXI_0_b_valid));
    tracep->chgCData(oldp+439,(vlSelf->io_memAXI_0_b_bits_resp),2);
    tracep->chgCData(oldp+440,(vlSelf->io_memAXI_0_b_bits_id),4);
    tracep->chgBit(oldp+441,(vlSelf->io_memAXI_0_b_bits_user));
    tracep->chgBit(oldp+442,(vlSelf->io_memAXI_0_ar_ready));
    tracep->chgBit(oldp+443,(vlSelf->io_memAXI_0_ar_valid));
    tracep->chgQData(oldp+444,(vlSelf->io_memAXI_0_ar_bits_addr),64);
    tracep->chgCData(oldp+446,(vlSelf->io_memAXI_0_ar_bits_prot),3);
    tracep->chgCData(oldp+447,(vlSelf->io_memAXI_0_ar_bits_id),4);
    tracep->chgBit(oldp+448,(vlSelf->io_memAXI_0_ar_bits_user));
    tracep->chgCData(oldp+449,(vlSelf->io_memAXI_0_ar_bits_len),8);
    tracep->chgCData(oldp+450,(vlSelf->io_memAXI_0_ar_bits_size),3);
    tracep->chgCData(oldp+451,(vlSelf->io_memAXI_0_ar_bits_burst),2);
    tracep->chgBit(oldp+452,(vlSelf->io_memAXI_0_ar_bits_lock));
    tracep->chgCData(oldp+453,(vlSelf->io_memAXI_0_ar_bits_cache),4);
    tracep->chgCData(oldp+454,(vlSelf->io_memAXI_0_ar_bits_qos),4);
    tracep->chgBit(oldp+455,(vlSelf->io_memAXI_0_r_ready));
    tracep->chgBit(oldp+456,(vlSelf->io_memAXI_0_r_valid));
    tracep->chgCData(oldp+457,(vlSelf->io_memAXI_0_r_bits_resp),2);
    tracep->chgQData(oldp+458,(vlSelf->io_memAXI_0_r_bits_data[0]),64);
    tracep->chgQData(oldp+460,(vlSelf->io_memAXI_0_r_bits_data[1]),64);
    tracep->chgQData(oldp+462,(vlSelf->io_memAXI_0_r_bits_data[2]),64);
    tracep->chgQData(oldp+464,(vlSelf->io_memAXI_0_r_bits_data[3]),64);
    tracep->chgBit(oldp+466,(vlSelf->io_memAXI_0_r_bits_last));
    tracep->chgCData(oldp+467,(vlSelf->io_memAXI_0_r_bits_id),4);
    tracep->chgBit(oldp+468,(vlSelf->io_memAXI_0_r_bits_user));
    tracep->chgQData(oldp+469,(vlSelf->io_memAXI_0_r_bits_data
                               [0U]),64);
    tracep->chgBit(oldp+471,(((IData)(vlSelf->io_memAXI_0_ar_ready) 
                              & (1U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state)))));
    tracep->chgBit(oldp+472,(((IData)(vlSelf->reset) 
                              | (0U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state)))));
    tracep->chgBit(oldp+473,((1U & (IData)(vlSelf->io_memAXI_0_r_bits_resp))));
    __Vtemp_hcf47a88b__3[0U] = 0xffffffffU;
    __Vtemp_hcf47a88b__3[1U] = 0U;
    __Vtemp_hcf47a88b__3[2U] = 0U;
    __Vtemp_hcf47a88b__3[3U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__11, vlSelf->SimTop__DOT__if_addr);
    VL_SHIFTL_WWI(128,128,6, __Vtemp_hab772c2a__0, __Vtemp_hcf47a88b__3, 
                  (0x38U & (__Vtemp_hae6f3975__11[0U] 
                            << 3U)));
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__12, vlSelf->SimTop__DOT__if_addr);
    tracep->chgQData(oldp+474,(((vlSelf->io_memAXI_0_r_bits_data
                                 [0U] & (((QData)((IData)(
                                                          __Vtemp_hab772c2a__0[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vtemp_hab772c2a__0[2U])))) 
                                << (0x3fU & (- (0x38U 
                                                & (__Vtemp_hae6f3975__12[0U] 
                                                   << 3U)))))),64);
    tracep->chgBit(oldp+476,(((IData)(vlSelf->reset)
                               ? 0U : (1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type) 
                                             >> 4U)))));
    tracep->chgCData(oldp+477,(((IData)(vlSelf->reset)
                                 ? 0U : ((0x10U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                                          ? (0x1fU 
                                             & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                                >> 0xfU))
                                          : 0U))),5);
    tracep->chgQData(oldp+478,(((IData)(vlSelf->reset)
                                 ? 0ULL : ((0x10U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                                            ? ((IData)(vlSelf->reset)
                                                ? 0ULL
                                                : (
                                                   ((IData)(vlSelf->reset)
                                                     ? 0U
                                                     : 
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type) 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
                                                   [
                                                   ((IData)(vlSelf->reset)
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                                                      ? 
                                                     (0x1fU 
                                                      & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                                         >> 0xfU))
                                                      : 0U))]
                                                    : 0ULL))
                                            : 0ULL))),64);
    tracep->chgQData(oldp+480,(((IData)(vlSelf->reset)
                                 ? 0ULL : ((0x10U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                                            ? (((- (QData)((IData)(
                                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                                                    >> 0x1fU)))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                                                  >> 0x14U))))
                                            : 0ULL))),64);
    tracep->chgQData(oldp+482,(((IData)(vlSelf->reset)
                                 ? 0ULL : (((IData)(vlSelf->reset)
                                             ? 0U : 
                                            (1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type) 
                                                   >> 4U)))
                                            ? vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
                                           [((IData)(vlSelf->reset)
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                                               ? (0x1fU 
                                                  & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                                     >> 0xfU))
                                               : 0U))]
                                            : 0ULL))),64);
}

void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_cleanup\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
