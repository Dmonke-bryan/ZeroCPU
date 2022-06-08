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
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declQuad(c+94,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+96,"RamReadEnable", false,-1);
    tracep->declBit(c+97,"RamWriteEnable", false,-1);
    tracep->declQuad(c+98,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+100,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+102,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+104,"RamWriteData", false,-1, 63,0);
    tracep->pushNamePrefix("zerocore ");
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declQuad(c+94,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+96,"RamReadEnable", false,-1);
    tracep->declBit(c+97,"RamWriteEnable", false,-1);
    tracep->declQuad(c+98,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+100,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+102,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+104,"RamWriteData", false,-1, 63,0);
    tracep->declQuad(c+2,"pcF", false,-1, 63,0);
    tracep->declBus(c+106,"instF", false,-1, 31,0);
    tracep->declBus(c+4,"instD", false,-1, 31,0);
    tracep->declQuad(c+5,"pcD", false,-1, 63,0);
    tracep->declBit(c+113,"aluBsrc", false,-1);
    tracep->declBus(c+7,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+8,"ra_addr", false,-1, 4,0);
    tracep->declBus(c+9,"rb_addr", false,-1, 4,0);
    tracep->declBus(c+10,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+114,"ra", false,-1, 63,0);
    tracep->declQuad(c+107,"rb", false,-1, 63,0);
    tracep->declQuad(c+116,"rw", false,-1, 63,0);
    tracep->declBit(c+113,"rd_en", false,-1);
    tracep->declQuad(c+11,"imm", false,-1, 63,0);
    tracep->declBit(c+113,"ra_en", false,-1);
    tracep->declBit(c+113,"rb_en", false,-1);
    tracep->declQuad(c+109,"ina", false,-1, 63,0);
    tracep->declQuad(c+11,"inb", false,-1, 63,0);
    tracep->declQuad(c+111,"res", false,-1, 63,0);
    tracep->declBus(c+13,"instE", false,-1, 31,0);
    tracep->declQuad(c+14,"pcE", false,-1, 63,0);
    tracep->declBus(c+16,"instM", false,-1, 31,0);
    tracep->declQuad(c+17,"pcM", false,-1, 63,0);
    tracep->declBus(c+19,"instW", false,-1, 31,0);
    tracep->declQuad(c+20,"pcW", false,-1, 63,0);
    tracep->pushNamePrefix("u_ex ");
    tracep->declQuad(c+109,"ina", false,-1, 63,0);
    tracep->declQuad(c+11,"inb", false,-1, 63,0);
    tracep->declBus(c+7,"aluCtl", false,-1, 3,0);
    tracep->declQuad(c+111,"res", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_id ");
    tracep->declBus(c+4,"inst", false,-1, 31,0);
    tracep->declBit(c+113,"ra_en", false,-1);
    tracep->declBus(c+8,"ra_addr", false,-1, 4,0);
    tracep->declBit(c+113,"rb_en", false,-1);
    tracep->declBus(c+9,"rb_addr", false,-1, 4,0);
    tracep->declBit(c+113,"rd_en", false,-1);
    tracep->declBus(c+10,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+11,"imm", false,-1, 63,0);
    tracep->declBit(c+113,"aluBsrc", false,-1);
    tracep->declBus(c+7,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+22,"opcode", false,-1, 6,0);
    tracep->declBus(c+23,"funt3", false,-1, 2,0);
    tracep->declBit(c+24,"opcode_001_0011", false,-1);
    tracep->declBit(c+25,"funt3_000", false,-1);
    tracep->declBit(c+26,"ADDI", false,-1);
    tracep->declBus(c+27,"aluType", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_if ");
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declQuad(c+2,"pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_D2E ");
    tracep->declBus(c+118,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+113,"wen", false,-1);
    tracep->declBus(c+106,"din", false,-1, 31,0);
    tracep->declBus(c+13,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_E2M ");
    tracep->declBus(c+118,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+113,"wen", false,-1);
    tracep->declBus(c+13,"din", false,-1, 31,0);
    tracep->declBus(c+16,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_F2D ");
    tracep->declBus(c+118,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+113,"wen", false,-1);
    tracep->declBus(c+106,"din", false,-1, 31,0);
    tracep->declBus(c+4,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_M2W ");
    tracep->declBus(c+118,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+113,"wen", false,-1);
    tracep->declBus(c+16,"din", false,-1, 31,0);
    tracep->declBus(c+19,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_D2E ");
    tracep->declBus(c+119,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+113,"wen", false,-1);
    tracep->declQuad(c+5,"din", false,-1, 63,0);
    tracep->declQuad(c+14,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_E2M ");
    tracep->declBus(c+119,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+113,"wen", false,-1);
    tracep->declQuad(c+14,"din", false,-1, 63,0);
    tracep->declQuad(c+17,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_F2D ");
    tracep->declBus(c+119,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+113,"wen", false,-1);
    tracep->declQuad(c+2,"din", false,-1, 63,0);
    tracep->declQuad(c+5,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_M2W ");
    tracep->declBus(c+119,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+113,"wen", false,-1);
    tracep->declQuad(c+17,"din", false,-1, 63,0);
    tracep->declQuad(c+20,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regs ");
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+113,"Ra_en", false,-1);
    tracep->declBit(c+113,"Rb_en", false,-1);
    tracep->declBus(c+8,"Ra_addr", false,-1, 4,0);
    tracep->declBus(c+9,"Rb_addr", false,-1, 4,0);
    tracep->declQuad(c+109,"Ra", false,-1, 63,0);
    tracep->declQuad(c+107,"Rb", false,-1, 63,0);
    tracep->declBit(c+113,"Rw_en", false,-1);
    tracep->declBus(c+10,"Rw_addr", false,-1, 4,0);
    tracep->declQuad(c+116,"Rw", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+28+i*2,"regsheap", true,(i+0), 63,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
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
    tracep->fullIData(oldp+1,(vlSelf->zerocore__DOT__u_regs__DOT__i),32);
    tracep->fullQData(oldp+2,(vlSelf->zerocore__DOT__pcF),64);
    tracep->fullIData(oldp+4,(vlSelf->zerocore__DOT__instD),32);
    tracep->fullQData(oldp+5,(vlSelf->zerocore__DOT__pcD),64);
    tracep->fullCData(oldp+7,(vlSelf->zerocore__DOT__u_id__DOT__aluCtl__out__out0),4);
    tracep->fullCData(oldp+8,((0x1fU & (vlSelf->zerocore__DOT__instD 
                                        >> 0xfU))),5);
    tracep->fullCData(oldp+9,((0x1fU & (vlSelf->zerocore__DOT__instD 
                                        >> 0x14U))),5);
    tracep->fullCData(oldp+10,((0x1fU & (vlSelf->zerocore__DOT__instD 
                                         >> 7U))),5);
    tracep->fullQData(oldp+11,((QData)((IData)((vlSelf->zerocore__DOT__instD 
                                                >> 0x14U)))),64);
    tracep->fullIData(oldp+13,(vlSelf->zerocore__DOT__instE),32);
    tracep->fullQData(oldp+14,(vlSelf->zerocore__DOT__pcE),64);
    tracep->fullIData(oldp+16,(vlSelf->zerocore__DOT__instM),32);
    tracep->fullQData(oldp+17,(vlSelf->zerocore__DOT__pcM),64);
    tracep->fullIData(oldp+19,(vlSelf->zerocore__DOT__instW),32);
    tracep->fullQData(oldp+20,(vlSelf->zerocore__DOT__pcW),64);
    tracep->fullCData(oldp+22,((0x7fU & vlSelf->zerocore__DOT__instD)),7);
    tracep->fullCData(oldp+23,((7U & (vlSelf->zerocore__DOT__instD 
                                      >> 0xcU))),3);
    tracep->fullBit(oldp+24,((0x13U == (0x7fU & vlSelf->zerocore__DOT__instD))));
    tracep->fullBit(oldp+25,((0U == (7U & (vlSelf->zerocore__DOT__instD 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+26,((IData)((0x13U == (0x707fU 
                                                & vlSelf->zerocore__DOT__instD)))));
    tracep->fullCData(oldp+27,(((0x13U == (0x7fU & vlSelf->zerocore__DOT__instD)) 
                                & (0U == (7U & (vlSelf->zerocore__DOT__instD 
                                                >> 0xcU))))),8);
    tracep->fullQData(oldp+28,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0]),64);
    tracep->fullQData(oldp+30,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[1]),64);
    tracep->fullQData(oldp+32,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[2]),64);
    tracep->fullQData(oldp+34,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[3]),64);
    tracep->fullQData(oldp+36,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[4]),64);
    tracep->fullQData(oldp+38,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[5]),64);
    tracep->fullQData(oldp+40,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[6]),64);
    tracep->fullQData(oldp+42,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[7]),64);
    tracep->fullQData(oldp+44,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[8]),64);
    tracep->fullQData(oldp+46,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[9]),64);
    tracep->fullQData(oldp+48,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[10]),64);
    tracep->fullQData(oldp+50,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[11]),64);
    tracep->fullQData(oldp+52,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[12]),64);
    tracep->fullQData(oldp+54,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[13]),64);
    tracep->fullQData(oldp+56,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[14]),64);
    tracep->fullQData(oldp+58,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[15]),64);
    tracep->fullQData(oldp+60,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[16]),64);
    tracep->fullQData(oldp+62,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[17]),64);
    tracep->fullQData(oldp+64,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[18]),64);
    tracep->fullQData(oldp+66,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[19]),64);
    tracep->fullQData(oldp+68,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[20]),64);
    tracep->fullQData(oldp+70,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[21]),64);
    tracep->fullQData(oldp+72,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[22]),64);
    tracep->fullQData(oldp+74,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[23]),64);
    tracep->fullQData(oldp+76,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[24]),64);
    tracep->fullQData(oldp+78,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[25]),64);
    tracep->fullQData(oldp+80,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[26]),64);
    tracep->fullQData(oldp+82,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[27]),64);
    tracep->fullQData(oldp+84,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[28]),64);
    tracep->fullQData(oldp+86,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[29]),64);
    tracep->fullQData(oldp+88,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[30]),64);
    tracep->fullQData(oldp+90,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[31]),64);
    tracep->fullBit(oldp+92,(vlSelf->clk));
    tracep->fullBit(oldp+93,(vlSelf->rst));
    tracep->fullQData(oldp+94,(vlSelf->RamReadData),64);
    tracep->fullBit(oldp+96,(vlSelf->RamReadEnable));
    tracep->fullBit(oldp+97,(vlSelf->RamWriteEnable));
    tracep->fullQData(oldp+98,(vlSelf->RamReadAddr),64);
    tracep->fullQData(oldp+100,(vlSelf->RamWriteAddr),64);
    tracep->fullQData(oldp+102,(vlSelf->RamWriteMask),64);
    tracep->fullQData(oldp+104,(vlSelf->RamWriteData),64);
    tracep->fullIData(oldp+106,((IData)(vlSelf->RamReadData)),32);
    tracep->fullQData(oldp+107,(((IData)(vlSelf->rst)
                                  ? 0ULL : (((0x1fU 
                                              & (vlSelf->zerocore__DOT__instD 
                                                 >> 0x14U)) 
                                             == (0x1fU 
                                                 & (vlSelf->zerocore__DOT__instD 
                                                    >> 7U)))
                                             ? vlSelf->zerocore__DOT__rw
                                             : vlSelf->zerocore__DOT__u_regs__DOT__regsheap
                                            [(0x1fU 
                                              & (vlSelf->zerocore__DOT__instD 
                                                 >> 0x14U))]))),64);
    tracep->fullQData(oldp+109,(vlSelf->zerocore__DOT__ina),64);
    tracep->fullQData(oldp+111,(vlSelf->zerocore__DOT__res),64);
    tracep->fullBit(oldp+113,(1U));
    tracep->fullQData(oldp+114,(vlSelf->zerocore__DOT__ra),64);
    tracep->fullQData(oldp+116,(vlSelf->zerocore__DOT__rw),64);
    tracep->fullIData(oldp+118,(0x20U),32);
    tracep->fullIData(oldp+119,(0x40U),32);
}
