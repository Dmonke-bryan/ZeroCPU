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
    tracep->declBit(c+623,"clock", false,-1);
    tracep->declBit(c+624,"reset", false,-1);
    tracep->declQuad(c+625,"io_logCtrl_log_begin", false,-1, 63,0);
    tracep->declQuad(c+627,"io_logCtrl_log_end", false,-1, 63,0);
    tracep->declQuad(c+629,"io_logCtrl_log_level", false,-1, 63,0);
    tracep->declBit(c+631,"io_perfInfo_clean", false,-1);
    tracep->declBit(c+632,"io_perfInfo_dump", false,-1);
    tracep->declBit(c+633,"io_uart_out_valid", false,-1);
    tracep->declBus(c+634,"io_uart_out_ch", false,-1, 7,0);
    tracep->declBit(c+635,"io_uart_in_valid", false,-1);
    tracep->declBus(c+636,"io_uart_in_ch", false,-1, 7,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+623,"clock", false,-1);
    tracep->declBit(c+624,"reset", false,-1);
    tracep->declQuad(c+625,"io_logCtrl_log_begin", false,-1, 63,0);
    tracep->declQuad(c+627,"io_logCtrl_log_end", false,-1, 63,0);
    tracep->declQuad(c+629,"io_logCtrl_log_level", false,-1, 63,0);
    tracep->declBit(c+631,"io_perfInfo_clean", false,-1);
    tracep->declBit(c+632,"io_perfInfo_dump", false,-1);
    tracep->declBit(c+633,"io_uart_out_valid", false,-1);
    tracep->declBus(c+634,"io_uart_out_ch", false,-1, 7,0);
    tracep->declBit(c+635,"io_uart_in_valid", false,-1);
    tracep->declBus(c+636,"io_uart_in_ch", false,-1, 7,0);
    tracep->declBus(c+523,"inst", false,-1, 31,0);
    tracep->declQuad(c+524,"pc", false,-1, 63,0);
    tracep->declBit(c+637,"pcEnable", false,-1);
    tracep->declBit(c+526,"RamReadEnable", false,-1);
    tracep->declBit(c+527,"RamWriteEnable", false,-1);
    tracep->declQuad(c+528,"RamReadData", false,-1, 63,0);
    tracep->declQuad(c+530,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+532,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+534,"RamWriteData", false,-1, 63,0);
    tracep->declQuad(c+536,"RamWriteMask", false,-1, 63,0);
    tracep->declBit(c+674,"ReadEnable", false,-1);
    tracep->declBit(c+527,"WriteEnable", false,-1);
    tracep->declQuad(c+538,"ReadData", false,-1, 63,0);
    tracep->declQuad(c+540,"ReadAddr", false,-1, 63,0);
    tracep->declQuad(c+532,"WriteAddr", false,-1, 63,0);
    tracep->declQuad(c+534,"WriteData", false,-1, 63,0);
    tracep->declQuad(c+536,"WriteMask", false,-1, 63,0);
    tracep->declQuad(c+1,"r_pc", false,-1, 63,0);
    tracep->declBus(c+3,"r_instr", false,-1, 31,0);
    tracep->declBit(c+4,"r_valid", false,-1);
    tracep->declBit(c+5,"r_wen", false,-1);
    tracep->declBus(c+6,"r_wdest", false,-1, 7,0);
    tracep->declQuad(c+7,"r_wdata", false,-1, 63,0);
    tracep->declBit(c+9,"trap", false,-1);
    tracep->declBus(c+10,"trap_code", false,-1, 7,0);
    tracep->declQuad(c+11,"cycleCnt", false,-1, 63,0);
    tracep->declQuad(c+13,"instrCnt", false,-1, 63,0);
    tracep->declBit(c+15,"skip", false,-1);
    tracep->declQuad(c+16,"BusReadAddrW", false,-1, 63,0);
    tracep->declQuad(c+18,"BusWriteAddrW", false,-1, 63,0);
    tracep->declBit(c+20,"inst_vaild", false,-1);
    tracep->declQuad(c+21,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+23,"sstatus", false,-1, 63,0);
    tracep->declQuad(c+25,"mepc", false,-1, 63,0);
    tracep->declQuad(c+27,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+29,"mcause", false,-1, 63,0);
    tracep->declQuad(c+31,"mip", false,-1, 63,0);
    tracep->declQuad(c+33,"mie", false,-1, 63,0);
    tracep->declQuad(c+35,"mscratch", false,-1, 63,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+37+i*2,"it_pc", true,(i+0), 63,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+45+i*1,"it_instr", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+49+i*1,"intrNO", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("DifftestArchFpRegState ");
    tracep->declBit(c+623,"clock", false,-1);
    tracep->declBus(c+675,"coreid", false,-1, 7,0);
    tracep->declQuad(c+676,"fpr_0", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_1", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_2", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_3", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_4", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_5", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_6", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_7", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_8", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_9", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_10", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_11", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_12", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_13", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_14", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_15", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_16", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_17", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_18", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_19", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_20", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_21", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_22", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_23", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_24", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_25", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_26", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_27", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_28", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_29", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_30", false,-1, 63,0);
    tracep->declQuad(c+676,"fpr_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DifftestCSRState ");
    tracep->declBit(c+623,"clock", false,-1);
    tracep->declBus(c+675,"coreid", false,-1, 7,0);
    tracep->declBus(c+678,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+21,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+23,"sstatus", false,-1, 63,0);
    tracep->declQuad(c+25,"mepc", false,-1, 63,0);
    tracep->declQuad(c+676,"sepc", false,-1, 63,0);
    tracep->declQuad(c+676,"mtval", false,-1, 63,0);
    tracep->declQuad(c+676,"stval", false,-1, 63,0);
    tracep->declQuad(c+27,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+676,"stvec", false,-1, 63,0);
    tracep->declQuad(c+29,"mcause", false,-1, 63,0);
    tracep->declQuad(c+676,"scause", false,-1, 63,0);
    tracep->declQuad(c+676,"satp", false,-1, 63,0);
    tracep->declQuad(c+31,"mip", false,-1, 63,0);
    tracep->declQuad(c+33,"mie", false,-1, 63,0);
    tracep->declQuad(c+35,"mscratch", false,-1, 63,0);
    tracep->declQuad(c+676,"sscratch", false,-1, 63,0);
    tracep->declQuad(c+676,"mideleg", false,-1, 63,0);
    tracep->declQuad(c+676,"medeleg", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Rvcpu ");
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+523,"instF", false,-1, 31,0);
    tracep->declBit(c+679,"instVaild", false,-1);
    tracep->declBit(c+680,"RamReadVaild", false,-1);
    tracep->declQuad(c+528,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+526,"RamReadEnable", false,-1);
    tracep->declBit(c+527,"RamWriteEnable", false,-1);
    tracep->declQuad(c+530,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+536,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+532,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+534,"RamWriteData", false,-1, 63,0);
    tracep->declQuad(c+524,"pcF", false,-1, 63,0);
    tracep->declBit(c+637,"pcEnable", false,-1);
    tracep->declBit(c+542,"jump", false,-1);
    tracep->declQuad(c+53,"jumpAddr", false,-1, 63,0);
    tracep->declQuad(c+638,"rs1DataD", false,-1, 63,0);
    tracep->declQuad(c+640,"rs2DataD", false,-1, 63,0);
    tracep->declBit(c+55,"rs1ReadEnable", false,-1);
    tracep->declBit(c+56,"rs2ReadEnable", false,-1);
    tracep->declBit(c+57,"rdWriteEnableE", false,-1);
    tracep->declBus(c+58,"rs1ReadAddr", false,-1, 4,0);
    tracep->declBus(c+59,"rs2ReadAddr", false,-1, 4,0);
    tracep->declBus(c+60,"rdWriteAddrE", false,-1, 4,0);
    tracep->declBit(c+61,"BusReadEnableE", false,-1);
    tracep->declBit(c+62,"BusWriteEnableE", false,-1);
    tracep->declQuad(c+681,"BusReadAddrE", false,-1, 63,0);
    tracep->declQuad(c+683,"BusWriteAddrE", false,-1, 63,0);
    tracep->declQuad(c+685,"BusWriteDataE", false,-1, 63,0);
    tracep->declQuad(c+687,"op1E", false,-1, 63,0);
    tracep->declQuad(c+689,"op2E", false,-1, 63,0);
    tracep->declBit(c+63,"rdWriteEnableM", false,-1);
    tracep->declBus(c+64,"rdWriteAddrM", false,-1, 4,0);
    tracep->declQuad(c+65,"rdWriteDataM", false,-1, 63,0);
    tracep->declBit(c+67,"rdWriteEnableW", false,-1);
    tracep->declBus(c+68,"rdWriteAddrW", false,-1, 4,0);
    tracep->declQuad(c+69,"rdWriteDataW", false,-1, 63,0);
    tracep->declBit(c+642,"flushF", false,-1);
    tracep->declBus(c+71,"instD", false,-1, 31,0);
    tracep->declQuad(c+72,"pcD", false,-1, 63,0);
    tracep->declBit(c+543,"flushD", false,-1);
    tracep->declBus(c+74,"memFuncE", false,-1, 10,0);
    tracep->declQuad(c+75,"pcE", false,-1, 63,0);
    tracep->declBus(c+77,"instTypeE", false,-1, 14,0);
    tracep->declBus(c+78,"instFuncE", false,-1, 13,0);
    tracep->declBus(c+79,"csrFuncE", false,-1, 5,0);
    tracep->declQuad(c+80,"csrReadDataE", false,-1, 63,0);
    tracep->declBus(c+82,"csrWriteAddrE", false,-1, 11,0);
    tracep->declQuad(c+83,"rs1DataE", false,-1, 63,0);
    tracep->declQuad(c+85,"rs2DataE", false,-1, 63,0);
    tracep->declQuad(c+87,"imm", false,-1, 63,0);
    tracep->declBus(c+89,"instE", false,-1, 31,0);
    tracep->declBit(c+544,"flushE", false,-1);
    tracep->declBus(c+90,"memFuncM", false,-1, 10,0);
    tracep->declBus(c+91,"instTypeM", false,-1, 14,0);
    tracep->declQuad(c+92,"BusWriteAddrM", false,-1, 63,0);
    tracep->declQuad(c+94,"BusWriteDataM", false,-1, 63,0);
    tracep->declQuad(c+96,"BusReadAddrM", false,-1, 63,0);
    tracep->declBit(c+98,"BusWriteEnableM", false,-1);
    tracep->declBit(c+99,"BusReadEnableM", false,-1);
    tracep->declQuad(c+100,"pcM", false,-1, 63,0);
    tracep->declBus(c+102,"instM", false,-1, 31,0);
    tracep->declBus(c+103,"csrWriteAddrM", false,-1, 11,0);
    tracep->declBit(c+104,"csrWriteEnableM", false,-1);
    tracep->declQuad(c+105,"csrWriteDataM", false,-1, 63,0);
    tracep->declQuad(c+107,"pcW", false,-1, 63,0);
    tracep->declBus(c+109,"instW", false,-1, 31,0);
    tracep->declBit(c+691,"flushM", false,-1);
    tracep->declBus(c+110,"instTypeW", false,-1, 14,0);
    tracep->declBus(c+111,"csrWriteAddrW", false,-1, 11,0);
    tracep->declBit(c+112,"csrWriteEnableW", false,-1);
    tracep->declQuad(c+113,"csrWriteDataW", false,-1, 63,0);
    tracep->declQuad(c+545,"BusReadAddr", false,-1, 63,0);
    tracep->declQuad(c+547,"BusWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+549,"BusReadData", false,-1, 63,0);
    tracep->declQuad(c+551,"BusWriteData", false,-1, 63,0);
    tracep->declQuad(c+643,"BusWriteMask", false,-1, 63,0);
    tracep->declBit(c+553,"BusReadEnable", false,-1);
    tracep->declBit(c+554,"BusWriteEnable", false,-1);
    tracep->declQuad(c+555,"ClintReadAddr", false,-1, 63,0);
    tracep->declQuad(c+557,"ClintWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+645,"ClintReadData", false,-1, 63,0);
    tracep->declQuad(c+559,"ClintWriteData", false,-1, 63,0);
    tracep->declQuad(c+692,"ClintWriteMask", false,-1, 63,0);
    tracep->declBit(c+561,"ClintReadEnable", false,-1);
    tracep->declBit(c+562,"ClintWriteEnable", false,-1);
    tracep->declBit(c+115,"LoadStoreE", false,-1);
    tracep->declBit(c+563,"LoadStoreM", false,-1);
    tracep->declBus(c+116,"Redirect1", false,-1, 1,0);
    tracep->declBus(c+117,"Redirect2", false,-1, 1,0);
    tracep->declBus(c+694,"LoadRedirect", false,-1, 1,0);
    tracep->declBit(c+118,"csrReadEnable", false,-1);
    tracep->declBus(c+119,"csrReadAddr", false,-1, 11,0);
    tracep->declQuad(c+647,"csrReadData", false,-1, 63,0);
    tracep->declBus(c+120,"IRQtype", false,-1, 1,0);
    tracep->declBit(c+121,"IRQret", false,-1);
    tracep->declQuad(c+695,"IRQcause", false,-1, 62,0);
    tracep->declQuad(c+122,"mepcWriteData", false,-1, 63,0);
    tracep->declQuad(c+124,"irqAddr", false,-1, 63,0);
    tracep->declBit(c+564,"itTime", false,-1);
    tracep->declQuad(c+126,"mepc_o", false,-1, 63,0);
    tracep->declBit(c+697,"load", false,-1);
    tracep->declBit(c+565,"stallF", false,-1);
    tracep->declBit(c+691,"stallD", false,-1);
    tracep->declBit(c+691,"stallE", false,-1);
    tracep->declBit(c+691,"stallM", false,-1);
    tracep->declBit(c+691,"stallW", false,-1);
    tracep->declBit(c+128,"mret", false,-1);
    tracep->declQuad(c+566,"jAddr", false,-1, 63,0);
    tracep->declBit(c+129,"mecall", false,-1);
    tracep->declBit(c+130,"jalbranch", false,-1);
    tracep->pushNamePrefix("CSRfile_u ");
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBit(c+691,"stallE", false,-1);
    tracep->declBus(c+120,"IRQtype", false,-1, 1,0);
    tracep->declBit(c+121,"IRQret", false,-1);
    tracep->declQuad(c+122,"retAddr", false,-1, 63,0);
    tracep->declQuad(c+107,"pcW", false,-1, 63,0);
    tracep->declQuad(c+555,"ClintReadAddr", false,-1, 63,0);
    tracep->declQuad(c+557,"ClintWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+645,"ClintReadData", false,-1, 63,0);
    tracep->declQuad(c+559,"ClintWriteData", false,-1, 63,0);
    tracep->declBit(c+561,"ClintReadEnable", false,-1);
    tracep->declBit(c+562,"ClintWriteEnable", false,-1);
    tracep->declBus(c+111,"WriteCSR", false,-1, 11,0);
    tracep->declQuad(c+113,"WriteData", false,-1, 63,0);
    tracep->declBit(c+112,"WriteEnable", false,-1);
    tracep->declBus(c+119,"ReadCSR", false,-1, 11,0);
    tracep->declQuad(c+647,"ReadData", false,-1, 63,0);
    tracep->declBit(c+118,"ReadEnable", false,-1);
    tracep->declQuad(c+124,"irqAddr", false,-1, 63,0);
    tracep->declBit(c+564,"itTime", false,-1);
    tracep->declQuad(c+126,"mepc_o", false,-1, 63,0);
    tracep->declQuad(c+131,"mvendorid", false,-1, 63,0);
    tracep->declQuad(c+698,"marchid", false,-1, 63,0);
    tracep->declQuad(c+700,"mimpid", false,-1, 63,0);
    tracep->declQuad(c+702,"mhartid", false,-1, 63,0);
    tracep->declQuad(c+133,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+704,"misa", false,-1, 63,0);
    tracep->declQuad(c+706,"medeleg", false,-1, 63,0);
    tracep->declQuad(c+708,"mideleg", false,-1, 63,0);
    tracep->declQuad(c+135,"mie", false,-1, 63,0);
    tracep->declQuad(c+137,"mip", false,-1, 63,0);
    tracep->declQuad(c+124,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+710,"mcounteren", false,-1, 63,0);
    tracep->declQuad(c+139,"mcause", false,-1, 63,0);
    tracep->declQuad(c+126,"mepc", false,-1, 63,0);
    tracep->declQuad(c+141,"mscratch", false,-1, 63,0);
    tracep->declQuad(c+143,"mcycle", false,-1, 63,0);
    tracep->declQuad(c+145,"minstret", false,-1, 63,0);
    tracep->declQuad(c+147,"sstatus", false,-1, 63,0);
    tracep->declQuad(c+649,"ReadData_r", false,-1, 63,0);
    tracep->declQuad(c+149,"mstatus_t", false,-1, 63,0);
    tracep->declQuad(c+511,"mstatus_r", false,-1, 63,0);
    tracep->declQuad(c+151,"sstatus_t", false,-1, 63,0);
    tracep->declQuad(c+568,"sstatus_r", false,-1, 63,0);
    tracep->declQuad(c+153,"mtvec_t", false,-1, 63,0);
    tracep->declQuad(c+155,"mtvec_r", false,-1, 63,0);
    tracep->declQuad(c+157,"mie_t", false,-1, 63,0);
    tracep->declQuad(c+570,"mie_r", false,-1, 63,0);
    tracep->declQuad(c+159,"mip_t", false,-1, 63,0);
    tracep->declQuad(c+676,"mip_r", false,-1, 63,0);
    tracep->declQuad(c+161,"mepc_t", false,-1, 63,0);
    tracep->declQuad(c+163,"mepc_r", false,-1, 63,0);
    tracep->declQuad(c+165,"mscratch_t", false,-1, 63,0);
    tracep->declQuad(c+572,"mscratch_r", false,-1, 63,0);
    tracep->declQuad(c+167,"mcause_t", false,-1, 63,0);
    tracep->declQuad(c+169,"mcause_r", false,-1, 63,0);
    tracep->declQuad(c+171,"mtime", false,-1, 63,0);
    tracep->declBus(c+173,"timediv", false,-1, 2,0);
    tracep->declQuad(c+174,"mtimecmp", false,-1, 63,0);
    tracep->declQuad(c+171,"mtime_r", false,-1, 63,0);
    tracep->declQuad(c+174,"mtimecmp_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Ctrl ");
    tracep->declBit(c+130,"jalbranch", false,-1);
    tracep->declQuad(c+53,"jumpAddr", false,-1, 63,0);
    tracep->declBit(c+115,"LoadStoreE", false,-1);
    tracep->declBit(c+563,"LoadStoreM", false,-1);
    tracep->declBit(c+129,"mecall", false,-1);
    tracep->declBit(c+128,"mret", false,-1);
    tracep->declBit(c+564,"itTime", false,-1);
    tracep->declBit(c+691,"CoreLock", false,-1);
    tracep->declQuad(c+124,"irqAddr", false,-1, 63,0);
    tracep->declQuad(c+126,"mepc_o", false,-1, 63,0);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declQuad(c+524,"pcF", false,-1, 63,0);
    tracep->declQuad(c+72,"pcD", false,-1, 63,0);
    tracep->declQuad(c+75,"pcE", false,-1, 63,0);
    tracep->declQuad(c+100,"pcM", false,-1, 63,0);
    tracep->declQuad(c+107,"pcW", false,-1, 63,0);
    tracep->declBus(c+109,"instW", false,-1, 31,0);
    tracep->declQuad(c+92,"BusWriteAddrM", false,-1, 63,0);
    tracep->declQuad(c+545,"BusReadAddr", false,-1, 63,0);
    tracep->declBit(c+553,"BusReadEnable", false,-1);
    tracep->declBit(c+98,"BusWriteEnableM", false,-1);
    tracep->declBus(c+60,"rdWriteAddrE", false,-1, 4,0);
    tracep->declBus(c+64,"rdWriteAddrM", false,-1, 4,0);
    tracep->declBit(c+55,"rs1ReadEnable", false,-1);
    tracep->declBit(c+56,"rs2ReadEnable", false,-1);
    tracep->declBus(c+58,"rs1ReadAddr", false,-1, 4,0);
    tracep->declBus(c+59,"rs2ReadAddr", false,-1, 4,0);
    tracep->declBus(c+116,"Redirect1", false,-1, 1,0);
    tracep->declBus(c+117,"Redirect2", false,-1, 1,0);
    tracep->declBit(c+642,"flushF", false,-1);
    tracep->declBit(c+543,"flushD", false,-1);
    tracep->declBit(c+544,"flushE", false,-1);
    tracep->declBit(c+691,"flushM", false,-1);
    tracep->declBit(c+565,"stallF", false,-1);
    tracep->declBit(c+691,"stallD", false,-1);
    tracep->declBit(c+691,"stallE", false,-1);
    tracep->declBit(c+691,"stallM", false,-1);
    tracep->declBit(c+691,"stallW", false,-1);
    tracep->declBit(c+542,"jump", false,-1);
    tracep->declQuad(c+566,"jAddr", false,-1, 63,0);
    tracep->declQuad(c+122,"mepcWriteDataW", false,-1, 63,0);
    tracep->declBus(c+120,"IRQtypeW", false,-1, 1,0);
    tracep->declBit(c+121,"IRQretW", false,-1);
    tracep->declBus(c+176,"Redirect1_r", false,-1, 1,0);
    tracep->declBus(c+177,"Redirect2_r", false,-1, 1,0);
    tracep->declBus(c+574,"IRQtype_r", false,-1, 1,0);
    tracep->declBit(c+128,"IRQret_r", false,-1);
    tracep->declBit(c+575,"itTime_r", false,-1);
    tracep->declBit(c+178,"itWhit", false,-1);
    tracep->declQuad(c+513,"mepcWriteData_r", false,-1, 63,0);
    tracep->declBus(c+179,"IRQtype", false,-1, 1,0);
    tracep->declBit(c+180,"IRQret", false,-1);
    tracep->declQuad(c+181,"mepcWriteData", false,-1, 63,0);
    tracep->pushNamePrefix("IRQretW_dff ");
    tracep->declBus(c+712,"DW", false,-1, 31,0);
    tracep->declBus(c+180,"din", false,-1, 0,0);
    tracep->declBus(c+121,"qout", false,-1, 0,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+121,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IRQret_dff ");
    tracep->declBus(c+712,"DW", false,-1, 31,0);
    tracep->declBus(c+128,"din", false,-1, 0,0);
    tracep->declBus(c+180,"qout", false,-1, 0,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+180,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IRQtypeW_dff ");
    tracep->declBus(c+714,"DW", false,-1, 31,0);
    tracep->declBus(c+179,"din", false,-1, 1,0);
    tracep->declBus(c+120,"qout", false,-1, 1,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+120,"qout_r", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IRQtype_dff ");
    tracep->declBus(c+714,"DW", false,-1, 31,0);
    tracep->declBus(c+574,"din", false,-1, 1,0);
    tracep->declBus(c+179,"qout", false,-1, 1,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+179,"qout_r", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Redirect1_dff ");
    tracep->declBus(c+714,"DW", false,-1, 31,0);
    tracep->declBus(c+176,"din", false,-1, 1,0);
    tracep->declBus(c+116,"qout", false,-1, 1,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+116,"qout_r", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Redirect2_dff ");
    tracep->declBus(c+714,"DW", false,-1, 31,0);
    tracep->declBus(c+177,"din", false,-1, 1,0);
    tracep->declBus(c+117,"qout", false,-1, 1,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+117,"qout_r", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepcWriteDataW_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+181,"din", false,-1, 63,0);
    tracep->declQuad(c+122,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declQuad(c+122,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepcWriteData_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+513,"din", false,-1, 63,0);
    tracep->declQuad(c+181,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declQuad(c+181,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Exe_stage ");
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declQuad(c+75,"pcE", false,-1, 63,0);
    tracep->declBus(c+89,"instE", false,-1, 31,0);
    tracep->declBit(c+544,"flushE", false,-1);
    tracep->declBit(c+691,"stallE", false,-1);
    tracep->declBus(c+77,"instTypeE", false,-1, 14,0);
    tracep->declBus(c+78,"instFuncE", false,-1, 13,0);
    tracep->declBus(c+79,"csrFuncE", false,-1, 5,0);
    tracep->declQuad(c+80,"csrReadDataE", false,-1, 63,0);
    tracep->declBus(c+82,"csrWriteAddrE", false,-1, 11,0);
    tracep->declQuad(c+87,"imm", false,-1, 63,0);
    tracep->declQuad(c+83,"rs1DataE", false,-1, 63,0);
    tracep->declQuad(c+85,"rs2DataE", false,-1, 63,0);
    tracep->declBit(c+57,"rdWriteEnableE", false,-1);
    tracep->declBus(c+60,"rdWriteAddrE", false,-1, 4,0);
    tracep->declQuad(c+65,"rdWriteDataPre1", false,-1, 63,0);
    tracep->declQuad(c+69,"rdWriteDataPre2", false,-1, 63,0);
    tracep->declBus(c+116,"Redirect1", false,-1, 1,0);
    tracep->declBus(c+117,"Redirect2", false,-1, 1,0);
    tracep->declBus(c+74,"memFuncE", false,-1, 10,0);
    tracep->declBit(c+61,"BusReadEnableE", false,-1);
    tracep->declBit(c+62,"BusWriteEnableE", false,-1);
    tracep->declBus(c+90,"memFuncM", false,-1, 10,0);
    tracep->declQuad(c+92,"BusWriteAddrM", false,-1, 63,0);
    tracep->declQuad(c+94,"BusWriteDataM", false,-1, 63,0);
    tracep->declQuad(c+96,"BusReadAddrM", false,-1, 63,0);
    tracep->declBit(c+99,"BusReadEnableM", false,-1);
    tracep->declBit(c+98,"BusWriteEnableM", false,-1);
    tracep->declBit(c+63,"rdWriteEnableM", false,-1);
    tracep->declBus(c+64,"rdWriteAddrM", false,-1, 4,0);
    tracep->declBus(c+91,"instTypeM", false,-1, 14,0);
    tracep->declQuad(c+65,"rdWriteDataM", false,-1, 63,0);
    tracep->declBus(c+103,"csrWriteAddrM", false,-1, 11,0);
    tracep->declQuad(c+105,"csrWriteDataM", false,-1, 63,0);
    tracep->declBit(c+104,"csrWriteEnableM", false,-1);
    tracep->declBit(c+129,"mecall", false,-1);
    tracep->declBit(c+128,"mret", false,-1);
    tracep->declBit(c+115,"LoadStoreE", false,-1);
    tracep->declBit(c+130,"jalbranch", false,-1);
    tracep->declQuad(c+53,"jumpAddr", false,-1, 63,0);
    tracep->declQuad(c+100,"pcM", false,-1, 63,0);
    tracep->declBus(c+102,"instM", false,-1, 31,0);
    tracep->declQuad(c+183,"rs1Data", false,-1, 63,0);
    tracep->declQuad(c+185,"rs2Data", false,-1, 63,0);
    tracep->declQuad(c+576,"op1", false,-1, 63,0);
    tracep->declQuad(c+578,"op2", false,-1, 63,0);
    tracep->declQuad(c+187,"adder1", false,-1, 63,0);
    tracep->declQuad(c+189,"adder2", false,-1, 63,0);
    tracep->declQuad(c+80,"csrop1", false,-1, 63,0);
    tracep->declQuad(c+191,"csrop2", false,-1, 63,0);
    tracep->declQuad(c+193,"resADD", false,-1, 63,0);
    tracep->declQuad(c+580,"resSUB", false,-1, 63,0);
    tracep->declQuad(c+515,"resSLL", false,-1, 63,0);
    tracep->declQuad(c+582,"resLESU", false,-1, 63,0);
    tracep->declQuad(c+584,"resLES", false,-1, 63,0);
    tracep->declQuad(c+586,"resSRL", false,-1, 63,0);
    tracep->declQuad(c+588,"resSRA", false,-1, 63,0);
    tracep->declBus(c+590,"resSRLW", false,-1, 31,0);
    tracep->declBus(c+591,"resSRAW", false,-1, 31,0);
    tracep->declQuad(c+592,"resXOR", false,-1, 63,0);
    tracep->declQuad(c+594,"resOR", false,-1, 63,0);
    tracep->declQuad(c+596,"resAND", false,-1, 63,0);
    tracep->declQuad(c+598,"resBIGU", false,-1, 63,0);
    tracep->declQuad(c+600,"resBIG", false,-1, 63,0);
    tracep->declQuad(c+602,"resEQ", false,-1, 63,0);
    tracep->declQuad(c+604,"resNEQ", false,-1, 63,0);
    tracep->declQuad(c+191,"resCSRRW", false,-1, 63,0);
    tracep->declQuad(c+195,"resCSRRS", false,-1, 63,0);
    tracep->declQuad(c+197,"resCSRRC", false,-1, 63,0);
    tracep->declQuad(c+199,"csrWriteDataM_r", false,-1, 63,0);
    tracep->declBit(c+201,"csrWriteEnableM_r", false,-1);
    tracep->declQuad(c+606,"result", false,-1, 63,0);
    tracep->declQuad(c+652,"BusWriteAddrM_r", false,-1, 63,0);
    tracep->declQuad(c+654,"BusWriteDataM_r", false,-1, 63,0);
    tracep->declQuad(c+652,"BusReadAddr_r", false,-1, 63,0);
    tracep->declBit(c+656,"BusReadEnable_r", false,-1);
    tracep->declBit(c+517,"resBranch", false,-1);
    tracep->declBit(c+608,"jalbranch_r", false,-1);
    tracep->declQuad(c+518,"jumpAddr_r", false,-1, 63,0);
    tracep->declQuad(c+202,"pcSave", false,-1, 63,0);
    tracep->declBit(c+57,"rdWriteEnableE_r", false,-1);
    tracep->declQuad(c+657,"rdWriteDataM_r", false,-1, 63,0);
    tracep->pushNamePrefix("BusReadAddrM_clk_diff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+652,"din", false,-1, 63,0);
    tracep->declQuad(c+96,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declQuad(c+96,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BusReadEnableM_clk_diff ");
    tracep->declBus(c+712,"DW", false,-1, 31,0);
    tracep->declBus(c+656,"din", false,-1, 0,0);
    tracep->declBus(c+99,"qout", false,-1, 0,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declBus(c+99,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BusWriteAddrM_clk_diff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+652,"din", false,-1, 63,0);
    tracep->declQuad(c+92,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declQuad(c+92,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BusWriteDataM_clk_diff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+654,"din", false,-1, 63,0);
    tracep->declQuad(c+94,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declQuad(c+94,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BusWriteEnableM_clk_diff ");
    tracep->declBus(c+712,"DW", false,-1, 31,0);
    tracep->declBus(c+62,"din", false,-1, 0,0);
    tracep->declBus(c+98,"qout", false,-1, 0,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declBus(c+98,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrWriteAddrM_clk_diff ");
    tracep->declBus(c+716,"DW", false,-1, 31,0);
    tracep->declBus(c+82,"din", false,-1, 11,0);
    tracep->declBus(c+103,"qout", false,-1, 11,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declBus(c+103,"qout_r", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrWriteDataM_clk_diff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+199,"din", false,-1, 63,0);
    tracep->declQuad(c+105,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declQuad(c+105,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrWriteEnableM_clk_diff ");
    tracep->declBus(c+712,"DW", false,-1, 31,0);
    tracep->declBus(c+201,"din", false,-1, 0,0);
    tracep->declBus(c+104,"qout", false,-1, 0,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declBus(c+104,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instM_dff ");
    tracep->declBus(c+717,"DW", false,-1, 31,0);
    tracep->declBus(c+89,"din", false,-1, 31,0);
    tracep->declBus(c+102,"qout", false,-1, 31,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declBus(c+102,"qout_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instTypeM_dff ");
    tracep->declBus(c+718,"DW", false,-1, 31,0);
    tracep->declBus(c+77,"din", false,-1, 14,0);
    tracep->declBus(c+91,"qout", false,-1, 14,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declBus(c+91,"qout_r", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jalbranch_dff ");
    tracep->declBus(c+712,"DW", false,-1, 31,0);
    tracep->declBus(c+608,"din", false,-1, 0,0);
    tracep->declBus(c+130,"qout", false,-1, 0,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declBus(c+130,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jumpAddr_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+518,"din", false,-1, 63,0);
    tracep->declQuad(c+53,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declQuad(c+53,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memFuncM_clk_diff ");
    tracep->declBus(c+719,"DW", false,-1, 31,0);
    tracep->declBus(c+74,"din", false,-1, 10,0);
    tracep->declBus(c+90,"qout", false,-1, 10,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declBus(c+90,"qout_r", false,-1, 10,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcM_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+75,"din", false,-1, 63,0);
    tracep->declQuad(c+100,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declQuad(c+100,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdWriteDataE_clk_diff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+657,"din", false,-1, 63,0);
    tracep->declQuad(c+65,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declQuad(c+65,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_r_clk_diff ");
    tracep->declBus(c+720,"DW", false,-1, 31,0);
    tracep->declBus(c+204,"din", false,-1, 5,0);
    tracep->declBus(c+205,"qout", false,-1, 5,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+659,"rst", false,-1);
    tracep->declBus(c+205,"qout_r", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Id_stage ");
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+543,"flushD", false,-1);
    tracep->declBit(c+691,"stallD", false,-1);
    tracep->declQuad(c+72,"pcD", false,-1, 63,0);
    tracep->declBus(c+71,"instD", false,-1, 31,0);
    tracep->declQuad(c+638,"rs1DataD", false,-1, 63,0);
    tracep->declQuad(c+640,"rs2DataD", false,-1, 63,0);
    tracep->declQuad(c+647,"csrReadData", false,-1, 63,0);
    tracep->declBit(c+55,"rs1ReadEnable", false,-1);
    tracep->declBus(c+58,"rs1ReadAddr", false,-1, 4,0);
    tracep->declBit(c+56,"rs2ReadEnable", false,-1);
    tracep->declBus(c+59,"rs2ReadAddr", false,-1, 4,0);
    tracep->declBit(c+57,"rdWriteEnableE", false,-1);
    tracep->declBus(c+60,"rdWriteAddrE", false,-1, 4,0);
    tracep->declBit(c+61,"BusReadEnableE", false,-1);
    tracep->declBit(c+62,"BusWriteEnableE", false,-1);
    tracep->declBus(c+74,"memFuncE", false,-1, 10,0);
    tracep->declQuad(c+75,"pcE", false,-1, 63,0);
    tracep->declBus(c+89,"instE", false,-1, 31,0);
    tracep->declBus(c+77,"instTypeE", false,-1, 14,0);
    tracep->declBus(c+78,"instFuncE", false,-1, 13,0);
    tracep->declBit(c+118,"csrReadEnable", false,-1);
    tracep->declBus(c+119,"csrReadAddr", false,-1, 11,0);
    tracep->declBus(c+79,"csrFuncE", false,-1, 5,0);
    tracep->declBus(c+82,"csrWriteAddrE", false,-1, 11,0);
    tracep->declQuad(c+80,"csrReadDataE", false,-1, 63,0);
    tracep->declQuad(c+83,"rs1DataE", false,-1, 63,0);
    tracep->declQuad(c+85,"rs2DataE", false,-1, 63,0);
    tracep->declQuad(c+87,"imm", false,-1, 63,0);
    tracep->declBus(c+206,"opcode", false,-1, 6,0);
    tracep->declBus(c+207,"rd", false,-1, 4,0);
    tracep->declBus(c+208,"func3", false,-1, 2,0);
    tracep->declBus(c+209,"func7", false,-1, 6,0);
    tracep->declBus(c+210,"func6", false,-1, 5,0);
    tracep->declBus(c+211,"rs1", false,-1, 4,0);
    tracep->declBus(c+212,"rs2", false,-1, 4,0);
    tracep->declQuad(c+213,"immI", false,-1, 63,0);
    tracep->declQuad(c+215,"immS", false,-1, 63,0);
    tracep->declQuad(c+217,"immB", false,-1, 63,0);
    tracep->declQuad(c+219,"immU", false,-1, 63,0);
    tracep->declQuad(c+221,"immJ", false,-1, 63,0);
    tracep->declQuad(c+223,"immCSR", false,-1, 63,0);
    tracep->declBit(c+225,"func3_000", false,-1);
    tracep->declBit(c+226,"func3_001", false,-1);
    tracep->declBit(c+227,"func3_010", false,-1);
    tracep->declBit(c+228,"func3_011", false,-1);
    tracep->declBit(c+229,"func3_100", false,-1);
    tracep->declBit(c+230,"func3_101", false,-1);
    tracep->declBit(c+231,"func3_110", false,-1);
    tracep->declBit(c+232,"func3_111", false,-1);
    tracep->declBit(c+233,"func7_0", false,-1);
    tracep->declBit(c+234,"func7_20", false,-1);
    tracep->declBit(c+235,"func7_6", false,-1);
    tracep->declBit(c+236,"func6_0", false,-1);
    tracep->declBit(c+237,"func6_10", false,-1);
    tracep->declBit(c+238,"opcode_0000011", false,-1);
    tracep->declBit(c+239,"opcode_0000111", false,-1);
    tracep->declBit(c+240,"opcode_0001011", false,-1);
    tracep->declBit(c+241,"opcode_0001111", false,-1);
    tracep->declBit(c+242,"opcode_0010011", false,-1);
    tracep->declBit(c+243,"opcode_0010111", false,-1);
    tracep->declBit(c+244,"opcode_0011011", false,-1);
    tracep->declBit(c+245,"opcode_0011111", false,-1);
    tracep->declBit(c+246,"opcode_0100011", false,-1);
    tracep->declBit(c+247,"opcode_0100111", false,-1);
    tracep->declBit(c+248,"opcode_0101011", false,-1);
    tracep->declBit(c+249,"opcode_0101111", false,-1);
    tracep->declBit(c+250,"opcode_0110011", false,-1);
    tracep->declBit(c+251,"opcode_0110111", false,-1);
    tracep->declBit(c+252,"opcode_0111011", false,-1);
    tracep->declBit(c+253,"opcode_0111111", false,-1);
    tracep->declBit(c+254,"opcode_1000011", false,-1);
    tracep->declBit(c+255,"opcode_1000111", false,-1);
    tracep->declBit(c+256,"opcode_1001011", false,-1);
    tracep->declBit(c+257,"opcode_1001111", false,-1);
    tracep->declBit(c+258,"opcode_1010011", false,-1);
    tracep->declBit(c+259,"opcode_1010111", false,-1);
    tracep->declBit(c+260,"opcode_1011011", false,-1);
    tracep->declBit(c+261,"opcode_1011111", false,-1);
    tracep->declBit(c+262,"opcode_1100011", false,-1);
    tracep->declBit(c+263,"opcode_1100111", false,-1);
    tracep->declBit(c+264,"opcode_1101011", false,-1);
    tracep->declBit(c+265,"opcode_1101111", false,-1);
    tracep->declBit(c+118,"opcode_1110011", false,-1);
    tracep->declBit(c+266,"Rtype", false,-1);
    tracep->declBit(c+267,"Itype", false,-1);
    tracep->declBit(c+246,"Stype", false,-1);
    tracep->declBit(c+262,"Btype", false,-1);
    tracep->declBit(c+268,"Utype", false,-1);
    tracep->declBit(c+265,"Jtype", false,-1);
    tracep->declBit(c+118,"CSRtype", false,-1);
    tracep->declBit(c+251,"LUI", false,-1);
    tracep->declBit(c+243,"AUIPC", false,-1);
    tracep->declBit(c+269,"csri", false,-1);
    tracep->declBit(c+270,"csr", false,-1);
    tracep->declBit(c+271,"jump", false,-1);
    tracep->declBit(c+262,"branch", false,-1);
    tracep->declBit(c+238,"load", false,-1);
    tracep->declBit(c+246,"store", false,-1);
    tracep->declBit(c+272,"mathImm", false,-1);
    tracep->declBit(c+273,"mathReg", false,-1);
    tracep->declBit(c+274,"type32", false,-1);
    tracep->declBus(c+275,"instTypeE_r", false,-1, 14,0);
    tracep->declBit(c+276,"ADDI", false,-1);
    tracep->declBit(c+277,"SLTI", false,-1);
    tracep->declBit(c+278,"SLTIU", false,-1);
    tracep->declBit(c+279,"XORI", false,-1);
    tracep->declBit(c+280,"ORI", false,-1);
    tracep->declBit(c+281,"ANDI", false,-1);
    tracep->declBit(c+282,"SLLI", false,-1);
    tracep->declBit(c+283,"SRLI", false,-1);
    tracep->declBit(c+284,"SRAI", false,-1);
    tracep->declBit(c+285,"ADDIW", false,-1);
    tracep->declBit(c+286,"SLLIW", false,-1);
    tracep->declBit(c+287,"SRLIW", false,-1);
    tracep->declBit(c+288,"SRAIW", false,-1);
    tracep->declBit(c+289,"JALR", false,-1);
    tracep->declBit(c+290,"ADD", false,-1);
    tracep->declBit(c+291,"SUB", false,-1);
    tracep->declBit(c+292,"SLL", false,-1);
    tracep->declBit(c+293,"SLT", false,-1);
    tracep->declBit(c+294,"SLTU", false,-1);
    tracep->declBit(c+295,"XOR", false,-1);
    tracep->declBit(c+296,"SRL", false,-1);
    tracep->declBit(c+297,"SRA", false,-1);
    tracep->declBit(c+298,"OR", false,-1);
    tracep->declBit(c+299,"AND", false,-1);
    tracep->declBit(c+300,"ADDW", false,-1);
    tracep->declBit(c+301,"SUBW", false,-1);
    tracep->declBit(c+302,"SLLW", false,-1);
    tracep->declBit(c+303,"SRLW", false,-1);
    tracep->declBit(c+304,"SRAW", false,-1);
    tracep->declBit(c+305,"BEQ", false,-1);
    tracep->declBit(c+306,"BNE", false,-1);
    tracep->declBit(c+307,"BLT", false,-1);
    tracep->declBit(c+308,"BLTU", false,-1);
    tracep->declBit(c+309,"BGT", false,-1);
    tracep->declBit(c+310,"BGTU", false,-1);
    tracep->declBit(c+265,"JAL", false,-1);
    tracep->declBit(c+311,"LB", false,-1);
    tracep->declBit(c+312,"LBU", false,-1);
    tracep->declBit(c+313,"LH", false,-1);
    tracep->declBit(c+314,"LHU", false,-1);
    tracep->declBit(c+315,"LW", false,-1);
    tracep->declBit(c+316,"LWU", false,-1);
    tracep->declBit(c+317,"LD", false,-1);
    tracep->declBit(c+318,"SB", false,-1);
    tracep->declBit(c+319,"SH", false,-1);
    tracep->declBit(c+320,"SW", false,-1);
    tracep->declBit(c+321,"SD", false,-1);
    tracep->declBus(c+322,"memFuncE_r", false,-1, 10,0);
    tracep->declBus(c+323,"instFuncE_r", false,-1, 13,0);
    tracep->declBit(c+324,"FENCE", false,-1);
    tracep->declBit(c+325,"FENCEI", false,-1);
    tracep->declBus(c+326,"fenceFuncD", false,-1, 1,0);
    tracep->declBit(c+327,"CSRRW", false,-1);
    tracep->declBit(c+328,"CSRRS", false,-1);
    tracep->declBit(c+329,"CSRRC", false,-1);
    tracep->declBit(c+330,"CSRRWI", false,-1);
    tracep->declBit(c+331,"CSRRSI", false,-1);
    tracep->declBit(c+332,"CSRRCI", false,-1);
    tracep->declBus(c+333,"csrFuncE_r", false,-1, 5,0);
    tracep->declBit(c+334,"EBREAK", false,-1);
    tracep->declBit(c+335,"ECALL", false,-1);
    tracep->declBit(c+336,"MRET", false,-1);
    tracep->declBit(c+238,"BusReadEnableE_r", false,-1);
    tracep->declBit(c+246,"BusWriteEnableE_r", false,-1);
    tracep->declBit(c+337,"rdWriteEnableE_r", false,-1);
    tracep->declBus(c+338,"rdWriteAddrE_r", false,-1, 4,0);
    tracep->declQuad(c+339,"imm_r", false,-1, 63,0);
    tracep->pushNamePrefix("BusReadEnableE_dff ");
    tracep->declBus(c+712,"DW", false,-1, 31,0);
    tracep->declBus(c+238,"din", false,-1, 0,0);
    tracep->declBus(c+61,"qout", false,-1, 0,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+61,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BusWriteEnableE_dff ");
    tracep->declBus(c+712,"DW", false,-1, 31,0);
    tracep->declBus(c+246,"din", false,-1, 0,0);
    tracep->declBus(c+62,"qout", false,-1, 0,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+62,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrFuncE_dff ");
    tracep->declBus(c+720,"DW", false,-1, 31,0);
    tracep->declBus(c+333,"din", false,-1, 5,0);
    tracep->declBus(c+79,"qout", false,-1, 5,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+79,"qout_r", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrReadDataE_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+647,"din", false,-1, 63,0);
    tracep->declQuad(c+80,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declQuad(c+80,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrWriteAddrE_dff ");
    tracep->declBus(c+716,"DW", false,-1, 31,0);
    tracep->declBus(c+119,"din", false,-1, 11,0);
    tracep->declBus(c+82,"qout", false,-1, 11,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+82,"qout_r", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+339,"din", false,-1, 63,0);
    tracep->declQuad(c+87,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declQuad(c+87,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instE_dff ");
    tracep->declBus(c+717,"DW", false,-1, 31,0);
    tracep->declBus(c+71,"din", false,-1, 31,0);
    tracep->declBus(c+89,"qout", false,-1, 31,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+89,"qout_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instFuncE_dff ");
    tracep->declBus(c+721,"DW", false,-1, 31,0);
    tracep->declBus(c+323,"din", false,-1, 13,0);
    tracep->declBus(c+78,"qout", false,-1, 13,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+78,"qout_r", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instTypeE_dff ");
    tracep->declBus(c+718,"DW", false,-1, 31,0);
    tracep->declBus(c+275,"din", false,-1, 14,0);
    tracep->declBus(c+77,"qout", false,-1, 14,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+77,"qout_r", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memFuncE_dff ");
    tracep->declBus(c+719,"DW", false,-1, 31,0);
    tracep->declBus(c+322,"din", false,-1, 10,0);
    tracep->declBus(c+74,"qout", false,-1, 10,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+74,"qout_r", false,-1, 10,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcE_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+72,"din", false,-1, 63,0);
    tracep->declQuad(c+75,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declQuad(c+75,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd_dff ");
    tracep->declBus(c+720,"DW", false,-1, 31,0);
    tracep->declBus(c+341,"din", false,-1, 5,0);
    tracep->declBus(c+204,"qout", false,-1, 5,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declBus(c+204,"qout_r", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs1DataE_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+638,"din", false,-1, 63,0);
    tracep->declQuad(c+83,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declQuad(c+83,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2DataE_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+640,"din", false,-1, 63,0);
    tracep->declQuad(c+85,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+651,"rst", false,-1);
    tracep->declQuad(c+85,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("If_stage ");
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBit(c+542,"jump", false,-1);
    tracep->declBit(c+565,"stallF", false,-1);
    tracep->declBit(c+642,"flushF", false,-1);
    tracep->declQuad(c+566,"jAddr", false,-1, 63,0);
    tracep->declBus(c+523,"instF", false,-1, 31,0);
    tracep->declQuad(c+524,"pcF", false,-1, 63,0);
    tracep->declQuad(c+72,"pcD", false,-1, 63,0);
    tracep->declBit(c+637,"pcEnable", false,-1);
    tracep->declBus(c+71,"instD", false,-1, 31,0);
    tracep->declBit(c+722,"pcEnableF_r", false,-1);
    tracep->declQuad(c+342,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("instD_dff ");
    tracep->declBus(c+717,"DW", false,-1, 31,0);
    tracep->declBus(c+523,"din", false,-1, 31,0);
    tracep->declBus(c+71,"qout", false,-1, 31,0);
    tracep->declBit(c+609,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+71,"qout_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcD_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+524,"din", false,-1, 63,0);
    tracep->declQuad(c+72,"qout", false,-1, 63,0);
    tracep->declBit(c+609,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declQuad(c+72,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Mem_stage ");
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+691,"stallM", false,-1);
    tracep->declBit(c+691,"flushM", false,-1);
    tracep->declQuad(c+100,"pcM", false,-1, 63,0);
    tracep->declBus(c+102,"instM", false,-1, 31,0);
    tracep->declBus(c+90,"memFuncM", false,-1, 10,0);
    tracep->declBus(c+91,"instTypeM", false,-1, 14,0);
    tracep->declQuad(c+92,"BusWriteAddrM", false,-1, 63,0);
    tracep->declQuad(c+94,"BusWriteDataM", false,-1, 63,0);
    tracep->declBit(c+98,"BusWriteEnableM", false,-1);
    tracep->declQuad(c+96,"BusReadAddrM", false,-1, 63,0);
    tracep->declBit(c+99,"BusReadEnableM", false,-1);
    tracep->declQuad(c+549,"BusReadDataM", false,-1, 63,0);
    tracep->declBus(c+103,"csrWriteAddrM", false,-1, 11,0);
    tracep->declQuad(c+105,"csrWriteDataM", false,-1, 63,0);
    tracep->declBit(c+104,"csrWriteEnableM", false,-1);
    tracep->declBit(c+563,"LoadStoreM", false,-1);
    tracep->declQuad(c+547,"BusWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+551,"BusWriteData", false,-1, 63,0);
    tracep->declBit(c+554,"BusWriteEnable", false,-1);
    tracep->declQuad(c+643,"BusWriteMask", false,-1, 63,0);
    tracep->declQuad(c+545,"BusReadAddr", false,-1, 63,0);
    tracep->declBit(c+553,"BusReadEnable", false,-1);
    tracep->declBit(c+63,"rdWriteEnableM", false,-1);
    tracep->declBus(c+64,"rdWriteAddrM", false,-1, 4,0);
    tracep->declQuad(c+65,"rdWriteDataM", false,-1, 63,0);
    tracep->declBit(c+67,"rdWriteEnableW", false,-1);
    tracep->declBus(c+68,"rdWriteAddrW", false,-1, 4,0);
    tracep->declQuad(c+69,"rdWriteDataW", false,-1, 63,0);
    tracep->declBus(c+111,"csrWriteAddrW", false,-1, 11,0);
    tracep->declQuad(c+113,"csrWriteDataW", false,-1, 63,0);
    tracep->declBit(c+112,"csrWriteEnableW", false,-1);
    tracep->declBus(c+110,"instTypeW", false,-1, 14,0);
    tracep->declQuad(c+107,"pcW", false,-1, 63,0);
    tracep->declBus(c+109,"instW", false,-1, 31,0);
    tracep->declBus(c+344,"ReadShamt", false,-1, 5,0);
    tracep->declQuad(c+610,"loadRes8", false,-1, 63,0);
    tracep->declQuad(c+612,"loadRes16", false,-1, 63,0);
    tracep->declQuad(c+614,"loadRes32", false,-1, 63,0);
    tracep->declQuad(c+549,"loadRes64", false,-1, 63,0);
    tracep->declBus(c+345,"WriteShamt", false,-1, 5,0);
    tracep->declQuad(c+346,"storeRes8", false,-1, 63,0);
    tracep->declQuad(c+348,"BusWriteMask8", false,-1, 63,0);
    tracep->declQuad(c+346,"storeRes16", false,-1, 63,0);
    tracep->declQuad(c+350,"BusWriteMask16", false,-1, 63,0);
    tracep->declQuad(c+346,"storeRes32", false,-1, 63,0);
    tracep->declQuad(c+352,"BusWriteMask32", false,-1, 63,0);
    tracep->declQuad(c+94,"storeRes64", false,-1, 63,0);
    tracep->declQuad(c+723,"BusWriteMask64", false,-1, 63,0);
    tracep->declQuad(c+354,"BusWriteMask_r", false,-1, 63,0);
    tracep->declQuad(c+356,"storeRes", false,-1, 63,0);
    tracep->declQuad(c+660,"rd8", false,-1, 63,0);
    tracep->declQuad(c+662,"rd8u", false,-1, 63,0);
    tracep->declQuad(c+664,"rd16", false,-1, 63,0);
    tracep->declQuad(c+666,"rd16u", false,-1, 63,0);
    tracep->declQuad(c+668,"rd32", false,-1, 63,0);
    tracep->declQuad(c+670,"rd32u", false,-1, 63,0);
    tracep->declQuad(c+672,"rd64", false,-1, 63,0);
    tracep->declQuad(c+616,"rdWriteDataM_r", false,-1, 63,0);
    tracep->pushNamePrefix("csrWriteAddrW_clk_diff ");
    tracep->declBus(c+716,"DW", false,-1, 31,0);
    tracep->declBus(c+103,"din", false,-1, 11,0);
    tracep->declBus(c+111,"qout", false,-1, 11,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+111,"qout_r", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrWriteDataW_clk_diff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+105,"din", false,-1, 63,0);
    tracep->declQuad(c+113,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declQuad(c+113,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrWriteEnableW_clk_diff ");
    tracep->declBus(c+712,"DW", false,-1, 31,0);
    tracep->declBus(c+104,"din", false,-1, 0,0);
    tracep->declBus(c+112,"qout", false,-1, 0,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+112,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instTypeW_dff ");
    tracep->declBus(c+718,"DW", false,-1, 31,0);
    tracep->declBus(c+91,"din", false,-1, 14,0);
    tracep->declBus(c+110,"qout", false,-1, 14,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+110,"qout_r", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instW_dff ");
    tracep->declBus(c+717,"DW", false,-1, 31,0);
    tracep->declBus(c+102,"din", false,-1, 31,0);
    tracep->declBus(c+109,"qout", false,-1, 31,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+109,"qout_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcW_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+100,"din", false,-1, 63,0);
    tracep->declQuad(c+107,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declQuad(c+107,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdWriteAddrW_clk_diff ");
    tracep->declBus(c+725,"DW", false,-1, 31,0);
    tracep->declBus(c+64,"din", false,-1, 4,0);
    tracep->declBus(c+68,"qout", false,-1, 4,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+68,"qout_r", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdWriteDataW_clk_diff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+616,"din", false,-1, 63,0);
    tracep->declQuad(c+69,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declQuad(c+69,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rdWriteEnableW_clk_diff ");
    tracep->declBus(c+712,"DW", false,-1, 31,0);
    tracep->declBus(c+63,"din", false,-1, 0,0);
    tracep->declBus(c+67,"qout", false,-1, 0,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+67,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBit(c+691,"stallW", false,-1);
    tracep->declBus(c+68,"WriteAddr", false,-1, 4,0);
    tracep->declQuad(c+69,"WriteData", false,-1, 63,0);
    tracep->declBit(c+67,"WriteEnable", false,-1);
    tracep->declBus(c+58,"ReadAddr1", false,-1, 4,0);
    tracep->declQuad(c+638,"ReadData1", false,-1, 63,0);
    tracep->declBit(c+55,"ReadEnable1", false,-1);
    tracep->declBus(c+59,"ReadAddr2", false,-1, 4,0);
    tracep->declQuad(c+640,"ReadData2", false,-1, 63,0);
    tracep->declBit(c+56,"ReadEnable2", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+358+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Wb_stage ");
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBit(c+691,"stallW", false,-1);
    tracep->declBus(c+110,"instTypeW", false,-1, 14,0);
    tracep->declBus(c+109,"instW", false,-1, 31,0);
    tracep->declQuad(c+422,"reg_a0", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("U_DifftestArchEvent ");
    tracep->declBit(c+623,"clock", false,-1);
    tracep->declBus(c+675,"coreid", false,-1, 7,0);
    tracep->declBus(c+424,"intrNO", false,-1, 31,0);
    tracep->declBus(c+726,"cause", false,-1, 31,0);
    tracep->declQuad(c+425,"exceptionPC", false,-1, 63,0);
    tracep->declBus(c+427,"exceptionInst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("U_DifftestArchIntRegState ");
    tracep->declBit(c+623,"clock", false,-1);
    tracep->declBus(c+675,"coreid", false,-1, 7,0);
    tracep->declQuad(c+428,"gpr_0", false,-1, 63,0);
    tracep->declQuad(c+430,"gpr_1", false,-1, 63,0);
    tracep->declQuad(c+432,"gpr_2", false,-1, 63,0);
    tracep->declQuad(c+434,"gpr_3", false,-1, 63,0);
    tracep->declQuad(c+436,"gpr_4", false,-1, 63,0);
    tracep->declQuad(c+438,"gpr_5", false,-1, 63,0);
    tracep->declQuad(c+440,"gpr_6", false,-1, 63,0);
    tracep->declQuad(c+442,"gpr_7", false,-1, 63,0);
    tracep->declQuad(c+444,"gpr_8", false,-1, 63,0);
    tracep->declQuad(c+446,"gpr_9", false,-1, 63,0);
    tracep->declQuad(c+422,"gpr_10", false,-1, 63,0);
    tracep->declQuad(c+448,"gpr_11", false,-1, 63,0);
    tracep->declQuad(c+450,"gpr_12", false,-1, 63,0);
    tracep->declQuad(c+452,"gpr_13", false,-1, 63,0);
    tracep->declQuad(c+454,"gpr_14", false,-1, 63,0);
    tracep->declQuad(c+456,"gpr_15", false,-1, 63,0);
    tracep->declQuad(c+458,"gpr_16", false,-1, 63,0);
    tracep->declQuad(c+460,"gpr_17", false,-1, 63,0);
    tracep->declQuad(c+462,"gpr_18", false,-1, 63,0);
    tracep->declQuad(c+464,"gpr_19", false,-1, 63,0);
    tracep->declQuad(c+466,"gpr_20", false,-1, 63,0);
    tracep->declQuad(c+468,"gpr_21", false,-1, 63,0);
    tracep->declQuad(c+470,"gpr_22", false,-1, 63,0);
    tracep->declQuad(c+472,"gpr_23", false,-1, 63,0);
    tracep->declQuad(c+474,"gpr_24", false,-1, 63,0);
    tracep->declQuad(c+476,"gpr_25", false,-1, 63,0);
    tracep->declQuad(c+478,"gpr_26", false,-1, 63,0);
    tracep->declQuad(c+480,"gpr_27", false,-1, 63,0);
    tracep->declQuad(c+482,"gpr_28", false,-1, 63,0);
    tracep->declQuad(c+484,"gpr_29", false,-1, 63,0);
    tracep->declQuad(c+486,"gpr_30", false,-1, 63,0);
    tracep->declQuad(c+488,"gpr_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("U_DifftestTrapEvent ");
    tracep->declBit(c+623,"clock", false,-1);
    tracep->declBus(c+675,"coreid", false,-1, 7,0);
    tracep->declBit(c+9,"valid", false,-1);
    tracep->declBus(c+490,"code", false,-1, 2,0);
    tracep->declQuad(c+1,"pc", false,-1, 63,0);
    tracep->declQuad(c+11,"cycleCnt", false,-1, 63,0);
    tracep->declQuad(c+13,"instrCnt", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("U_inst_commit ");
    tracep->declBit(c+623,"clock", false,-1);
    tracep->declBus(c+675,"coreid", false,-1, 7,0);
    tracep->declBus(c+675,"index", false,-1, 7,0);
    tracep->declBit(c+4,"valid", false,-1);
    tracep->declQuad(c+1,"pc", false,-1, 63,0);
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->declBit(c+15,"skip", false,-1);
    tracep->declBit(c+691,"isRVC", false,-1);
    tracep->declBit(c+691,"scFailed", false,-1);
    tracep->declBit(c+5,"wen", false,-1);
    tracep->declBus(c+6,"wdest", false,-1, 7,0);
    tracep->declQuad(c+7,"wdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("intrNO1_dff ");
    tracep->declBus(c+717,"DW", false,-1, 31,0);
    tracep->declBus(c+618,"din", false,-1, 31,0);
    tracep->declBus(c+491,"qout", false,-1, 31,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+491,"qout_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("intrNO2_dff ");
    tracep->declBus(c+717,"DW", false,-1, 31,0);
    tracep->declBus(c+492,"din", false,-1, 31,0);
    tracep->declBus(c+493,"qout", false,-1, 31,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+493,"qout_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("intrNO3_dff ");
    tracep->declBus(c+717,"DW", false,-1, 31,0);
    tracep->declBus(c+494,"din", false,-1, 31,0);
    tracep->declBus(c+495,"qout", false,-1, 31,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+495,"qout_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("it_instr1_dff ");
    tracep->declBus(c+717,"DW", false,-1, 31,0);
    tracep->declBus(c+520,"din", false,-1, 31,0);
    tracep->declBus(c+496,"qout", false,-1, 31,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+496,"qout_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("it_instr2_dff ");
    tracep->declBus(c+717,"DW", false,-1, 31,0);
    tracep->declBus(c+497,"din", false,-1, 31,0);
    tracep->declBus(c+498,"qout", false,-1, 31,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+498,"qout_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("it_instr3_dff ");
    tracep->declBus(c+717,"DW", false,-1, 31,0);
    tracep->declBus(c+499,"din", false,-1, 31,0);
    tracep->declBus(c+500,"qout", false,-1, 31,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declBus(c+500,"qout_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("it_pc1_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+521,"din", false,-1, 63,0);
    tracep->declQuad(c+501,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declQuad(c+501,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("it_pc2_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+503,"din", false,-1, 63,0);
    tracep->declQuad(c+505,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declQuad(c+505,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("it_pc3_dff ");
    tracep->declBus(c+715,"DW", false,-1, 31,0);
    tracep->declQuad(c+507,"din", false,-1, 63,0);
    tracep->declQuad(c+509,"qout", false,-1, 63,0);
    tracep->declBit(c+713,"en", false,-1);
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+624,"rst", false,-1);
    tracep->declQuad(c+509,"qout_r", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_RAMHelper ");
    tracep->declBit(c+623,"clk", false,-1);
    tracep->declBit(c+674,"ren", false,-1);
    tracep->declQuad(c+540,"rIdx", false,-1, 63,0);
    tracep->declQuad(c+538,"rdata", false,-1, 63,0);
    tracep->declQuad(c+532,"wIdx", false,-1, 63,0);
    tracep->declQuad(c+534,"wdata", false,-1, 63,0);
    tracep->declQuad(c+536,"wmask", false,-1, 63,0);
    tracep->declBit(c+527,"wen", false,-1);
    tracep->declQuad(c+619,"wIdx_r", false,-1, 63,0);
    tracep->declQuad(c+621,"rIdx_r", false,-1, 63,0);
    tracep->popNamePrefix(2);
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
    tracep->fullQData(oldp+1,(vlSelf->SimTop__DOT__r_pc),64);
    tracep->fullIData(oldp+3,(vlSelf->SimTop__DOT__r_instr),32);
    tracep->fullBit(oldp+4,(vlSelf->SimTop__DOT__r_valid));
    tracep->fullBit(oldp+5,(vlSelf->SimTop__DOT__r_wen));
    tracep->fullCData(oldp+6,(vlSelf->SimTop__DOT__r_wdest),8);
    tracep->fullQData(oldp+7,(vlSelf->SimTop__DOT__r_wdata),64);
    tracep->fullBit(oldp+9,(vlSelf->SimTop__DOT__trap));
    tracep->fullCData(oldp+10,(vlSelf->SimTop__DOT__trap_code),8);
    tracep->fullQData(oldp+11,(vlSelf->SimTop__DOT__cycleCnt),64);
    tracep->fullQData(oldp+13,(vlSelf->SimTop__DOT__instrCnt),64);
    tracep->fullBit(oldp+15,(vlSelf->SimTop__DOT__skip));
    tracep->fullQData(oldp+16,(vlSelf->SimTop__DOT__BusReadAddrW),64);
    tracep->fullQData(oldp+18,(vlSelf->SimTop__DOT__BusWriteAddrW),64);
    tracep->fullBit(oldp+20,(vlSelf->SimTop__DOT__inst_vaild));
    tracep->fullQData(oldp+21,(vlSelf->SimTop__DOT__mstatus),64);
    tracep->fullQData(oldp+23,(vlSelf->SimTop__DOT__sstatus),64);
    tracep->fullQData(oldp+25,(vlSelf->SimTop__DOT__mepc),64);
    tracep->fullQData(oldp+27,(vlSelf->SimTop__DOT__mtvec),64);
    tracep->fullQData(oldp+29,(vlSelf->SimTop__DOT__mcause),64);
    tracep->fullQData(oldp+31,(vlSelf->SimTop__DOT__mip),64);
    tracep->fullQData(oldp+33,(vlSelf->SimTop__DOT__mie),64);
    tracep->fullQData(oldp+35,(vlSelf->SimTop__DOT__mscratch),64);
    tracep->fullQData(oldp+37,(vlSelf->SimTop__DOT__it_pc[0]),64);
    tracep->fullQData(oldp+39,(vlSelf->SimTop__DOT__it_pc[1]),64);
    tracep->fullQData(oldp+41,(vlSelf->SimTop__DOT__it_pc[2]),64);
    tracep->fullQData(oldp+43,(vlSelf->SimTop__DOT__it_pc[3]),64);
    tracep->fullIData(oldp+45,(vlSelf->SimTop__DOT__it_instr[0]),32);
    tracep->fullIData(oldp+46,(vlSelf->SimTop__DOT__it_instr[1]),32);
    tracep->fullIData(oldp+47,(vlSelf->SimTop__DOT__it_instr[2]),32);
    tracep->fullIData(oldp+48,(vlSelf->SimTop__DOT__it_instr[3]),32);
    tracep->fullIData(oldp+49,(vlSelf->SimTop__DOT__intrNO[0]),32);
    tracep->fullIData(oldp+50,(vlSelf->SimTop__DOT__intrNO[1]),32);
    tracep->fullIData(oldp+51,(vlSelf->SimTop__DOT__intrNO[2]),32);
    tracep->fullIData(oldp+52,(vlSelf->SimTop__DOT__intrNO[3]),32);
    tracep->fullQData(oldp+53,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jumpAddr_dff__DOT__qout_r),64);
    tracep->fullBit(oldp+55,(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadEnable));
    tracep->fullBit(oldp+56,(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadEnable));
    tracep->fullBit(oldp+57,((1U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r) 
                                    >> 5U))));
    tracep->fullCData(oldp+58,(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr),5);
    tracep->fullCData(oldp+59,(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr),5);
    tracep->fullCData(oldp+60,((0x1fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r))),5);
    tracep->fullBit(oldp+61,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusReadEnableE_dff__DOT__qout_r));
    tracep->fullBit(oldp+62,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusWriteEnableE_dff__DOT__qout_r));
    tracep->fullBit(oldp+63,((1U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r) 
                                    >> 5U))));
    tracep->fullCData(oldp+64,((0x1fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r))),5);
    tracep->fullQData(oldp+65,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r),64);
    tracep->fullBit(oldp+67,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r));
    tracep->fullCData(oldp+68,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r),5);
    tracep->fullQData(oldp+69,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r),64);
    tracep->fullIData(oldp+71,(vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r),32);
    tracep->fullQData(oldp+72,(vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r),64);
    tracep->fullSData(oldp+74,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r),11);
    tracep->fullQData(oldp+75,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r),64);
    tracep->fullSData(oldp+77,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r),15);
    tracep->fullSData(oldp+78,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r),14);
    tracep->fullCData(oldp+79,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r),6);
    tracep->fullQData(oldp+80,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r),64);
    tracep->fullSData(oldp+82,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrWriteAddrE_dff__DOT__qout_r),12);
    tracep->fullQData(oldp+83,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r),64);
    tracep->fullQData(oldp+85,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r),64);
    tracep->fullQData(oldp+87,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r),64);
    tracep->fullIData(oldp+89,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instE_dff__DOT__qout_r),32);
    tracep->fullSData(oldp+90,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r),11);
    tracep->fullSData(oldp+91,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__instTypeM_dff__DOT__qout_r),15);
    tracep->fullQData(oldp+92,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r),64);
    tracep->fullQData(oldp+94,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r),64);
    tracep->fullQData(oldp+96,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadAddrM_clk_diff__DOT__qout_r),64);
    tracep->fullBit(oldp+98,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteEnableM_clk_diff__DOT__qout_r));
    tracep->fullBit(oldp+99,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadEnableM_clk_diff__DOT__qout_r));
    tracep->fullQData(oldp+100,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r),64);
    tracep->fullIData(oldp+102,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__instM_dff__DOT__qout_r),32);
    tracep->fullSData(oldp+103,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteAddrM_clk_diff__DOT__qout_r),12);
    tracep->fullBit(oldp+104,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteEnableM_clk_diff__DOT__qout_r));
    tracep->fullQData(oldp+105,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteDataM_clk_diff__DOT__qout_r),64);
    tracep->fullQData(oldp+107,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__pcW_dff__DOT__qout_r),64);
    tracep->fullIData(oldp+109,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r),32);
    tracep->fullSData(oldp+110,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instTypeW_dff__DOT__qout_r),15);
    tracep->fullSData(oldp+111,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r),12);
    tracep->fullBit(oldp+112,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r));
    tracep->fullQData(oldp+113,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r),64);
    tracep->fullBit(oldp+115,(vlSelf->SimTop__DOT__Rvcpu__DOT__LoadStoreE));
    tracep->fullCData(oldp+116,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r),2);
    tracep->fullCData(oldp+117,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r),2);
    tracep->fullBit(oldp+118,((0x73U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullSData(oldp+119,((vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                 >> 0x14U)),12);
    tracep->fullCData(oldp+120,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r),2);
    tracep->fullBit(oldp+121,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQretW_dff__DOT__qout_r));
    tracep->fullQData(oldp+122,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteDataW_dff__DOT__qout_r),64);
    tracep->fullQData(oldp+124,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec),64);
    tracep->fullQData(oldp+126,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc),64);
    tracep->fullBit(oldp+128,((1U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                     >> 0xeU))));
    tracep->fullBit(oldp+129,((1U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                     >> 0xcU))));
    tracep->fullBit(oldp+130,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r));
    tracep->fullQData(oldp+131,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mvendorid),64);
    tracep->fullQData(oldp+133,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus),64);
    tracep->fullQData(oldp+135,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie),64);
    tracep->fullQData(oldp+137,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mip),64);
    tracep->fullQData(oldp+139,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause),64);
    tracep->fullQData(oldp+141,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch),64);
    tracep->fullQData(oldp+143,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle),64);
    tracep->fullQData(oldp+145,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret),64);
    tracep->fullQData(oldp+147,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus),64);
    tracep->fullQData(oldp+149,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t),64);
    tracep->fullQData(oldp+151,((((0x100U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                  : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus)),64);
    tracep->fullQData(oldp+153,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec_t),64);
    tracep->fullQData(oldp+155,((0xfffffffffffffffcULL 
                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec_t)),64);
    tracep->fullQData(oldp+157,((((0x304U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                  : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie)),64);
    tracep->fullQData(oldp+159,((((0x344U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                  : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mip)),64);
    tracep->fullQData(oldp+161,((((0x341U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                  : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc)),64);
    tracep->fullQData(oldp+163,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc_r),64);
    tracep->fullQData(oldp+165,((((0x340U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                  : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch)),64);
    tracep->fullQData(oldp+167,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_t),64);
    tracep->fullQData(oldp+169,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_r),64);
    tracep->fullQData(oldp+171,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime),64);
    tracep->fullCData(oldp+173,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv),3);
    tracep->fullQData(oldp+174,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp),64);
    tracep->fullCData(oldp+176,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_r),2);
    tracep->fullCData(oldp+177,((((~ (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_r)) 
                                  & (((0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr)))) 
                                 & (((((0x1fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                       == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr)) 
                                      & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadEnable)) 
                                     << 1U) | (((0x1fU 
                                                 & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                                == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr)) 
                                               & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadEnable))))),2);
    tracep->fullBit(oldp+178,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itWhit));
    tracep->fullCData(oldp+179,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_dff__DOT__qout_r),2);
    tracep->fullBit(oldp+180,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQret_dff__DOT__qout_r));
    tracep->fullQData(oldp+181,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteData_dff__DOT__qout_r),64);
    tracep->fullQData(oldp+183,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs1Data),64);
    tracep->fullQData(oldp+185,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs2Data),64);
    tracep->fullQData(oldp+187,(((IData)((0U != (0x1a0U 
                                                 & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                                  : vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs1Data)),64);
    tracep->fullQData(oldp+189,(((2U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs2Data
                                  : vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r)),64);
    tracep->fullQData(oldp+191,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2),64);
    tracep->fullQData(oldp+193,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD),64);
    tracep->fullQData(oldp+195,((vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r 
                                 | vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2)),64);
    tracep->fullQData(oldp+197,((vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r 
                                 & (~ vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2))),64);
    tracep->fullQData(oldp+199,(((IData)((0U != (0x24U 
                                                 & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r))))
                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2
                                  : ((IData)((0U != 
                                              (0x12U 
                                               & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r))))
                                      ? (vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r 
                                         | vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2)
                                      : ((IData)((0U 
                                                  != 
                                                  (9U 
                                                   & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r))))
                                          ? (vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r 
                                             & (~ vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2))
                                          : 0ULL)))),64);
    tracep->fullBit(oldp+201,((IData)((0U != (0xc00U 
                                              & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))));
    tracep->fullQData(oldp+202,((4ULL + vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)),64);
    tracep->fullCData(oldp+204,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r),6);
    tracep->fullCData(oldp+205,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r),6);
    tracep->fullCData(oldp+206,((0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)),7);
    tracep->fullCData(oldp+207,((0x1fU & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                          >> 7U))),5);
    tracep->fullCData(oldp+208,((7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+209,((vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                 >> 0x19U)),7);
    tracep->fullCData(oldp+210,((vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                 >> 0x1aU)),6);
    tracep->fullCData(oldp+211,((0x1fU & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+212,((0x1fU & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                          >> 0x14U))),5);
    tracep->fullQData(oldp+213,((((- (QData)((IData)(
                                                     (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                              >> 0x14U))))),64);
    tracep->fullQData(oldp+215,((((- (QData)((IData)(
                                                     (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                    >> 7U))))))),64);
    tracep->fullQData(oldp+217,((((- (QData)((IData)(
                                                     (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                      >> 0x1fU)))) 
                                  << 0xdU) | (QData)((IData)(
                                                             ((0x1000U 
                                                               & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                  >> 0x13U)) 
                                                              | ((0x800U 
                                                                  & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                          >> 7U))))))))),64);
    tracep->fullQData(oldp+219,((((QData)((IData)((- (IData)(
                                                             (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))))),64);
    tracep->fullQData(oldp+221,((((- (QData)((IData)(
                                                     (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                      >> 0x1fU)))) 
                                  << 0x15U) | (QData)((IData)(
                                                              ((0x100000U 
                                                                & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                   >> 0xbU)) 
                                                               | ((0xff000U 
                                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                           >> 0x14U))))))))),64);
    tracep->fullQData(oldp+223,((QData)((IData)((0x1fU 
                                                 & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                    >> 0xfU))))),64);
    tracep->fullBit(oldp+225,((0U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+226,((1U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+227,((2U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+228,((3U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+229,((4U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+230,((5U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+231,((6U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+232,((7U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+233,((0U == (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                      >> 0x19U))));
    tracep->fullBit(oldp+234,((0x20U == (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                         >> 0x19U))));
    tracep->fullBit(oldp+235,((6U == (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                      >> 0x19U))));
    tracep->fullBit(oldp+236,((0U == (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                      >> 0x1aU))));
    tracep->fullBit(oldp+237,((0x10U == (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                         >> 0x1aU))));
    tracep->fullBit(oldp+238,((3U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+239,((7U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+240,((0xbU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+241,((0xfU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+242,((0x13U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+243,((0x17U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+244,((0x1bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+245,((0x1fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+246,((0x23U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+247,((0x27U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+248,((0x2bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+249,((0x2fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+250,((0x33U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+251,((0x37U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+252,((0x3bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+253,((0x3fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+254,((0x43U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+255,((0x47U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+256,((0x4bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+257,((0x4fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+258,((0x53U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+259,((0x57U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+260,((0x5bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+261,((0x5fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+262,((0x63U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+263,((0x67U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+264,((0x6bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+265,((0x6fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
    tracep->fullBit(oldp+266,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Rtype));
    tracep->fullBit(oldp+267,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Itype));
    tracep->fullBit(oldp+268,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Utype));
    tracep->fullBit(oldp+269,((((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRWI) 
                                | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRSI)) 
                               | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRCI))));
    tracep->fullBit(oldp+270,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csr));
    tracep->fullBit(oldp+271,(((0x67U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                               | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+272,(((0x13U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                               | (0x1bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+273,(((0x33U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                               | (0x3bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+274,(((0x1bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                               | (0x3bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullSData(oldp+275,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_r),15);
    tracep->fullBit(oldp+276,((IData)((0x13U == (0x707fU 
                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+277,((IData)((0x2013U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+278,((IData)((0x3013U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+279,((IData)((0x4013U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+280,((IData)((0x6013U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+281,((IData)((0x7013U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+282,((IData)((0x1013U == (0xfc00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+283,((IData)((0x5013U == (0xfc00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+284,((IData)((0x40005013U 
                                       == (0xfc00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+285,((IData)((0x1bU == (0x707fU 
                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+286,((IData)((0x101bU == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+287,((IData)((0x501bU == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+288,((IData)((0x4000501bU 
                                       == (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+289,((IData)((0x67U == (0x707fU 
                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+290,((IData)((0x33U == (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+291,((IData)((0x40000033U 
                                       == (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+292,((IData)((0x1033U == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+293,((IData)((0x2033U == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+294,((IData)((0x3033U == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+295,((IData)((0x4033U == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+296,((IData)((0x5033U == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+297,((IData)((0x40005033U 
                                       == (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+298,((IData)((0x6033U == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+299,((IData)((0x7033U == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+300,((IData)((0x3bU == (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+301,((IData)((0x4000003bU 
                                       == (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+302,((IData)((0x103bU == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+303,((IData)((0x503bU == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+304,((IData)((0x4000503bU 
                                       == (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+305,((IData)((0x63U == (0x707fU 
                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+306,((IData)((0x1063U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+307,((IData)((0x4063U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+308,((IData)((0x6063U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+309,((IData)((0x5063U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+310,((IData)((0x7063U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+311,((IData)((3U == (0x707fU 
                                              & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+312,((IData)((0x4003U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+313,((IData)((0x1003U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+314,((IData)((0x5003U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+315,((IData)((0x2003U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+316,((IData)((0x6003U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+317,((IData)((0x3003U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+318,((IData)((0x23U == (0x707fU 
                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+319,((IData)((0x1023U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+320,((IData)((0x2023U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+321,((IData)((0x3023U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullSData(oldp+322,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__memFuncE_r),11);
    tracep->fullSData(oldp+323,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_r),14);
    tracep->fullBit(oldp+324,((IData)((0xfU == (0x707fU 
                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+325,((IData)((0x100fU == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullCData(oldp+326,((((IData)((0xfU == 
                                           (0x707fU 
                                            & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                  << 1U) | (IData)(
                                                   (0x100fU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))))),2);
    tracep->fullBit(oldp+327,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRW));
    tracep->fullBit(oldp+328,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRS));
    tracep->fullBit(oldp+329,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRC));
    tracep->fullBit(oldp+330,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRWI));
    tracep->fullBit(oldp+331,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRSI));
    tracep->fullBit(oldp+332,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRCI));
    tracep->fullCData(oldp+333,((((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRW) 
                                  << 5U) | (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRS) 
                                             << 4U) 
                                            | (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRC) 
                                                << 3U) 
                                               | (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRWI) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRSI) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRCI))))))),6);
    tracep->fullBit(oldp+334,((IData)((0x100073U == 
                                       (0xfff0707fU 
                                        & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+335,((IData)((0x73U == (0xfff0707fU 
                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+336,((IData)((0x30200073U 
                                       == (0xfff0707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
    tracep->fullBit(oldp+337,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r));
    tracep->fullCData(oldp+338,(((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                                  ? (0x1fU & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                              >> 7U))
                                  : 0U)),5);
    tracep->fullQData(oldp+339,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_r),64);
    tracep->fullCData(oldp+341,((((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r) 
                                  << 5U) | ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                                             ? (0x1fU 
                                                & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                   >> 7U))
                                             : 0U))),6);
    tracep->fullQData(oldp+342,(vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pc),64);
    tracep->fullCData(oldp+344,((0x38U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadAddrM_clk_diff__DOT__qout_r) 
                                          << 3U))),6);
    tracep->fullCData(oldp+345,((0x38U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                          << 3U))),6);
    tracep->fullQData(oldp+346,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                                 << (0x38U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                              << 3U)))),64);
    tracep->fullQData(oldp+348,((0xffULL << (0x38U 
                                             & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                << 3U)))),64);
    tracep->fullQData(oldp+350,((0xffffULL << (0x38U 
                                               & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                  << 3U)))),64);
    tracep->fullQData(oldp+352,((0xffffffffULL << (0x38U 
                                                   & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                      << 3U)))),64);
    tracep->fullQData(oldp+354,(((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                  ? 0xffffffffffffffffULL
                                  : ((2U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                      ? (0xffffffffULL 
                                         << (0x38U 
                                             & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                << 3U)))
                                      : ((4U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                          ? (0xffffULL 
                                             << (0x38U 
                                                 & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                    << 3U)))
                                          : ((8U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                              ? (0xffULL 
                                                 << 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                     << 3U)))
                                              : 0ULL))))),64);
    tracep->fullQData(oldp+356,(((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r
                                  : ((2U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                      ? (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                                         << (0x38U 
                                             & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                << 3U)))
                                      : ((4U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                          ? (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                                             << (0x38U 
                                                 & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                    << 3U)))
                                          : ((8U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                              ? (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                                                 << 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                     << 3U)))
                                              : 0ULL))))),64);
    tracep->fullQData(oldp+358,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0]),64);
    tracep->fullQData(oldp+360,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[1]),64);
    tracep->fullQData(oldp+362,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[2]),64);
    tracep->fullQData(oldp+364,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[3]),64);
    tracep->fullQData(oldp+366,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[4]),64);
    tracep->fullQData(oldp+368,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[5]),64);
    tracep->fullQData(oldp+370,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[6]),64);
    tracep->fullQData(oldp+372,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[7]),64);
    tracep->fullQData(oldp+374,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[8]),64);
    tracep->fullQData(oldp+376,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[9]),64);
    tracep->fullQData(oldp+378,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[10]),64);
    tracep->fullQData(oldp+380,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[11]),64);
    tracep->fullQData(oldp+382,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[12]),64);
    tracep->fullQData(oldp+384,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[13]),64);
    tracep->fullQData(oldp+386,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[14]),64);
    tracep->fullQData(oldp+388,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[15]),64);
    tracep->fullQData(oldp+390,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[16]),64);
    tracep->fullQData(oldp+392,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[17]),64);
    tracep->fullQData(oldp+394,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[18]),64);
    tracep->fullQData(oldp+396,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[19]),64);
    tracep->fullQData(oldp+398,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[20]),64);
    tracep->fullQData(oldp+400,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[21]),64);
    tracep->fullQData(oldp+402,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[22]),64);
    tracep->fullQData(oldp+404,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[23]),64);
    tracep->fullQData(oldp+406,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[24]),64);
    tracep->fullQData(oldp+408,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[25]),64);
    tracep->fullQData(oldp+410,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[26]),64);
    tracep->fullQData(oldp+412,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[27]),64);
    tracep->fullQData(oldp+414,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[28]),64);
    tracep->fullQData(oldp+416,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[29]),64);
    tracep->fullQData(oldp+418,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[30]),64);
    tracep->fullQData(oldp+420,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[31]),64);
    tracep->fullQData(oldp+422,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0xaU]),64);
    tracep->fullIData(oldp+424,(vlSelf->SimTop__DOT__intrNO
                                [2U]),32);
    tracep->fullQData(oldp+425,(vlSelf->SimTop__DOT__it_pc
                                [2U]),64);
    tracep->fullIData(oldp+427,(vlSelf->SimTop__DOT__it_instr
                                [2U]),32);
    tracep->fullQData(oldp+428,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0U]),64);
    tracep->fullQData(oldp+430,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [1U]),64);
    tracep->fullQData(oldp+432,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [2U]),64);
    tracep->fullQData(oldp+434,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [3U]),64);
    tracep->fullQData(oldp+436,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [4U]),64);
    tracep->fullQData(oldp+438,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [5U]),64);
    tracep->fullQData(oldp+440,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [6U]),64);
    tracep->fullQData(oldp+442,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [7U]),64);
    tracep->fullQData(oldp+444,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [8U]),64);
    tracep->fullQData(oldp+446,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [9U]),64);
    tracep->fullQData(oldp+448,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0xbU]),64);
    tracep->fullQData(oldp+450,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0xcU]),64);
    tracep->fullQData(oldp+452,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0xdU]),64);
    tracep->fullQData(oldp+454,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0xeU]),64);
    tracep->fullQData(oldp+456,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0xfU]),64);
    tracep->fullQData(oldp+458,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x10U]),64);
    tracep->fullQData(oldp+460,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x11U]),64);
    tracep->fullQData(oldp+462,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x12U]),64);
    tracep->fullQData(oldp+464,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x13U]),64);
    tracep->fullQData(oldp+466,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x14U]),64);
    tracep->fullQData(oldp+468,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x15U]),64);
    tracep->fullQData(oldp+470,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x16U]),64);
    tracep->fullQData(oldp+472,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x17U]),64);
    tracep->fullQData(oldp+474,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x18U]),64);
    tracep->fullQData(oldp+476,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x19U]),64);
    tracep->fullQData(oldp+478,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x1aU]),64);
    tracep->fullQData(oldp+480,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x1bU]),64);
    tracep->fullQData(oldp+482,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x1cU]),64);
    tracep->fullQData(oldp+484,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x1dU]),64);
    tracep->fullQData(oldp+486,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x1eU]),64);
    tracep->fullQData(oldp+488,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                [0x1fU]),64);
    tracep->fullCData(oldp+490,((7U & (IData)(vlSelf->SimTop__DOT__trap_code))),3);
    tracep->fullIData(oldp+491,(vlSelf->SimTop__DOT__intrNO1_dff__DOT__qout_r),32);
    tracep->fullIData(oldp+492,(vlSelf->SimTop__DOT__intrNO
                                [0U]),32);
    tracep->fullIData(oldp+493,(vlSelf->SimTop__DOT__intrNO2_dff__DOT__qout_r),32);
    tracep->fullIData(oldp+494,(vlSelf->SimTop__DOT__intrNO
                                [1U]),32);
    tracep->fullIData(oldp+495,(vlSelf->SimTop__DOT__intrNO3_dff__DOT__qout_r),32);
    tracep->fullIData(oldp+496,(vlSelf->SimTop__DOT__it_instr1_dff__DOT__qout_r),32);
    tracep->fullIData(oldp+497,(vlSelf->SimTop__DOT__it_instr
                                [0U]),32);
    tracep->fullIData(oldp+498,(vlSelf->SimTop__DOT__it_instr2_dff__DOT__qout_r),32);
    tracep->fullIData(oldp+499,(vlSelf->SimTop__DOT__it_instr
                                [1U]),32);
    tracep->fullIData(oldp+500,(vlSelf->SimTop__DOT__it_instr3_dff__DOT__qout_r),32);
    tracep->fullQData(oldp+501,(vlSelf->SimTop__DOT__it_pc1_dff__DOT__qout_r),64);
    tracep->fullQData(oldp+503,(vlSelf->SimTop__DOT__it_pc
                                [0U]),64);
    tracep->fullQData(oldp+505,(vlSelf->SimTop__DOT__it_pc2_dff__DOT__qout_r),64);
    tracep->fullQData(oldp+507,(vlSelf->SimTop__DOT__it_pc
                                [1U]),64);
    tracep->fullQData(oldp+509,(vlSelf->SimTop__DOT__it_pc3_dff__DOT__qout_r),64);
    tracep->fullQData(oldp+511,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_r),64);
    tracep->fullQData(oldp+513,(((0x1000U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                                  : ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itTime_r)
                                      ? ((0ULL != vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)
                                          ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                                          : ((0ULL 
                                              != vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r)
                                              ? vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r
                                              : ((0ULL 
                                                  != vlSelf->SimTop__DOT__pc)
                                                  ? vlSelf->SimTop__DOT__pc
                                                  : 0ULL)))
                                      : 0ULL))),64);
    tracep->fullQData(oldp+515,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                 << (0x3fU & ((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                               ? (0x1fU 
                                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2))
                                               : (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2))))),64);
    tracep->fullBit(oldp+517,((1U & (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                      >> 5U) & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result)))));
    tracep->fullQData(oldp+518,(((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_r)
                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD
                                  : 0ULL)),64);
    tracep->fullIData(oldp+520,(((- (IData)((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r)))) 
                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instE_dff__DOT__qout_r)),32);
    tracep->fullQData(oldp+521,(((- (QData)((IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r))))) 
                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)),64);
    tracep->fullIData(oldp+523,(((IData)(vlSelf->SimTop__DOT__RamReadEnable)
                                  ? 0U : ((1U & (IData)(
                                                        (vlSelf->SimTop__DOT__pc 
                                                         >> 2U)))
                                           ? (IData)(
                                                     (vlSelf->SimTop__DOT__ReadData 
                                                      >> 0x20U))
                                           : (IData)(vlSelf->SimTop__DOT__ReadData)))),32);
    tracep->fullQData(oldp+524,(vlSelf->SimTop__DOT__pc),64);
    tracep->fullBit(oldp+526,(vlSelf->SimTop__DOT__RamReadEnable));
    tracep->fullBit(oldp+527,(vlSelf->SimTop__DOT__RamWriteEnable));
    tracep->fullQData(oldp+528,(((IData)(vlSelf->SimTop__DOT__RamReadEnable)
                                  ? vlSelf->SimTop__DOT__ReadData
                                  : 0ULL)),64);
    tracep->fullQData(oldp+530,(vlSelf->SimTop__DOT__RamReadAddr),64);
    tracep->fullQData(oldp+532,(vlSelf->SimTop__DOT__RamWriteAddr),64);
    tracep->fullQData(oldp+534,(vlSelf->SimTop__DOT__RamWriteData),64);
    tracep->fullQData(oldp+536,(vlSelf->SimTop__DOT__RamWriteMask),64);
    tracep->fullQData(oldp+538,(vlSelf->SimTop__DOT__ReadData),64);
    tracep->fullQData(oldp+540,(((IData)(vlSelf->SimTop__DOT__RamReadEnable)
                                  ? vlSelf->SimTop__DOT__RamReadAddr
                                  : vlSelf->SimTop__DOT__pc)),64);
    tracep->fullBit(oldp+542,(vlSelf->SimTop__DOT__Rvcpu__DOT__jump));
    tracep->fullBit(oldp+543,(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD));
    tracep->fullBit(oldp+544,(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE));
    tracep->fullQData(oldp+545,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadAddr),64);
    tracep->fullQData(oldp+547,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteAddr),64);
    tracep->fullQData(oldp+549,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadData),64);
    tracep->fullQData(oldp+551,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteData),64);
    tracep->fullBit(oldp+553,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadEnable));
    tracep->fullBit(oldp+554,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteEnable));
    tracep->fullQData(oldp+555,(vlSelf->SimTop__DOT__Rvcpu__DOT__ClintReadAddr),64);
    tracep->fullQData(oldp+557,(vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteAddr),64);
    tracep->fullQData(oldp+559,(vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteData),64);
    tracep->fullBit(oldp+561,(vlSelf->SimTop__DOT__Rvcpu__DOT__ClintReadEnable));
    tracep->fullBit(oldp+562,(vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteEnable));
    tracep->fullBit(oldp+563,(vlSelf->SimTop__DOT__Rvcpu__DOT__LoadStoreM));
    tracep->fullBit(oldp+564,(vlSelf->SimTop__DOT__Rvcpu__DOT__itTime));
    tracep->fullBit(oldp+565,(vlSelf->SimTop__DOT__Rvcpu__DOT__stallF));
    tracep->fullQData(oldp+566,(vlSelf->SimTop__DOT__Rvcpu__DOT__jAddr),64);
    tracep->fullQData(oldp+568,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus_r),64);
    tracep->fullQData(oldp+570,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie_r),64);
    tracep->fullQData(oldp+572,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch_r),64);
    tracep->fullCData(oldp+574,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r),2);
    tracep->fullBit(oldp+575,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itTime_r));
    tracep->fullQData(oldp+576,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1),64);
    tracep->fullQData(oldp+578,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2),64);
    tracep->fullQData(oldp+580,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                 - vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)),64);
    tracep->fullQData(oldp+582,((QData)((IData)((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                                 < vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+584,((QData)((IData)(VL_LTS_IQQ(64, vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1, vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+586,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                 >> (0x3fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+588,(VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1, 
                                               (0x3fU 
                                                & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullIData(oldp+590,(((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1) 
                                 >> (0x1fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),32);
    tracep->fullIData(oldp+591,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1), 
                                               (0x1fU 
                                                & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),32);
    tracep->fullQData(oldp+592,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                 ^ vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)),64);
    tracep->fullQData(oldp+594,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                 | vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)),64);
    tracep->fullQData(oldp+596,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)),64);
    tracep->fullQData(oldp+598,((QData)((IData)((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                                 >= vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+600,((QData)((IData)(VL_GTES_IQQ(64, vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1, vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+602,((QData)((IData)((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                                 == vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+604,((QData)((IData)((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                                 != vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
    tracep->fullQData(oldp+606,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result),64);
    tracep->fullBit(oldp+608,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_r));
    tracep->fullBit(oldp+609,((1U & (~ (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__stallF)))));
    tracep->fullQData(oldp+610,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8),64);
    tracep->fullQData(oldp+612,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16),64);
    tracep->fullQData(oldp+614,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32),64);
    tracep->fullQData(oldp+616,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r),64);
    tracep->fullIData(oldp+618,((7U & (- (IData)((1U 
                                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r)))))),32);
    tracep->fullQData(oldp+619,((vlSelf->SimTop__DOT__RamWriteAddr 
                                 - 0x80000000ULL)),64);
    tracep->fullQData(oldp+621,((((IData)(vlSelf->SimTop__DOT__RamReadEnable)
                                   ? vlSelf->SimTop__DOT__RamReadAddr
                                   : vlSelf->SimTop__DOT__pc) 
                                 - 0x80000000ULL)),64);
    tracep->fullBit(oldp+623,(vlSelf->clock));
    tracep->fullBit(oldp+624,(vlSelf->reset));
    tracep->fullQData(oldp+625,(vlSelf->io_logCtrl_log_begin),64);
    tracep->fullQData(oldp+627,(vlSelf->io_logCtrl_log_end),64);
    tracep->fullQData(oldp+629,(vlSelf->io_logCtrl_log_level),64);
    tracep->fullBit(oldp+631,(vlSelf->io_perfInfo_clean));
    tracep->fullBit(oldp+632,(vlSelf->io_perfInfo_dump));
    tracep->fullBit(oldp+633,(vlSelf->io_uart_out_valid));
    tracep->fullCData(oldp+634,(vlSelf->io_uart_out_ch),8);
    tracep->fullBit(oldp+635,(vlSelf->io_uart_in_valid));
    tracep->fullCData(oldp+636,(vlSelf->io_uart_in_ch),8);
    tracep->fullBit(oldp+637,((1U & (~ (IData)(vlSelf->reset)))));
    tracep->fullQData(oldp+638,(((IData)(vlSelf->reset)
                                  ? 0ULL : (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadEnable) 
                                             & (0U 
                                                != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr)))
                                             ? (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr) 
                                                 == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                                                 ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                 : 
                                                vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                [vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr])
                                             : 0ULL))),64);
    tracep->fullQData(oldp+640,(((IData)(vlSelf->reset)
                                  ? 0ULL : (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadEnable) 
                                             & (0U 
                                                != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr)))
                                             ? (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr) 
                                                 == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                                                 ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                 : 
                                                vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                [vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr])
                                             : 0ULL))),64);
    tracep->fullBit(oldp+642,((1U & ((~ (IData)(vlSelf->reset)) 
                                     & (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                         >> 0xeU) | 
                                        ((0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r)) 
                                         | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r)))))));
    tracep->fullQData(oldp+643,(((IData)(vlSelf->reset)
                                  ? 0ULL : ((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                             ? 0xffffffffffffffffULL
                                             : ((2U 
                                                 & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                 ? 
                                                (0xffffffffULL 
                                                 << 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                     << 3U)))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                  ? 
                                                 (0xffffULL 
                                                  << 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                      << 3U)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                   ? 
                                                  (0xffULL 
                                                   << 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                       << 3U)))
                                                   : 0ULL)))))),64);
    tracep->fullQData(oldp+645,(((IData)(vlSelf->reset)
                                  ? 0ULL : ((0x200bff8ULL 
                                             == vlSelf->SimTop__DOT__Rvcpu__DOT__ClintReadAddr)
                                             ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime
                                             : ((0x2004000ULL 
                                                 == vlSelf->SimTop__DOT__Rvcpu__DOT__ClintReadAddr)
                                                 ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp
                                                 : 0ULL)))),64);
    tracep->fullQData(oldp+647,(((IData)(vlSelf->reset)
                                  ? 0ULL : ((0x73U 
                                             == (0x7fU 
                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))
                                             ? (((vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                  >> 0x14U) 
                                                 == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r))
                                                 ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                                 : 
                                                ((IData)(vlSelf->reset)
                                                  ? 0ULL
                                                  : 
                                                 ((0xb00U 
                                                   == 
                                                   (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                    >> 0x14U))
                                                   ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle
                                                   : 
                                                  ((0x300U 
                                                    == 
                                                    (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                     >> 0x14U))
                                                    ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                      >> 0x14U))
                                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause
                                                     : 
                                                    ((0x305U 
                                                      == 
                                                      (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                       >> 0x14U))
                                                      ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec
                                                      : 
                                                     ((0x341U 
                                                       == 
                                                       (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                        >> 0x14U))
                                                       ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc
                                                       : 
                                                      ((0xb02U 
                                                        == 
                                                        (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                         >> 0x14U))
                                                        ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret
                                                        : 0ULL))))))))
                                             : 0ULL))),64);
    tracep->fullQData(oldp+649,(((IData)(vlSelf->reset)
                                  ? 0ULL : ((0xb00U 
                                             == (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                 >> 0x14U))
                                             ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle
                                             : ((0x300U 
                                                 == 
                                                 (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                  >> 0x14U))
                                                 ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                   >> 0x14U))
                                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause
                                                  : 
                                                 ((0x305U 
                                                   == 
                                                   (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                    >> 0x14U))
                                                   ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec
                                                   : 
                                                  ((0x341U 
                                                    == 
                                                    (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                     >> 0x14U))
                                                    ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc
                                                    : 
                                                   ((0xb02U 
                                                     == 
                                                     (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                      >> 0x14U))
                                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret
                                                     : 0ULL)))))))),64);
    tracep->fullBit(oldp+651,(((IData)(vlSelf->reset) 
                               | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD))));
    tracep->fullQData(oldp+652,(((IData)(vlSelf->reset)
                                  ? 0ULL : vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD)),64);
    tracep->fullQData(oldp+654,(((IData)(vlSelf->reset)
                                  ? 0ULL : vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs2Data)),64);
    tracep->fullBit(oldp+656,(((~ (IData)(vlSelf->reset)) 
                               & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusReadEnableE_dff__DOT__qout_r))));
    tracep->fullQData(oldp+657,(((IData)(vlSelf->reset)
                                  ? 0ULL : ((IData)(
                                                    (0U 
                                                     != 
                                                     (0xc0U 
                                                      & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                             ? (4ULL 
                                                + vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)
                                             : ((1U 
                                                 & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result)))
                                                 : 
                                                ((0x100U 
                                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                   ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r
                                                   : 
                                                  ((IData)(
                                                           (0U 
                                                            != 
                                                            (0xc00U 
                                                             & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                                    ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r
                                                    : vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result))))))),64);
    tracep->fullBit(oldp+659,(((IData)(vlSelf->reset) 
                               | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))));
    tracep->fullQData(oldp+660,(((IData)(vlSelf->reset)
                                  ? 0ULL : (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8 
                                                                            >> 7U)))))) 
                                             << 8U) 
                                            | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8))))))),64);
    tracep->fullQData(oldp+662,(((IData)(vlSelf->reset)
                                  ? 0ULL : (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8)))))),64);
    tracep->fullQData(oldp+664,(((IData)(vlSelf->reset)
                                  ? 0ULL : (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16 
                                                                            >> 0xfU)))))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16))))))),64);
    tracep->fullQData(oldp+666,(((IData)(vlSelf->reset)
                                  ? 0ULL : (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16)))))),64);
    tracep->fullQData(oldp+668,(((IData)(vlSelf->reset)
                                  ? 0ULL : (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32))))),64);
    tracep->fullQData(oldp+670,(((IData)(vlSelf->reset)
                                  ? 0ULL : (QData)((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32)))),64);
    tracep->fullQData(oldp+672,(((IData)(vlSelf->reset)
                                  ? 0ULL : vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadData)),64);
    tracep->fullBit(oldp+674,(vlSelf->SimTop__DOT__ReadEnable));
    tracep->fullCData(oldp+675,(0U),8);
    tracep->fullQData(oldp+676,(0ULL),64);
    tracep->fullCData(oldp+678,(3U),2);
    tracep->fullBit(oldp+679,(vlSelf->SimTop__DOT__Rvcpu__DOT__instVaild));
    tracep->fullBit(oldp+680,(vlSelf->SimTop__DOT__Rvcpu__DOT__RamReadVaild));
    tracep->fullQData(oldp+681,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadAddrE),64);
    tracep->fullQData(oldp+683,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteAddrE),64);
    tracep->fullQData(oldp+685,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteDataE),64);
    tracep->fullQData(oldp+687,(vlSelf->SimTop__DOT__Rvcpu__DOT__op1E),64);
    tracep->fullQData(oldp+689,(vlSelf->SimTop__DOT__Rvcpu__DOT__op2E),64);
    tracep->fullBit(oldp+691,(0U));
    tracep->fullQData(oldp+692,(vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteMask),64);
    tracep->fullCData(oldp+694,(vlSelf->SimTop__DOT__Rvcpu__DOT__LoadRedirect),2);
    tracep->fullQData(oldp+695,(vlSelf->SimTop__DOT__Rvcpu__DOT__IRQcause),63);
    tracep->fullBit(oldp+697,(vlSelf->SimTop__DOT__Rvcpu__DOT__load));
    tracep->fullQData(oldp+698,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__marchid),64);
    tracep->fullQData(oldp+700,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mimpid),64);
    tracep->fullQData(oldp+702,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mhartid),64);
    tracep->fullQData(oldp+704,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__misa),64);
    tracep->fullQData(oldp+706,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__medeleg),64);
    tracep->fullQData(oldp+708,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mideleg),64);
    tracep->fullQData(oldp+710,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcounteren),64);
    tracep->fullIData(oldp+712,(1U),32);
    tracep->fullBit(oldp+713,(1U));
    tracep->fullIData(oldp+714,(2U),32);
    tracep->fullIData(oldp+715,(0x40U),32);
    tracep->fullIData(oldp+716,(0xcU),32);
    tracep->fullIData(oldp+717,(0x20U),32);
    tracep->fullIData(oldp+718,(0xfU),32);
    tracep->fullIData(oldp+719,(0xbU),32);
    tracep->fullIData(oldp+720,(6U),32);
    tracep->fullIData(oldp+721,(0xeU),32);
    tracep->fullBit(oldp+722,(vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcEnableF_r));
    tracep->fullQData(oldp+723,(0xffffffffffffffffULL),64);
    tracep->fullIData(oldp+725,(5U),32);
    tracep->fullIData(oldp+726,(0U),32);
}
