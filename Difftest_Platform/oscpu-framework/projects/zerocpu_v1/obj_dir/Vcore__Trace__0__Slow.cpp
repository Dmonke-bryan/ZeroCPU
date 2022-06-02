// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+81,"rst_n", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+81,"rst_n", false,-1);
    tracep->declBus(c+66,"nxt_pc", false,-1, 11,0);
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBit(c+88,"aluBsrc", false,-1);
    tracep->declBus(c+68,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+69,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+70,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+71,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+88,"rdWriteEn", false,-1);
    tracep->declQuad(c+72,"imm", false,-1, 63,0);
    tracep->declQuad(c+82,"busA", false,-1, 63,0);
    tracep->declQuad(c+84,"busB", false,-1, 63,0);
    tracep->declQuad(c+82,"ina", false,-1, 63,0);
    tracep->declQuad(c+72,"inb", false,-1, 63,0);
    tracep->declQuad(c+86,"res", false,-1, 63,0);
    tracep->pushNamePrefix("iram_inst ");
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+88,"rd_en", false,-1);
    tracep->declBus(c+66,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+67,"rd_data", false,-1, 31,0);
    tracep->declBit(c+89,"wr_en", false,-1);
    tracep->declBus(c+90,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+91,"wr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_alu ");
    tracep->declQuad(c+82,"ina", false,-1, 63,0);
    tracep->declQuad(c+72,"inb", false,-1, 63,0);
    tracep->declBus(c+68,"aluCtl", false,-1, 3,0);
    tracep->declQuad(c+86,"outy", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_contrGen ");
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBit(c+88,"aluBsrc", false,-1);
    tracep->declBus(c+69,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+70,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+88,"rdWriteEn", false,-1);
    tracep->declBus(c+71,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+72,"imm", false,-1, 63,0);
    tracep->declBus(c+68,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+74,"opcode", false,-1, 6,0);
    tracep->declBus(c+75,"funt3", false,-1, 2,0);
    tracep->declBit(c+76,"opcode_001_0011", false,-1);
    tracep->declBit(c+77,"funt3_000", false,-1);
    tracep->declBit(c+78,"ADDI", false,-1);
    tracep->declBus(c+79,"aluType", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pcgen ");
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+81,"rst_n", false,-1);
    tracep->declBus(c+66,"nxt_pc", false,-1, 11,0);
    tracep->declBus(c+66,"pc", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regs ");
    tracep->declBus(c+69,"Ra", false,-1, 4,0);
    tracep->declBus(c+70,"Rb", false,-1, 4,0);
    tracep->declBus(c+71,"Rw", false,-1, 4,0);
    tracep->declQuad(c+86,"busW", false,-1, 63,0);
    tracep->declBit(c+88,"RegWr", false,-1);
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declQuad(c+82,"busA", false,-1, 63,0);
    tracep->declQuad(c+84,"busB", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+2+i*2,"regsheap", true,(i+0), 63,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcore___024root__trace_init_top(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_top\n"); );
    // Body
    Vcore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vcore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcore___024root__trace_register(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcore___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcore___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcore___024root__trace_full_sub_0(Vcore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_full_top_0\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcore___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vcore___024root__trace_full_sub_0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->core__DOT__u_regs__DOT__i),32);
    tracep->fullQData(oldp+2,(vlSelf->core__DOT__u_regs__DOT__regsheap[0]),64);
    tracep->fullQData(oldp+4,(vlSelf->core__DOT__u_regs__DOT__regsheap[1]),64);
    tracep->fullQData(oldp+6,(vlSelf->core__DOT__u_regs__DOT__regsheap[2]),64);
    tracep->fullQData(oldp+8,(vlSelf->core__DOT__u_regs__DOT__regsheap[3]),64);
    tracep->fullQData(oldp+10,(vlSelf->core__DOT__u_regs__DOT__regsheap[4]),64);
    tracep->fullQData(oldp+12,(vlSelf->core__DOT__u_regs__DOT__regsheap[5]),64);
    tracep->fullQData(oldp+14,(vlSelf->core__DOT__u_regs__DOT__regsheap[6]),64);
    tracep->fullQData(oldp+16,(vlSelf->core__DOT__u_regs__DOT__regsheap[7]),64);
    tracep->fullQData(oldp+18,(vlSelf->core__DOT__u_regs__DOT__regsheap[8]),64);
    tracep->fullQData(oldp+20,(vlSelf->core__DOT__u_regs__DOT__regsheap[9]),64);
    tracep->fullQData(oldp+22,(vlSelf->core__DOT__u_regs__DOT__regsheap[10]),64);
    tracep->fullQData(oldp+24,(vlSelf->core__DOT__u_regs__DOT__regsheap[11]),64);
    tracep->fullQData(oldp+26,(vlSelf->core__DOT__u_regs__DOT__regsheap[12]),64);
    tracep->fullQData(oldp+28,(vlSelf->core__DOT__u_regs__DOT__regsheap[13]),64);
    tracep->fullQData(oldp+30,(vlSelf->core__DOT__u_regs__DOT__regsheap[14]),64);
    tracep->fullQData(oldp+32,(vlSelf->core__DOT__u_regs__DOT__regsheap[15]),64);
    tracep->fullQData(oldp+34,(vlSelf->core__DOT__u_regs__DOT__regsheap[16]),64);
    tracep->fullQData(oldp+36,(vlSelf->core__DOT__u_regs__DOT__regsheap[17]),64);
    tracep->fullQData(oldp+38,(vlSelf->core__DOT__u_regs__DOT__regsheap[18]),64);
    tracep->fullQData(oldp+40,(vlSelf->core__DOT__u_regs__DOT__regsheap[19]),64);
    tracep->fullQData(oldp+42,(vlSelf->core__DOT__u_regs__DOT__regsheap[20]),64);
    tracep->fullQData(oldp+44,(vlSelf->core__DOT__u_regs__DOT__regsheap[21]),64);
    tracep->fullQData(oldp+46,(vlSelf->core__DOT__u_regs__DOT__regsheap[22]),64);
    tracep->fullQData(oldp+48,(vlSelf->core__DOT__u_regs__DOT__regsheap[23]),64);
    tracep->fullQData(oldp+50,(vlSelf->core__DOT__u_regs__DOT__regsheap[24]),64);
    tracep->fullQData(oldp+52,(vlSelf->core__DOT__u_regs__DOT__regsheap[25]),64);
    tracep->fullQData(oldp+54,(vlSelf->core__DOT__u_regs__DOT__regsheap[26]),64);
    tracep->fullQData(oldp+56,(vlSelf->core__DOT__u_regs__DOT__regsheap[27]),64);
    tracep->fullQData(oldp+58,(vlSelf->core__DOT__u_regs__DOT__regsheap[28]),64);
    tracep->fullQData(oldp+60,(vlSelf->core__DOT__u_regs__DOT__regsheap[29]),64);
    tracep->fullQData(oldp+62,(vlSelf->core__DOT__u_regs__DOT__regsheap[30]),64);
    tracep->fullQData(oldp+64,(vlSelf->core__DOT__u_regs__DOT__regsheap[31]),64);
    tracep->fullSData(oldp+66,(vlSelf->core__DOT__u_pcgen__DOT__pc),12);
    tracep->fullIData(oldp+67,(vlSelf->core__DOT__inst),32);
    tracep->fullCData(oldp+68,(vlSelf->core__DOT__u_contrGen__DOT__aluCtl__out__out0),4);
    tracep->fullCData(oldp+69,((0x1fU & (vlSelf->core__DOT__inst 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+70,((0x1fU & (vlSelf->core__DOT__inst 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+71,((0x1fU & (vlSelf->core__DOT__inst 
                                         >> 7U))),5);
    tracep->fullQData(oldp+72,((QData)((IData)((vlSelf->core__DOT__inst 
                                                >> 0x14U)))),64);
    tracep->fullCData(oldp+74,((0x7fU & vlSelf->core__DOT__inst)),7);
    tracep->fullCData(oldp+75,((7U & (vlSelf->core__DOT__inst 
                                      >> 0xcU))),3);
    tracep->fullBit(oldp+76,((0x13U == (0x7fU & vlSelf->core__DOT__inst))));
    tracep->fullBit(oldp+77,((0U == (7U & (vlSelf->core__DOT__inst 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+78,((IData)((0x13U == (0x707fU 
                                                & vlSelf->core__DOT__inst)))));
    tracep->fullCData(oldp+79,(((0x13U == (0x7fU & vlSelf->core__DOT__inst)) 
                                & (0U == (7U & (vlSelf->core__DOT__inst 
                                                >> 0xcU))))),8);
    tracep->fullBit(oldp+80,(vlSelf->clk));
    tracep->fullBit(oldp+81,(vlSelf->rst_n));
    tracep->fullQData(oldp+82,(((0U == (0x1fU & (vlSelf->core__DOT__inst 
                                                 >> 0xfU)))
                                 ? 0ULL : vlSelf->core__DOT__u_regs__DOT__regsheap
                                [(0x1fU & (vlSelf->core__DOT__inst 
                                           >> 0xfU))])),64);
    tracep->fullQData(oldp+84,(((0U == (0x1fU & (vlSelf->core__DOT__inst 
                                                 >> 0x14U)))
                                 ? 0ULL : vlSelf->core__DOT__u_regs__DOT__regsheap
                                [(0x1fU & (vlSelf->core__DOT__inst 
                                           >> 0x14U))])),64);
    tracep->fullQData(oldp+86,(((0U == (IData)(vlSelf->core__DOT__u_contrGen__DOT__aluCtl__out__out0))
                                 ? (((0U == (0x1fU 
                                             & (vlSelf->core__DOT__inst 
                                                >> 0xfU)))
                                      ? 0ULL : vlSelf->core__DOT__u_regs__DOT__regsheap
                                     [(0x1fU & (vlSelf->core__DOT__inst 
                                                >> 0xfU))]) 
                                    + (QData)((IData)(
                                                      (vlSelf->core__DOT__inst 
                                                       >> 0x14U))))
                                 : 0ULL)),64);
    tracep->fullBit(oldp+88,(1U));
    tracep->fullBit(oldp+89,(0U));
    tracep->fullSData(oldp+90,(0U),12);
    tracep->fullIData(oldp+91,(0U),32);
}
