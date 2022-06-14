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
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declQuad(c+85,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+87,"RamReadEnable", false,-1);
    tracep->declQuad(c+88,"RamReadAddr", false,-1, 63,0);
    tracep->pushNamePrefix("zerocore ");
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declQuad(c+85,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+87,"RamReadEnable", false,-1);
    tracep->declQuad(c+88,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+1,"pcF", false,-1, 63,0);
    tracep->declBus(c+90,"instF", false,-1, 31,0);
    tracep->declBus(c+114,"instM", false,-1, 31,0);
    tracep->declQuad(c+115,"pcM", false,-1, 63,0);
    tracep->declQuad(c+117,"pcD", false,-1, 63,0);
    tracep->declBus(c+90,"instD", false,-1, 31,0);
    tracep->declBus(c+119,"instW", false,-1, 31,0);
    tracep->declQuad(c+120,"pcW", false,-1, 63,0);
    tracep->declBus(c+122,"instE", false,-1, 31,0);
    tracep->declQuad(c+123,"pcE", false,-1, 63,0);
    tracep->declQuad(c+3,"ina", false,-1, 63,0);
    tracep->declQuad(c+91,"inb", false,-1, 63,0);
    tracep->declBit(c+93,"aluBsrc", false,-1);
    tracep->declBus(c+125,"aluCtl", false,-1, 3,0);
    tracep->declQuad(c+94,"imm", false,-1, 63,0);
    tracep->declBit(c+76,"rs1ReadEnable", false,-1);
    tracep->declBit(c+77,"rs2ReadEnable", false,-1);
    tracep->declBus(c+78,"rs1ReadAddr", false,-1, 4,0);
    tracep->declBus(c+79,"rs2ReadAddr", false,-1, 4,0);
    tracep->declQuad(c+96,"rs1DataD", false,-1, 63,0);
    tracep->declQuad(c+98,"rs2DataD", false,-1, 63,0);
    tracep->declQuad(c+3,"rs1DataE", false,-1, 63,0);
    tracep->declQuad(c+5,"rs2DataE", false,-1, 63,0);
    tracep->declBit(c+100,"rdWriteEnableE", false,-1);
    tracep->declBus(c+101,"rdWriteAddrE", false,-1, 4,0);
    tracep->declBit(c+102,"rdWriteEnableM", false,-1);
    tracep->declBus(c+7,"rdWriteAddrM", false,-1, 4,0);
    tracep->declBit(c+8,"rdWriteEnableW", false,-1);
    tracep->declBus(c+9,"rdWriteAddrW", false,-1, 4,0);
    tracep->declQuad(c+80,"rdWriteDataW", false,-1, 63,0);
    tracep->declBus(c+10,"Redirect1", false,-1, 1,0);
    tracep->declBus(c+11,"Redirect2", false,-1, 1,0);
    tracep->pushNamePrefix("rs1Data_D2E ");
    tracep->declBus(c+126,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declQuad(c+96,"din", false,-1, 63,0);
    tracep->declQuad(c+3,"dout", false,-1, 63,0);
    tracep->declQuad(c+3,"dout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2Data_D2E ");
    tracep->declBus(c+126,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declQuad(c+98,"din", false,-1, 63,0);
    tracep->declQuad(c+5,"dout", false,-1, 63,0);
    tracep->declQuad(c+5,"dout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ctrl ");
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declBus(c+78,"rs1ReadAddr", false,-1, 4,0);
    tracep->declBus(c+79,"rs2ReadAddr", false,-1, 4,0);
    tracep->declBus(c+101,"rdWriteAddrE", false,-1, 4,0);
    tracep->declBus(c+7,"rdWriteAddrM", false,-1, 4,0);
    tracep->declBit(c+76,"rs1ReadEnable", false,-1);
    tracep->declBit(c+77,"rs2ReadEnable", false,-1);
    tracep->declBus(c+10,"Redirect1", false,-1, 1,0);
    tracep->declBus(c+11,"Redirect2", false,-1, 1,0);
    tracep->declBus(c+82,"Redirect1_r", false,-1, 1,0);
    tracep->declBus(c+103,"Redirect2_r", false,-1, 1,0);
    tracep->pushNamePrefix("Redirect1_dff ");
    tracep->declBus(c+127,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declBus(c+82,"din", false,-1, 1,0);
    tracep->declBus(c+10,"dout", false,-1, 1,0);
    tracep->declBus(c+10,"dout_r", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Redirect2_dff ");
    tracep->declBus(c+127,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declBus(c+103,"din", false,-1, 1,0);
    tracep->declBus(c+11,"dout", false,-1, 1,0);
    tracep->declBus(c+11,"dout_r", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ex ");
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declQuad(c+3,"ina", false,-1, 63,0);
    tracep->declQuad(c+91,"inb", false,-1, 63,0);
    tracep->declBus(c+125,"aluCtl", false,-1, 3,0);
    tracep->declBit(c+100,"rdWriteEnableE", false,-1);
    tracep->declBus(c+101,"rdWriteAddrE", false,-1, 4,0);
    tracep->declQuad(c+80,"outy", false,-1, 63,0);
    tracep->declBit(c+102,"rdWriteEnableM", false,-1);
    tracep->declBus(c+7,"rdWriteAddrM", false,-1, 4,0);
    tracep->declBus(c+101,"rdWriteAddrE_r", false,-1, 4,0);
    tracep->declBit(c+100,"rdWriteEnableE_r", false,-1);
    tracep->declQuad(c+80,"resADD", false,-1, 63,0);
    tracep->pushNamePrefix("rdWriteAddr_E2M ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declBus(c+101,"din", false,-1, 4,0);
    tracep->declBus(c+7,"dout", false,-1, 4,0);
    tracep->declBus(c+7,"dout_r", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_id ");
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBus(c+90,"instD", false,-1, 31,0);
    tracep->declBit(c+76,"rs1ReadEnable", false,-1);
    tracep->declBus(c+78,"rs1ReadAddr", false,-1, 4,0);
    tracep->declBit(c+77,"rs2ReadEnable", false,-1);
    tracep->declBus(c+79,"rs2ReadAddr", false,-1, 4,0);
    tracep->declBit(c+100,"rdWriteEnableE", false,-1);
    tracep->declBus(c+101,"rdWriteAddrE", false,-1, 4,0);
    tracep->declQuad(c+94,"imm", false,-1, 63,0);
    tracep->declBit(c+93,"aluBsrc", false,-1);
    tracep->declBus(c+125,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+104,"rs1", false,-1, 4,0);
    tracep->declBus(c+105,"rs2", false,-1, 4,0);
    tracep->declBus(c+106,"opcode", false,-1, 6,0);
    tracep->declBus(c+107,"funt3", false,-1, 2,0);
    tracep->declBit(c+108,"opcode_001_0011", false,-1);
    tracep->declBit(c+109,"opcode_011_0011", false,-1);
    tracep->declBit(c+110,"opcode_011_1011", false,-1);
    tracep->declBit(c+111,"funt3_000", false,-1);
    tracep->declBit(c+108,"Itype", false,-1);
    tracep->declBit(c+93,"ADDI", false,-1);
    tracep->declBit(c+77,"Rtype", false,-1);
    tracep->declBit(c+112,"ADD", false,-1);
    tracep->declBus(c+113,"aluType", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_if ");
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declQuad(c+1,"pc", false,-1, 63,0);
    tracep->declBus(c+90,"instF", false,-1, 31,0);
    tracep->declBus(c+90,"instD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem ");
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declBit(c+102,"rdWriteEnableM", false,-1);
    tracep->declBus(c+7,"rdWriteAddrM", false,-1, 4,0);
    tracep->declBit(c+8,"rdWriteEnableW", false,-1);
    tracep->declBus(c+9,"rdWriteAddrW", false,-1, 4,0);
    tracep->pushNamePrefix("rdWriteAddr_M2W ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declBus(c+7,"din", false,-1, 4,0);
    tracep->declBus(c+9,"dout", false,-1, 4,0);
    tracep->declBus(c+9,"dout_r", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdWriteEnable_M2W ");
    tracep->declBus(c+129,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declBus(c+102,"din", false,-1, 0,0);
    tracep->declBus(c+8,"dout", false,-1, 0,0);
    tracep->declBus(c+8,"dout_r", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_regs ");
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"rst", false,-1);
    tracep->declBit(c+76,"ReadEnable1", false,-1);
    tracep->declBit(c+77,"ReadEnable2", false,-1);
    tracep->declBus(c+78,"ReadAddr1", false,-1, 4,0);
    tracep->declBus(c+79,"ReadAddr2", false,-1, 4,0);
    tracep->declQuad(c+96,"ReadData1", false,-1, 63,0);
    tracep->declQuad(c+98,"ReadData2", false,-1, 63,0);
    tracep->declBit(c+8,"WriteEnable", false,-1);
    tracep->declBus(c+9,"WriteAddr", false,-1, 4,0);
    tracep->declQuad(c+80,"WriteData", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+12+i*2,"regs", true,(i+0), 63,0);
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
    tracep->fullQData(oldp+3,(vlSelf->zerocore__DOT__rs1Data_D2E__DOT__dout_r),64);
    tracep->fullQData(oldp+5,(vlSelf->zerocore__DOT__rs2Data_D2E__DOT__dout_r),64);
    tracep->fullCData(oldp+7,(vlSelf->zerocore__DOT__u_ex__DOT__rdWriteAddr_E2M__DOT__dout_r),5);
    tracep->fullBit(oldp+8,(vlSelf->zerocore__DOT__u_mem__DOT__rdWriteEnable_M2W__DOT__dout_r));
    tracep->fullCData(oldp+9,(vlSelf->zerocore__DOT__u_mem__DOT__rdWriteAddr_M2W__DOT__dout_r),5);
    tracep->fullCData(oldp+10,(vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect1_dff__DOT__dout_r),2);
    tracep->fullCData(oldp+11,(vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect2_dff__DOT__dout_r),2);
    tracep->fullQData(oldp+12,(vlSelf->zerocore__DOT__u_regs__DOT__regs[0]),64);
    tracep->fullQData(oldp+14,(vlSelf->zerocore__DOT__u_regs__DOT__regs[1]),64);
    tracep->fullQData(oldp+16,(vlSelf->zerocore__DOT__u_regs__DOT__regs[2]),64);
    tracep->fullQData(oldp+18,(vlSelf->zerocore__DOT__u_regs__DOT__regs[3]),64);
    tracep->fullQData(oldp+20,(vlSelf->zerocore__DOT__u_regs__DOT__regs[4]),64);
    tracep->fullQData(oldp+22,(vlSelf->zerocore__DOT__u_regs__DOT__regs[5]),64);
    tracep->fullQData(oldp+24,(vlSelf->zerocore__DOT__u_regs__DOT__regs[6]),64);
    tracep->fullQData(oldp+26,(vlSelf->zerocore__DOT__u_regs__DOT__regs[7]),64);
    tracep->fullQData(oldp+28,(vlSelf->zerocore__DOT__u_regs__DOT__regs[8]),64);
    tracep->fullQData(oldp+30,(vlSelf->zerocore__DOT__u_regs__DOT__regs[9]),64);
    tracep->fullQData(oldp+32,(vlSelf->zerocore__DOT__u_regs__DOT__regs[10]),64);
    tracep->fullQData(oldp+34,(vlSelf->zerocore__DOT__u_regs__DOT__regs[11]),64);
    tracep->fullQData(oldp+36,(vlSelf->zerocore__DOT__u_regs__DOT__regs[12]),64);
    tracep->fullQData(oldp+38,(vlSelf->zerocore__DOT__u_regs__DOT__regs[13]),64);
    tracep->fullQData(oldp+40,(vlSelf->zerocore__DOT__u_regs__DOT__regs[14]),64);
    tracep->fullQData(oldp+42,(vlSelf->zerocore__DOT__u_regs__DOT__regs[15]),64);
    tracep->fullQData(oldp+44,(vlSelf->zerocore__DOT__u_regs__DOT__regs[16]),64);
    tracep->fullQData(oldp+46,(vlSelf->zerocore__DOT__u_regs__DOT__regs[17]),64);
    tracep->fullQData(oldp+48,(vlSelf->zerocore__DOT__u_regs__DOT__regs[18]),64);
    tracep->fullQData(oldp+50,(vlSelf->zerocore__DOT__u_regs__DOT__regs[19]),64);
    tracep->fullQData(oldp+52,(vlSelf->zerocore__DOT__u_regs__DOT__regs[20]),64);
    tracep->fullQData(oldp+54,(vlSelf->zerocore__DOT__u_regs__DOT__regs[21]),64);
    tracep->fullQData(oldp+56,(vlSelf->zerocore__DOT__u_regs__DOT__regs[22]),64);
    tracep->fullQData(oldp+58,(vlSelf->zerocore__DOT__u_regs__DOT__regs[23]),64);
    tracep->fullQData(oldp+60,(vlSelf->zerocore__DOT__u_regs__DOT__regs[24]),64);
    tracep->fullQData(oldp+62,(vlSelf->zerocore__DOT__u_regs__DOT__regs[25]),64);
    tracep->fullQData(oldp+64,(vlSelf->zerocore__DOT__u_regs__DOT__regs[26]),64);
    tracep->fullQData(oldp+66,(vlSelf->zerocore__DOT__u_regs__DOT__regs[27]),64);
    tracep->fullQData(oldp+68,(vlSelf->zerocore__DOT__u_regs__DOT__regs[28]),64);
    tracep->fullQData(oldp+70,(vlSelf->zerocore__DOT__u_regs__DOT__regs[29]),64);
    tracep->fullQData(oldp+72,(vlSelf->zerocore__DOT__u_regs__DOT__regs[30]),64);
    tracep->fullQData(oldp+74,(vlSelf->zerocore__DOT__u_regs__DOT__regs[31]),64);
    tracep->fullBit(oldp+76,(vlSelf->zerocore__DOT__rs1ReadEnable));
    tracep->fullBit(oldp+77,(vlSelf->zerocore__DOT__u_id__DOT__Rtype));
    tracep->fullCData(oldp+78,(vlSelf->zerocore__DOT__rs1ReadAddr),5);
    tracep->fullCData(oldp+79,(vlSelf->zerocore__DOT__rs2ReadAddr),5);
    tracep->fullQData(oldp+80,(vlSelf->zerocore__DOT__u_ex__DOT__resADD),64);
    tracep->fullCData(oldp+82,(vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect1_r),2);
    tracep->fullBit(oldp+83,(vlSelf->clk));
    tracep->fullBit(oldp+84,(vlSelf->rst));
    tracep->fullQData(oldp+85,(vlSelf->RamReadData),64);
    tracep->fullBit(oldp+87,(vlSelf->RamReadEnable));
    tracep->fullQData(oldp+88,(vlSelf->RamReadAddr),64);
    tracep->fullIData(oldp+90,((IData)(vlSelf->RamReadData)),32);
    tracep->fullQData(oldp+91,(((IData)((0x13ULL == 
                                         (0x707fULL 
                                          & vlSelf->RamReadData)))
                                 ? (QData)((IData)(
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->RamReadData 
                                                               >> 0x14U)))))
                                 : vlSelf->zerocore__DOT__rs2Data_D2E__DOT__dout_r)),64);
    tracep->fullBit(oldp+93,((IData)((0x13ULL == (0x707fULL 
                                                  & vlSelf->RamReadData)))));
    tracep->fullQData(oldp+94,((QData)((IData)((0xfffU 
                                                & (IData)(
                                                          (vlSelf->RamReadData 
                                                           >> 0x14U)))))),64);
    tracep->fullQData(oldp+96,(((IData)(vlSelf->rst)
                                 ? 0ULL : ((IData)(vlSelf->zerocore__DOT__rs1ReadEnable)
                                            ? (((IData)(vlSelf->zerocore__DOT__rs1ReadAddr) 
                                                == (IData)(vlSelf->zerocore__DOT__u_mem__DOT__rdWriteAddr_M2W__DOT__dout_r))
                                                ? vlSelf->zerocore__DOT__u_ex__DOT__resADD
                                                : vlSelf->zerocore__DOT__u_regs__DOT__regs
                                               [vlSelf->zerocore__DOT__rs1ReadAddr])
                                            : 0ULL))),64);
    tracep->fullQData(oldp+98,(((IData)(vlSelf->rst)
                                 ? 0ULL : ((IData)(vlSelf->zerocore__DOT__u_id__DOT__Rtype)
                                            ? (((IData)(vlSelf->zerocore__DOT__rs2ReadAddr) 
                                                == (IData)(vlSelf->zerocore__DOT__u_mem__DOT__rdWriteAddr_M2W__DOT__dout_r))
                                                ? vlSelf->zerocore__DOT__u_ex__DOT__resADD
                                                : vlSelf->zerocore__DOT__u_regs__DOT__regs
                                               [vlSelf->zerocore__DOT__rs2ReadAddr])
                                            : 0ULL))),64);
    tracep->fullBit(oldp+100,(((IData)(vlSelf->zerocore__DOT__u_id__DOT__Rtype) 
                               | (0x13U == (0x7fU & (IData)(vlSelf->RamReadData))))));
    tracep->fullCData(oldp+101,((0x1fU & (IData)((vlSelf->RamReadData 
                                                  >> 7U)))),5);
    tracep->fullBit(oldp+102,(vlSelf->zerocore__DOT__rdWriteEnableM));
    tracep->fullCData(oldp+103,((((~ (IData)(vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect1_r)) 
                                  & (((0U != (IData)(vlSelf->zerocore__DOT__rs2ReadAddr)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelf->zerocore__DOT__rs1ReadAddr)))) 
                                 & (((((IData)(vlSelf->zerocore__DOT__u_ex__DOT__rdWriteAddr_E2M__DOT__dout_r) 
                                       == (IData)(vlSelf->zerocore__DOT__rs2ReadAddr)) 
                                      & (IData)(vlSelf->zerocore__DOT__u_id__DOT__Rtype)) 
                                     << 1U) | (((IData)(vlSelf->zerocore__DOT__u_ex__DOT__rdWriteAddr_E2M__DOT__dout_r) 
                                                == (IData)(vlSelf->zerocore__DOT__rs1ReadAddr)) 
                                               & (IData)(vlSelf->zerocore__DOT__rs1ReadEnable))))),2);
    tracep->fullCData(oldp+104,((0x1fU & (IData)((vlSelf->RamReadData 
                                                  >> 0xfU)))),5);
    tracep->fullCData(oldp+105,((0x1fU & (IData)((vlSelf->RamReadData 
                                                  >> 0x14U)))),5);
    tracep->fullCData(oldp+106,((0x7fU & (IData)(vlSelf->RamReadData))),7);
    tracep->fullCData(oldp+107,((7U & (IData)((vlSelf->RamReadData 
                                               >> 0xcU)))),3);
    tracep->fullBit(oldp+108,((0x13U == (0x7fU & (IData)(vlSelf->RamReadData)))));
    tracep->fullBit(oldp+109,((0x33U == (0x7fU & (IData)(vlSelf->RamReadData)))));
    tracep->fullBit(oldp+110,((0x3bU == (0x7fU & (IData)(vlSelf->RamReadData)))));
    tracep->fullBit(oldp+111,((0U == (7U & (IData)(
                                                   (vlSelf->RamReadData 
                                                    >> 0xcU))))));
    tracep->fullBit(oldp+112,((IData)((0x33ULL == (0x707fULL 
                                                   & vlSelf->RamReadData)))));
    tracep->fullCData(oldp+113,(((0x13U == (0x7fU & (IData)(vlSelf->RamReadData))) 
                                 & (0U == (7U & (IData)(
                                                        (vlSelf->RamReadData 
                                                         >> 0xcU)))))),8);
    tracep->fullIData(oldp+114,(vlSelf->zerocore__DOT__instM),32);
    tracep->fullQData(oldp+115,(vlSelf->zerocore__DOT__pcM),64);
    tracep->fullQData(oldp+117,(vlSelf->zerocore__DOT__pcD),64);
    tracep->fullIData(oldp+119,(vlSelf->zerocore__DOT__instW),32);
    tracep->fullQData(oldp+120,(vlSelf->zerocore__DOT__pcW),64);
    tracep->fullIData(oldp+122,(vlSelf->zerocore__DOT__instE),32);
    tracep->fullQData(oldp+123,(vlSelf->zerocore__DOT__pcE),64);
    tracep->fullCData(oldp+125,(0U),4);
    tracep->fullIData(oldp+126,(0x40U),32);
    tracep->fullIData(oldp+127,(2U),32);
    tracep->fullIData(oldp+128,(5U),32);
    tracep->fullIData(oldp+129,(1U),32);
}
