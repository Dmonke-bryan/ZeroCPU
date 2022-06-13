// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vzerocore__Syms.h"


VL_ATTR_COLD void Vzerocore___024root__trace_init_sub__TOP__0(Vzerocore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declQuad(c+91,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+93,"RamReadEnable", false,-1);
    tracep->declBit(c+94,"RamWriteEnable", false,-1);
    tracep->declQuad(c+95,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+97,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+99,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+101,"RamWriteData", false,-1, 63,0);
    tracep->pushNamePrefix("zerocore ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declQuad(c+91,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+93,"RamReadEnable", false,-1);
    tracep->declBit(c+94,"RamWriteEnable", false,-1);
    tracep->declQuad(c+95,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+97,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+99,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+101,"RamWriteData", false,-1, 63,0);
    tracep->declQuad(c+1,"pcF", false,-1, 63,0);
    tracep->declBus(c+103,"instF", false,-1, 31,0);
    tracep->declBus(c+108,"instM", false,-1, 31,0);
    tracep->declQuad(c+109,"pcM", false,-1, 63,0);
    tracep->declQuad(c+111,"pcD", false,-1, 63,0);
    tracep->declBus(c+3,"instD", false,-1, 31,0);
    tracep->declBus(c+113,"instW", false,-1, 31,0);
    tracep->declQuad(c+114,"pcW", false,-1, 63,0);
    tracep->declBus(c+116,"instE", false,-1, 31,0);
    tracep->declQuad(c+117,"pcE", false,-1, 63,0);
    tracep->declQuad(c+4,"ina", false,-1, 63,0);
    tracep->declQuad(c+6,"inb", false,-1, 63,0);
    tracep->declBit(c+8,"aluBsrc", false,-1);
    tracep->declBus(c+119,"aluCtl", false,-1, 3,0);
    tracep->declQuad(c+9,"imm", false,-1, 63,0);
    tracep->declBit(c+120,"rs1ReadEnable", false,-1);
    tracep->declBit(c+120,"rs2ReadEnable", false,-1);
    tracep->declBus(c+11,"rs1ReadAddr", false,-1, 4,0);
    tracep->declBus(c+12,"rs2ReadAddr", false,-1, 4,0);
    tracep->declQuad(c+104,"rs1DataD", false,-1, 63,0);
    tracep->declQuad(c+106,"rs2DataD", false,-1, 63,0);
    tracep->declQuad(c+4,"rs1DataE", false,-1, 63,0);
    tracep->declQuad(c+13,"rs2DataE", false,-1, 63,0);
    tracep->declBit(c+120,"rdWriteEnableW", false,-1);
    tracep->declBus(c+15,"rdWriteAddrW", false,-1, 4,0);
    tracep->declQuad(c+16,"rdWriteDataW", false,-1, 63,0);
    tracep->pushNamePrefix("rs1Data_D2E ");
    tracep->declBus(c+121,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBit(c+120,"wen", false,-1);
    tracep->declQuad(c+104,"din", false,-1, 63,0);
    tracep->declQuad(c+4,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2Data_D2E ");
    tracep->declBus(c+121,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBit(c+120,"wen", false,-1);
    tracep->declQuad(c+106,"din", false,-1, 63,0);
    tracep->declQuad(c+13,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ex ");
    tracep->declQuad(c+4,"ina", false,-1, 63,0);
    tracep->declQuad(c+6,"inb", false,-1, 63,0);
    tracep->declBus(c+119,"aluCtl", false,-1, 3,0);
    tracep->declQuad(c+16,"outy", false,-1, 63,0);
    tracep->declQuad(c+16,"resADD", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_id ");
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->declBit(c+120,"ra_en", false,-1);
    tracep->declBus(c+11,"ra_addr", false,-1, 4,0);
    tracep->declBit(c+120,"rb_en", false,-1);
    tracep->declBus(c+12,"rb_addr", false,-1, 4,0);
    tracep->declBit(c+120,"rd_en", false,-1);
    tracep->declBus(c+15,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+9,"imm", false,-1, 63,0);
    tracep->declBit(c+8,"aluBsrc", false,-1);
    tracep->declBus(c+119,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+18,"opcode", false,-1, 6,0);
    tracep->declBus(c+19,"funt3", false,-1, 2,0);
    tracep->declBit(c+20,"opcode_001_0011", false,-1);
    tracep->declBit(c+21,"opcode_011_0011", false,-1);
    tracep->declBit(c+22,"funt3_000", false,-1);
    tracep->declBit(c+8,"ADDI", false,-1);
    tracep->declBit(c+23,"ADD", false,-1);
    tracep->declBus(c+24,"aluType", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_if ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declQuad(c+1,"pc", false,-1, 63,0);
    tracep->declBus(c+103,"instF", false,-1, 31,0);
    tracep->declBus(c+3,"instD", false,-1, 31,0);
    tracep->pushNamePrefix("u_inst_F2D ");
    tracep->declBus(c+122,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBit(c+120,"wen", false,-1);
    tracep->declBus(c+103,"din", false,-1, 31,0);
    tracep->declBus(c+3,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_regs ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBit(c+120,"ReadEnable1", false,-1);
    tracep->declBit(c+120,"ReadEnable2", false,-1);
    tracep->declBus(c+11,"ReadAddr1", false,-1, 4,0);
    tracep->declBus(c+12,"ReadAddr2", false,-1, 4,0);
    tracep->declQuad(c+104,"ReadData1", false,-1, 63,0);
    tracep->declQuad(c+106,"ReadData2", false,-1, 63,0);
    tracep->declBit(c+120,"WriteEnable", false,-1);
    tracep->declBus(c+15,"WriteAddr", false,-1, 4,0);
    tracep->declQuad(c+16,"WriteData", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+25+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vzerocore___024root__trace_init_top(Vzerocore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root__trace_init_top\n"); );
    // Body
    Vzerocore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vzerocore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vzerocore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vzerocore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vzerocore___024root__trace_register(Vzerocore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vzerocore___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vzerocore___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vzerocore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vzerocore___024root__trace_full_sub_0(Vzerocore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vzerocore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root__trace_full_top_0\n"); );
    // Init
    Vzerocore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vzerocore___024root*>(voidSelf);
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vzerocore___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vzerocore___024root__trace_full_sub_0(Vzerocore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullQData(oldp+1,(vlSelf->zerocore__DOT__pcF),64);
    tracep->fullIData(oldp+3,(vlSelf->zerocore__DOT__instD),32);
    tracep->fullQData(oldp+4,(vlSelf->zerocore__DOT__rs1DataE),64);
    tracep->fullQData(oldp+6,(((IData)((0x13U == (0x707fU 
                                                  & vlSelf->zerocore__DOT__instD)))
                                ? (QData)((IData)((vlSelf->zerocore__DOT__instD 
                                                   >> 0x14U)))
                                : vlSelf->zerocore__DOT__rs2DataE)),64);
    tracep->fullBit(oldp+8,((IData)((0x13U == (0x707fU 
                                               & vlSelf->zerocore__DOT__instD)))));
    tracep->fullQData(oldp+9,((QData)((IData)((vlSelf->zerocore__DOT__instD 
                                               >> 0x14U)))),64);
    tracep->fullCData(oldp+11,((0x1fU & (vlSelf->zerocore__DOT__instD 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+12,((0x1fU & (vlSelf->zerocore__DOT__instD 
                                         >> 0x14U))),5);
    tracep->fullQData(oldp+13,(vlSelf->zerocore__DOT__rs2DataE),64);
    tracep->fullCData(oldp+15,((0x1fU & (vlSelf->zerocore__DOT__instD 
                                         >> 7U))),5);
    tracep->fullQData(oldp+16,(vlSelf->zerocore__DOT__u_ex__DOT__resADD),64);
    tracep->fullCData(oldp+18,((0x7fU & vlSelf->zerocore__DOT__instD)),7);
    tracep->fullCData(oldp+19,((7U & (vlSelf->zerocore__DOT__instD 
                                      >> 0xcU))),3);
    tracep->fullBit(oldp+20,((0x13U == (0x7fU & vlSelf->zerocore__DOT__instD))));
    tracep->fullBit(oldp+21,((0x33U == (0x7fU & vlSelf->zerocore__DOT__instD))));
    tracep->fullBit(oldp+22,((0U == (7U & (vlSelf->zerocore__DOT__instD 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+23,((IData)((0x33U == (0x707fU 
                                                & vlSelf->zerocore__DOT__instD)))));
    tracep->fullCData(oldp+24,(((0x13U == (0x7fU & vlSelf->zerocore__DOT__instD)) 
                                & (0U == (7U & (vlSelf->zerocore__DOT__instD 
                                                >> 0xcU))))),8);
    tracep->fullQData(oldp+25,(vlSelf->zerocore__DOT__u_regs__DOT__regs[0]),64);
    tracep->fullQData(oldp+27,(vlSelf->zerocore__DOT__u_regs__DOT__regs[1]),64);
    tracep->fullQData(oldp+29,(vlSelf->zerocore__DOT__u_regs__DOT__regs[2]),64);
    tracep->fullQData(oldp+31,(vlSelf->zerocore__DOT__u_regs__DOT__regs[3]),64);
    tracep->fullQData(oldp+33,(vlSelf->zerocore__DOT__u_regs__DOT__regs[4]),64);
    tracep->fullQData(oldp+35,(vlSelf->zerocore__DOT__u_regs__DOT__regs[5]),64);
    tracep->fullQData(oldp+37,(vlSelf->zerocore__DOT__u_regs__DOT__regs[6]),64);
    tracep->fullQData(oldp+39,(vlSelf->zerocore__DOT__u_regs__DOT__regs[7]),64);
    tracep->fullQData(oldp+41,(vlSelf->zerocore__DOT__u_regs__DOT__regs[8]),64);
    tracep->fullQData(oldp+43,(vlSelf->zerocore__DOT__u_regs__DOT__regs[9]),64);
    tracep->fullQData(oldp+45,(vlSelf->zerocore__DOT__u_regs__DOT__regs[10]),64);
    tracep->fullQData(oldp+47,(vlSelf->zerocore__DOT__u_regs__DOT__regs[11]),64);
    tracep->fullQData(oldp+49,(vlSelf->zerocore__DOT__u_regs__DOT__regs[12]),64);
    tracep->fullQData(oldp+51,(vlSelf->zerocore__DOT__u_regs__DOT__regs[13]),64);
    tracep->fullQData(oldp+53,(vlSelf->zerocore__DOT__u_regs__DOT__regs[14]),64);
    tracep->fullQData(oldp+55,(vlSelf->zerocore__DOT__u_regs__DOT__regs[15]),64);
    tracep->fullQData(oldp+57,(vlSelf->zerocore__DOT__u_regs__DOT__regs[16]),64);
    tracep->fullQData(oldp+59,(vlSelf->zerocore__DOT__u_regs__DOT__regs[17]),64);
    tracep->fullQData(oldp+61,(vlSelf->zerocore__DOT__u_regs__DOT__regs[18]),64);
    tracep->fullQData(oldp+63,(vlSelf->zerocore__DOT__u_regs__DOT__regs[19]),64);
    tracep->fullQData(oldp+65,(vlSelf->zerocore__DOT__u_regs__DOT__regs[20]),64);
    tracep->fullQData(oldp+67,(vlSelf->zerocore__DOT__u_regs__DOT__regs[21]),64);
    tracep->fullQData(oldp+69,(vlSelf->zerocore__DOT__u_regs__DOT__regs[22]),64);
    tracep->fullQData(oldp+71,(vlSelf->zerocore__DOT__u_regs__DOT__regs[23]),64);
    tracep->fullQData(oldp+73,(vlSelf->zerocore__DOT__u_regs__DOT__regs[24]),64);
    tracep->fullQData(oldp+75,(vlSelf->zerocore__DOT__u_regs__DOT__regs[25]),64);
    tracep->fullQData(oldp+77,(vlSelf->zerocore__DOT__u_regs__DOT__regs[26]),64);
    tracep->fullQData(oldp+79,(vlSelf->zerocore__DOT__u_regs__DOT__regs[27]),64);
    tracep->fullQData(oldp+81,(vlSelf->zerocore__DOT__u_regs__DOT__regs[28]),64);
    tracep->fullQData(oldp+83,(vlSelf->zerocore__DOT__u_regs__DOT__regs[29]),64);
    tracep->fullQData(oldp+85,(vlSelf->zerocore__DOT__u_regs__DOT__regs[30]),64);
    tracep->fullQData(oldp+87,(vlSelf->zerocore__DOT__u_regs__DOT__regs[31]),64);
    tracep->fullBit(oldp+89,(vlSelf->clk));
    tracep->fullBit(oldp+90,(vlSelf->rst));
    tracep->fullQData(oldp+91,(vlSelf->RamReadData),64);
    tracep->fullBit(oldp+93,(vlSelf->RamReadEnable));
    tracep->fullBit(oldp+94,(vlSelf->RamWriteEnable));
    tracep->fullQData(oldp+95,(vlSelf->RamReadAddr),64);
    tracep->fullQData(oldp+97,(vlSelf->RamWriteAddr),64);
    tracep->fullQData(oldp+99,(vlSelf->RamWriteMask),64);
    tracep->fullQData(oldp+101,(vlSelf->RamWriteData),64);
    tracep->fullIData(oldp+103,((IData)(vlSelf->RamReadData)),32);
    tracep->fullQData(oldp+104,(((IData)(vlSelf->rst)
                                  ? 0ULL : (((0x1fU 
                                              & (vlSelf->zerocore__DOT__instD 
                                                 >> 0xfU)) 
                                             == (0x1fU 
                                                 & (vlSelf->zerocore__DOT__instD 
                                                    >> 7U)))
                                             ? vlSelf->zerocore__DOT__u_ex__DOT__resADD
                                             : vlSelf->zerocore__DOT__u_regs__DOT__regs
                                            [(0x1fU 
                                              & (vlSelf->zerocore__DOT__instD 
                                                 >> 0xfU))]))),64);
    tracep->fullQData(oldp+106,(((IData)(vlSelf->rst)
                                  ? 0ULL : (((0x1fU 
                                              & (vlSelf->zerocore__DOT__instD 
                                                 >> 0x14U)) 
                                             == (0x1fU 
                                                 & (vlSelf->zerocore__DOT__instD 
                                                    >> 7U)))
                                             ? vlSelf->zerocore__DOT__u_ex__DOT__resADD
                                             : vlSelf->zerocore__DOT__u_regs__DOT__regs
                                            [(0x1fU 
                                              & (vlSelf->zerocore__DOT__instD 
                                                 >> 0x14U))]))),64);
    tracep->fullIData(oldp+108,(vlSelf->zerocore__DOT__instM),32);
    tracep->fullQData(oldp+109,(vlSelf->zerocore__DOT__pcM),64);
    tracep->fullQData(oldp+111,(vlSelf->zerocore__DOT__pcD),64);
    tracep->fullIData(oldp+113,(vlSelf->zerocore__DOT__instW),32);
    tracep->fullQData(oldp+114,(vlSelf->zerocore__DOT__pcW),64);
    tracep->fullIData(oldp+116,(vlSelf->zerocore__DOT__instE),32);
    tracep->fullQData(oldp+117,(vlSelf->zerocore__DOT__pcE),64);
    tracep->fullCData(oldp+119,(0U),4);
    tracep->fullBit(oldp+120,(1U));
    tracep->fullIData(oldp+121,(0x40U),32);
    tracep->fullIData(oldp+122,(0x20U),32);
}
