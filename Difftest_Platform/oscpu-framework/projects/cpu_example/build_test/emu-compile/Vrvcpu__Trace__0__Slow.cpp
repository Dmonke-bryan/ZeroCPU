// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrvcpu__Syms.h"


VL_ATTR_COLD void Vrvcpu___024root__trace_init_sub__TOP__0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+367,"instF", false,-1, 31,0);
    tracep->declQuad(c+368,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+370,"RamReadEnable", false,-1);
    tracep->declBit(c+371,"RamWriteEnable", false,-1);
    tracep->declQuad(c+372,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+374,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+376,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+378,"RamWriteData", false,-1, 63,0);
    tracep->declQuad(c+380,"pcF", false,-1, 63,0);
    tracep->declBit(c+382,"pcEnableF", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+383+i*2,"regs_o", true,(i+0), 63,0);
    }
    tracep->pushNamePrefix("rvcpu ");
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+367,"instF", false,-1, 31,0);
    tracep->declQuad(c+368,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+370,"RamReadEnable", false,-1);
    tracep->declBit(c+371,"RamWriteEnable", false,-1);
    tracep->declQuad(c+372,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+374,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+376,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+378,"RamWriteData", false,-1, 63,0);
    tracep->declQuad(c+380,"pcF", false,-1, 63,0);
    tracep->declBit(c+382,"pcEnableF", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+383+i*2,"regs_o", true,(i+0), 63,0);
    }
    tracep->declBit(c+1,"jump", false,-1);
    tracep->declQuad(c+2,"jumpAddr", false,-1, 63,0);
    tracep->declQuad(c+447,"rs1DataD", false,-1, 63,0);
    tracep->declQuad(c+449,"rs2DataD", false,-1, 63,0);
    tracep->declBit(c+4,"rs1ReadEnable", false,-1);
    tracep->declBit(c+5,"rs2ReadEnable", false,-1);
    tracep->declBit(c+6,"rdWriteEnableE", false,-1);
    tracep->declBus(c+7,"rs1ReadAddr", false,-1, 4,0);
    tracep->declBus(c+8,"rs2ReadAddr", false,-1, 4,0);
    tracep->declBus(c+9,"rdWriteAddrE", false,-1, 4,0);
    tracep->declBit(c+10,"RamReadEnableE", false,-1);
    tracep->declBit(c+11,"RamWriteEnableE", false,-1);
    tracep->declQuad(c+473,"RamReadAddrE", false,-1, 63,0);
    tracep->declQuad(c+475,"RamWriteAddrE", false,-1, 63,0);
    tracep->declQuad(c+477,"RamWriteDataE", false,-1, 63,0);
    tracep->declQuad(c+479,"op1E", false,-1, 63,0);
    tracep->declQuad(c+481,"op2E", false,-1, 63,0);
    tracep->declBit(c+12,"rdWriteEnableM", false,-1);
    tracep->declBus(c+13,"rdWriteAddrM", false,-1, 4,0);
    tracep->declQuad(c+14,"rdWriteDataM", false,-1, 63,0);
    tracep->declBit(c+16,"rdWriteEnableW", false,-1);
    tracep->declBus(c+17,"rdWriteAddrW", false,-1, 4,0);
    tracep->declQuad(c+18,"rdWriteDataW", false,-1, 63,0);
    tracep->declBus(c+20,"instD", false,-1, 31,0);
    tracep->declQuad(c+21,"pcD", false,-1, 63,0);
    tracep->declBit(c+295,"flushD", false,-1);
    tracep->declBus(c+23,"memFuncE", false,-1, 10,0);
    tracep->declQuad(c+24,"pcE", false,-1, 63,0);
    tracep->declBus(c+26,"instTypeE", false,-1, 9,0);
    tracep->declBus(c+27,"instFuncE", false,-1, 13,0);
    tracep->declQuad(c+28,"rs1DataE", false,-1, 63,0);
    tracep->declQuad(c+30,"rs2DataE", false,-1, 63,0);
    tracep->declQuad(c+32,"imm", false,-1, 63,0);
    tracep->declBit(c+295,"flushE", false,-1);
    tracep->declBus(c+34,"memFuncM", false,-1, 10,0);
    tracep->declBus(c+483,"instTypeM", false,-1, 9,0);
    tracep->declQuad(c+35,"RamWriteAddrM", false,-1, 63,0);
    tracep->declQuad(c+37,"RamWriteDataM", false,-1, 63,0);
    tracep->declQuad(c+39,"RamReadAddrM", false,-1, 63,0);
    tracep->declBit(c+41,"RamWriteEnableM", false,-1);
    tracep->declBit(c+42,"RamReadEnableM", false,-1);
    tracep->declBus(c+43,"Redirect1", false,-1, 1,0);
    tracep->declBus(c+44,"Redirect2", false,-1, 1,0);
    tracep->declBus(c+45,"LoadRedirect", false,-1, 1,0);
    tracep->declBit(c+46,"load", false,-1);
    tracep->declBit(c+47,"stallF", false,-1);
    tracep->declBit(c+47,"stallD", false,-1);
    tracep->declBit(c+47,"stallE", false,-1);
    tracep->pushNamePrefix("Ctrl ");
    tracep->declBit(c+1,"jump", false,-1);
    tracep->declBit(c+46,"load", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+9,"rdWriteAddrE", false,-1, 4,0);
    tracep->declBus(c+13,"rdWriteAddrM", false,-1, 4,0);
    tracep->declBit(c+4,"rs1ReadEnable", false,-1);
    tracep->declBit(c+5,"rs2ReadEnable", false,-1);
    tracep->declBus(c+7,"rs1ReadAddr", false,-1, 4,0);
    tracep->declBus(c+8,"rs2ReadAddr", false,-1, 4,0);
    tracep->declBus(c+43,"Redirect1", false,-1, 1,0);
    tracep->declBus(c+44,"Redirect2", false,-1, 1,0);
    tracep->declBus(c+45,"LoadRedirect", false,-1, 1,0);
    tracep->declBit(c+295,"flushD", false,-1);
    tracep->declBit(c+295,"flushE", false,-1);
    tracep->declBit(c+47,"stallF", false,-1);
    tracep->declBit(c+47,"stallD", false,-1);
    tracep->declBit(c+47,"stallE", false,-1);
    tracep->declBus(c+48,"Redirect1_r", false,-1, 1,0);
    tracep->declBus(c+49,"ReadLoad", false,-1, 1,0);
    tracep->declBus(c+50,"Redirect2_r", false,-1, 1,0);
    tracep->declBit(c+451,"stallF_r", false,-1);
    tracep->declBit(c+451,"stallD_r", false,-1);
    tracep->declBit(c+451,"stallE_r", false,-1);
    tracep->declBit(c+451,"stallC_r", false,-1);
    tracep->declBit(c+47,"stallC", false,-1);
    tracep->pushNamePrefix("ReadLoad2_dff ");
    tracep->declBus(c+484,"DW", false,-1, 31,0);
    tracep->declBus(c+49,"din", false,-1, 1,0);
    tracep->declBus(c+45,"qout", false,-1, 1,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+485,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+45,"qout_r", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Redirect1_dff ");
    tracep->declBus(c+484,"DW", false,-1, 31,0);
    tracep->declBus(c+48,"din", false,-1, 1,0);
    tracep->declBus(c+43,"qout", false,-1, 1,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+485,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+43,"qout_r", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Redirect2_dff ");
    tracep->declBus(c+484,"DW", false,-1, 31,0);
    tracep->declBus(c+50,"din", false,-1, 1,0);
    tracep->declBus(c+44,"qout", false,-1, 1,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+485,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+44,"qout_r", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("stallC_dff ");
    tracep->declBus(c+486,"DW", false,-1, 31,0);
    tracep->declBus(c+451,"din", false,-1, 0,0);
    tracep->declBus(c+47,"qout", false,-1, 0,0);
    tracep->declBit(c+485,"stall", false,-1);
    tracep->declBit(c+485,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+47,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("stallD_dff ");
    tracep->declBus(c+486,"DW", false,-1, 31,0);
    tracep->declBus(c+451,"din", false,-1, 0,0);
    tracep->declBus(c+47,"qout", false,-1, 0,0);
    tracep->declBit(c+485,"stall", false,-1);
    tracep->declBit(c+485,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+47,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("stallE_dff ");
    tracep->declBus(c+486,"DW", false,-1, 31,0);
    tracep->declBus(c+451,"din", false,-1, 0,0);
    tracep->declBus(c+47,"qout", false,-1, 0,0);
    tracep->declBit(c+485,"stall", false,-1);
    tracep->declBit(c+485,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+47,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("stallF_dff ");
    tracep->declBus(c+486,"DW", false,-1, 31,0);
    tracep->declBus(c+451,"din", false,-1, 0,0);
    tracep->declBus(c+47,"qout", false,-1, 0,0);
    tracep->declBit(c+485,"stall", false,-1);
    tracep->declBit(c+485,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+47,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Exe_stage ");
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declQuad(c+24,"pcE", false,-1, 63,0);
    tracep->declBit(c+295,"flushE", false,-1);
    tracep->declBit(c+47,"stallE", false,-1);
    tracep->declBus(c+26,"instTypeE", false,-1, 9,0);
    tracep->declBus(c+27,"instFuncE", false,-1, 13,0);
    tracep->declQuad(c+32,"imm", false,-1, 63,0);
    tracep->declQuad(c+28,"rs1DataE", false,-1, 63,0);
    tracep->declQuad(c+30,"rs2DataE", false,-1, 63,0);
    tracep->declBit(c+6,"rdWriteEnableE", false,-1);
    tracep->declBus(c+9,"rdWriteAddrE", false,-1, 4,0);
    tracep->declQuad(c+14,"rdWriteDataPre1", false,-1, 63,0);
    tracep->declQuad(c+18,"rdWriteDataPre2", false,-1, 63,0);
    tracep->declBus(c+43,"Redirect1", false,-1, 1,0);
    tracep->declBus(c+44,"Redirect2", false,-1, 1,0);
    tracep->declBus(c+45,"LoadRedirect", false,-1, 1,0);
    tracep->declBus(c+23,"memFuncE", false,-1, 10,0);
    tracep->declBit(c+10,"RamReadEnableE", false,-1);
    tracep->declBit(c+11,"RamWriteEnableE", false,-1);
    tracep->declBus(c+34,"memFuncM", false,-1, 10,0);
    tracep->declQuad(c+35,"RamWriteAddrM", false,-1, 63,0);
    tracep->declQuad(c+37,"RamWriteDataM", false,-1, 63,0);
    tracep->declQuad(c+39,"RamReadAddrM", false,-1, 63,0);
    tracep->declBit(c+42,"RamReadEnableM", false,-1);
    tracep->declBit(c+41,"RamWriteEnableM", false,-1);
    tracep->declBit(c+12,"rdWriteEnableM", false,-1);
    tracep->declBus(c+13,"rdWriteAddrM", false,-1, 4,0);
    tracep->declBus(c+483,"instTypeM", false,-1, 9,0);
    tracep->declQuad(c+14,"rdWriteDataM", false,-1, 63,0);
    tracep->declBit(c+46,"load", false,-1);
    tracep->declBit(c+1,"jump", false,-1);
    tracep->declQuad(c+2,"jumpAddr", false,-1, 63,0);
    tracep->declQuad(c+51,"rs1Data", false,-1, 63,0);
    tracep->declQuad(c+53,"rs2Data", false,-1, 63,0);
    tracep->declQuad(c+51,"op1", false,-1, 63,0);
    tracep->declQuad(c+55,"op2", false,-1, 63,0);
    tracep->declQuad(c+57,"adder1", false,-1, 63,0);
    tracep->declQuad(c+59,"adder2", false,-1, 63,0);
    tracep->declQuad(c+61,"resADD", false,-1, 63,0);
    tracep->declQuad(c+63,"resSUB", false,-1, 63,0);
    tracep->declQuad(c+65,"resSLL", false,-1, 63,0);
    tracep->declQuad(c+67,"resLES", false,-1, 63,0);
    tracep->declQuad(c+69,"resLESU", false,-1, 63,0);
    tracep->declQuad(c+71,"resSRL", false,-1, 63,0);
    tracep->declQuad(c+73,"resSRA", false,-1, 63,0);
    tracep->declQuad(c+75,"resXOR", false,-1, 63,0);
    tracep->declQuad(c+77,"resOR", false,-1, 63,0);
    tracep->declQuad(c+79,"resAND", false,-1, 63,0);
    tracep->declQuad(c+81,"resBIG", false,-1, 63,0);
    tracep->declQuad(c+83,"resBIGU", false,-1, 63,0);
    tracep->declQuad(c+85,"resEQ", false,-1, 63,0);
    tracep->declQuad(c+87,"resNEQ", false,-1, 63,0);
    tracep->declQuad(c+89,"result", false,-1, 63,0);
    tracep->declQuad(c+452,"RamWriteAddrM_r", false,-1, 63,0);
    tracep->declQuad(c+454,"RamWriteDataM_r", false,-1, 63,0);
    tracep->declQuad(c+452,"RamReadAddrM_r", false,-1, 63,0);
    tracep->declBit(c+91,"resBranch", false,-1);
    tracep->declBit(c+296,"jump_r", false,-1);
    tracep->declQuad(c+229,"jumpAddr_r", false,-1, 63,0);
    tracep->declQuad(c+92,"pcSave", false,-1, 63,0);
    tracep->declBit(c+6,"rdWriteEnableE_r", false,-1);
    tracep->declQuad(c+456,"rdWriteDataM_r", false,-1, 63,0);
    tracep->pushNamePrefix("RamReadAddrM_clk_diff ");
    tracep->declBus(c+487,"DW", false,-1, 31,0);
    tracep->declQuad(c+452,"din", false,-1, 63,0);
    tracep->declQuad(c+39,"qout", false,-1, 63,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declQuad(c+39,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RamReadEnableM_clk_diff ");
    tracep->declBus(c+486,"DW", false,-1, 31,0);
    tracep->declBus(c+10,"din", false,-1, 0,0);
    tracep->declBus(c+42,"qout", false,-1, 0,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+42,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RamWriteAddrM_clk_diff ");
    tracep->declBus(c+487,"DW", false,-1, 31,0);
    tracep->declQuad(c+452,"din", false,-1, 63,0);
    tracep->declQuad(c+35,"qout", false,-1, 63,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declQuad(c+35,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RamWriteDataM_clk_diff ");
    tracep->declBus(c+487,"DW", false,-1, 31,0);
    tracep->declQuad(c+454,"din", false,-1, 63,0);
    tracep->declQuad(c+37,"qout", false,-1, 63,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declQuad(c+37,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RamWriteEnableM_clk_diff ");
    tracep->declBus(c+486,"DW", false,-1, 31,0);
    tracep->declBus(c+11,"din", false,-1, 0,0);
    tracep->declBus(c+41,"qout", false,-1, 0,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+41,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jump_dff ");
    tracep->declBus(c+486,"DW", false,-1, 31,0);
    tracep->declBus(c+296,"din", false,-1, 0,0);
    tracep->declBus(c+1,"qout", false,-1, 0,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+1,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memFuncM_clk_diff ");
    tracep->declBus(c+488,"DW", false,-1, 31,0);
    tracep->declBus(c+23,"din", false,-1, 10,0);
    tracep->declBus(c+34,"qout", false,-1, 10,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+34,"qout_r", false,-1, 10,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcM_dff ");
    tracep->declBus(c+487,"DW", false,-1, 31,0);
    tracep->declQuad(c+229,"din", false,-1, 63,0);
    tracep->declQuad(c+2,"qout", false,-1, 63,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declQuad(c+2,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdWriteDataE_clk_diff ");
    tracep->declBus(c+487,"DW", false,-1, 31,0);
    tracep->declQuad(c+456,"din", false,-1, 63,0);
    tracep->declQuad(c+14,"qout", false,-1, 63,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declQuad(c+14,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_r_clk_diff ");
    tracep->declBus(c+489,"DW", false,-1, 31,0);
    tracep->declBus(c+94,"din", false,-1, 5,0);
    tracep->declBus(c+95,"qout", false,-1, 5,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+95,"qout_r", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Id_stage ");
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+295,"flushD", false,-1);
    tracep->declBit(c+47,"stallD", false,-1);
    tracep->declQuad(c+21,"pcD", false,-1, 63,0);
    tracep->declBus(c+20,"instD", false,-1, 31,0);
    tracep->declQuad(c+447,"rs1DataD", false,-1, 63,0);
    tracep->declQuad(c+449,"rs2DataD", false,-1, 63,0);
    tracep->declBit(c+4,"rs1ReadEnable", false,-1);
    tracep->declBus(c+7,"rs1ReadAddr", false,-1, 4,0);
    tracep->declBit(c+5,"rs2ReadEnable", false,-1);
    tracep->declBus(c+8,"rs2ReadAddr", false,-1, 4,0);
    tracep->declBit(c+6,"rdWriteEnableE", false,-1);
    tracep->declBus(c+9,"rdWriteAddrE", false,-1, 4,0);
    tracep->declBit(c+10,"RamReadEnableE", false,-1);
    tracep->declBit(c+11,"RamWriteEnableE", false,-1);
    tracep->declBus(c+23,"memFuncE", false,-1, 10,0);
    tracep->declQuad(c+24,"pcE", false,-1, 63,0);
    tracep->declBus(c+26,"instTypeE", false,-1, 9,0);
    tracep->declBus(c+27,"instFuncE", false,-1, 13,0);
    tracep->declQuad(c+28,"rs1DataE", false,-1, 63,0);
    tracep->declQuad(c+30,"rs2DataE", false,-1, 63,0);
    tracep->declQuad(c+32,"imm", false,-1, 63,0);
    tracep->declBus(c+96,"opcode", false,-1, 6,0);
    tracep->declBus(c+97,"rd", false,-1, 4,0);
    tracep->declBus(c+98,"func3", false,-1, 2,0);
    tracep->declBus(c+99,"func7", false,-1, 6,0);
    tracep->declBus(c+100,"func6", false,-1, 5,0);
    tracep->declBus(c+101,"rs1", false,-1, 4,0);
    tracep->declBus(c+102,"rs2", false,-1, 4,0);
    tracep->declQuad(c+103,"immI", false,-1, 63,0);
    tracep->declQuad(c+105,"immS", false,-1, 63,0);
    tracep->declQuad(c+107,"immB", false,-1, 63,0);
    tracep->declQuad(c+109,"immU", false,-1, 63,0);
    tracep->declQuad(c+111,"immJ", false,-1, 63,0);
    tracep->declBit(c+113,"func3_000", false,-1);
    tracep->declBit(c+114,"func3_001", false,-1);
    tracep->declBit(c+115,"func3_010", false,-1);
    tracep->declBit(c+116,"func3_011", false,-1);
    tracep->declBit(c+117,"func3_100", false,-1);
    tracep->declBit(c+118,"func3_101", false,-1);
    tracep->declBit(c+119,"func3_110", false,-1);
    tracep->declBit(c+120,"func3_111", false,-1);
    tracep->declBit(c+121,"func7_0", false,-1);
    tracep->declBit(c+122,"func7_20", false,-1);
    tracep->declBit(c+123,"func6_0", false,-1);
    tracep->declBit(c+124,"func6_10", false,-1);
    tracep->declBit(c+125,"opcode_0000011", false,-1);
    tracep->declBit(c+126,"opcode_0000111", false,-1);
    tracep->declBit(c+127,"opcode_0001011", false,-1);
    tracep->declBit(c+128,"opcode_0001111", false,-1);
    tracep->declBit(c+129,"opcode_0010011", false,-1);
    tracep->declBit(c+130,"opcode_0010111", false,-1);
    tracep->declBit(c+131,"opcode_0011011", false,-1);
    tracep->declBit(c+132,"opcode_0011111", false,-1);
    tracep->declBit(c+133,"opcode_0100011", false,-1);
    tracep->declBit(c+134,"opcode_0100111", false,-1);
    tracep->declBit(c+135,"opcode_0101011", false,-1);
    tracep->declBit(c+136,"opcode_0101111", false,-1);
    tracep->declBit(c+137,"opcode_0110011", false,-1);
    tracep->declBit(c+138,"opcode_0110111", false,-1);
    tracep->declBit(c+139,"opcode_0111011", false,-1);
    tracep->declBit(c+140,"opcode_0111111", false,-1);
    tracep->declBit(c+141,"opcode_1000011", false,-1);
    tracep->declBit(c+142,"opcode_1000111", false,-1);
    tracep->declBit(c+143,"opcode_1001011", false,-1);
    tracep->declBit(c+144,"opcode_1001111", false,-1);
    tracep->declBit(c+145,"opcode_1010011", false,-1);
    tracep->declBit(c+146,"opcode_1010111", false,-1);
    tracep->declBit(c+147,"opcode_1011011", false,-1);
    tracep->declBit(c+148,"opcode_1011111", false,-1);
    tracep->declBit(c+149,"opcode_1100011", false,-1);
    tracep->declBit(c+150,"opcode_1100111", false,-1);
    tracep->declBit(c+151,"opcode_1101011", false,-1);
    tracep->declBit(c+152,"opcode_1101111", false,-1);
    tracep->declBit(c+153,"opcode_1110011", false,-1);
    tracep->declBit(c+154,"Rtype", false,-1);
    tracep->declBit(c+155,"Itype", false,-1);
    tracep->declBit(c+133,"Stype", false,-1);
    tracep->declBit(c+149,"Btype", false,-1);
    tracep->declBit(c+156,"Utype", false,-1);
    tracep->declBit(c+152,"Jtype", false,-1);
    tracep->declBit(c+138,"LUI", false,-1);
    tracep->declBit(c+130,"AUIPC", false,-1);
    tracep->declBit(c+157,"jump", false,-1);
    tracep->declBit(c+149,"branch", false,-1);
    tracep->declBit(c+125,"load", false,-1);
    tracep->declBit(c+133,"store", false,-1);
    tracep->declBit(c+158,"mathImm", false,-1);
    tracep->declBit(c+159,"mathReg", false,-1);
    tracep->declBit(c+160,"type32", false,-1);
    tracep->declBus(c+161,"instTypeE_r", false,-1, 9,0);
    tracep->declBit(c+162,"ADDI", false,-1);
    tracep->declBit(c+163,"SLTI", false,-1);
    tracep->declBit(c+164,"SLTIU", false,-1);
    tracep->declBit(c+165,"XORI", false,-1);
    tracep->declBit(c+166,"ORI", false,-1);
    tracep->declBit(c+167,"ANDI", false,-1);
    tracep->declBit(c+168,"SLLI", false,-1);
    tracep->declBit(c+169,"SRLI", false,-1);
    tracep->declBit(c+170,"SRAI", false,-1);
    tracep->declBit(c+171,"ADDIW", false,-1);
    tracep->declBit(c+172,"SLLIW", false,-1);
    tracep->declBit(c+173,"SRLIW", false,-1);
    tracep->declBit(c+174,"SRAIW", false,-1);
    tracep->declBit(c+175,"JALR", false,-1);
    tracep->declBit(c+176,"ADD", false,-1);
    tracep->declBit(c+177,"SUB", false,-1);
    tracep->declBit(c+178,"SLL", false,-1);
    tracep->declBit(c+179,"SLT", false,-1);
    tracep->declBit(c+180,"SLTU", false,-1);
    tracep->declBit(c+181,"XOR", false,-1);
    tracep->declBit(c+182,"SRL", false,-1);
    tracep->declBit(c+183,"SRA", false,-1);
    tracep->declBit(c+184,"OR", false,-1);
    tracep->declBit(c+185,"AND", false,-1);
    tracep->declBit(c+186,"ADDW", false,-1);
    tracep->declBit(c+187,"SUBW", false,-1);
    tracep->declBit(c+188,"SLLW", false,-1);
    tracep->declBit(c+189,"SRLW", false,-1);
    tracep->declBit(c+190,"SRAW", false,-1);
    tracep->declBit(c+191,"BEQ", false,-1);
    tracep->declBit(c+192,"BNE", false,-1);
    tracep->declBit(c+193,"BLT", false,-1);
    tracep->declBit(c+194,"BLTU", false,-1);
    tracep->declBit(c+195,"BGT", false,-1);
    tracep->declBit(c+196,"BGTU", false,-1);
    tracep->declBit(c+152,"JAL", false,-1);
    tracep->declBit(c+197,"LB", false,-1);
    tracep->declBit(c+198,"LBU", false,-1);
    tracep->declBit(c+199,"LH", false,-1);
    tracep->declBit(c+200,"LHU", false,-1);
    tracep->declBit(c+201,"LW", false,-1);
    tracep->declBit(c+202,"LWU", false,-1);
    tracep->declBit(c+203,"LD", false,-1);
    tracep->declBit(c+204,"SB", false,-1);
    tracep->declBit(c+205,"SH", false,-1);
    tracep->declBit(c+206,"SW", false,-1);
    tracep->declBit(c+207,"SD", false,-1);
    tracep->declBus(c+208,"memFuncE_r", false,-1, 10,0);
    tracep->declBus(c+209,"instFuncE_r", false,-1, 13,0);
    tracep->declBit(c+210,"FENCE", false,-1);
    tracep->declBit(c+211,"FENCEI", false,-1);
    tracep->declBus(c+212,"fenceType", false,-1, 1,0);
    tracep->declBit(c+213,"CSRRW", false,-1);
    tracep->declBit(c+214,"CSRRS", false,-1);
    tracep->declBit(c+215,"CSRRC", false,-1);
    tracep->declBit(c+216,"CSRRWI", false,-1);
    tracep->declBit(c+217,"CSRRSI", false,-1);
    tracep->declBit(c+218,"CSRRCI", false,-1);
    tracep->declBit(c+125,"RamReadEnableE_r", false,-1);
    tracep->declBit(c+133,"RamWriteEnableE_r", false,-1);
    tracep->declBit(c+219,"rdWriteEnableE_r", false,-1);
    tracep->declBus(c+220,"rdWriteAddrE_r", false,-1, 4,0);
    tracep->declQuad(c+221,"imm_r", false,-1, 63,0);
    tracep->pushNamePrefix("RamReadEnableE_dff ");
    tracep->declBus(c+486,"DW", false,-1, 31,0);
    tracep->declBus(c+125,"din", false,-1, 0,0);
    tracep->declBus(c+10,"qout", false,-1, 0,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+10,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RamWriteEnableE_dff ");
    tracep->declBus(c+486,"DW", false,-1, 31,0);
    tracep->declBus(c+133,"din", false,-1, 0,0);
    tracep->declBus(c+11,"qout", false,-1, 0,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+11,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_dff ");
    tracep->declBus(c+487,"DW", false,-1, 31,0);
    tracep->declQuad(c+221,"din", false,-1, 63,0);
    tracep->declQuad(c+32,"qout", false,-1, 63,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declQuad(c+32,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instFuncE_dff ");
    tracep->declBus(c+490,"DW", false,-1, 31,0);
    tracep->declBus(c+209,"din", false,-1, 13,0);
    tracep->declBus(c+27,"qout", false,-1, 13,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+27,"qout_r", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instTypeE_dff ");
    tracep->declBus(c+491,"DW", false,-1, 31,0);
    tracep->declBus(c+161,"din", false,-1, 9,0);
    tracep->declBus(c+26,"qout", false,-1, 9,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+26,"qout_r", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memFuncE_dff ");
    tracep->declBus(c+488,"DW", false,-1, 31,0);
    tracep->declBus(c+208,"din", false,-1, 10,0);
    tracep->declBus(c+23,"qout", false,-1, 10,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+23,"qout_r", false,-1, 10,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcE_dff ");
    tracep->declBus(c+487,"DW", false,-1, 31,0);
    tracep->declQuad(c+21,"din", false,-1, 63,0);
    tracep->declQuad(c+24,"qout", false,-1, 63,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declQuad(c+24,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_dff ");
    tracep->declBus(c+489,"DW", false,-1, 31,0);
    tracep->declBus(c+223,"din", false,-1, 5,0);
    tracep->declBus(c+94,"qout", false,-1, 5,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+94,"qout_r", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs1DataE_dff ");
    tracep->declBus(c+487,"DW", false,-1, 31,0);
    tracep->declQuad(c+447,"din", false,-1, 63,0);
    tracep->declQuad(c+28,"qout", false,-1, 63,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declQuad(c+28,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2DataE_dff ");
    tracep->declBus(c+487,"DW", false,-1, 31,0);
    tracep->declQuad(c+449,"din", false,-1, 63,0);
    tracep->declQuad(c+30,"qout", false,-1, 63,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+295,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declQuad(c+30,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("If_stage ");
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBit(c+1,"jump", false,-1);
    tracep->declBit(c+47,"stallF", false,-1);
    tracep->declQuad(c+2,"jumpAddr", false,-1, 63,0);
    tracep->declBus(c+367,"instF", false,-1, 31,0);
    tracep->declQuad(c+380,"pcF", false,-1, 63,0);
    tracep->declQuad(c+21,"pcD", false,-1, 63,0);
    tracep->declBit(c+382,"pcEnableF", false,-1);
    tracep->declBus(c+20,"instD", false,-1, 31,0);
    tracep->declBit(c+458,"pcEnableF_r", false,-1);
    tracep->declQuad(c+224,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("instE_dff ");
    tracep->declBus(c+492,"DW", false,-1, 31,0);
    tracep->declBus(c+367,"din", false,-1, 31,0);
    tracep->declBus(c+20,"qout", false,-1, 31,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+485,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+20,"qout_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcD_dff ");
    tracep->declBus(c+487,"DW", false,-1, 31,0);
    tracep->declQuad(c+380,"din", false,-1, 63,0);
    tracep->declQuad(c+21,"qout", false,-1, 63,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+485,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declQuad(c+21,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcEnableF_dff ");
    tracep->declBus(c+486,"DW", false,-1, 31,0);
    tracep->declBus(c+458,"din", false,-1, 0,0);
    tracep->declBus(c+382,"qout", false,-1, 0,0);
    tracep->declBit(c+47,"stall", false,-1);
    tracep->declBit(c+485,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+226,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Mem_stage ");
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBus(c+34,"memFuncM", false,-1, 10,0);
    tracep->declQuad(c+35,"RamWriteAddrM", false,-1, 63,0);
    tracep->declQuad(c+37,"RamWriteDataM", false,-1, 63,0);
    tracep->declQuad(c+39,"RamReadAddrM", false,-1, 63,0);
    tracep->declBit(c+42,"RamReadEnableM", false,-1);
    tracep->declBit(c+41,"RamWriteEnableM", false,-1);
    tracep->declQuad(c+368,"RamReadDataM", false,-1, 63,0);
    tracep->declQuad(c+376,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+378,"RamWriteData", false,-1, 63,0);
    tracep->declQuad(c+372,"RamReadAddr", false,-1, 63,0);
    tracep->declBit(c+370,"RamReadEnable", false,-1);
    tracep->declBit(c+371,"RamWriteEnable", false,-1);
    tracep->declQuad(c+374,"RamWriteMask", false,-1, 63,0);
    tracep->declBit(c+12,"rdWriteEnableM", false,-1);
    tracep->declBus(c+13,"rdWriteAddrM", false,-1, 4,0);
    tracep->declQuad(c+14,"rdWriteDataM", false,-1, 63,0);
    tracep->declBit(c+16,"rdWriteEnableW", false,-1);
    tracep->declBus(c+17,"rdWriteAddrW", false,-1, 4,0);
    tracep->declQuad(c+18,"rdWriteDataW", false,-1, 63,0);
    tracep->declQuad(c+297,"result", false,-1, 63,0);
    tracep->declQuad(c+227,"RamWriteMask_r", false,-1, 63,0);
    tracep->declQuad(c+459,"rd8", false,-1, 63,0);
    tracep->declQuad(c+461,"rd8u", false,-1, 63,0);
    tracep->declQuad(c+463,"rd16", false,-1, 63,0);
    tracep->declQuad(c+465,"rd16u", false,-1, 63,0);
    tracep->declQuad(c+467,"rd32", false,-1, 63,0);
    tracep->declQuad(c+469,"rd32u", false,-1, 63,0);
    tracep->declQuad(c+471,"rd64", false,-1, 63,0);
    tracep->declQuad(c+299,"rdWriteDataM_r", false,-1, 63,0);
    tracep->pushNamePrefix("rdWriteAddrW_clk_diff ");
    tracep->declBus(c+493,"DW", false,-1, 31,0);
    tracep->declBus(c+13,"din", false,-1, 4,0);
    tracep->declBus(c+17,"qout", false,-1, 4,0);
    tracep->declBit(c+485,"stall", false,-1);
    tracep->declBit(c+485,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+17,"qout_r", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdWriteDataW_clk_diff ");
    tracep->declBus(c+487,"DW", false,-1, 31,0);
    tracep->declQuad(c+299,"din", false,-1, 63,0);
    tracep->declQuad(c+18,"qout", false,-1, 63,0);
    tracep->declBit(c+485,"stall", false,-1);
    tracep->declBit(c+485,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declQuad(c+18,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdWriteEnableW_clk_diff ");
    tracep->declBus(c+486,"DW", false,-1, 31,0);
    tracep->declBus(c+12,"din", false,-1, 0,0);
    tracep->declBus(c+16,"qout", false,-1, 0,0);
    tracep->declBit(c+485,"stall", false,-1);
    tracep->declBit(c+485,"flush", false,-1);
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+16,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+365,"clk", false,-1);
    tracep->declBit(c+366,"rst", false,-1);
    tracep->declBus(c+17,"WriteAddr", false,-1, 4,0);
    tracep->declQuad(c+18,"WriteData", false,-1, 63,0);
    tracep->declBit(c+16,"WriteEnable", false,-1);
    tracep->declBus(c+7,"ReadAddr1", false,-1, 4,0);
    tracep->declQuad(c+447,"ReadData1", false,-1, 63,0);
    tracep->declBit(c+4,"ReadEnable1", false,-1);
    tracep->declBus(c+8,"ReadAddr2", false,-1, 4,0);
    tracep->declQuad(c+449,"ReadData2", false,-1, 63,0);
    tracep->declBit(c+5,"ReadEnable2", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+301+i*2,"regs_o", true,(i+0), 63,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+231+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vrvcpu___024root__trace_init_top(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root__trace_init_top\n"); );
    // Body
    Vrvcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vrvcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vrvcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vrvcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vrvcpu___024root__trace_register(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vrvcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vrvcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vrvcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vrvcpu___024root__trace_full_sub_0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrvcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root__trace_full_top_0\n"); );
    // Init
    Vrvcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrvcpu___024root*>(voidSelf);
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrvcpu___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vrvcpu___024root__trace_full_sub_0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_dff__DOT__qout_r));
    tracep->fullQData(oldp+2,(vlSelf->rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r),64);
    tracep->fullBit(oldp+4,(vlSelf->rvcpu__DOT__rs1ReadEnable));
    tracep->fullBit(oldp+5,(vlSelf->rvcpu__DOT__rs2ReadEnable));
    tracep->fullBit(oldp+6,((1U & ((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r) 
                                   >> 5U))));
    tracep->fullCData(oldp+7,(vlSelf->rvcpu__DOT__rs1ReadAddr),5);
    tracep->fullCData(oldp+8,(vlSelf->rvcpu__DOT__rs2ReadAddr),5);
    tracep->fullCData(oldp+9,((0x1fU & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r))),5);
    tracep->fullBit(oldp+10,(vlSelf->rvcpu__DOT__Id_stage__DOT__RamReadEnableE_dff__DOT__qout_r));
    tracep->fullBit(oldp+11,(vlSelf->rvcpu__DOT__Id_stage__DOT__RamWriteEnableE_dff__DOT__qout_r));
    tracep->fullBit(oldp+12,((1U & ((IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r) 
                                    >> 5U))));
    tracep->fullCData(oldp+13,((0x1fU & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r))),5);
    tracep->fullQData(oldp+14,(vlSelf->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r),64);
    tracep->fullBit(oldp+16,(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r));
    tracep->fullCData(oldp+17,(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r),5);
    tracep->fullQData(oldp+18,(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r),64);
    tracep->fullIData(oldp+20,(vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r),32);
    tracep->fullQData(oldp+21,(vlSelf->rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r),64);
    tracep->fullSData(oldp+23,(vlSelf->rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r),11);
    tracep->fullQData(oldp+24,(vlSelf->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r),64);
    tracep->fullSData(oldp+26,(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r),10);
    tracep->fullSData(oldp+27,(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r),14);
    tracep->fullQData(oldp+28,(vlSelf->rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r),64);
    tracep->fullQData(oldp+30,(vlSelf->rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r),64);
    tracep->fullQData(oldp+32,(vlSelf->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r),64);
    tracep->fullSData(oldp+34,(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r),11);
    tracep->fullQData(oldp+35,(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r),64);
    tracep->fullQData(oldp+37,(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r),64);
    tracep->fullQData(oldp+39,(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r),64);
    tracep->fullBit(oldp+41,(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteEnableM_clk_diff__DOT__qout_r));
    tracep->fullBit(oldp+42,(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadEnableM_clk_diff__DOT__qout_r));
    tracep->fullCData(oldp+43,(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r),2);
    tracep->fullCData(oldp+44,(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r),2);
    tracep->fullCData(oldp+45,(vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r),2);
    tracep->fullBit(oldp+46,((1U & ((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                    >> 4U))));
    tracep->fullBit(oldp+47,(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r));
    tracep->fullCData(oldp+48,(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_r),2);
    tracep->fullCData(oldp+49,(vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad),2);
    tracep->fullCData(oldp+50,(((~ (IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_r)) 
                                & (((((0x1fU & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                      == (IData)(vlSelf->rvcpu__DOT__rs2ReadAddr)) 
                                     & (IData)(vlSelf->rvcpu__DOT__rs2ReadEnable)) 
                                    << 1U) | (((0x1fU 
                                                & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                               == (IData)(vlSelf->rvcpu__DOT__rs1ReadAddr)) 
                                              & (IData)(vlSelf->rvcpu__DOT__rs1ReadEnable))))),2);
    tracep->fullQData(oldp+51,(vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data),64);
    tracep->fullQData(oldp+53,(vlSelf->rvcpu__DOT__Exe_stage__DOT__rs2Data),64);
    tracep->fullQData(oldp+55,(vlSelf->rvcpu__DOT__Exe_stage__DOT__op2),64);
    tracep->fullQData(oldp+57,(((IData)((0U != (0x1a0U 
                                                & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                 ? vlSelf->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                                 : vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data)),64);
    tracep->fullQData(oldp+59,(((2U & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                 ? vlSelf->rvcpu__DOT__Exe_stage__DOT__rs2Data
                                 : vlSelf->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r)),64);
    tracep->fullQData(oldp+61,(vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD),64);
    tracep->fullQData(oldp+63,((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                - vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)),64);
    tracep->fullQData(oldp+65,((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                << (0x3fU & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+67,((QData)((IData)((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                < vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+69,((QData)((IData)(VL_LTS_IQQ(64, vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data, vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+71,((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                >> (0x3fU & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+73,(VL_SHIFTRS_QQI(64,64,6, vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data, 
                                              (0x3fU 
                                               & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+75,((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                ^ vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)),64);
    tracep->fullQData(oldp+77,((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                | vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)),64);
    tracep->fullQData(oldp+79,((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                & vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)),64);
    tracep->fullQData(oldp+81,((QData)((IData)((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                > vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+83,((QData)((IData)(VL_GTS_IQQ(64, vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data, vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+85,((QData)((IData)((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                == vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+87,((QData)((IData)((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                != vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+89,(vlSelf->rvcpu__DOT__Exe_stage__DOT__result),64);
    tracep->fullBit(oldp+91,((1U & (((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                     >> 5U) & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__result)))));
    tracep->fullQData(oldp+92,((4ULL + vlSelf->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)),64);
    tracep->fullCData(oldp+94,(vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r),6);
    tracep->fullCData(oldp+95,(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r),6);
    tracep->fullCData(oldp+96,((0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)),7);
    tracep->fullCData(oldp+97,((0x1fU & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                         >> 7U))),5);
    tracep->fullCData(oldp+98,((7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+99,((vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                >> 0x19U)),7);
    tracep->fullCData(oldp+100,((vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                 >> 0x1aU)),6);
    tracep->fullCData(oldp+101,((0x1fU & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+102,((0x1fU & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                          >> 0x14U))),5);
    tracep->fullQData(oldp+103,((((- (QData)((IData)(
                                                     (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                              >> 0x14U))))),64);
    tracep->fullQData(oldp+105,((((- (QData)((IData)(
                                                     (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                    >> 7U))))))),64);
    tracep->fullQData(oldp+107,((((- (QData)((IData)(
                                                     (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                      >> 0x1fU)))) 
                                  << 0xdU) | (QData)((IData)(
                                                             ((0x1000U 
                                                               & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                  >> 0x13U)) 
                                                              | ((0x800U 
                                                                  & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                          >> 7U))))))))),64);
    tracep->fullQData(oldp+109,((((QData)((IData)((- (IData)(
                                                             (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))),64);
    tracep->fullQData(oldp+111,((((- (QData)((IData)(
                                                     (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                      >> 0x1fU)))) 
                                  << 0x15U) | (QData)((IData)(
                                                              ((0x100000U 
                                                                & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                   >> 0xbU)) 
                                                               | ((0xff000U 
                                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                           >> 0x14U))))))))),64);
    tracep->fullBit(oldp+113,((0U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+114,((1U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+115,((2U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+116,((3U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+117,((4U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+118,((5U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+119,((6U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+120,((7U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+121,((0U == (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                      >> 0x19U))));
    tracep->fullBit(oldp+122,((0x20U == (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                         >> 0x19U))));
    tracep->fullBit(oldp+123,((0U == (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                      >> 0x1aU))));
    tracep->fullBit(oldp+124,((0x10U == (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                         >> 0x1aU))));
    tracep->fullBit(oldp+125,((3U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+126,((7U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+127,((0xbU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+128,((0xfU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+129,((0x13U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+130,((0x17U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+131,((0x1bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+132,((0x1fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+133,((0x23U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+134,((0x27U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+135,((0x2bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+136,((0x2fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+137,((0x33U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+138,((0x37U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+139,((0x3bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+140,((0x3fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+141,((0x43U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+142,((0x47U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+143,((0x4bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+144,((0x4fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+145,((0x53U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+146,((0x57U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+147,((0x5bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+148,((0x5fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+149,((0x63U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+150,((0x67U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+151,((0x6bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+152,((0x6fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+153,((0x73U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
    tracep->fullBit(oldp+154,(vlSelf->rvcpu__DOT__Id_stage__DOT__Rtype));
    tracep->fullBit(oldp+155,(vlSelf->rvcpu__DOT__Id_stage__DOT__Itype));
    tracep->fullBit(oldp+156,(vlSelf->rvcpu__DOT__Id_stage__DOT__Utype));
    tracep->fullBit(oldp+157,(((0x67U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                               | (0x6fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+158,(((0x13U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                               | (0x1bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+159,(((0x33U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                               | (0x3bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+160,(((0x1bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                               | (0x3bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullSData(oldp+161,((((0x37U == (0x7fU 
                                             & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                  << 9U) | (((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                             << 8U) 
                                            | (((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                << 7U) 
                                               | (((IData)(
                                                           (0x206fU 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                   << 6U) 
                                                  | (((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                      << 5U) 
                                                     | (((3U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                         << 4U) 
                                                        | (((0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                            << 3U) 
                                                           | ((((0x13U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                | (0x1bU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                               << 2U) 
                                                              | ((((0x33U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                   | (0x3bU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                  << 1U) 
                                                                 | ((0x1bU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                    | (0x3bU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))))))))))),10);
    tracep->fullBit(oldp+162,((IData)((0x13U == (0x707fU 
                                                 & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+163,((IData)((0x2013U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+164,((IData)((0x3013U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+165,((IData)((0x4013U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+166,((IData)((0x6013U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+167,((IData)((0x7013U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+168,((IData)((0x1013U == (0xfc00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+169,((IData)((0x5013U == (0xfc00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+170,((IData)((0x40005013U 
                                       == (0xfc00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+171,((IData)((0x1bU == (0x707fU 
                                                 & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+172,((IData)((0x101bU == (0xfe00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+173,((IData)((0x501bU == (0xfe00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+174,((IData)((0x4000501bU 
                                       == (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+175,((IData)((0x206fU == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+176,((IData)((0x33U == (0xfe00707fU 
                                                 & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+177,((IData)((0x40000033U 
                                       == (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+178,((IData)((0x1033U == (0xfe00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+179,((IData)((0x2033U == (0xfe00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+180,((IData)((0x3033U == (0xfe00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+181,((IData)((0x4033U == (0xfe00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+182,((IData)((0x5033U == (0xfe00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+183,((IData)((0x40005033U 
                                       == (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+184,((IData)((0x6033U == (0xfe00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+185,((IData)((0x7033U == (0xfe00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+186,((IData)((0x3bU == (0xfe00707fU 
                                                 & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+187,((IData)((0x4000003bU 
                                       == (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+188,((IData)((0x103bU == (0xfe00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+189,((IData)((0x503bU == (0xfe00707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+190,((IData)((0x4000503bU 
                                       == (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+191,((IData)((0x63U == (0x707fU 
                                                 & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+192,((IData)((0x1063U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+193,((IData)((0x4063U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+194,((IData)((0x6063U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+195,((IData)((0x5063U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+196,((IData)((0x7063U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+197,((IData)((3U == (0x707fU 
                                              & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+198,((IData)((0x4003U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+199,((IData)((0x1003U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+200,((IData)((0x5003U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+201,((IData)((0x2003U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+202,((IData)((0x6003U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+203,((IData)((0x3003U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+204,((IData)((0x23U == (0x707fU 
                                                 & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+205,((IData)((0x1023U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+206,((IData)((0x2023U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+207,((IData)((0x3023U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullSData(oldp+208,(vlSelf->rvcpu__DOT__Id_stage__DOT__memFuncE_r),11);
    tracep->fullSData(oldp+209,(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_r),14);
    tracep->fullBit(oldp+210,((IData)((0xfU == (0x707fU 
                                                & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+211,((IData)((0x100fU == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullCData(oldp+212,((((IData)((0xfU == 
                                           (0x707fU 
                                            & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                  << 1U) | (IData)(
                                                   (0x100fU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))),2);
    tracep->fullBit(oldp+213,((IData)((0x1073U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+214,((IData)((0x2073U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+215,((IData)((0x3073U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+216,((IData)((0x5073U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+217,((IData)((0x6073U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+218,((IData)((0x7073U == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+219,(vlSelf->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r));
    tracep->fullCData(oldp+220,(((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                                  ? (0x1fU & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                              >> 7U))
                                  : 0U)),5);
    tracep->fullQData(oldp+221,(vlSelf->rvcpu__DOT__Id_stage__DOT__imm_r),64);
    tracep->fullCData(oldp+223,((((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r) 
                                  << 5U) | ((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                                             ? (0x1fU 
                                                & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                   >> 7U))
                                             : 0U))),6);
    tracep->fullQData(oldp+224,(vlSelf->rvcpu__DOT__If_stage__DOT__pc),64);
    tracep->fullBit(oldp+226,(vlSelf->rvcpu__DOT__If_stage__DOT__pcEnableF_dff__DOT__qout_r));
    tracep->fullQData(oldp+227,(vlSelf->rvcpu__DOT__Mem_stage__DOT__RamWriteMask_r),64);
    tracep->fullQData(oldp+229,(((IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_r)
                                  ? vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD
                                  : 0ULL)),64);
    tracep->fullQData(oldp+231,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[0]),64);
    tracep->fullQData(oldp+233,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[1]),64);
    tracep->fullQData(oldp+235,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[2]),64);
    tracep->fullQData(oldp+237,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[3]),64);
    tracep->fullQData(oldp+239,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[4]),64);
    tracep->fullQData(oldp+241,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[5]),64);
    tracep->fullQData(oldp+243,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[6]),64);
    tracep->fullQData(oldp+245,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[7]),64);
    tracep->fullQData(oldp+247,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[8]),64);
    tracep->fullQData(oldp+249,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[9]),64);
    tracep->fullQData(oldp+251,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[10]),64);
    tracep->fullQData(oldp+253,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[11]),64);
    tracep->fullQData(oldp+255,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[12]),64);
    tracep->fullQData(oldp+257,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[13]),64);
    tracep->fullQData(oldp+259,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[14]),64);
    tracep->fullQData(oldp+261,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[15]),64);
    tracep->fullQData(oldp+263,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[16]),64);
    tracep->fullQData(oldp+265,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[17]),64);
    tracep->fullQData(oldp+267,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[18]),64);
    tracep->fullQData(oldp+269,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[19]),64);
    tracep->fullQData(oldp+271,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[20]),64);
    tracep->fullQData(oldp+273,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[21]),64);
    tracep->fullQData(oldp+275,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[22]),64);
    tracep->fullQData(oldp+277,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[23]),64);
    tracep->fullQData(oldp+279,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[24]),64);
    tracep->fullQData(oldp+281,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[25]),64);
    tracep->fullQData(oldp+283,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[26]),64);
    tracep->fullQData(oldp+285,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[27]),64);
    tracep->fullQData(oldp+287,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[28]),64);
    tracep->fullQData(oldp+289,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[29]),64);
    tracep->fullQData(oldp+291,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[30]),64);
    tracep->fullQData(oldp+293,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[31]),64);
    tracep->fullBit(oldp+295,(vlSelf->rvcpu__DOT__flushD));
    tracep->fullBit(oldp+296,(vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_r));
    tracep->fullQData(oldp+297,(vlSelf->rvcpu__DOT__Mem_stage__DOT__result),64);
    tracep->fullQData(oldp+299,(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r),64);
    tracep->fullQData(oldp+301,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0]),64);
    tracep->fullQData(oldp+303,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[1]),64);
    tracep->fullQData(oldp+305,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[2]),64);
    tracep->fullQData(oldp+307,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[3]),64);
    tracep->fullQData(oldp+309,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[4]),64);
    tracep->fullQData(oldp+311,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[5]),64);
    tracep->fullQData(oldp+313,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[6]),64);
    tracep->fullQData(oldp+315,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[7]),64);
    tracep->fullQData(oldp+317,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[8]),64);
    tracep->fullQData(oldp+319,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[9]),64);
    tracep->fullQData(oldp+321,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[10]),64);
    tracep->fullQData(oldp+323,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[11]),64);
    tracep->fullQData(oldp+325,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[12]),64);
    tracep->fullQData(oldp+327,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[13]),64);
    tracep->fullQData(oldp+329,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[14]),64);
    tracep->fullQData(oldp+331,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[15]),64);
    tracep->fullQData(oldp+333,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[16]),64);
    tracep->fullQData(oldp+335,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[17]),64);
    tracep->fullQData(oldp+337,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[18]),64);
    tracep->fullQData(oldp+339,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[19]),64);
    tracep->fullQData(oldp+341,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[20]),64);
    tracep->fullQData(oldp+343,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[21]),64);
    tracep->fullQData(oldp+345,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[22]),64);
    tracep->fullQData(oldp+347,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[23]),64);
    tracep->fullQData(oldp+349,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[24]),64);
    tracep->fullQData(oldp+351,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[25]),64);
    tracep->fullQData(oldp+353,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[26]),64);
    tracep->fullQData(oldp+355,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[27]),64);
    tracep->fullQData(oldp+357,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[28]),64);
    tracep->fullQData(oldp+359,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[29]),64);
    tracep->fullQData(oldp+361,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[30]),64);
    tracep->fullQData(oldp+363,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[31]),64);
    tracep->fullBit(oldp+365,(vlSelf->clk));
    tracep->fullBit(oldp+366,(vlSelf->rst));
    tracep->fullIData(oldp+367,(vlSelf->instF),32);
    tracep->fullQData(oldp+368,(vlSelf->RamReadData),64);
    tracep->fullBit(oldp+370,(vlSelf->RamReadEnable));
    tracep->fullBit(oldp+371,(vlSelf->RamWriteEnable));
    tracep->fullQData(oldp+372,(vlSelf->RamReadAddr),64);
    tracep->fullQData(oldp+374,(vlSelf->RamWriteMask),64);
    tracep->fullQData(oldp+376,(vlSelf->RamWriteAddr),64);
    tracep->fullQData(oldp+378,(vlSelf->RamWriteData),64);
    tracep->fullQData(oldp+380,(vlSelf->pcF),64);
    tracep->fullBit(oldp+382,(vlSelf->pcEnableF));
    tracep->fullQData(oldp+383,(vlSelf->regs_o[0]),64);
    tracep->fullQData(oldp+385,(vlSelf->regs_o[1]),64);
    tracep->fullQData(oldp+387,(vlSelf->regs_o[2]),64);
    tracep->fullQData(oldp+389,(vlSelf->regs_o[3]),64);
    tracep->fullQData(oldp+391,(vlSelf->regs_o[4]),64);
    tracep->fullQData(oldp+393,(vlSelf->regs_o[5]),64);
    tracep->fullQData(oldp+395,(vlSelf->regs_o[6]),64);
    tracep->fullQData(oldp+397,(vlSelf->regs_o[7]),64);
    tracep->fullQData(oldp+399,(vlSelf->regs_o[8]),64);
    tracep->fullQData(oldp+401,(vlSelf->regs_o[9]),64);
    tracep->fullQData(oldp+403,(vlSelf->regs_o[10]),64);
    tracep->fullQData(oldp+405,(vlSelf->regs_o[11]),64);
    tracep->fullQData(oldp+407,(vlSelf->regs_o[12]),64);
    tracep->fullQData(oldp+409,(vlSelf->regs_o[13]),64);
    tracep->fullQData(oldp+411,(vlSelf->regs_o[14]),64);
    tracep->fullQData(oldp+413,(vlSelf->regs_o[15]),64);
    tracep->fullQData(oldp+415,(vlSelf->regs_o[16]),64);
    tracep->fullQData(oldp+417,(vlSelf->regs_o[17]),64);
    tracep->fullQData(oldp+419,(vlSelf->regs_o[18]),64);
    tracep->fullQData(oldp+421,(vlSelf->regs_o[19]),64);
    tracep->fullQData(oldp+423,(vlSelf->regs_o[20]),64);
    tracep->fullQData(oldp+425,(vlSelf->regs_o[21]),64);
    tracep->fullQData(oldp+427,(vlSelf->regs_o[22]),64);
    tracep->fullQData(oldp+429,(vlSelf->regs_o[23]),64);
    tracep->fullQData(oldp+431,(vlSelf->regs_o[24]),64);
    tracep->fullQData(oldp+433,(vlSelf->regs_o[25]),64);
    tracep->fullQData(oldp+435,(vlSelf->regs_o[26]),64);
    tracep->fullQData(oldp+437,(vlSelf->regs_o[27]),64);
    tracep->fullQData(oldp+439,(vlSelf->regs_o[28]),64);
    tracep->fullQData(oldp+441,(vlSelf->regs_o[29]),64);
    tracep->fullQData(oldp+443,(vlSelf->regs_o[30]),64);
    tracep->fullQData(oldp+445,(vlSelf->regs_o[31]),64);
    tracep->fullQData(oldp+447,(((IData)(vlSelf->rst)
                                  ? 0ULL : ((IData)(vlSelf->rvcpu__DOT__rs1ReadEnable)
                                             ? (((IData)(vlSelf->rvcpu__DOT__rs1ReadAddr) 
                                                 == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                                                 ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                 : 
                                                vlSelf->rvcpu__DOT__Regfile__DOT__regs
                                                [vlSelf->rvcpu__DOT__rs1ReadAddr])
                                             : 0ULL))),64);
    tracep->fullQData(oldp+449,(((IData)(vlSelf->rst)
                                  ? 0ULL : ((IData)(vlSelf->rvcpu__DOT__rs2ReadEnable)
                                             ? (((IData)(vlSelf->rvcpu__DOT__rs2ReadAddr) 
                                                 == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                                                 ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                 : 
                                                vlSelf->rvcpu__DOT__Regfile__DOT__regs
                                                [vlSelf->rvcpu__DOT__rs2ReadAddr])
                                             : 0ULL))),64);
    tracep->fullBit(oldp+451,(((~ (IData)(vlSelf->rst)) 
                               & (0U != (IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad)))));
    tracep->fullQData(oldp+452,(((IData)(vlSelf->rst)
                                  ? 0ULL : vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD)),64);
    tracep->fullQData(oldp+454,(((IData)(vlSelf->rst)
                                  ? 0ULL : vlSelf->rvcpu__DOT__Exe_stage__DOT__rs2Data)),64);
    tracep->fullQData(oldp+456,(((IData)(vlSelf->rst)
                                  ? 0ULL : ((IData)(
                                                    (0U 
                                                     != 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                             ? (4ULL 
                                                + vlSelf->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)
                                             : ((1U 
                                                 & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                 ? (QData)((IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__result))
                                                 : 
                                                ((0x100U 
                                                  & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                  ? vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                   ? vlSelf->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r
                                                   : vlSelf->rvcpu__DOT__Exe_stage__DOT__result)))))),64);
    tracep->fullBit(oldp+458,((1U & (~ (IData)(vlSelf->rst)))));
    tracep->fullQData(oldp+459,(((IData)(vlSelf->rst)
                                  ? 0ULL : (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->rvcpu__DOT__Mem_stage__DOT__result 
                                                                            >> 7U)))))) 
                                             << 8U) 
                                            | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result))))))),64);
    tracep->fullQData(oldp+461,(((IData)(vlSelf->rst)
                                  ? 0ULL : (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result)))))),64);
    tracep->fullQData(oldp+463,(((IData)(vlSelf->rst)
                                  ? 0ULL : (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->rvcpu__DOT__Mem_stage__DOT__result 
                                                                            >> 0xfU)))))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result))))))),64);
    tracep->fullQData(oldp+465,(((IData)(vlSelf->rst)
                                  ? 0ULL : (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result)))))),64);
    tracep->fullQData(oldp+467,(((IData)(vlSelf->rst)
                                  ? 0ULL : (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->rvcpu__DOT__Mem_stage__DOT__result 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result))))),64);
    tracep->fullQData(oldp+469,(((IData)(vlSelf->rst)
                                  ? 0ULL : (QData)((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result)))),64);
    tracep->fullQData(oldp+471,(((IData)(vlSelf->rst)
                                  ? 0ULL : vlSelf->rvcpu__DOT__Mem_stage__DOT__result)),64);
    tracep->fullQData(oldp+473,(vlSelf->rvcpu__DOT__RamReadAddrE),64);
    tracep->fullQData(oldp+475,(vlSelf->rvcpu__DOT__RamWriteAddrE),64);
    tracep->fullQData(oldp+477,(vlSelf->rvcpu__DOT__RamWriteDataE),64);
    tracep->fullQData(oldp+479,(vlSelf->rvcpu__DOT__op1E),64);
    tracep->fullQData(oldp+481,(vlSelf->rvcpu__DOT__op2E),64);
    tracep->fullSData(oldp+483,(vlSelf->rvcpu__DOT__instTypeM),10);
    tracep->fullIData(oldp+484,(2U),32);
    tracep->fullBit(oldp+485,(0U));
    tracep->fullIData(oldp+486,(1U),32);
    tracep->fullIData(oldp+487,(0x40U),32);
    tracep->fullIData(oldp+488,(0xbU),32);
    tracep->fullIData(oldp+489,(6U),32);
    tracep->fullIData(oldp+490,(0xeU),32);
    tracep->fullIData(oldp+491,(0xaU),32);
    tracep->fullIData(oldp+492,(0x20U),32);
    tracep->fullIData(oldp+493,(5U),32);
}
