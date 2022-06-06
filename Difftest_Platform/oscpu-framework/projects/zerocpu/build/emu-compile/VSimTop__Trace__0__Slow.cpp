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
    tracep->declBit(c+155,"clock", false,-1);
    tracep->declBit(c+156,"reset", false,-1);
    tracep->declQuad(c+157,"io_logCtrl_log_begin", false,-1, 63,0);
    tracep->declQuad(c+159,"io_logCtrl_log_end", false,-1, 63,0);
    tracep->declQuad(c+161,"io_logCtrl_log_level", false,-1, 63,0);
    tracep->declBit(c+163,"io_perfInfo_clean", false,-1);
    tracep->declBit(c+164,"io_perfInfo_dump", false,-1);
    tracep->declBit(c+165,"io_uart_out_valid", false,-1);
    tracep->declBus(c+166,"io_uart_out_ch", false,-1, 7,0);
    tracep->declBit(c+167,"io_uart_in_valid", false,-1);
    tracep->declBus(c+168,"io_uart_in_ch", false,-1, 7,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+155,"clock", false,-1);
    tracep->declBit(c+156,"reset", false,-1);
    tracep->declQuad(c+157,"io_logCtrl_log_begin", false,-1, 63,0);
    tracep->declQuad(c+159,"io_logCtrl_log_end", false,-1, 63,0);
    tracep->declQuad(c+161,"io_logCtrl_log_level", false,-1, 63,0);
    tracep->declBit(c+163,"io_perfInfo_clean", false,-1);
    tracep->declBit(c+164,"io_perfInfo_dump", false,-1);
    tracep->declBit(c+165,"io_uart_out_valid", false,-1);
    tracep->declBus(c+166,"io_uart_out_ch", false,-1, 7,0);
    tracep->declBit(c+167,"io_uart_in_valid", false,-1);
    tracep->declBus(c+168,"io_uart_in_ch", false,-1, 7,0);
    tracep->declBit(c+175,"ReadEnable", false,-1);
    tracep->declBit(c+176,"WriteEnable", false,-1);
    tracep->declQuad(c+2,"ReadData", false,-1, 63,0);
    tracep->declQuad(c+4,"ReadAddr", false,-1, 63,0);
    tracep->declQuad(c+177,"WriteAddr", false,-1, 63,0);
    tracep->declQuad(c+179,"WriteData", false,-1, 63,0);
    tracep->declQuad(c+181,"WriteMask", false,-1, 63,0);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declQuad(c+4,"pc", false,-1, 63,0);
    tracep->declQuad(c+7,"r_pc", false,-1, 63,0);
    tracep->declBus(c+9,"r_inst", false,-1, 31,0);
    tracep->declBit(c+10,"r_valid", false,-1);
    tracep->pushNamePrefix("U_DifftestArchIntRegState ");
    tracep->declBit(c+155,"clock", false,-1);
    tracep->declBus(c+183,"coreid", false,-1, 7,0);
    tracep->declQuad(c+11,"gpr_0", false,-1, 63,0);
    tracep->declQuad(c+13,"gpr_1", false,-1, 63,0);
    tracep->declQuad(c+15,"gpr_2", false,-1, 63,0);
    tracep->declQuad(c+17,"gpr_3", false,-1, 63,0);
    tracep->declQuad(c+19,"gpr_4", false,-1, 63,0);
    tracep->declQuad(c+21,"gpr_5", false,-1, 63,0);
    tracep->declQuad(c+23,"gpr_6", false,-1, 63,0);
    tracep->declQuad(c+25,"gpr_7", false,-1, 63,0);
    tracep->declQuad(c+27,"gpr_8", false,-1, 63,0);
    tracep->declQuad(c+29,"gpr_9", false,-1, 63,0);
    tracep->declQuad(c+31,"gpr_10", false,-1, 63,0);
    tracep->declQuad(c+33,"gpr_11", false,-1, 63,0);
    tracep->declQuad(c+35,"gpr_12", false,-1, 63,0);
    tracep->declQuad(c+37,"gpr_13", false,-1, 63,0);
    tracep->declQuad(c+39,"gpr_14", false,-1, 63,0);
    tracep->declQuad(c+41,"gpr_15", false,-1, 63,0);
    tracep->declQuad(c+43,"gpr_16", false,-1, 63,0);
    tracep->declQuad(c+45,"gpr_17", false,-1, 63,0);
    tracep->declQuad(c+47,"gpr_18", false,-1, 63,0);
    tracep->declQuad(c+49,"gpr_19", false,-1, 63,0);
    tracep->declQuad(c+51,"gpr_20", false,-1, 63,0);
    tracep->declQuad(c+53,"gpr_21", false,-1, 63,0);
    tracep->declQuad(c+55,"gpr_22", false,-1, 63,0);
    tracep->declQuad(c+57,"gpr_23", false,-1, 63,0);
    tracep->declQuad(c+59,"gpr_24", false,-1, 63,0);
    tracep->declQuad(c+61,"gpr_25", false,-1, 63,0);
    tracep->declQuad(c+63,"gpr_26", false,-1, 63,0);
    tracep->declQuad(c+65,"gpr_27", false,-1, 63,0);
    tracep->declQuad(c+67,"gpr_28", false,-1, 63,0);
    tracep->declQuad(c+69,"gpr_29", false,-1, 63,0);
    tracep->declQuad(c+71,"gpr_30", false,-1, 63,0);
    tracep->declQuad(c+73,"gpr_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("U_inst_commit ");
    tracep->declBit(c+155,"clock", false,-1);
    tracep->declBus(c+183,"coreid", false,-1, 7,0);
    tracep->declBus(c+183,"index", false,-1, 7,0);
    tracep->declBit(c+10,"valid", false,-1);
    tracep->declQuad(c+7,"pc", false,-1, 63,0);
    tracep->declBus(c+9,"instr", false,-1, 31,0);
    tracep->declBit(c+175,"skip", false,-1);
    tracep->declBit(c+175,"isRVC", false,-1);
    tracep->declBit(c+175,"scFailed", false,-1);
    tracep->declBit(c+184,"wen", false,-1);
    tracep->declBus(c+185,"wdest", false,-1, 7,0);
    tracep->declQuad(c+186,"wdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_RAMHelper ");
    tracep->declBit(c+155,"clk", false,-1);
    tracep->declBit(c+175,"ren", false,-1);
    tracep->declQuad(c+4,"rIdx", false,-1, 63,0);
    tracep->declQuad(c+2,"rdata", false,-1, 63,0);
    tracep->declQuad(c+177,"wIdx", false,-1, 63,0);
    tracep->declQuad(c+179,"wdata", false,-1, 63,0);
    tracep->declQuad(c+181,"wmask", false,-1, 63,0);
    tracep->declBit(c+176,"wen", false,-1);
    tracep->declQuad(c+188,"wIdx_r", false,-1, 63,0);
    tracep->declQuad(c+75,"rIdx_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_zerocore ");
    tracep->declBit(c+155,"clk", false,-1);
    tracep->declBit(c+156,"rst", false,-1);
    tracep->declQuad(c+2,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+175,"RamReadEnable", false,-1);
    tracep->declBit(c+176,"RamWriteEnable", false,-1);
    tracep->declQuad(c+4,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+177,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+181,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+179,"RamWriteData", false,-1, 63,0);
    tracep->declQuad(c+4,"pc", false,-1, 63,0);
    tracep->declBus(c+77,"instF", false,-1, 31,0);
    tracep->declBit(c+190,"aluBsrc", false,-1);
    tracep->declBus(c+78,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+79,"ra_addr", false,-1, 4,0);
    tracep->declBus(c+80,"rb_addr", false,-1, 4,0);
    tracep->declBus(c+81,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+191,"ra", false,-1, 63,0);
    tracep->declQuad(c+169,"rb", false,-1, 63,0);
    tracep->declQuad(c+193,"rw", false,-1, 63,0);
    tracep->declBit(c+190,"rd_en", false,-1);
    tracep->declQuad(c+82,"imm", false,-1, 63,0);
    tracep->declBit(c+190,"ra_en", false,-1);
    tracep->declBit(c+190,"rb_en", false,-1);
    tracep->declBus(c+84,"instD", false,-1, 31,0);
    tracep->declQuad(c+171,"ina", false,-1, 63,0);
    tracep->declQuad(c+82,"inb", false,-1, 63,0);
    tracep->declQuad(c+173,"res", false,-1, 63,0);
    tracep->pushNamePrefix("u_ex ");
    tracep->declQuad(c+171,"ina", false,-1, 63,0);
    tracep->declQuad(c+82,"inb", false,-1, 63,0);
    tracep->declBus(c+78,"aluCtl", false,-1, 3,0);
    tracep->declQuad(c+173,"res", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_id ");
    tracep->declBus(c+84,"inst", false,-1, 31,0);
    tracep->declBit(c+190,"ra_en", false,-1);
    tracep->declBus(c+79,"ra_addr", false,-1, 4,0);
    tracep->declBit(c+190,"rb_en", false,-1);
    tracep->declBus(c+80,"rb_addr", false,-1, 4,0);
    tracep->declBit(c+190,"rd_en", false,-1);
    tracep->declBus(c+81,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+82,"imm", false,-1, 63,0);
    tracep->declBit(c+190,"aluBsrc", false,-1);
    tracep->declBus(c+78,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+85,"opcode", false,-1, 6,0);
    tracep->declBus(c+86,"funt3", false,-1, 2,0);
    tracep->declBit(c+87,"opcode_001_0011", false,-1);
    tracep->declBit(c+88,"funt3_000", false,-1);
    tracep->declBit(c+89,"ADDI", false,-1);
    tracep->declBus(c+90,"aluType", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_if ");
    tracep->declBit(c+155,"clk", false,-1);
    tracep->declBit(c+156,"rst", false,-1);
    tracep->declQuad(c+4,"pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_F2D ");
    tracep->declBus(c+195,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+155,"clk", false,-1);
    tracep->declBit(c+156,"rst", false,-1);
    tracep->declBit(c+190,"wen", false,-1);
    tracep->declBus(c+77,"din", false,-1, 31,0);
    tracep->declBus(c+84,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regs ");
    tracep->declBit(c+155,"clk", false,-1);
    tracep->declBit(c+156,"rst", false,-1);
    tracep->declBit(c+190,"Ra_en", false,-1);
    tracep->declBit(c+190,"Rb_en", false,-1);
    tracep->declBus(c+79,"Ra_addr", false,-1, 4,0);
    tracep->declBus(c+80,"Rb_addr", false,-1, 4,0);
    tracep->declQuad(c+171,"Ra", false,-1, 63,0);
    tracep->declQuad(c+169,"Rb", false,-1, 63,0);
    tracep->declBit(c+190,"Rw_en", false,-1);
    tracep->declBus(c+81,"Rw_addr", false,-1, 4,0);
    tracep->declQuad(c+193,"Rw", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+91+i*2,"regsheap", true,(i+0), 63,0);
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
    tracep->fullQData(oldp+2,(vlSelf->SimTop__DOT__ReadData),64);
    tracep->fullQData(oldp+4,(vlSelf->SimTop__DOT__u_zerocore__DOT__pc),64);
    tracep->fullIData(oldp+6,(((1U & (IData)((vlSelf->SimTop__DOT__u_zerocore__DOT__pc 
                                              >> 2U)))
                                ? (IData)((vlSelf->SimTop__DOT__ReadData 
                                           >> 0x20U))
                                : (IData)(vlSelf->SimTop__DOT__ReadData))),32);
    tracep->fullQData(oldp+7,(vlSelf->SimTop__DOT__r_pc),64);
    tracep->fullIData(oldp+9,(vlSelf->SimTop__DOT__r_inst),32);
    tracep->fullBit(oldp+10,(vlSelf->SimTop__DOT__r_valid));
    tracep->fullQData(oldp+11,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0U]),64);
    tracep->fullQData(oldp+13,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [1U]),64);
    tracep->fullQData(oldp+15,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [2U]),64);
    tracep->fullQData(oldp+17,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [3U]),64);
    tracep->fullQData(oldp+19,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [4U]),64);
    tracep->fullQData(oldp+21,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [5U]),64);
    tracep->fullQData(oldp+23,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [6U]),64);
    tracep->fullQData(oldp+25,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [7U]),64);
    tracep->fullQData(oldp+27,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [8U]),64);
    tracep->fullQData(oldp+29,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [9U]),64);
    tracep->fullQData(oldp+31,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0xaU]),64);
    tracep->fullQData(oldp+33,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0xbU]),64);
    tracep->fullQData(oldp+35,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0xcU]),64);
    tracep->fullQData(oldp+37,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0xdU]),64);
    tracep->fullQData(oldp+39,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0xeU]),64);
    tracep->fullQData(oldp+41,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0xfU]),64);
    tracep->fullQData(oldp+43,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x10U]),64);
    tracep->fullQData(oldp+45,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x11U]),64);
    tracep->fullQData(oldp+47,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x12U]),64);
    tracep->fullQData(oldp+49,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x13U]),64);
    tracep->fullQData(oldp+51,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x14U]),64);
    tracep->fullQData(oldp+53,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x15U]),64);
    tracep->fullQData(oldp+55,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x16U]),64);
    tracep->fullQData(oldp+57,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x17U]),64);
    tracep->fullQData(oldp+59,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x18U]),64);
    tracep->fullQData(oldp+61,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x19U]),64);
    tracep->fullQData(oldp+63,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x1aU]),64);
    tracep->fullQData(oldp+65,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x1bU]),64);
    tracep->fullQData(oldp+67,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x1cU]),64);
    tracep->fullQData(oldp+69,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x1dU]),64);
    tracep->fullQData(oldp+71,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x1eU]),64);
    tracep->fullQData(oldp+73,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                               [0x1fU]),64);
    tracep->fullQData(oldp+75,((vlSelf->SimTop__DOT__u_zerocore__DOT__pc 
                                - 0x80000000ULL)),64);
    tracep->fullIData(oldp+77,((IData)(vlSelf->SimTop__DOT__ReadData)),32);
    tracep->fullCData(oldp+78,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_id__DOT__aluCtl__out__out0),4);
    tracep->fullCData(oldp+79,((0x1fU & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+80,((0x1fU & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+81,((0x1fU & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                         >> 7U))),5);
    tracep->fullQData(oldp+82,((QData)((IData)((vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                >> 0x14U)))),64);
    tracep->fullIData(oldp+84,(vlSelf->SimTop__DOT__u_zerocore__DOT__instD),32);
    tracep->fullCData(oldp+85,((0x7fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)),7);
    tracep->fullCData(oldp+86,((7U & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                      >> 0xcU))),3);
    tracep->fullBit(oldp+87,((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD))));
    tracep->fullBit(oldp+88,((0U == (7U & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+89,((IData)((0x13U == (0x707fU 
                                                & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)))));
    tracep->fullCData(oldp+90,(((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)) 
                                & (0U == (7U & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                >> 0xcU))))),8);
    tracep->fullQData(oldp+91,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0]),64);
    tracep->fullQData(oldp+93,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[1]),64);
    tracep->fullQData(oldp+95,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[2]),64);
    tracep->fullQData(oldp+97,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[3]),64);
    tracep->fullQData(oldp+99,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[4]),64);
    tracep->fullQData(oldp+101,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[5]),64);
    tracep->fullQData(oldp+103,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[6]),64);
    tracep->fullQData(oldp+105,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[7]),64);
    tracep->fullQData(oldp+107,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[8]),64);
    tracep->fullQData(oldp+109,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[9]),64);
    tracep->fullQData(oldp+111,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[10]),64);
    tracep->fullQData(oldp+113,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[11]),64);
    tracep->fullQData(oldp+115,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[12]),64);
    tracep->fullQData(oldp+117,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[13]),64);
    tracep->fullQData(oldp+119,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[14]),64);
    tracep->fullQData(oldp+121,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[15]),64);
    tracep->fullQData(oldp+123,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[16]),64);
    tracep->fullQData(oldp+125,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[17]),64);
    tracep->fullQData(oldp+127,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[18]),64);
    tracep->fullQData(oldp+129,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[19]),64);
    tracep->fullQData(oldp+131,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[20]),64);
    tracep->fullQData(oldp+133,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[21]),64);
    tracep->fullQData(oldp+135,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[22]),64);
    tracep->fullQData(oldp+137,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[23]),64);
    tracep->fullQData(oldp+139,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[24]),64);
    tracep->fullQData(oldp+141,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[25]),64);
    tracep->fullQData(oldp+143,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[26]),64);
    tracep->fullQData(oldp+145,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[27]),64);
    tracep->fullQData(oldp+147,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[28]),64);
    tracep->fullQData(oldp+149,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[29]),64);
    tracep->fullQData(oldp+151,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[30]),64);
    tracep->fullQData(oldp+153,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[31]),64);
    tracep->fullBit(oldp+155,(vlSelf->clock));
    tracep->fullBit(oldp+156,(vlSelf->reset));
    tracep->fullQData(oldp+157,(vlSelf->io_logCtrl_log_begin),64);
    tracep->fullQData(oldp+159,(vlSelf->io_logCtrl_log_end),64);
    tracep->fullQData(oldp+161,(vlSelf->io_logCtrl_log_level),64);
    tracep->fullBit(oldp+163,(vlSelf->io_perfInfo_clean));
    tracep->fullBit(oldp+164,(vlSelf->io_perfInfo_dump));
    tracep->fullBit(oldp+165,(vlSelf->io_uart_out_valid));
    tracep->fullCData(oldp+166,(vlSelf->io_uart_out_ch),8);
    tracep->fullBit(oldp+167,(vlSelf->io_uart_in_valid));
    tracep->fullCData(oldp+168,(vlSelf->io_uart_in_ch),8);
    tracep->fullQData(oldp+169,(((IData)(vlSelf->reset)
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
    tracep->fullQData(oldp+171,(vlSelf->SimTop__DOT__u_zerocore__DOT__ina),64);
    tracep->fullQData(oldp+173,(vlSelf->SimTop__DOT__u_zerocore__DOT__res),64);
    tracep->fullBit(oldp+175,(0U));
    tracep->fullBit(oldp+176,(vlSelf->SimTop__DOT__WriteEnable));
    tracep->fullQData(oldp+177,(vlSelf->SimTop__DOT__WriteAddr),64);
    tracep->fullQData(oldp+179,(vlSelf->SimTop__DOT__WriteData),64);
    tracep->fullQData(oldp+181,(vlSelf->SimTop__DOT__WriteMask),64);
    tracep->fullCData(oldp+183,(0U),8);
    tracep->fullBit(oldp+184,(vlSelf->SimTop__DOT__U_inst_commit__DOT__wen));
    tracep->fullCData(oldp+185,(vlSelf->SimTop__DOT__U_inst_commit__DOT__wdest),8);
    tracep->fullQData(oldp+186,(vlSelf->SimTop__DOT__U_inst_commit__DOT__wdata),64);
    tracep->fullQData(oldp+188,((vlSelf->SimTop__DOT__WriteAddr 
                                 - 0x80000000ULL)),64);
    tracep->fullBit(oldp+190,(1U));
    tracep->fullQData(oldp+191,(vlSelf->SimTop__DOT__u_zerocore__DOT__ra),64);
    tracep->fullQData(oldp+193,(vlSelf->SimTop__DOT__u_zerocore__DOT__rw),64);
    tracep->fullIData(oldp+195,(0x20U),32);
}
