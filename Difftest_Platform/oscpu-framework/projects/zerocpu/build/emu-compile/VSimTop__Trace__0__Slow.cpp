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
    tracep->declBit(c+166,"clock", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declQuad(c+168,"io_logCtrl_log_begin", false,-1, 63,0);
    tracep->declQuad(c+170,"io_logCtrl_log_end", false,-1, 63,0);
    tracep->declQuad(c+172,"io_logCtrl_log_level", false,-1, 63,0);
    tracep->declBit(c+174,"io_perfInfo_clean", false,-1);
    tracep->declBit(c+175,"io_perfInfo_dump", false,-1);
    tracep->declBit(c+176,"io_uart_out_valid", false,-1);
    tracep->declBus(c+177,"io_uart_out_ch", false,-1, 7,0);
    tracep->declBit(c+178,"io_uart_in_valid", false,-1);
    tracep->declBus(c+179,"io_uart_in_ch", false,-1, 7,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+166,"clock", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declQuad(c+168,"io_logCtrl_log_begin", false,-1, 63,0);
    tracep->declQuad(c+170,"io_logCtrl_log_end", false,-1, 63,0);
    tracep->declQuad(c+172,"io_logCtrl_log_level", false,-1, 63,0);
    tracep->declBit(c+174,"io_perfInfo_clean", false,-1);
    tracep->declBit(c+175,"io_perfInfo_dump", false,-1);
    tracep->declBit(c+176,"io_uart_out_valid", false,-1);
    tracep->declBus(c+177,"io_uart_out_ch", false,-1, 7,0);
    tracep->declBit(c+178,"io_uart_in_valid", false,-1);
    tracep->declBus(c+179,"io_uart_in_ch", false,-1, 7,0);
    tracep->declBit(c+186,"ReadEnable", false,-1);
    tracep->declBit(c+187,"WriteEnable", false,-1);
    tracep->declQuad(c+2,"ReadData", false,-1, 63,0);
    tracep->declQuad(c+4,"ReadAddr", false,-1, 63,0);
    tracep->declQuad(c+188,"WriteAddr", false,-1, 63,0);
    tracep->declQuad(c+190,"WriteData", false,-1, 63,0);
    tracep->declQuad(c+192,"WriteMask", false,-1, 63,0);
    tracep->declBit(c+6,"inst_valid", false,-1);
    tracep->declQuad(c+7,"r_pc", false,-1, 63,0);
    tracep->declBus(c+9,"r_inst", false,-1, 31,0);
    tracep->declBit(c+10,"r_valid", false,-1);
    tracep->pushNamePrefix("U_DifftestArchIntRegState ");
    tracep->declBit(c+166,"clock", false,-1);
    tracep->declBus(c+194,"coreid", false,-1, 7,0);
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
    tracep->declBit(c+166,"clock", false,-1);
    tracep->declBus(c+194,"coreid", false,-1, 7,0);
    tracep->declBus(c+194,"index", false,-1, 7,0);
    tracep->declBit(c+10,"valid", false,-1);
    tracep->declQuad(c+7,"pc", false,-1, 63,0);
    tracep->declBus(c+9,"instr", false,-1, 31,0);
    tracep->declBit(c+186,"skip", false,-1);
    tracep->declBit(c+186,"isRVC", false,-1);
    tracep->declBit(c+186,"scFailed", false,-1);
    tracep->declBit(c+195,"wen", false,-1);
    tracep->declBus(c+196,"wdest", false,-1, 7,0);
    tracep->declQuad(c+197,"wdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_RAMHelper ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+186,"ren", false,-1);
    tracep->declQuad(c+4,"rIdx", false,-1, 63,0);
    tracep->declQuad(c+2,"rdata", false,-1, 63,0);
    tracep->declQuad(c+188,"wIdx", false,-1, 63,0);
    tracep->declQuad(c+190,"wdata", false,-1, 63,0);
    tracep->declQuad(c+192,"wmask", false,-1, 63,0);
    tracep->declBit(c+187,"wen", false,-1);
    tracep->declQuad(c+199,"wIdx_r", false,-1, 63,0);
    tracep->declQuad(c+75,"rIdx_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_zerocore ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declQuad(c+2,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+186,"RamReadEnable", false,-1);
    tracep->declBit(c+187,"RamWriteEnable", false,-1);
    tracep->declQuad(c+4,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+188,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+192,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+190,"RamWriteData", false,-1, 63,0);
    tracep->declQuad(c+4,"pc", false,-1, 63,0);
    tracep->declBus(c+77,"instF", false,-1, 31,0);
    tracep->declQuad(c+4,"pcF", false,-1, 63,0);
    tracep->declBit(c+201,"aluBsrc", false,-1);
    tracep->declBus(c+78,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+79,"ra_addr", false,-1, 4,0);
    tracep->declBus(c+80,"rb_addr", false,-1, 4,0);
    tracep->declBus(c+81,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+202,"ra", false,-1, 63,0);
    tracep->declQuad(c+180,"rb", false,-1, 63,0);
    tracep->declQuad(c+204,"rw", false,-1, 63,0);
    tracep->declBit(c+201,"rd_en", false,-1);
    tracep->declQuad(c+82,"imm", false,-1, 63,0);
    tracep->declBit(c+201,"ra_en", false,-1);
    tracep->declBit(c+201,"rb_en", false,-1);
    tracep->declBus(c+84,"instD", false,-1, 31,0);
    tracep->declQuad(c+85,"pcD", false,-1, 63,0);
    tracep->declQuad(c+182,"ina", false,-1, 63,0);
    tracep->declQuad(c+82,"inb", false,-1, 63,0);
    tracep->declQuad(c+184,"res", false,-1, 63,0);
    tracep->declBus(c+87,"instE", false,-1, 31,0);
    tracep->declQuad(c+88,"pcE", false,-1, 63,0);
    tracep->declBus(c+90,"instM", false,-1, 31,0);
    tracep->declQuad(c+91,"pcM", false,-1, 63,0);
    tracep->declBus(c+93,"instW", false,-1, 31,0);
    tracep->declQuad(c+94,"pcW", false,-1, 63,0);
    tracep->pushNamePrefix("u_ex ");
    tracep->declQuad(c+182,"ina", false,-1, 63,0);
    tracep->declQuad(c+82,"inb", false,-1, 63,0);
    tracep->declBus(c+78,"aluCtl", false,-1, 3,0);
    tracep->declQuad(c+184,"res", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_id ");
    tracep->declBus(c+84,"inst", false,-1, 31,0);
    tracep->declBit(c+201,"ra_en", false,-1);
    tracep->declBus(c+79,"ra_addr", false,-1, 4,0);
    tracep->declBit(c+201,"rb_en", false,-1);
    tracep->declBus(c+80,"rb_addr", false,-1, 4,0);
    tracep->declBit(c+201,"rd_en", false,-1);
    tracep->declBus(c+81,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+82,"imm", false,-1, 63,0);
    tracep->declBit(c+201,"aluBsrc", false,-1);
    tracep->declBus(c+78,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+96,"opcode", false,-1, 6,0);
    tracep->declBus(c+97,"funt3", false,-1, 2,0);
    tracep->declBit(c+98,"opcode_001_0011", false,-1);
    tracep->declBit(c+99,"funt3_000", false,-1);
    tracep->declBit(c+100,"ADDI", false,-1);
    tracep->declBus(c+101,"aluType", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_if ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declQuad(c+4,"pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_D2E ");
    tracep->declBus(c+206,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declBit(c+201,"wen", false,-1);
    tracep->declBus(c+84,"din", false,-1, 31,0);
    tracep->declBus(c+87,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_E2M ");
    tracep->declBus(c+206,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declBit(c+201,"wen", false,-1);
    tracep->declBus(c+87,"din", false,-1, 31,0);
    tracep->declBus(c+90,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_F2D ");
    tracep->declBus(c+206,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declBit(c+201,"wen", false,-1);
    tracep->declBus(c+77,"din", false,-1, 31,0);
    tracep->declBus(c+84,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_inst_M2W ");
    tracep->declBus(c+206,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declBit(c+201,"wen", false,-1);
    tracep->declBus(c+90,"din", false,-1, 31,0);
    tracep->declBus(c+93,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_D2E ");
    tracep->declBus(c+207,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declBit(c+201,"wen", false,-1);
    tracep->declQuad(c+85,"din", false,-1, 63,0);
    tracep->declQuad(c+88,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_E2M ");
    tracep->declBus(c+207,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declBit(c+201,"wen", false,-1);
    tracep->declQuad(c+88,"din", false,-1, 63,0);
    tracep->declQuad(c+91,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_F2D ");
    tracep->declBus(c+207,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declBit(c+201,"wen", false,-1);
    tracep->declQuad(c+4,"din", false,-1, 63,0);
    tracep->declQuad(c+85,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_M2W ");
    tracep->declBus(c+207,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declBit(c+201,"wen", false,-1);
    tracep->declQuad(c+91,"din", false,-1, 63,0);
    tracep->declQuad(c+94,"dout", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regs ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declBit(c+201,"Ra_en", false,-1);
    tracep->declBit(c+201,"Rb_en", false,-1);
    tracep->declBus(c+79,"Ra_addr", false,-1, 4,0);
    tracep->declBus(c+80,"Rb_addr", false,-1, 4,0);
    tracep->declQuad(c+182,"Ra", false,-1, 63,0);
    tracep->declQuad(c+180,"Rb", false,-1, 63,0);
    tracep->declBit(c+201,"Rw_en", false,-1);
    tracep->declBus(c+81,"Rw_addr", false,-1, 4,0);
    tracep->declQuad(c+204,"Rw", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+102+i*2,"regsheap", true,(i+0), 63,0);
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
    tracep->fullBit(oldp+6,(((0U != vlSelf->SimTop__DOT__u_zerocore__DOT__instW) 
                             & (vlSelf->SimTop__DOT__u_zerocore__DOT__pcW 
                                != vlSelf->SimTop__DOT__r_pc))));
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
    tracep->fullQData(oldp+85,(vlSelf->SimTop__DOT__u_zerocore__DOT__pcD),64);
    tracep->fullIData(oldp+87,(vlSelf->SimTop__DOT__u_zerocore__DOT__instE),32);
    tracep->fullQData(oldp+88,(vlSelf->SimTop__DOT__u_zerocore__DOT__pcE),64);
    tracep->fullIData(oldp+90,(vlSelf->SimTop__DOT__u_zerocore__DOT__instM),32);
    tracep->fullQData(oldp+91,(vlSelf->SimTop__DOT__u_zerocore__DOT__pcM),64);
    tracep->fullIData(oldp+93,(vlSelf->SimTop__DOT__u_zerocore__DOT__instW),32);
    tracep->fullQData(oldp+94,(vlSelf->SimTop__DOT__u_zerocore__DOT__pcW),64);
    tracep->fullCData(oldp+96,((0x7fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)),7);
    tracep->fullCData(oldp+97,((7U & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                      >> 0xcU))),3);
    tracep->fullBit(oldp+98,((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD))));
    tracep->fullBit(oldp+99,((0U == (7U & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+100,((IData)((0x13U == (0x707fU 
                                                 & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)))));
    tracep->fullCData(oldp+101,(((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)) 
                                 & (0U == (7U & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                 >> 0xcU))))),8);
    tracep->fullQData(oldp+102,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0]),64);
    tracep->fullQData(oldp+104,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[1]),64);
    tracep->fullQData(oldp+106,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[2]),64);
    tracep->fullQData(oldp+108,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[3]),64);
    tracep->fullQData(oldp+110,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[4]),64);
    tracep->fullQData(oldp+112,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[5]),64);
    tracep->fullQData(oldp+114,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[6]),64);
    tracep->fullQData(oldp+116,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[7]),64);
    tracep->fullQData(oldp+118,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[8]),64);
    tracep->fullQData(oldp+120,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[9]),64);
    tracep->fullQData(oldp+122,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[10]),64);
    tracep->fullQData(oldp+124,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[11]),64);
    tracep->fullQData(oldp+126,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[12]),64);
    tracep->fullQData(oldp+128,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[13]),64);
    tracep->fullQData(oldp+130,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[14]),64);
    tracep->fullQData(oldp+132,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[15]),64);
    tracep->fullQData(oldp+134,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[16]),64);
    tracep->fullQData(oldp+136,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[17]),64);
    tracep->fullQData(oldp+138,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[18]),64);
    tracep->fullQData(oldp+140,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[19]),64);
    tracep->fullQData(oldp+142,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[20]),64);
    tracep->fullQData(oldp+144,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[21]),64);
    tracep->fullQData(oldp+146,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[22]),64);
    tracep->fullQData(oldp+148,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[23]),64);
    tracep->fullQData(oldp+150,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[24]),64);
    tracep->fullQData(oldp+152,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[25]),64);
    tracep->fullQData(oldp+154,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[26]),64);
    tracep->fullQData(oldp+156,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[27]),64);
    tracep->fullQData(oldp+158,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[28]),64);
    tracep->fullQData(oldp+160,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[29]),64);
    tracep->fullQData(oldp+162,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[30]),64);
    tracep->fullQData(oldp+164,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[31]),64);
    tracep->fullBit(oldp+166,(vlSelf->clock));
    tracep->fullBit(oldp+167,(vlSelf->reset));
    tracep->fullQData(oldp+168,(vlSelf->io_logCtrl_log_begin),64);
    tracep->fullQData(oldp+170,(vlSelf->io_logCtrl_log_end),64);
    tracep->fullQData(oldp+172,(vlSelf->io_logCtrl_log_level),64);
    tracep->fullBit(oldp+174,(vlSelf->io_perfInfo_clean));
    tracep->fullBit(oldp+175,(vlSelf->io_perfInfo_dump));
    tracep->fullBit(oldp+176,(vlSelf->io_uart_out_valid));
    tracep->fullCData(oldp+177,(vlSelf->io_uart_out_ch),8);
    tracep->fullBit(oldp+178,(vlSelf->io_uart_in_valid));
    tracep->fullCData(oldp+179,(vlSelf->io_uart_in_ch),8);
    tracep->fullQData(oldp+180,(((IData)(vlSelf->reset)
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
    tracep->fullQData(oldp+182,(vlSelf->SimTop__DOT__u_zerocore__DOT__ina),64);
    tracep->fullQData(oldp+184,(vlSelf->SimTop__DOT__u_zerocore__DOT__res),64);
    tracep->fullBit(oldp+186,(0U));
    tracep->fullBit(oldp+187,(vlSelf->SimTop__DOT__WriteEnable));
    tracep->fullQData(oldp+188,(vlSelf->SimTop__DOT__WriteAddr),64);
    tracep->fullQData(oldp+190,(vlSelf->SimTop__DOT__WriteData),64);
    tracep->fullQData(oldp+192,(vlSelf->SimTop__DOT__WriteMask),64);
    tracep->fullCData(oldp+194,(0U),8);
    tracep->fullBit(oldp+195,(vlSelf->SimTop__DOT__U_inst_commit__DOT__wen));
    tracep->fullCData(oldp+196,(vlSelf->SimTop__DOT__U_inst_commit__DOT__wdest),8);
    tracep->fullQData(oldp+197,(vlSelf->SimTop__DOT__U_inst_commit__DOT__wdata),64);
    tracep->fullQData(oldp+199,((vlSelf->SimTop__DOT__WriteAddr 
                                 - 0x80000000ULL)),64);
    tracep->fullBit(oldp+201,(1U));
    tracep->fullQData(oldp+202,(vlSelf->SimTop__DOT__u_zerocore__DOT__ra),64);
    tracep->fullQData(oldp+204,(vlSelf->SimTop__DOT__u_zerocore__DOT__rw),64);
    tracep->fullIData(oldp+206,(0x20U),32);
    tracep->fullIData(oldp+207,(0x40U),32);
}
