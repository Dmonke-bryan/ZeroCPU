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
    tracep->declBit(c+66,"core.clk", false,-1);
    tracep->declBit(c+67,"rst_n", false,-1);
    tracep->declQuad(c+68,"ReadData", false,-1, 63,0);
    tracep->declBit(c+70,"ReadEnable", false,-1);
    tracep->declBit(c+71,"WriteEnable", false,-1);
    tracep->declQuad(c+72,"ReadAddr", false,-1, 63,0);
    tracep->declQuad(c+74,"WriteAddr", false,-1, 63,0);
    tracep->declQuad(c+76,"WriteMask", false,-1, 63,0);
    tracep->declQuad(c+78,"WriteData", false,-1, 63,0);
    tracep->declBit(c+80,"iram.clk", false,-1);
    tracep->declBit(c+81,"rd_en", false,-1);
    tracep->declBus(c+82,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+83,"rd_data", false,-1, 31,0);
    tracep->declBit(c+84,"wr_en", false,-1);
    tracep->declBus(c+85,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+86,"wr_data", false,-1, 31,0);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst_n", false,-1);
    tracep->declQuad(c+68,"ReadData", false,-1, 63,0);
    tracep->declBit(c+70,"ReadEnable", false,-1);
    tracep->declBit(c+71,"WriteEnable", false,-1);
    tracep->declQuad(c+72,"ReadAddr", false,-1, 63,0);
    tracep->declQuad(c+74,"WriteAddr", false,-1, 63,0);
    tracep->declQuad(c+76,"WriteMask", false,-1, 63,0);
    tracep->declQuad(c+78,"WriteData", false,-1, 63,0);
    tracep->declBus(c+87,"nxt_pc", false,-1, 11,0);
    tracep->declBus(c+88,"inst", false,-1, 31,0);
    tracep->declBit(c+107,"aluBsrc", false,-1);
    tracep->declBus(c+89,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+90,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+91,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+92,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+107,"rdWriteEn", false,-1);
    tracep->declQuad(c+93,"imm", false,-1, 63,0);
    tracep->declQuad(c+95,"busA", false,-1, 63,0);
    tracep->declQuad(c+97,"busB", false,-1, 63,0);
    tracep->declQuad(c+95,"ina", false,-1, 63,0);
    tracep->declQuad(c+93,"inb", false,-1, 63,0);
    tracep->declQuad(c+99,"res", false,-1, 63,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declQuad(c+95,"ina", false,-1, 63,0);
    tracep->declQuad(c+93,"inb", false,-1, 63,0);
    tracep->declBus(c+89,"aluCtl", false,-1, 3,0);
    tracep->declQuad(c+99,"outy", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_contrGen ");
    tracep->declBus(c+88,"inst", false,-1, 31,0);
    tracep->declBit(c+107,"aluBsrc", false,-1);
    tracep->declBus(c+90,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+91,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+107,"rdWriteEn", false,-1);
    tracep->declBus(c+92,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"imm", false,-1, 63,0);
    tracep->declBus(c+89,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+101,"opcode", false,-1, 6,0);
    tracep->declBus(c+102,"funt3", false,-1, 2,0);
    tracep->declBit(c+103,"opcode_001_0011", false,-1);
    tracep->declBit(c+104,"funt3_000", false,-1);
    tracep->declBit(c+105,"ADDI", false,-1);
    tracep->declBus(c+106,"aluType", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pcgen ");
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst_n", false,-1);
    tracep->declBus(c+87,"nxt_pc", false,-1, 11,0);
    tracep->declBus(c+87,"pc", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regs ");
    tracep->declBus(c+90,"Ra", false,-1, 4,0);
    tracep->declBus(c+91,"Rb", false,-1, 4,0);
    tracep->declBus(c+92,"Rw", false,-1, 4,0);
    tracep->declQuad(c+99,"busW", false,-1, 63,0);
    tracep->declBit(c+107,"RegWr", false,-1);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declQuad(c+95,"busA", false,-1, 63,0);
    tracep->declQuad(c+97,"busB", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+2+i*2,"regsheap", true,(i+0), 63,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iram ");
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+81,"rd_en", false,-1);
    tracep->declBus(c+82,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+83,"rd_data", false,-1, 31,0);
    tracep->declBit(c+84,"wr_en", false,-1);
    tracep->declBus(c+85,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+86,"wr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
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
    tracep->fullBit(oldp+66,(vlSelf->core__02Eclk));
    tracep->fullBit(oldp+67,(vlSelf->rst_n));
    tracep->fullQData(oldp+68,(vlSelf->ReadData),64);
    tracep->fullBit(oldp+70,(vlSelf->ReadEnable));
    tracep->fullBit(oldp+71,(vlSelf->WriteEnable));
    tracep->fullQData(oldp+72,(vlSelf->ReadAddr),64);
    tracep->fullQData(oldp+74,(vlSelf->WriteAddr),64);
    tracep->fullQData(oldp+76,(vlSelf->WriteMask),64);
    tracep->fullQData(oldp+78,(vlSelf->WriteData),64);
    tracep->fullBit(oldp+80,(vlSelf->iram__02Eclk));
    tracep->fullBit(oldp+81,(vlSelf->rd_en));
    tracep->fullSData(oldp+82,(vlSelf->rd_addr),12);
    tracep->fullIData(oldp+83,(vlSelf->rd_data),32);
    tracep->fullBit(oldp+84,(vlSelf->wr_en));
    tracep->fullSData(oldp+85,(vlSelf->wr_addr),12);
    tracep->fullIData(oldp+86,(vlSelf->wr_data),32);
    tracep->fullSData(oldp+87,(vlSelf->core__DOT__u_pcgen__DOT__pc),12);
    tracep->fullIData(oldp+88,((IData)(vlSelf->ReadData)),32);
    tracep->fullCData(oldp+89,(vlSelf->core__DOT__u_contrGen__DOT__aluCtl__out__out0),4);
    tracep->fullCData(oldp+90,((0x1fU & (IData)((vlSelf->ReadData 
                                                 >> 0xfU)))),5);
    tracep->fullCData(oldp+91,((0x1fU & (IData)((vlSelf->ReadData 
                                                 >> 0x14U)))),5);
    tracep->fullCData(oldp+92,((0x1fU & (IData)((vlSelf->ReadData 
                                                 >> 7U)))),5);
    tracep->fullQData(oldp+93,((QData)((IData)((0xfffU 
                                                & (IData)(
                                                          (vlSelf->ReadData 
                                                           >> 0x14U)))))),64);
    tracep->fullQData(oldp+95,(((0U == (0x1fU & (IData)(
                                                        (vlSelf->ReadData 
                                                         >> 0xfU))))
                                 ? 0ULL : vlSelf->core__DOT__u_regs__DOT__regsheap
                                [(0x1fU & (IData)((vlSelf->ReadData 
                                                   >> 0xfU)))])),64);
    tracep->fullQData(oldp+97,(((0U == (0x1fU & (IData)(
                                                        (vlSelf->ReadData 
                                                         >> 0x14U))))
                                 ? 0ULL : vlSelf->core__DOT__u_regs__DOT__regsheap
                                [(0x1fU & (IData)((vlSelf->ReadData 
                                                   >> 0x14U)))])),64);
    tracep->fullQData(oldp+99,(((0U == (IData)(vlSelf->core__DOT__u_contrGen__DOT__aluCtl__out__out0))
                                 ? (((0U == (0x1fU 
                                             & (IData)(
                                                       (vlSelf->ReadData 
                                                        >> 0xfU))))
                                      ? 0ULL : vlSelf->core__DOT__u_regs__DOT__regsheap
                                     [(0x1fU & (IData)(
                                                       (vlSelf->ReadData 
                                                        >> 0xfU)))]) 
                                    + (QData)((IData)(
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->ReadData 
                                                                  >> 0x14U))))))
                                 : 0ULL)),64);
    tracep->fullCData(oldp+101,((0x7fU & (IData)(vlSelf->ReadData))),7);
    tracep->fullCData(oldp+102,((7U & (IData)((vlSelf->ReadData 
                                               >> 0xcU)))),3);
    tracep->fullBit(oldp+103,((0x13U == (0x7fU & (IData)(vlSelf->ReadData)))));
    tracep->fullBit(oldp+104,((0U == (7U & (IData)(
                                                   (vlSelf->ReadData 
                                                    >> 0xcU))))));
    tracep->fullBit(oldp+105,((IData)((0x13ULL == (0x707fULL 
                                                   & vlSelf->ReadData)))));
    tracep->fullCData(oldp+106,(((0x13U == (0x7fU & (IData)(vlSelf->ReadData))) 
                                 & (0U == (7U & (IData)(
                                                        (vlSelf->ReadData 
                                                         >> 0xcU)))))),8);
    tracep->fullBit(oldp+107,(1U));
}
