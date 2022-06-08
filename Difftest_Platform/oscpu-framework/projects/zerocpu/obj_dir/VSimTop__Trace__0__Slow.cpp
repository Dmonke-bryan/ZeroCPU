// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


VL_ATTR_COLD void VSimTop___024root__trace_init_sub__TOP__0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+97,"clock", false,-1);
    tracep->declBit(c+98,"reset", false,-1);
    tracep->declQuad(c+99,"io_logCtrl_log_begin", false,-1, 63,0);
    tracep->declQuad(c+101,"io_logCtrl_log_end", false,-1, 63,0);
    tracep->declQuad(c+103,"io_logCtrl_log_level", false,-1, 63,0);
    tracep->declBit(c+105,"io_perfInfo_clean", false,-1);
    tracep->declBit(c+106,"io_perfInfo_dump", false,-1);
    tracep->declBit(c+107,"io_uart_out_valid", false,-1);
    tracep->declBus(c+108,"io_uart_out_ch", false,-1, 7,0);
    tracep->declBit(c+109,"io_uart_in_valid", false,-1);
    tracep->declBus(c+110,"io_uart_in_ch", false,-1, 7,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+97,"clock", false,-1);
    tracep->declBit(c+98,"reset", false,-1);
    tracep->declQuad(c+99,"io_logCtrl_log_begin", false,-1, 63,0);
    tracep->declQuad(c+101,"io_logCtrl_log_end", false,-1, 63,0);
    tracep->declQuad(c+103,"io_logCtrl_log_level", false,-1, 63,0);
    tracep->declBit(c+105,"io_perfInfo_clean", false,-1);
    tracep->declBit(c+106,"io_perfInfo_dump", false,-1);
    tracep->declBit(c+107,"io_uart_out_valid", false,-1);
    tracep->declBus(c+108,"io_uart_out_ch", false,-1, 7,0);
    tracep->declBit(c+109,"io_uart_in_valid", false,-1);
    tracep->declBus(c+110,"io_uart_in_ch", false,-1, 7,0);
    tracep->declBit(c+117,"ReadEnable", false,-1);
    tracep->declBit(c+118,"WriteEnable", false,-1);
    tracep->declQuad(c+119,"ReadData", false,-1, 63,0);
    tracep->declQuad(c+2,"ReadAddr", false,-1, 63,0);
    tracep->declQuad(c+121,"WriteAddr", false,-1, 63,0);
    tracep->declQuad(c+123,"WriteData", false,-1, 63,0);
    tracep->declQuad(c+125,"WriteMask", false,-1, 63,0);
    tracep->declBit(c+4,"inst_valid", false,-1);
    tracep->declQuad(c+5,"r_pc", false,-1, 63,0);
    tracep->declBus(c+7,"r_inst", false,-1, 31,0);
    tracep->declBit(c+8,"r_valid", false,-1);
    tracep->pushNamePrefix("u_zerocore ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declQuad(c+119,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+117,"RamReadEnable", false,-1);
    tracep->declBit(c+118,"RamWriteEnable", false,-1);
    tracep->declQuad(c+2,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+121,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+125,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+123,"RamWriteData", false,-1, 63,0);
    tracep->declQuad(c+2,"pc", false,-1, 63,0);
    tracep->declBus(c+127,"instF", false,-1, 31,0);
    tracep->declQuad(c+2,"pcF", false,-1, 63,0);
    tracep->declBit(c+128,"aluBsrc", false,-1);
    tracep->declBus(c+9,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+10,"ra_addr", false,-1, 4,0);
    tracep->declBus(c+11,"rb_addr", false,-1, 4,0);
    tracep->declBus(c+12,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+129,"ra", false,-1, 63,0);
    tracep->declQuad(c+111,"rb", false,-1, 63,0);
    tracep->declQuad(c+131,"rw", false,-1, 63,0);
    tracep->declBit(c+128,"rd_en", false,-1);
    tracep->declQuad(c+13,"imm", false,-1, 63,0);
    tracep->declBit(c+128,"ra_en", false,-1);
    tracep->declBit(c+128,"rb_en", false,-1);
    tracep->declBus(c+15,"instD", false,-1, 31,0);
    tracep->declQuad(c+16,"pcD", false,-1, 63,0);
    tracep->declQuad(c+113,"ina", false,-1, 63,0);
    tracep->declQuad(c+13,"inb", false,-1, 63,0);
    tracep->declQuad(c+115,"res", false,-1, 63,0);
    tracep->declBus(c+18,"instE", false,-1, 31,0);
    tracep->declQuad(c+19,"pcE", false,-1, 63,0);
    tracep->declBus(c+21,"instM", false,-1, 31,0);
    tracep->declQuad(c+22,"pcM", false,-1, 63,0);
    tracep->declBus(c+24,"instW", false,-1, 31,0);
    tracep->declQuad(c+25,"pcW", false,-1, 63,0);
    tracep->pushNamePrefix("u_ex ");
    tracep->declQuad(c+113,"ina", false,-1, 63,0);
    tracep->declQuad(c+13,"inb", false,-1, 63,0);
    tracep->declBus(c+9,"aluCtl", false,-1, 3,0);
    tracep->declQuad(c+115,"res", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_id ");
    tracep->declBus(c+15,"inst", false,-1, 31,0);
    tracep->declBit(c+128,"ra_en", false,-1);
    tracep->declBus(c+10,"ra_addr", false,-1, 4,0);
    tracep->declBit(c+128,"rb_en", false,-1);
    tracep->declBus(c+11,"rb_addr", false,-1, 4,0);
    tracep->declBit(c+128,"rd_en", false,-1);
    tracep->declBus(c+12,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+13,"imm", false,-1, 63,0);
    tracep->declBit(c+128,"aluBsrc", false,-1);
    tracep->declBus(c+9,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+27,"opcode", false,-1, 6,0);
    tracep->declBus(c+28,"funt3", false,-1, 2,0);
    tracep->declBit(c+29,"opcode_001_0011", false,-1);
    tracep->declBit(c+30,"funt3_000", false,-1);
    tracep->declBit(c+31,"ADDI", false,-1);
    tracep->declBus(c+32,"aluType", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_if ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declQuad(c+2,"pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_D2E ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBit(c+128,"wen", false,-1);
    tracep->declBus(c+15,"din", false,-1, 31,0);
    tracep->declBus(c+18,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_E2M ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBit(c+128,"wen", false,-1);
    tracep->declBus(c+18,"din", false,-1, 31,0);
    tracep->declBus(c+21,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_F2D ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBit(c+128,"wen", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+15,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_M2W ");
    tracep->declBus(c+133,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBit(c+128,"wen", false,-1);
    tracep->declBus(c+21,"din", false,-1, 31,0);
    tracep->declBus(c+24,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_D2E ");
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBit(c+128,"wen", false,-1);
    tracep->declQuad(c+16,"din", false,-1, 63,0);
    tracep->declQuad(c+19,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_E2M ");
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBit(c+128,"wen", false,-1);
    tracep->declQuad(c+19,"din", false,-1, 63,0);
    tracep->declQuad(c+22,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_F2D ");
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBit(c+128,"wen", false,-1);
    tracep->declQuad(c+2,"din", false,-1, 63,0);
    tracep->declQuad(c+16,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_M2W ");
    tracep->declBus(c+134,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBit(c+128,"wen", false,-1);
    tracep->declQuad(c+22,"din", false,-1, 63,0);
    tracep->declQuad(c+25,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regs ");
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+98,"rst", false,-1);
    tracep->declBit(c+128,"Ra_en", false,-1);
    tracep->declBit(c+128,"Rb_en", false,-1);
    tracep->declBus(c+10,"Ra_addr", false,-1, 4,0);
    tracep->declBus(c+11,"Rb_addr", false,-1, 4,0);
    tracep->declQuad(c+113,"Ra", false,-1, 63,0);
    tracep->declQuad(c+111,"Rb", false,-1, 63,0);
    tracep->declBit(c+128,"Rw_en", false,-1);
    tracep->declBus(c+12,"Rw_addr", false,-1, 4,0);
    tracep->declQuad(c+131,"Rw", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+33+i*2,"regsheap", true,(i+0), 63,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VSimTop___024root__trace_init_top(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_top\n"); );
    // Body
    VSimTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSimTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSimTop___024root__trace_register(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSimTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSimTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSimTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_sub_0(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSimTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_top_0\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSimTop___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_sub_0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__i),32);
    tracep->fullQData(oldp+2,(vlSelf->SimTop__DOT__u_zerocore__DOT__pc),64);
    tracep->fullBit(oldp+4,(((0U != vlSelf->SimTop__DOT__u_zerocore__DOT__instW) 
                             & (vlSelf->SimTop__DOT__u_zerocore__DOT__pcW 
                                != vlSelf->SimTop__DOT__r_pc))));
    tracep->fullQData(oldp+5,(vlSelf->SimTop__DOT__r_pc),64);
    tracep->fullIData(oldp+7,(vlSelf->SimTop__DOT__r_inst),32);
    tracep->fullBit(oldp+8,(vlSelf->SimTop__DOT__r_valid));
    tracep->fullCData(oldp+9,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_id__DOT__aluCtl__out__out0),4);
    tracep->fullCData(oldp+10,((0x1fU & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+11,((0x1fU & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+12,((0x1fU & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                         >> 7U))),5);
    tracep->fullQData(oldp+13,((QData)((IData)((vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                >> 0x14U)))),64);
    tracep->fullIData(oldp+15,(vlSelf->SimTop__DOT__u_zerocore__DOT__instD),32);
    tracep->fullQData(oldp+16,(vlSelf->SimTop__DOT__u_zerocore__DOT__pcD),64);
    tracep->fullIData(oldp+18,(vlSelf->SimTop__DOT__u_zerocore__DOT__instE),32);
    tracep->fullQData(oldp+19,(vlSelf->SimTop__DOT__u_zerocore__DOT__pcE),64);
    tracep->fullIData(oldp+21,(vlSelf->SimTop__DOT__u_zerocore__DOT__instM),32);
    tracep->fullQData(oldp+22,(vlSelf->SimTop__DOT__u_zerocore__DOT__pcM),64);
    tracep->fullIData(oldp+24,(vlSelf->SimTop__DOT__u_zerocore__DOT__instW),32);
    tracep->fullQData(oldp+25,(vlSelf->SimTop__DOT__u_zerocore__DOT__pcW),64);
    tracep->fullCData(oldp+27,((0x7fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)),7);
    tracep->fullCData(oldp+28,((7U & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                      >> 0xcU))),3);
    tracep->fullBit(oldp+29,((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD))));
    tracep->fullBit(oldp+30,((0U == (7U & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+31,((IData)((0x13U == (0x707fU 
                                                & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)))));
    tracep->fullCData(oldp+32,(((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)) 
                                & (0U == (7U & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                >> 0xcU))))),8);
    tracep->fullQData(oldp+33,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0]),64);
    tracep->fullQData(oldp+35,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[1]),64);
    tracep->fullQData(oldp+37,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[2]),64);
    tracep->fullQData(oldp+39,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[3]),64);
    tracep->fullQData(oldp+41,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[4]),64);
    tracep->fullQData(oldp+43,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[5]),64);
    tracep->fullQData(oldp+45,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[6]),64);
    tracep->fullQData(oldp+47,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[7]),64);
    tracep->fullQData(oldp+49,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[8]),64);
    tracep->fullQData(oldp+51,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[9]),64);
    tracep->fullQData(oldp+53,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[10]),64);
    tracep->fullQData(oldp+55,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[11]),64);
    tracep->fullQData(oldp+57,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[12]),64);
    tracep->fullQData(oldp+59,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[13]),64);
    tracep->fullQData(oldp+61,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[14]),64);
    tracep->fullQData(oldp+63,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[15]),64);
    tracep->fullQData(oldp+65,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[16]),64);
    tracep->fullQData(oldp+67,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[17]),64);
    tracep->fullQData(oldp+69,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[18]),64);
    tracep->fullQData(oldp+71,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[19]),64);
    tracep->fullQData(oldp+73,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[20]),64);
    tracep->fullQData(oldp+75,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[21]),64);
    tracep->fullQData(oldp+77,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[22]),64);
    tracep->fullQData(oldp+79,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[23]),64);
    tracep->fullQData(oldp+81,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[24]),64);
    tracep->fullQData(oldp+83,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[25]),64);
    tracep->fullQData(oldp+85,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[26]),64);
    tracep->fullQData(oldp+87,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[27]),64);
    tracep->fullQData(oldp+89,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[28]),64);
    tracep->fullQData(oldp+91,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[29]),64);
    tracep->fullQData(oldp+93,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[30]),64);
    tracep->fullQData(oldp+95,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[31]),64);
    tracep->fullBit(oldp+97,(vlSelf->clock));
    tracep->fullBit(oldp+98,(vlSelf->reset));
    tracep->fullQData(oldp+99,(vlSelf->io_logCtrl_log_begin),64);
    tracep->fullQData(oldp+101,(vlSelf->io_logCtrl_log_end),64);
    tracep->fullQData(oldp+103,(vlSelf->io_logCtrl_log_level),64);
    tracep->fullBit(oldp+105,(vlSelf->io_perfInfo_clean));
    tracep->fullBit(oldp+106,(vlSelf->io_perfInfo_dump));
    tracep->fullBit(oldp+107,(vlSelf->io_uart_out_valid));
    tracep->fullCData(oldp+108,(vlSelf->io_uart_out_ch),8);
    tracep->fullBit(oldp+109,(vlSelf->io_uart_in_valid));
    tracep->fullCData(oldp+110,(vlSelf->io_uart_in_ch),8);
    tracep->fullQData(oldp+111,(((IData)(vlSelf->reset)
                                  ? 0ULL : (((0x1fU 
                                              & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                 >> 0x14U)) 
                                             == (0x1fU 
                                                 & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                    >> 7U)))
                                             ? vlSelf->SimTop__DOT__u_zerocore__DOT__rw
                                             : vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                            [(0x1fU 
                                              & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                 >> 0x14U))]))),64);
    tracep->fullQData(oldp+113,(vlSelf->SimTop__DOT__u_zerocore__DOT__ina),64);
    tracep->fullQData(oldp+115,(vlSelf->SimTop__DOT__u_zerocore__DOT__res),64);
    tracep->fullBit(oldp+117,(0U));
    tracep->fullBit(oldp+118,(vlSelf->SimTop__DOT__WriteEnable));
    tracep->fullQData(oldp+119,(vlSelf->SimTop__DOT__ReadData),64);
    tracep->fullQData(oldp+121,(vlSelf->SimTop__DOT__WriteAddr),64);
    tracep->fullQData(oldp+123,(vlSelf->SimTop__DOT__WriteData),64);
    tracep->fullQData(oldp+125,(vlSelf->SimTop__DOT__WriteMask),64);
    tracep->fullIData(oldp+127,((IData)(vlSelf->SimTop__DOT__ReadData)),32);
    tracep->fullBit(oldp+128,(1U));
    tracep->fullQData(oldp+129,(vlSelf->SimTop__DOT__u_zerocore__DOT__ra),64);
    tracep->fullQData(oldp+131,(vlSelf->SimTop__DOT__u_zerocore__DOT__rw),64);
    tracep->fullIData(oldp+133,(0x20U),32);
    tracep->fullIData(oldp+134,(0x40U),32);
}
