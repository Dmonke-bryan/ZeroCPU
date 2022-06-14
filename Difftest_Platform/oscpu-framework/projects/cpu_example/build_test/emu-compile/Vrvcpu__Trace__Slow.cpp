// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrvcpu__Syms.h"


//======================

void Vrvcpu::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vrvcpu::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrvcpu__Syms* __restrict vlSymsp = static_cast<Vrvcpu__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vrvcpu::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vrvcpu::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vrvcpu__Syms* __restrict vlSymsp = static_cast<Vrvcpu__Syms*>(userp);
    Vrvcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vrvcpu::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vrvcpu__Syms* __restrict vlSymsp = static_cast<Vrvcpu__Syms*>(userp);
    Vrvcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
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
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+383+i*2,"regs_o", true,(i+0), 63,0);}}
        tracep->declBit(c+365,"rvcpu clk", false,-1);
        tracep->declBit(c+366,"rvcpu rst", false,-1);
        tracep->declBus(c+367,"rvcpu instF", false,-1, 31,0);
        tracep->declQuad(c+368,"rvcpu RamReadData", false,-1, 63,0);
        tracep->declBit(c+370,"rvcpu RamReadEnable", false,-1);
        tracep->declBit(c+371,"rvcpu RamWriteEnable", false,-1);
        tracep->declQuad(c+372,"rvcpu RamReadAddr", false,-1, 63,0);
        tracep->declQuad(c+374,"rvcpu RamWriteMask", false,-1, 63,0);
        tracep->declQuad(c+376,"rvcpu RamWriteAddr", false,-1, 63,0);
        tracep->declQuad(c+378,"rvcpu RamWriteData", false,-1, 63,0);
        tracep->declQuad(c+380,"rvcpu pcF", false,-1, 63,0);
        tracep->declBit(c+382,"rvcpu pcEnableF", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+383+i*2,"rvcpu regs_o", true,(i+0), 63,0);}}
        tracep->declBit(c+1,"rvcpu jump", false,-1);
        tracep->declQuad(c+2,"rvcpu jumpAddr", false,-1, 63,0);
        tracep->declQuad(c+447,"rvcpu rs1DataD", false,-1, 63,0);
        tracep->declQuad(c+449,"rvcpu rs2DataD", false,-1, 63,0);
        tracep->declBit(c+4,"rvcpu rs1ReadEnable", false,-1);
        tracep->declBit(c+5,"rvcpu rs2ReadEnable", false,-1);
        tracep->declBit(c+6,"rvcpu rdWriteEnableE", false,-1);
        tracep->declBus(c+7,"rvcpu rs1ReadAddr", false,-1, 4,0);
        tracep->declBus(c+8,"rvcpu rs2ReadAddr", false,-1, 4,0);
        tracep->declBus(c+9,"rvcpu rdWriteAddrE", false,-1, 4,0);
        tracep->declBit(c+10,"rvcpu RamReadEnableE", false,-1);
        tracep->declBit(c+11,"rvcpu RamWriteEnableE", false,-1);
        tracep->declQuad(c+473,"rvcpu RamReadAddrE", false,-1, 63,0);
        tracep->declQuad(c+475,"rvcpu RamWriteAddrE", false,-1, 63,0);
        tracep->declQuad(c+477,"rvcpu RamWriteDataE", false,-1, 63,0);
        tracep->declQuad(c+479,"rvcpu op1E", false,-1, 63,0);
        tracep->declQuad(c+481,"rvcpu op2E", false,-1, 63,0);
        tracep->declBit(c+12,"rvcpu rdWriteEnableM", false,-1);
        tracep->declBus(c+13,"rvcpu rdWriteAddrM", false,-1, 4,0);
        tracep->declQuad(c+14,"rvcpu rdWriteDataM", false,-1, 63,0);
        tracep->declBit(c+16,"rvcpu rdWriteEnableW", false,-1);
        tracep->declBus(c+17,"rvcpu rdWriteAddrW", false,-1, 4,0);
        tracep->declQuad(c+18,"rvcpu rdWriteDataW", false,-1, 63,0);
        tracep->declBus(c+20,"rvcpu instD", false,-1, 31,0);
        tracep->declQuad(c+21,"rvcpu pcD", false,-1, 63,0);
        tracep->declBit(c+295,"rvcpu flushD", false,-1);
        tracep->declBus(c+23,"rvcpu memFuncE", false,-1, 10,0);
        tracep->declQuad(c+24,"rvcpu pcE", false,-1, 63,0);
        tracep->declBus(c+26,"rvcpu instTypeE", false,-1, 9,0);
        tracep->declBus(c+27,"rvcpu instFuncE", false,-1, 13,0);
        tracep->declQuad(c+28,"rvcpu rs1DataE", false,-1, 63,0);
        tracep->declQuad(c+30,"rvcpu rs2DataE", false,-1, 63,0);
        tracep->declQuad(c+32,"rvcpu imm", false,-1, 63,0);
        tracep->declBit(c+295,"rvcpu flushE", false,-1);
        tracep->declBus(c+34,"rvcpu memFuncM", false,-1, 10,0);
        tracep->declBus(c+483,"rvcpu instTypeM", false,-1, 9,0);
        tracep->declQuad(c+35,"rvcpu RamWriteAddrM", false,-1, 63,0);
        tracep->declQuad(c+37,"rvcpu RamWriteDataM", false,-1, 63,0);
        tracep->declQuad(c+39,"rvcpu RamReadAddrM", false,-1, 63,0);
        tracep->declBit(c+41,"rvcpu RamWriteEnableM", false,-1);
        tracep->declBit(c+42,"rvcpu RamReadEnableM", false,-1);
        tracep->declBus(c+43,"rvcpu Redirect1", false,-1, 1,0);
        tracep->declBus(c+44,"rvcpu Redirect2", false,-1, 1,0);
        tracep->declBus(c+45,"rvcpu LoadRedirect", false,-1, 1,0);
        tracep->declBit(c+46,"rvcpu load", false,-1);
        tracep->declBit(c+47,"rvcpu stallF", false,-1);
        tracep->declBit(c+47,"rvcpu stallD", false,-1);
        tracep->declBit(c+47,"rvcpu stallE", false,-1);
        tracep->declBit(c+365,"rvcpu If_stage clk", false,-1);
        tracep->declBit(c+366,"rvcpu If_stage rst", false,-1);
        tracep->declBit(c+1,"rvcpu If_stage jump", false,-1);
        tracep->declBit(c+47,"rvcpu If_stage stallF", false,-1);
        tracep->declQuad(c+2,"rvcpu If_stage jumpAddr", false,-1, 63,0);
        tracep->declBus(c+367,"rvcpu If_stage instF", false,-1, 31,0);
        tracep->declQuad(c+380,"rvcpu If_stage pcF", false,-1, 63,0);
        tracep->declQuad(c+21,"rvcpu If_stage pcD", false,-1, 63,0);
        tracep->declBit(c+382,"rvcpu If_stage pcEnableF", false,-1);
        tracep->declBus(c+20,"rvcpu If_stage instD", false,-1, 31,0);
        tracep->declBit(c+451,"rvcpu If_stage pcEnableF_r", false,-1);
        tracep->declQuad(c+48,"rvcpu If_stage pc", false,-1, 63,0);
        tracep->declBus(c+484,"rvcpu If_stage pcD_dff DW", false,-1, 31,0);
        tracep->declQuad(c+380,"rvcpu If_stage pcD_dff din", false,-1, 63,0);
        tracep->declQuad(c+21,"rvcpu If_stage pcD_dff qout", false,-1, 63,0);
        tracep->declBit(c+47,"rvcpu If_stage pcD_dff stall", false,-1);
        tracep->declBit(c+485,"rvcpu If_stage pcD_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu If_stage pcD_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu If_stage pcD_dff rst", false,-1);
        tracep->declQuad(c+21,"rvcpu If_stage pcD_dff qout_r", false,-1, 63,0);
        tracep->declBus(c+486,"rvcpu If_stage pcEnableF_dff DW", false,-1, 31,0);
        tracep->declBus(c+451,"rvcpu If_stage pcEnableF_dff din", false,-1, 0,0);
        tracep->declBus(c+382,"rvcpu If_stage pcEnableF_dff qout", false,-1, 0,0);
        tracep->declBit(c+47,"rvcpu If_stage pcEnableF_dff stall", false,-1);
        tracep->declBit(c+485,"rvcpu If_stage pcEnableF_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu If_stage pcEnableF_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu If_stage pcEnableF_dff rst", false,-1);
        tracep->declBus(c+50,"rvcpu If_stage pcEnableF_dff qout_r", false,-1, 0,0);
        tracep->declBus(c+487,"rvcpu If_stage instE_dff DW", false,-1, 31,0);
        tracep->declBus(c+367,"rvcpu If_stage instE_dff din", false,-1, 31,0);
        tracep->declBus(c+20,"rvcpu If_stage instE_dff qout", false,-1, 31,0);
        tracep->declBit(c+47,"rvcpu If_stage instE_dff stall", false,-1);
        tracep->declBit(c+485,"rvcpu If_stage instE_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu If_stage instE_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu If_stage instE_dff rst", false,-1);
        tracep->declBus(c+20,"rvcpu If_stage instE_dff qout_r", false,-1, 31,0);
        tracep->declBit(c+366,"rvcpu Id_stage rst", false,-1);
        tracep->declBit(c+365,"rvcpu Id_stage clk", false,-1);
        tracep->declBit(c+295,"rvcpu Id_stage flushD", false,-1);
        tracep->declBit(c+47,"rvcpu Id_stage stallD", false,-1);
        tracep->declQuad(c+21,"rvcpu Id_stage pcD", false,-1, 63,0);
        tracep->declBus(c+20,"rvcpu Id_stage instD", false,-1, 31,0);
        tracep->declQuad(c+447,"rvcpu Id_stage rs1DataD", false,-1, 63,0);
        tracep->declQuad(c+449,"rvcpu Id_stage rs2DataD", false,-1, 63,0);
        tracep->declBit(c+4,"rvcpu Id_stage rs1ReadEnable", false,-1);
        tracep->declBus(c+7,"rvcpu Id_stage rs1ReadAddr", false,-1, 4,0);
        tracep->declBit(c+5,"rvcpu Id_stage rs2ReadEnable", false,-1);
        tracep->declBus(c+8,"rvcpu Id_stage rs2ReadAddr", false,-1, 4,0);
        tracep->declBit(c+6,"rvcpu Id_stage rdWriteEnableE", false,-1);
        tracep->declBus(c+9,"rvcpu Id_stage rdWriteAddrE", false,-1, 4,0);
        tracep->declBit(c+10,"rvcpu Id_stage RamReadEnableE", false,-1);
        tracep->declBit(c+11,"rvcpu Id_stage RamWriteEnableE", false,-1);
        tracep->declBus(c+23,"rvcpu Id_stage memFuncE", false,-1, 10,0);
        tracep->declQuad(c+24,"rvcpu Id_stage pcE", false,-1, 63,0);
        tracep->declBus(c+26,"rvcpu Id_stage instTypeE", false,-1, 9,0);
        tracep->declBus(c+27,"rvcpu Id_stage instFuncE", false,-1, 13,0);
        tracep->declQuad(c+28,"rvcpu Id_stage rs1DataE", false,-1, 63,0);
        tracep->declQuad(c+30,"rvcpu Id_stage rs2DataE", false,-1, 63,0);
        tracep->declQuad(c+32,"rvcpu Id_stage imm", false,-1, 63,0);
        tracep->declBus(c+51,"rvcpu Id_stage opcode", false,-1, 6,0);
        tracep->declBus(c+52,"rvcpu Id_stage rd", false,-1, 4,0);
        tracep->declBus(c+53,"rvcpu Id_stage func3", false,-1, 2,0);
        tracep->declBus(c+54,"rvcpu Id_stage func7", false,-1, 6,0);
        tracep->declBus(c+55,"rvcpu Id_stage func6", false,-1, 5,0);
        tracep->declBus(c+56,"rvcpu Id_stage rs1", false,-1, 4,0);
        tracep->declBus(c+57,"rvcpu Id_stage rs2", false,-1, 4,0);
        tracep->declQuad(c+58,"rvcpu Id_stage immI", false,-1, 63,0);
        tracep->declQuad(c+60,"rvcpu Id_stage immS", false,-1, 63,0);
        tracep->declQuad(c+62,"rvcpu Id_stage immB", false,-1, 63,0);
        tracep->declQuad(c+64,"rvcpu Id_stage immU", false,-1, 63,0);
        tracep->declQuad(c+66,"rvcpu Id_stage immJ", false,-1, 63,0);
        tracep->declBit(c+68,"rvcpu Id_stage func3_000", false,-1);
        tracep->declBit(c+69,"rvcpu Id_stage func3_001", false,-1);
        tracep->declBit(c+70,"rvcpu Id_stage func3_010", false,-1);
        tracep->declBit(c+71,"rvcpu Id_stage func3_011", false,-1);
        tracep->declBit(c+72,"rvcpu Id_stage func3_100", false,-1);
        tracep->declBit(c+73,"rvcpu Id_stage func3_101", false,-1);
        tracep->declBit(c+74,"rvcpu Id_stage func3_110", false,-1);
        tracep->declBit(c+75,"rvcpu Id_stage func3_111", false,-1);
        tracep->declBit(c+76,"rvcpu Id_stage func7_0", false,-1);
        tracep->declBit(c+77,"rvcpu Id_stage func7_20", false,-1);
        tracep->declBit(c+78,"rvcpu Id_stage func6_0", false,-1);
        tracep->declBit(c+79,"rvcpu Id_stage func6_10", false,-1);
        tracep->declBit(c+80,"rvcpu Id_stage opcode_0000011", false,-1);
        tracep->declBit(c+81,"rvcpu Id_stage opcode_0000111", false,-1);
        tracep->declBit(c+82,"rvcpu Id_stage opcode_0001011", false,-1);
        tracep->declBit(c+83,"rvcpu Id_stage opcode_0001111", false,-1);
        tracep->declBit(c+84,"rvcpu Id_stage opcode_0010011", false,-1);
        tracep->declBit(c+85,"rvcpu Id_stage opcode_0010111", false,-1);
        tracep->declBit(c+86,"rvcpu Id_stage opcode_0011011", false,-1);
        tracep->declBit(c+87,"rvcpu Id_stage opcode_0011111", false,-1);
        tracep->declBit(c+88,"rvcpu Id_stage opcode_0100011", false,-1);
        tracep->declBit(c+89,"rvcpu Id_stage opcode_0100111", false,-1);
        tracep->declBit(c+90,"rvcpu Id_stage opcode_0101011", false,-1);
        tracep->declBit(c+91,"rvcpu Id_stage opcode_0101111", false,-1);
        tracep->declBit(c+92,"rvcpu Id_stage opcode_0110011", false,-1);
        tracep->declBit(c+93,"rvcpu Id_stage opcode_0110111", false,-1);
        tracep->declBit(c+94,"rvcpu Id_stage opcode_0111011", false,-1);
        tracep->declBit(c+95,"rvcpu Id_stage opcode_0111111", false,-1);
        tracep->declBit(c+96,"rvcpu Id_stage opcode_1000011", false,-1);
        tracep->declBit(c+97,"rvcpu Id_stage opcode_1000111", false,-1);
        tracep->declBit(c+98,"rvcpu Id_stage opcode_1001011", false,-1);
        tracep->declBit(c+99,"rvcpu Id_stage opcode_1001111", false,-1);
        tracep->declBit(c+100,"rvcpu Id_stage opcode_1010011", false,-1);
        tracep->declBit(c+101,"rvcpu Id_stage opcode_1010111", false,-1);
        tracep->declBit(c+102,"rvcpu Id_stage opcode_1011011", false,-1);
        tracep->declBit(c+103,"rvcpu Id_stage opcode_1011111", false,-1);
        tracep->declBit(c+104,"rvcpu Id_stage opcode_1100011", false,-1);
        tracep->declBit(c+105,"rvcpu Id_stage opcode_1100111", false,-1);
        tracep->declBit(c+106,"rvcpu Id_stage opcode_1101011", false,-1);
        tracep->declBit(c+107,"rvcpu Id_stage opcode_1101111", false,-1);
        tracep->declBit(c+108,"rvcpu Id_stage opcode_1110011", false,-1);
        tracep->declBit(c+109,"rvcpu Id_stage Rtype", false,-1);
        tracep->declBit(c+110,"rvcpu Id_stage Itype", false,-1);
        tracep->declBit(c+88,"rvcpu Id_stage Stype", false,-1);
        tracep->declBit(c+104,"rvcpu Id_stage Btype", false,-1);
        tracep->declBit(c+111,"rvcpu Id_stage Utype", false,-1);
        tracep->declBit(c+107,"rvcpu Id_stage Jtype", false,-1);
        tracep->declBit(c+93,"rvcpu Id_stage LUI", false,-1);
        tracep->declBit(c+85,"rvcpu Id_stage AUIPC", false,-1);
        tracep->declBit(c+112,"rvcpu Id_stage jump", false,-1);
        tracep->declBit(c+104,"rvcpu Id_stage branch", false,-1);
        tracep->declBit(c+80,"rvcpu Id_stage load", false,-1);
        tracep->declBit(c+88,"rvcpu Id_stage store", false,-1);
        tracep->declBit(c+113,"rvcpu Id_stage mathImm", false,-1);
        tracep->declBit(c+114,"rvcpu Id_stage mathReg", false,-1);
        tracep->declBit(c+115,"rvcpu Id_stage type32", false,-1);
        tracep->declBus(c+116,"rvcpu Id_stage instTypeE_r", false,-1, 9,0);
        tracep->declBit(c+117,"rvcpu Id_stage ADDI", false,-1);
        tracep->declBit(c+118,"rvcpu Id_stage SLTI", false,-1);
        tracep->declBit(c+119,"rvcpu Id_stage SLTIU", false,-1);
        tracep->declBit(c+120,"rvcpu Id_stage XORI", false,-1);
        tracep->declBit(c+121,"rvcpu Id_stage ORI", false,-1);
        tracep->declBit(c+122,"rvcpu Id_stage ANDI", false,-1);
        tracep->declBit(c+123,"rvcpu Id_stage SLLI", false,-1);
        tracep->declBit(c+124,"rvcpu Id_stage SRLI", false,-1);
        tracep->declBit(c+125,"rvcpu Id_stage SRAI", false,-1);
        tracep->declBit(c+126,"rvcpu Id_stage ADDIW", false,-1);
        tracep->declBit(c+127,"rvcpu Id_stage SLLIW", false,-1);
        tracep->declBit(c+128,"rvcpu Id_stage SRLIW", false,-1);
        tracep->declBit(c+129,"rvcpu Id_stage SRAIW", false,-1);
        tracep->declBit(c+130,"rvcpu Id_stage JALR", false,-1);
        tracep->declBit(c+131,"rvcpu Id_stage ADD", false,-1);
        tracep->declBit(c+132,"rvcpu Id_stage SUB", false,-1);
        tracep->declBit(c+133,"rvcpu Id_stage SLL", false,-1);
        tracep->declBit(c+134,"rvcpu Id_stage SLT", false,-1);
        tracep->declBit(c+135,"rvcpu Id_stage SLTU", false,-1);
        tracep->declBit(c+136,"rvcpu Id_stage XOR", false,-1);
        tracep->declBit(c+137,"rvcpu Id_stage SRL", false,-1);
        tracep->declBit(c+138,"rvcpu Id_stage SRA", false,-1);
        tracep->declBit(c+139,"rvcpu Id_stage OR", false,-1);
        tracep->declBit(c+140,"rvcpu Id_stage AND", false,-1);
        tracep->declBit(c+141,"rvcpu Id_stage ADDW", false,-1);
        tracep->declBit(c+142,"rvcpu Id_stage SUBW", false,-1);
        tracep->declBit(c+143,"rvcpu Id_stage SLLW", false,-1);
        tracep->declBit(c+144,"rvcpu Id_stage SRLW", false,-1);
        tracep->declBit(c+145,"rvcpu Id_stage SRAW", false,-1);
        tracep->declBit(c+146,"rvcpu Id_stage BEQ", false,-1);
        tracep->declBit(c+147,"rvcpu Id_stage BNE", false,-1);
        tracep->declBit(c+148,"rvcpu Id_stage BLT", false,-1);
        tracep->declBit(c+149,"rvcpu Id_stage BLTU", false,-1);
        tracep->declBit(c+150,"rvcpu Id_stage BGT", false,-1);
        tracep->declBit(c+151,"rvcpu Id_stage BGTU", false,-1);
        tracep->declBit(c+107,"rvcpu Id_stage JAL", false,-1);
        tracep->declBit(c+152,"rvcpu Id_stage LB", false,-1);
        tracep->declBit(c+153,"rvcpu Id_stage LBU", false,-1);
        tracep->declBit(c+154,"rvcpu Id_stage LH", false,-1);
        tracep->declBit(c+155,"rvcpu Id_stage LHU", false,-1);
        tracep->declBit(c+156,"rvcpu Id_stage LW", false,-1);
        tracep->declBit(c+157,"rvcpu Id_stage LWU", false,-1);
        tracep->declBit(c+158,"rvcpu Id_stage LD", false,-1);
        tracep->declBit(c+159,"rvcpu Id_stage SB", false,-1);
        tracep->declBit(c+160,"rvcpu Id_stage SH", false,-1);
        tracep->declBit(c+161,"rvcpu Id_stage SW", false,-1);
        tracep->declBit(c+162,"rvcpu Id_stage SD", false,-1);
        tracep->declBus(c+163,"rvcpu Id_stage memFuncE_r", false,-1, 10,0);
        tracep->declBus(c+164,"rvcpu Id_stage instFuncE_r", false,-1, 13,0);
        tracep->declBit(c+165,"rvcpu Id_stage FENCE", false,-1);
        tracep->declBit(c+166,"rvcpu Id_stage FENCEI", false,-1);
        tracep->declBus(c+167,"rvcpu Id_stage fenceType", false,-1, 1,0);
        tracep->declBit(c+168,"rvcpu Id_stage CSRRW", false,-1);
        tracep->declBit(c+169,"rvcpu Id_stage CSRRS", false,-1);
        tracep->declBit(c+170,"rvcpu Id_stage CSRRC", false,-1);
        tracep->declBit(c+171,"rvcpu Id_stage CSRRWI", false,-1);
        tracep->declBit(c+172,"rvcpu Id_stage CSRRSI", false,-1);
        tracep->declBit(c+173,"rvcpu Id_stage CSRRCI", false,-1);
        tracep->declBit(c+80,"rvcpu Id_stage RamReadEnableE_r", false,-1);
        tracep->declBit(c+88,"rvcpu Id_stage RamWriteEnableE_r", false,-1);
        tracep->declBit(c+174,"rvcpu Id_stage rdWriteEnableE_r", false,-1);
        tracep->declBus(c+175,"rvcpu Id_stage rdWriteAddrE_r", false,-1, 4,0);
        tracep->declQuad(c+176,"rvcpu Id_stage imm_r", false,-1, 63,0);
        tracep->declBus(c+488,"rvcpu Id_stage instTypeE_dff DW", false,-1, 31,0);
        tracep->declBus(c+116,"rvcpu Id_stage instTypeE_dff din", false,-1, 9,0);
        tracep->declBus(c+26,"rvcpu Id_stage instTypeE_dff qout", false,-1, 9,0);
        tracep->declBit(c+47,"rvcpu Id_stage instTypeE_dff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Id_stage instTypeE_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Id_stage instTypeE_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Id_stage instTypeE_dff rst", false,-1);
        tracep->declBus(c+26,"rvcpu Id_stage instTypeE_dff qout_r", false,-1, 9,0);
        tracep->declBus(c+489,"rvcpu Id_stage memFuncE_dff DW", false,-1, 31,0);
        tracep->declBus(c+163,"rvcpu Id_stage memFuncE_dff din", false,-1, 10,0);
        tracep->declBus(c+23,"rvcpu Id_stage memFuncE_dff qout", false,-1, 10,0);
        tracep->declBit(c+47,"rvcpu Id_stage memFuncE_dff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Id_stage memFuncE_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Id_stage memFuncE_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Id_stage memFuncE_dff rst", false,-1);
        tracep->declBus(c+23,"rvcpu Id_stage memFuncE_dff qout_r", false,-1, 10,0);
        tracep->declBus(c+490,"rvcpu Id_stage instFuncE_dff DW", false,-1, 31,0);
        tracep->declBus(c+164,"rvcpu Id_stage instFuncE_dff din", false,-1, 13,0);
        tracep->declBus(c+27,"rvcpu Id_stage instFuncE_dff qout", false,-1, 13,0);
        tracep->declBit(c+47,"rvcpu Id_stage instFuncE_dff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Id_stage instFuncE_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Id_stage instFuncE_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Id_stage instFuncE_dff rst", false,-1);
        tracep->declBus(c+27,"rvcpu Id_stage instFuncE_dff qout_r", false,-1, 13,0);
        tracep->declBus(c+484,"rvcpu Id_stage pcE_dff DW", false,-1, 31,0);
        tracep->declQuad(c+21,"rvcpu Id_stage pcE_dff din", false,-1, 63,0);
        tracep->declQuad(c+24,"rvcpu Id_stage pcE_dff qout", false,-1, 63,0);
        tracep->declBit(c+47,"rvcpu Id_stage pcE_dff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Id_stage pcE_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Id_stage pcE_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Id_stage pcE_dff rst", false,-1);
        tracep->declQuad(c+24,"rvcpu Id_stage pcE_dff qout_r", false,-1, 63,0);
        tracep->declBus(c+486,"rvcpu Id_stage RamReadEnableE_dff DW", false,-1, 31,0);
        tracep->declBus(c+80,"rvcpu Id_stage RamReadEnableE_dff din", false,-1, 0,0);
        tracep->declBus(c+10,"rvcpu Id_stage RamReadEnableE_dff qout", false,-1, 0,0);
        tracep->declBit(c+47,"rvcpu Id_stage RamReadEnableE_dff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Id_stage RamReadEnableE_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Id_stage RamReadEnableE_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Id_stage RamReadEnableE_dff rst", false,-1);
        tracep->declBus(c+10,"rvcpu Id_stage RamReadEnableE_dff qout_r", false,-1, 0,0);
        tracep->declBus(c+486,"rvcpu Id_stage RamWriteEnableE_dff DW", false,-1, 31,0);
        tracep->declBus(c+88,"rvcpu Id_stage RamWriteEnableE_dff din", false,-1, 0,0);
        tracep->declBus(c+11,"rvcpu Id_stage RamWriteEnableE_dff qout", false,-1, 0,0);
        tracep->declBit(c+47,"rvcpu Id_stage RamWriteEnableE_dff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Id_stage RamWriteEnableE_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Id_stage RamWriteEnableE_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Id_stage RamWriteEnableE_dff rst", false,-1);
        tracep->declBus(c+11,"rvcpu Id_stage RamWriteEnableE_dff qout_r", false,-1, 0,0);
        tracep->declBus(c+491,"rvcpu Id_stage rd_dff DW", false,-1, 31,0);
        tracep->declBus(c+178,"rvcpu Id_stage rd_dff din", false,-1, 5,0);
        tracep->declBus(c+179,"rvcpu Id_stage rd_dff qout", false,-1, 5,0);
        tracep->declBit(c+47,"rvcpu Id_stage rd_dff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Id_stage rd_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Id_stage rd_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Id_stage rd_dff rst", false,-1);
        tracep->declBus(c+179,"rvcpu Id_stage rd_dff qout_r", false,-1, 5,0);
        tracep->declBus(c+484,"rvcpu Id_stage imm_dff DW", false,-1, 31,0);
        tracep->declQuad(c+176,"rvcpu Id_stage imm_dff din", false,-1, 63,0);
        tracep->declQuad(c+32,"rvcpu Id_stage imm_dff qout", false,-1, 63,0);
        tracep->declBit(c+47,"rvcpu Id_stage imm_dff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Id_stage imm_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Id_stage imm_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Id_stage imm_dff rst", false,-1);
        tracep->declQuad(c+32,"rvcpu Id_stage imm_dff qout_r", false,-1, 63,0);
        tracep->declBus(c+484,"rvcpu Id_stage rs1DataE_dff DW", false,-1, 31,0);
        tracep->declQuad(c+447,"rvcpu Id_stage rs1DataE_dff din", false,-1, 63,0);
        tracep->declQuad(c+28,"rvcpu Id_stage rs1DataE_dff qout", false,-1, 63,0);
        tracep->declBit(c+47,"rvcpu Id_stage rs1DataE_dff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Id_stage rs1DataE_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Id_stage rs1DataE_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Id_stage rs1DataE_dff rst", false,-1);
        tracep->declQuad(c+28,"rvcpu Id_stage rs1DataE_dff qout_r", false,-1, 63,0);
        tracep->declBus(c+484,"rvcpu Id_stage rs2DataE_dff DW", false,-1, 31,0);
        tracep->declQuad(c+449,"rvcpu Id_stage rs2DataE_dff din", false,-1, 63,0);
        tracep->declQuad(c+30,"rvcpu Id_stage rs2DataE_dff qout", false,-1, 63,0);
        tracep->declBit(c+47,"rvcpu Id_stage rs2DataE_dff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Id_stage rs2DataE_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Id_stage rs2DataE_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Id_stage rs2DataE_dff rst", false,-1);
        tracep->declQuad(c+30,"rvcpu Id_stage rs2DataE_dff qout_r", false,-1, 63,0);
        tracep->declBit(c+365,"rvcpu Exe_stage clk", false,-1);
        tracep->declBit(c+366,"rvcpu Exe_stage rst", false,-1);
        tracep->declQuad(c+24,"rvcpu Exe_stage pcE", false,-1, 63,0);
        tracep->declBit(c+295,"rvcpu Exe_stage flushE", false,-1);
        tracep->declBit(c+47,"rvcpu Exe_stage stallE", false,-1);
        tracep->declBus(c+26,"rvcpu Exe_stage instTypeE", false,-1, 9,0);
        tracep->declBus(c+27,"rvcpu Exe_stage instFuncE", false,-1, 13,0);
        tracep->declQuad(c+32,"rvcpu Exe_stage imm", false,-1, 63,0);
        tracep->declQuad(c+28,"rvcpu Exe_stage rs1DataE", false,-1, 63,0);
        tracep->declQuad(c+30,"rvcpu Exe_stage rs2DataE", false,-1, 63,0);
        tracep->declBit(c+6,"rvcpu Exe_stage rdWriteEnableE", false,-1);
        tracep->declBus(c+9,"rvcpu Exe_stage rdWriteAddrE", false,-1, 4,0);
        tracep->declQuad(c+14,"rvcpu Exe_stage rdWriteDataPre1", false,-1, 63,0);
        tracep->declQuad(c+18,"rvcpu Exe_stage rdWriteDataPre2", false,-1, 63,0);
        tracep->declBus(c+43,"rvcpu Exe_stage Redirect1", false,-1, 1,0);
        tracep->declBus(c+44,"rvcpu Exe_stage Redirect2", false,-1, 1,0);
        tracep->declBus(c+45,"rvcpu Exe_stage LoadRedirect", false,-1, 1,0);
        tracep->declBus(c+23,"rvcpu Exe_stage memFuncE", false,-1, 10,0);
        tracep->declBit(c+10,"rvcpu Exe_stage RamReadEnableE", false,-1);
        tracep->declBit(c+11,"rvcpu Exe_stage RamWriteEnableE", false,-1);
        tracep->declBus(c+34,"rvcpu Exe_stage memFuncM", false,-1, 10,0);
        tracep->declQuad(c+35,"rvcpu Exe_stage RamWriteAddrM", false,-1, 63,0);
        tracep->declQuad(c+37,"rvcpu Exe_stage RamWriteDataM", false,-1, 63,0);
        tracep->declQuad(c+39,"rvcpu Exe_stage RamReadAddrM", false,-1, 63,0);
        tracep->declBit(c+42,"rvcpu Exe_stage RamReadEnableM", false,-1);
        tracep->declBit(c+41,"rvcpu Exe_stage RamWriteEnableM", false,-1);
        tracep->declBit(c+12,"rvcpu Exe_stage rdWriteEnableM", false,-1);
        tracep->declBus(c+13,"rvcpu Exe_stage rdWriteAddrM", false,-1, 4,0);
        tracep->declBus(c+483,"rvcpu Exe_stage instTypeM", false,-1, 9,0);
        tracep->declQuad(c+14,"rvcpu Exe_stage rdWriteDataM", false,-1, 63,0);
        tracep->declBit(c+46,"rvcpu Exe_stage load", false,-1);
        tracep->declBit(c+1,"rvcpu Exe_stage jump", false,-1);
        tracep->declQuad(c+2,"rvcpu Exe_stage jumpAddr", false,-1, 63,0);
        tracep->declQuad(c+180,"rvcpu Exe_stage rs1Data", false,-1, 63,0);
        tracep->declQuad(c+182,"rvcpu Exe_stage rs2Data", false,-1, 63,0);
        tracep->declQuad(c+180,"rvcpu Exe_stage op1", false,-1, 63,0);
        tracep->declQuad(c+184,"rvcpu Exe_stage op2", false,-1, 63,0);
        tracep->declQuad(c+186,"rvcpu Exe_stage adder1", false,-1, 63,0);
        tracep->declQuad(c+188,"rvcpu Exe_stage adder2", false,-1, 63,0);
        tracep->declQuad(c+190,"rvcpu Exe_stage resADD", false,-1, 63,0);
        tracep->declQuad(c+192,"rvcpu Exe_stage resSUB", false,-1, 63,0);
        tracep->declQuad(c+194,"rvcpu Exe_stage resSLL", false,-1, 63,0);
        tracep->declQuad(c+196,"rvcpu Exe_stage resLES", false,-1, 63,0);
        tracep->declQuad(c+198,"rvcpu Exe_stage resLESU", false,-1, 63,0);
        tracep->declQuad(c+200,"rvcpu Exe_stage resSRL", false,-1, 63,0);
        tracep->declQuad(c+202,"rvcpu Exe_stage resSRA", false,-1, 63,0);
        tracep->declQuad(c+204,"rvcpu Exe_stage resXOR", false,-1, 63,0);
        tracep->declQuad(c+206,"rvcpu Exe_stage resOR", false,-1, 63,0);
        tracep->declQuad(c+208,"rvcpu Exe_stage resAND", false,-1, 63,0);
        tracep->declQuad(c+210,"rvcpu Exe_stage resBIG", false,-1, 63,0);
        tracep->declQuad(c+212,"rvcpu Exe_stage resBIGU", false,-1, 63,0);
        tracep->declQuad(c+214,"rvcpu Exe_stage resEQ", false,-1, 63,0);
        tracep->declQuad(c+216,"rvcpu Exe_stage resNEQ", false,-1, 63,0);
        tracep->declQuad(c+218,"rvcpu Exe_stage result", false,-1, 63,0);
        tracep->declQuad(c+452,"rvcpu Exe_stage RamWriteAddrM_r", false,-1, 63,0);
        tracep->declQuad(c+454,"rvcpu Exe_stage RamWriteDataM_r", false,-1, 63,0);
        tracep->declQuad(c+452,"rvcpu Exe_stage RamReadAddrM_r", false,-1, 63,0);
        tracep->declBit(c+220,"rvcpu Exe_stage resBranch", false,-1);
        tracep->declBit(c+296,"rvcpu Exe_stage jump_r", false,-1);
        tracep->declQuad(c+229,"rvcpu Exe_stage jumpAddr_r", false,-1, 63,0);
        tracep->declQuad(c+221,"rvcpu Exe_stage pcSave", false,-1, 63,0);
        tracep->declBit(c+6,"rvcpu Exe_stage rdWriteEnableE_r", false,-1);
        tracep->declQuad(c+456,"rvcpu Exe_stage rdWriteDataM_r", false,-1, 63,0);
        tracep->declBus(c+489,"rvcpu Exe_stage memFuncM_clk_diff DW", false,-1, 31,0);
        tracep->declBus(c+23,"rvcpu Exe_stage memFuncM_clk_diff din", false,-1, 10,0);
        tracep->declBus(c+34,"rvcpu Exe_stage memFuncM_clk_diff qout", false,-1, 10,0);
        tracep->declBit(c+47,"rvcpu Exe_stage memFuncM_clk_diff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Exe_stage memFuncM_clk_diff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Exe_stage memFuncM_clk_diff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Exe_stage memFuncM_clk_diff rst", false,-1);
        tracep->declBus(c+34,"rvcpu Exe_stage memFuncM_clk_diff qout_r", false,-1, 10,0);
        tracep->declBus(c+484,"rvcpu Exe_stage RamWriteAddrM_clk_diff DW", false,-1, 31,0);
        tracep->declQuad(c+452,"rvcpu Exe_stage RamWriteAddrM_clk_diff din", false,-1, 63,0);
        tracep->declQuad(c+35,"rvcpu Exe_stage RamWriteAddrM_clk_diff qout", false,-1, 63,0);
        tracep->declBit(c+47,"rvcpu Exe_stage RamWriteAddrM_clk_diff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Exe_stage RamWriteAddrM_clk_diff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Exe_stage RamWriteAddrM_clk_diff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Exe_stage RamWriteAddrM_clk_diff rst", false,-1);
        tracep->declQuad(c+35,"rvcpu Exe_stage RamWriteAddrM_clk_diff qout_r", false,-1, 63,0);
        tracep->declBus(c+484,"rvcpu Exe_stage RamWriteDataM_clk_diff DW", false,-1, 31,0);
        tracep->declQuad(c+454,"rvcpu Exe_stage RamWriteDataM_clk_diff din", false,-1, 63,0);
        tracep->declQuad(c+37,"rvcpu Exe_stage RamWriteDataM_clk_diff qout", false,-1, 63,0);
        tracep->declBit(c+47,"rvcpu Exe_stage RamWriteDataM_clk_diff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Exe_stage RamWriteDataM_clk_diff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Exe_stage RamWriteDataM_clk_diff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Exe_stage RamWriteDataM_clk_diff rst", false,-1);
        tracep->declQuad(c+37,"rvcpu Exe_stage RamWriteDataM_clk_diff qout_r", false,-1, 63,0);
        tracep->declBus(c+484,"rvcpu Exe_stage RamReadAddrM_clk_diff DW", false,-1, 31,0);
        tracep->declQuad(c+452,"rvcpu Exe_stage RamReadAddrM_clk_diff din", false,-1, 63,0);
        tracep->declQuad(c+39,"rvcpu Exe_stage RamReadAddrM_clk_diff qout", false,-1, 63,0);
        tracep->declBit(c+47,"rvcpu Exe_stage RamReadAddrM_clk_diff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Exe_stage RamReadAddrM_clk_diff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Exe_stage RamReadAddrM_clk_diff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Exe_stage RamReadAddrM_clk_diff rst", false,-1);
        tracep->declQuad(c+39,"rvcpu Exe_stage RamReadAddrM_clk_diff qout_r", false,-1, 63,0);
        tracep->declBus(c+486,"rvcpu Exe_stage RamReadEnableM_clk_diff DW", false,-1, 31,0);
        tracep->declBus(c+10,"rvcpu Exe_stage RamReadEnableM_clk_diff din", false,-1, 0,0);
        tracep->declBus(c+42,"rvcpu Exe_stage RamReadEnableM_clk_diff qout", false,-1, 0,0);
        tracep->declBit(c+47,"rvcpu Exe_stage RamReadEnableM_clk_diff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Exe_stage RamReadEnableM_clk_diff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Exe_stage RamReadEnableM_clk_diff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Exe_stage RamReadEnableM_clk_diff rst", false,-1);
        tracep->declBus(c+42,"rvcpu Exe_stage RamReadEnableM_clk_diff qout_r", false,-1, 0,0);
        tracep->declBus(c+486,"rvcpu Exe_stage RamWriteEnableM_clk_diff DW", false,-1, 31,0);
        tracep->declBus(c+11,"rvcpu Exe_stage RamWriteEnableM_clk_diff din", false,-1, 0,0);
        tracep->declBus(c+41,"rvcpu Exe_stage RamWriteEnableM_clk_diff qout", false,-1, 0,0);
        tracep->declBit(c+47,"rvcpu Exe_stage RamWriteEnableM_clk_diff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Exe_stage RamWriteEnableM_clk_diff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Exe_stage RamWriteEnableM_clk_diff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Exe_stage RamWriteEnableM_clk_diff rst", false,-1);
        tracep->declBus(c+41,"rvcpu Exe_stage RamWriteEnableM_clk_diff qout_r", false,-1, 0,0);
        tracep->declBus(c+486,"rvcpu Exe_stage jump_dff DW", false,-1, 31,0);
        tracep->declBus(c+296,"rvcpu Exe_stage jump_dff din", false,-1, 0,0);
        tracep->declBus(c+1,"rvcpu Exe_stage jump_dff qout", false,-1, 0,0);
        tracep->declBit(c+47,"rvcpu Exe_stage jump_dff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Exe_stage jump_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Exe_stage jump_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Exe_stage jump_dff rst", false,-1);
        tracep->declBus(c+1,"rvcpu Exe_stage jump_dff qout_r", false,-1, 0,0);
        tracep->declBus(c+484,"rvcpu Exe_stage pcM_dff DW", false,-1, 31,0);
        tracep->declQuad(c+229,"rvcpu Exe_stage pcM_dff din", false,-1, 63,0);
        tracep->declQuad(c+2,"rvcpu Exe_stage pcM_dff qout", false,-1, 63,0);
        tracep->declBit(c+47,"rvcpu Exe_stage pcM_dff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Exe_stage pcM_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Exe_stage pcM_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Exe_stage pcM_dff rst", false,-1);
        tracep->declQuad(c+2,"rvcpu Exe_stage pcM_dff qout_r", false,-1, 63,0);
        tracep->declBus(c+484,"rvcpu Exe_stage rdWriteDataE_clk_diff DW", false,-1, 31,0);
        tracep->declQuad(c+456,"rvcpu Exe_stage rdWriteDataE_clk_diff din", false,-1, 63,0);
        tracep->declQuad(c+14,"rvcpu Exe_stage rdWriteDataE_clk_diff qout", false,-1, 63,0);
        tracep->declBit(c+47,"rvcpu Exe_stage rdWriteDataE_clk_diff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Exe_stage rdWriteDataE_clk_diff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Exe_stage rdWriteDataE_clk_diff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Exe_stage rdWriteDataE_clk_diff rst", false,-1);
        tracep->declQuad(c+14,"rvcpu Exe_stage rdWriteDataE_clk_diff qout_r", false,-1, 63,0);
        tracep->declBus(c+491,"rvcpu Exe_stage rd_r_clk_diff DW", false,-1, 31,0);
        tracep->declBus(c+179,"rvcpu Exe_stage rd_r_clk_diff din", false,-1, 5,0);
        tracep->declBus(c+223,"rvcpu Exe_stage rd_r_clk_diff qout", false,-1, 5,0);
        tracep->declBit(c+47,"rvcpu Exe_stage rd_r_clk_diff stall", false,-1);
        tracep->declBit(c+295,"rvcpu Exe_stage rd_r_clk_diff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Exe_stage rd_r_clk_diff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Exe_stage rd_r_clk_diff rst", false,-1);
        tracep->declBus(c+223,"rvcpu Exe_stage rd_r_clk_diff qout_r", false,-1, 5,0);
        tracep->declBit(c+366,"rvcpu Mem_stage rst", false,-1);
        tracep->declBit(c+365,"rvcpu Mem_stage clk", false,-1);
        tracep->declBus(c+34,"rvcpu Mem_stage memFuncM", false,-1, 10,0);
        tracep->declQuad(c+35,"rvcpu Mem_stage RamWriteAddrM", false,-1, 63,0);
        tracep->declQuad(c+37,"rvcpu Mem_stage RamWriteDataM", false,-1, 63,0);
        tracep->declQuad(c+39,"rvcpu Mem_stage RamReadAddrM", false,-1, 63,0);
        tracep->declBit(c+42,"rvcpu Mem_stage RamReadEnableM", false,-1);
        tracep->declBit(c+41,"rvcpu Mem_stage RamWriteEnableM", false,-1);
        tracep->declQuad(c+368,"rvcpu Mem_stage RamReadDataM", false,-1, 63,0);
        tracep->declQuad(c+376,"rvcpu Mem_stage RamWriteAddr", false,-1, 63,0);
        tracep->declQuad(c+378,"rvcpu Mem_stage RamWriteData", false,-1, 63,0);
        tracep->declQuad(c+372,"rvcpu Mem_stage RamReadAddr", false,-1, 63,0);
        tracep->declBit(c+370,"rvcpu Mem_stage RamReadEnable", false,-1);
        tracep->declBit(c+371,"rvcpu Mem_stage RamWriteEnable", false,-1);
        tracep->declQuad(c+374,"rvcpu Mem_stage RamWriteMask", false,-1, 63,0);
        tracep->declBit(c+12,"rvcpu Mem_stage rdWriteEnableM", false,-1);
        tracep->declBus(c+13,"rvcpu Mem_stage rdWriteAddrM", false,-1, 4,0);
        tracep->declQuad(c+14,"rvcpu Mem_stage rdWriteDataM", false,-1, 63,0);
        tracep->declBit(c+16,"rvcpu Mem_stage rdWriteEnableW", false,-1);
        tracep->declBus(c+17,"rvcpu Mem_stage rdWriteAddrW", false,-1, 4,0);
        tracep->declQuad(c+18,"rvcpu Mem_stage rdWriteDataW", false,-1, 63,0);
        tracep->declQuad(c+297,"rvcpu Mem_stage result", false,-1, 63,0);
        tracep->declQuad(c+224,"rvcpu Mem_stage RamWriteMask_r", false,-1, 63,0);
        tracep->declQuad(c+458,"rvcpu Mem_stage rd8", false,-1, 63,0);
        tracep->declQuad(c+460,"rvcpu Mem_stage rd8u", false,-1, 63,0);
        tracep->declQuad(c+462,"rvcpu Mem_stage rd16", false,-1, 63,0);
        tracep->declQuad(c+464,"rvcpu Mem_stage rd16u", false,-1, 63,0);
        tracep->declQuad(c+466,"rvcpu Mem_stage rd32", false,-1, 63,0);
        tracep->declQuad(c+468,"rvcpu Mem_stage rd32u", false,-1, 63,0);
        tracep->declQuad(c+470,"rvcpu Mem_stage rd64", false,-1, 63,0);
        tracep->declQuad(c+299,"rvcpu Mem_stage rdWriteDataM_r", false,-1, 63,0);
        tracep->declBus(c+486,"rvcpu Mem_stage rdWriteEnableW_clk_diff DW", false,-1, 31,0);
        tracep->declBus(c+12,"rvcpu Mem_stage rdWriteEnableW_clk_diff din", false,-1, 0,0);
        tracep->declBus(c+16,"rvcpu Mem_stage rdWriteEnableW_clk_diff qout", false,-1, 0,0);
        tracep->declBit(c+485,"rvcpu Mem_stage rdWriteEnableW_clk_diff stall", false,-1);
        tracep->declBit(c+485,"rvcpu Mem_stage rdWriteEnableW_clk_diff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Mem_stage rdWriteEnableW_clk_diff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Mem_stage rdWriteEnableW_clk_diff rst", false,-1);
        tracep->declBus(c+16,"rvcpu Mem_stage rdWriteEnableW_clk_diff qout_r", false,-1, 0,0);
        tracep->declBus(c+492,"rvcpu Mem_stage rdWriteAddrW_clk_diff DW", false,-1, 31,0);
        tracep->declBus(c+13,"rvcpu Mem_stage rdWriteAddrW_clk_diff din", false,-1, 4,0);
        tracep->declBus(c+17,"rvcpu Mem_stage rdWriteAddrW_clk_diff qout", false,-1, 4,0);
        tracep->declBit(c+485,"rvcpu Mem_stage rdWriteAddrW_clk_diff stall", false,-1);
        tracep->declBit(c+485,"rvcpu Mem_stage rdWriteAddrW_clk_diff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Mem_stage rdWriteAddrW_clk_diff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Mem_stage rdWriteAddrW_clk_diff rst", false,-1);
        tracep->declBus(c+17,"rvcpu Mem_stage rdWriteAddrW_clk_diff qout_r", false,-1, 4,0);
        tracep->declBus(c+484,"rvcpu Mem_stage rdWriteDataW_clk_diff DW", false,-1, 31,0);
        tracep->declQuad(c+299,"rvcpu Mem_stage rdWriteDataW_clk_diff din", false,-1, 63,0);
        tracep->declQuad(c+18,"rvcpu Mem_stage rdWriteDataW_clk_diff qout", false,-1, 63,0);
        tracep->declBit(c+485,"rvcpu Mem_stage rdWriteDataW_clk_diff stall", false,-1);
        tracep->declBit(c+485,"rvcpu Mem_stage rdWriteDataW_clk_diff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Mem_stage rdWriteDataW_clk_diff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Mem_stage rdWriteDataW_clk_diff rst", false,-1);
        tracep->declQuad(c+18,"rvcpu Mem_stage rdWriteDataW_clk_diff qout_r", false,-1, 63,0);
        tracep->declBit(c+365,"rvcpu Regfile clk", false,-1);
        tracep->declBit(c+366,"rvcpu Regfile rst", false,-1);
        tracep->declBus(c+17,"rvcpu Regfile WriteAddr", false,-1, 4,0);
        tracep->declQuad(c+18,"rvcpu Regfile WriteData", false,-1, 63,0);
        tracep->declBit(c+16,"rvcpu Regfile WriteEnable", false,-1);
        tracep->declBus(c+7,"rvcpu Regfile ReadAddr1", false,-1, 4,0);
        tracep->declQuad(c+447,"rvcpu Regfile ReadData1", false,-1, 63,0);
        tracep->declBit(c+4,"rvcpu Regfile ReadEnable1", false,-1);
        tracep->declBus(c+8,"rvcpu Regfile ReadAddr2", false,-1, 4,0);
        tracep->declQuad(c+449,"rvcpu Regfile ReadData2", false,-1, 63,0);
        tracep->declBit(c+5,"rvcpu Regfile ReadEnable2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+301+i*2,"rvcpu Regfile regs_o", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+231+i*2,"rvcpu Regfile regs", true,(i+0), 63,0);}}
        tracep->declBit(c+1,"rvcpu Ctrl jump", false,-1);
        tracep->declBit(c+46,"rvcpu Ctrl load", false,-1);
        tracep->declBit(c+365,"rvcpu Ctrl clk", false,-1);
        tracep->declBit(c+366,"rvcpu Ctrl rst", false,-1);
        tracep->declBus(c+9,"rvcpu Ctrl rdWriteAddrE", false,-1, 4,0);
        tracep->declBus(c+13,"rvcpu Ctrl rdWriteAddrM", false,-1, 4,0);
        tracep->declBit(c+4,"rvcpu Ctrl rs1ReadEnable", false,-1);
        tracep->declBit(c+5,"rvcpu Ctrl rs2ReadEnable", false,-1);
        tracep->declBus(c+7,"rvcpu Ctrl rs1ReadAddr", false,-1, 4,0);
        tracep->declBus(c+8,"rvcpu Ctrl rs2ReadAddr", false,-1, 4,0);
        tracep->declBus(c+43,"rvcpu Ctrl Redirect1", false,-1, 1,0);
        tracep->declBus(c+44,"rvcpu Ctrl Redirect2", false,-1, 1,0);
        tracep->declBus(c+45,"rvcpu Ctrl LoadRedirect", false,-1, 1,0);
        tracep->declBit(c+295,"rvcpu Ctrl flushD", false,-1);
        tracep->declBit(c+295,"rvcpu Ctrl flushE", false,-1);
        tracep->declBit(c+47,"rvcpu Ctrl stallF", false,-1);
        tracep->declBit(c+47,"rvcpu Ctrl stallD", false,-1);
        tracep->declBit(c+47,"rvcpu Ctrl stallE", false,-1);
        tracep->declBus(c+226,"rvcpu Ctrl Redirect1_r", false,-1, 1,0);
        tracep->declBus(c+227,"rvcpu Ctrl ReadLoad", false,-1, 1,0);
        tracep->declBus(c+228,"rvcpu Ctrl Redirect2_r", false,-1, 1,0);
        tracep->declBit(c+472,"rvcpu Ctrl stallF_r", false,-1);
        tracep->declBit(c+472,"rvcpu Ctrl stallD_r", false,-1);
        tracep->declBit(c+472,"rvcpu Ctrl stallE_r", false,-1);
        tracep->declBit(c+472,"rvcpu Ctrl stallC_r", false,-1);
        tracep->declBit(c+47,"rvcpu Ctrl stallC", false,-1);
        tracep->declBus(c+486,"rvcpu Ctrl stallF_dff DW", false,-1, 31,0);
        tracep->declBus(c+472,"rvcpu Ctrl stallF_dff din", false,-1, 0,0);
        tracep->declBus(c+47,"rvcpu Ctrl stallF_dff qout", false,-1, 0,0);
        tracep->declBit(c+485,"rvcpu Ctrl stallF_dff stall", false,-1);
        tracep->declBit(c+485,"rvcpu Ctrl stallF_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Ctrl stallF_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Ctrl stallF_dff rst", false,-1);
        tracep->declBus(c+47,"rvcpu Ctrl stallF_dff qout_r", false,-1, 0,0);
        tracep->declBus(c+486,"rvcpu Ctrl stallD_dff DW", false,-1, 31,0);
        tracep->declBus(c+472,"rvcpu Ctrl stallD_dff din", false,-1, 0,0);
        tracep->declBus(c+47,"rvcpu Ctrl stallD_dff qout", false,-1, 0,0);
        tracep->declBit(c+485,"rvcpu Ctrl stallD_dff stall", false,-1);
        tracep->declBit(c+485,"rvcpu Ctrl stallD_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Ctrl stallD_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Ctrl stallD_dff rst", false,-1);
        tracep->declBus(c+47,"rvcpu Ctrl stallD_dff qout_r", false,-1, 0,0);
        tracep->declBus(c+486,"rvcpu Ctrl stallE_dff DW", false,-1, 31,0);
        tracep->declBus(c+472,"rvcpu Ctrl stallE_dff din", false,-1, 0,0);
        tracep->declBus(c+47,"rvcpu Ctrl stallE_dff qout", false,-1, 0,0);
        tracep->declBit(c+485,"rvcpu Ctrl stallE_dff stall", false,-1);
        tracep->declBit(c+485,"rvcpu Ctrl stallE_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Ctrl stallE_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Ctrl stallE_dff rst", false,-1);
        tracep->declBus(c+47,"rvcpu Ctrl stallE_dff qout_r", false,-1, 0,0);
        tracep->declBus(c+486,"rvcpu Ctrl stallC_dff DW", false,-1, 31,0);
        tracep->declBus(c+472,"rvcpu Ctrl stallC_dff din", false,-1, 0,0);
        tracep->declBus(c+47,"rvcpu Ctrl stallC_dff qout", false,-1, 0,0);
        tracep->declBit(c+485,"rvcpu Ctrl stallC_dff stall", false,-1);
        tracep->declBit(c+485,"rvcpu Ctrl stallC_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Ctrl stallC_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Ctrl stallC_dff rst", false,-1);
        tracep->declBus(c+47,"rvcpu Ctrl stallC_dff qout_r", false,-1, 0,0);
        tracep->declBus(c+493,"rvcpu Ctrl ReadLoad2_dff DW", false,-1, 31,0);
        tracep->declBus(c+227,"rvcpu Ctrl ReadLoad2_dff din", false,-1, 1,0);
        tracep->declBus(c+45,"rvcpu Ctrl ReadLoad2_dff qout", false,-1, 1,0);
        tracep->declBit(c+47,"rvcpu Ctrl ReadLoad2_dff stall", false,-1);
        tracep->declBit(c+485,"rvcpu Ctrl ReadLoad2_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Ctrl ReadLoad2_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Ctrl ReadLoad2_dff rst", false,-1);
        tracep->declBus(c+45,"rvcpu Ctrl ReadLoad2_dff qout_r", false,-1, 1,0);
        tracep->declBus(c+493,"rvcpu Ctrl Redirect1_dff DW", false,-1, 31,0);
        tracep->declBus(c+226,"rvcpu Ctrl Redirect1_dff din", false,-1, 1,0);
        tracep->declBus(c+43,"rvcpu Ctrl Redirect1_dff qout", false,-1, 1,0);
        tracep->declBit(c+47,"rvcpu Ctrl Redirect1_dff stall", false,-1);
        tracep->declBit(c+485,"rvcpu Ctrl Redirect1_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Ctrl Redirect1_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Ctrl Redirect1_dff rst", false,-1);
        tracep->declBus(c+43,"rvcpu Ctrl Redirect1_dff qout_r", false,-1, 1,0);
        tracep->declBus(c+493,"rvcpu Ctrl Redirect2_dff DW", false,-1, 31,0);
        tracep->declBus(c+228,"rvcpu Ctrl Redirect2_dff din", false,-1, 1,0);
        tracep->declBus(c+44,"rvcpu Ctrl Redirect2_dff qout", false,-1, 1,0);
        tracep->declBit(c+47,"rvcpu Ctrl Redirect2_dff stall", false,-1);
        tracep->declBit(c+485,"rvcpu Ctrl Redirect2_dff flush", false,-1);
        tracep->declBit(c+365,"rvcpu Ctrl Redirect2_dff clk", false,-1);
        tracep->declBit(c+366,"rvcpu Ctrl Redirect2_dff rst", false,-1);
        tracep->declBus(c+44,"rvcpu Ctrl Redirect2_dff qout_r", false,-1, 1,0);
    }
}

void Vrvcpu::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vrvcpu::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vrvcpu__Syms* __restrict vlSymsp = static_cast<Vrvcpu__Syms*>(userp);
    Vrvcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vrvcpu::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vrvcpu__Syms* __restrict vlSymsp = static_cast<Vrvcpu__Syms*>(userp);
    Vrvcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__jump_dff__DOT__qout_r));
        tracep->fullQData(oldp+2,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r),64);
        tracep->fullBit(oldp+4,(vlTOPp->rvcpu__DOT__rs1ReadEnable));
        tracep->fullBit(oldp+5,(vlTOPp->rvcpu__DOT__rs2ReadEnable));
        tracep->fullBit(oldp+6,((1U & ((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r) 
                                       >> 5U))));
        tracep->fullCData(oldp+7,(vlTOPp->rvcpu__DOT__rs1ReadAddr),5);
        tracep->fullCData(oldp+8,(vlTOPp->rvcpu__DOT__rs2ReadAddr),5);
        tracep->fullCData(oldp+9,((0x1fU & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r))),5);
        tracep->fullBit(oldp+10,(vlTOPp->rvcpu__DOT__Id_stage__DOT__RamReadEnableE_dff__DOT__qout_r));
        tracep->fullBit(oldp+11,(vlTOPp->rvcpu__DOT__Id_stage__DOT__RamWriteEnableE_dff__DOT__qout_r));
        tracep->fullBit(oldp+12,((1U & ((IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r) 
                                        >> 5U))));
        tracep->fullCData(oldp+13,((0x1fU & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r))),5);
        tracep->fullQData(oldp+14,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r),64);
        tracep->fullBit(oldp+16,(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r));
        tracep->fullCData(oldp+17,(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r),5);
        tracep->fullQData(oldp+18,(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r),64);
        tracep->fullIData(oldp+20,(vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r),32);
        tracep->fullQData(oldp+21,(vlTOPp->rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r),64);
        tracep->fullSData(oldp+23,(vlTOPp->rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r),11);
        tracep->fullQData(oldp+24,(vlTOPp->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r),64);
        tracep->fullSData(oldp+26,(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r),10);
        tracep->fullSData(oldp+27,(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r),14);
        tracep->fullQData(oldp+28,(vlTOPp->rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r),64);
        tracep->fullQData(oldp+30,(vlTOPp->rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r),64);
        tracep->fullQData(oldp+32,(vlTOPp->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r),64);
        tracep->fullSData(oldp+34,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r),11);
        tracep->fullQData(oldp+35,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r),64);
        tracep->fullQData(oldp+37,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r),64);
        tracep->fullQData(oldp+39,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r),64);
        tracep->fullBit(oldp+41,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamWriteEnableM_clk_diff__DOT__qout_r));
        tracep->fullBit(oldp+42,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamReadEnableM_clk_diff__DOT__qout_r));
        tracep->fullCData(oldp+43,(vlTOPp->rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r),2);
        tracep->fullCData(oldp+44,(vlTOPp->rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r),2);
        tracep->fullCData(oldp+45,(vlTOPp->rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r),2);
        tracep->fullBit(oldp+46,((1U & ((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                        >> 4U))));
        tracep->fullBit(oldp+47,(vlTOPp->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r));
        tracep->fullQData(oldp+48,(vlTOPp->rvcpu__DOT__If_stage__DOT__pc),64);
        tracep->fullBit(oldp+50,(vlTOPp->rvcpu__DOT__If_stage__DOT__pcEnableF_dff__DOT__qout_r));
        tracep->fullCData(oldp+51,((0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)),7);
        tracep->fullCData(oldp+52,((0x1fU & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                             >> 7U))),5);
        tracep->fullCData(oldp+53,((7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+54,((0x7fU & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                             >> 0x19U))),7);
        tracep->fullCData(oldp+55,((0x3fU & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                             >> 0x1aU))),6);
        tracep->fullCData(oldp+56,((0x1fU & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+57,((0x1fU & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+58,(((0xfffffffffffff000ULL 
                                     & ((- (QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                               >> 0x1fU))))) 
                                        << 0xcU)) | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                        >> 0x14U)))))),64);
        tracep->fullQData(oldp+60,(((0xfffffffffffff000ULL 
                                     & ((- (QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                               >> 0x1fU))))) 
                                        << 0xcU)) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                           >> 7U))))))),64);
        tracep->fullQData(oldp+62,(((0xffffffffffffe000ULL 
                                     & ((- (QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                               >> 0x1fU))))) 
                                        << 0xdU)) | (QData)((IData)(
                                                                    ((0x1000U 
                                                                      & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                         >> 0x13U)) 
                                                                     | ((0x800U 
                                                                         & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                                >> 7U))))))))),64);
        tracep->fullQData(oldp+64,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                    >> 0x1fU)))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))),64);
        tracep->fullQData(oldp+66,(((0xffffffffffe00000ULL 
                                     & ((- (QData)((IData)(
                                                           (1U 
                                                            & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                               >> 0x1fU))))) 
                                        << 0x15U)) 
                                    | (QData)((IData)(
                                                      ((0x100000U 
                                                        & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                           >> 0xbU)) 
                                                       | ((0xff000U 
                                                           & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r) 
                                                          | ((0x800U 
                                                              & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                   >> 0x14U))))))))),64);
        tracep->fullBit(oldp+68,((0U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->fullBit(oldp+69,((1U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->fullBit(oldp+70,((2U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->fullBit(oldp+71,((3U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->fullBit(oldp+72,((4U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->fullBit(oldp+73,((5U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->fullBit(oldp+74,((6U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->fullBit(oldp+75,((7U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->fullBit(oldp+76,((0U == (0x7fU & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                  >> 0x19U)))));
        tracep->fullBit(oldp+77,((0x20U == (0x7fU & 
                                            (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+78,((0U == (0x3fU & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                  >> 0x1aU)))));
        tracep->fullBit(oldp+79,((0x10U == (0x3fU & 
                                            (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                             >> 0x1aU)))));
        tracep->fullBit(oldp+80,((3U == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+81,((7U == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+82,((0xbU == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+83,((0xfU == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+84,((0x13U == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+85,((0x17U == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+86,((0x1bU == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+87,((0x1fU == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+88,((0x23U == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+89,((0x27U == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+90,((0x2bU == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+91,((0x2fU == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+92,((0x33U == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+93,((0x37U == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+94,((0x3bU == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+95,((0x3fU == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+96,((0x43U == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+97,((0x47U == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+98,((0x4bU == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+99,((0x4fU == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+100,((0x53U == (0x7fU 
                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+101,((0x57U == (0x7fU 
                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+102,((0x5bU == (0x7fU 
                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+103,((0x5fU == (0x7fU 
                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+104,((0x63U == (0x7fU 
                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+105,((0x67U == (0x7fU 
                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+106,((0x6bU == (0x7fU 
                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+107,((0x6fU == (0x7fU 
                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+108,((0x73U == (0x7fU 
                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->fullBit(oldp+109,(vlTOPp->rvcpu__DOT__Id_stage__DOT__Rtype));
        tracep->fullBit(oldp+110,(vlTOPp->rvcpu__DOT__Id_stage__DOT__Itype));
        tracep->fullBit(oldp+111,(vlTOPp->rvcpu__DOT__Id_stage__DOT__Utype));
        tracep->fullBit(oldp+112,(((0x67U == (0x7fU 
                                              & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                   | (0x6fU == (0x7fU 
                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+113,(((0x13U == (0x7fU 
                                              & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                   | (0x1bU == (0x7fU 
                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+114,(((0x33U == (0x7fU 
                                              & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                   | (0x3bU == (0x7fU 
                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+115,(((0x1bU == (0x7fU 
                                              & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                   | (0x3bU == (0x7fU 
                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullSData(oldp+116,((((0x37U == (0x7fU 
                                                 & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                      << 9U) | (((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                 << 8U) 
                                                | (((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                    << 7U) 
                                                   | (((IData)(
                                                               (0x206fU 
                                                                == 
                                                                (0x707fU 
                                                                 & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                       << 6U) 
                                                      | (((0x63U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                          << 5U) 
                                                         | (((3U 
                                                              == 
                                                              (0x7fU 
                                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                             << 4U) 
                                                            | (((0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                << 3U) 
                                                               | ((((0x13U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                    | (0x1bU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                   << 2U) 
                                                                  | ((((0x33U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                       | (0x3bU 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                      << 1U) 
                                                                     | ((0x1bU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                        | (0x3bU 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))))))))))),10);
        tracep->fullBit(oldp+117,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+118,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+119,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+120,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+121,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+122,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+123,((IData)((0x1013U 
                                           == (0xfc00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+124,((IData)((0x5013U 
                                           == (0xfc00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+125,((IData)((0x40005013U 
                                           == (0xfc00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+126,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+127,((IData)((0x101bU 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+128,((IData)((0x501bU 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+129,((IData)((0x4000501bU 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+130,((IData)((0x206fU 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+131,((IData)((0x33U == 
                                           (0xfe00707fU 
                                            & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+132,((IData)((0x40000033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+133,((IData)((0x1033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+134,((IData)((0x2033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+135,((IData)((0x3033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+136,((IData)((0x4033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+137,((IData)((0x5033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+138,((IData)((0x40005033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+139,((IData)((0x6033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+140,((IData)((0x7033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+141,((IData)((0x3bU == 
                                           (0xfe00707fU 
                                            & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+142,((IData)((0x4000003bU 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+143,((IData)((0x103bU 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+144,((IData)((0x503bU 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+145,((IData)((0x4000503bU 
                                           == (0xfe00707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+146,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+147,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+148,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+149,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+150,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+151,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+152,((IData)((3U == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+153,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+154,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+155,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+156,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+157,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+158,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+159,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+160,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+161,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+162,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullSData(oldp+163,(vlTOPp->rvcpu__DOT__Id_stage__DOT__memFuncE_r),11);
        tracep->fullSData(oldp+164,(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_r),14);
        tracep->fullBit(oldp+165,((IData)((0xfU == 
                                           (0x707fU 
                                            & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+166,((IData)((0x100fU 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullCData(oldp+167,((((IData)((0xfU 
                                               == (0x707fU 
                                                   & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                      << 1U) | (IData)(
                                                       (0x100fU 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))),2);
        tracep->fullBit(oldp+168,((IData)((0x1073U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+169,((IData)((0x2073U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+170,((IData)((0x3073U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+171,((IData)((0x5073U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+172,((IData)((0x6073U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+173,((IData)((0x7073U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+174,(vlTOPp->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r));
        tracep->fullCData(oldp+175,(((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                                      ? (0x1fU & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                  >> 7U))
                                      : 0U)),5);
        tracep->fullQData(oldp+176,(vlTOPp->rvcpu__DOT__Id_stage__DOT__imm_r),64);
        tracep->fullCData(oldp+178,((((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r) 
                                      << 5U) | ((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                                                 ? 
                                                (0x1fU 
                                                 & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                    >> 7U))
                                                 : 0U))),6);
        tracep->fullCData(oldp+179,(vlTOPp->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r),6);
        tracep->fullQData(oldp+180,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data),64);
        tracep->fullQData(oldp+182,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs2Data),64);
        tracep->fullQData(oldp+184,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2),64);
        tracep->fullQData(oldp+186,(((IData)((0U != 
                                              (0x1a0U 
                                               & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                      ? vlTOPp->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                                      : vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data)),64);
        tracep->fullQData(oldp+188,(((2U & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                      ? vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs2Data
                                      : vlTOPp->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r)),64);
        tracep->fullQData(oldp+190,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__resADD),64);
        tracep->fullQData(oldp+192,((vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                     - vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)),64);
        tracep->fullQData(oldp+194,((vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                     << (0x3fU & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->fullQData(oldp+196,((QData)((IData)(
                                                    (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                     < vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->fullQData(oldp+198,((QData)((IData)(
                                                    VL_LTS_IQQ(1,64,64, vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data, vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->fullQData(oldp+200,((vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                     >> (0x3fU & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->fullQData(oldp+202,(VL_SHIFTRS_QQI(64,64,6, vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data, 
                                                   (0x3fU 
                                                    & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->fullQData(oldp+204,((vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                     ^ vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)),64);
        tracep->fullQData(oldp+206,((vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                     | vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)),64);
        tracep->fullQData(oldp+208,((vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                     & vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)),64);
        tracep->fullQData(oldp+210,((QData)((IData)(
                                                    (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                     > vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->fullQData(oldp+212,((QData)((IData)(
                                                    VL_GTS_IQQ(1,64,64, vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data, vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->fullQData(oldp+214,((QData)((IData)(
                                                    (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                     == vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->fullQData(oldp+216,((QData)((IData)(
                                                    (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                     != vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->fullQData(oldp+218,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__result),64);
        tracep->fullBit(oldp+220,((1U & (((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                          >> 5U) & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__result)))));
        tracep->fullQData(oldp+221,((4ULL + vlTOPp->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)),64);
        tracep->fullCData(oldp+223,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r),6);
        tracep->fullQData(oldp+224,(vlTOPp->rvcpu__DOT__Mem_stage__DOT__RamWriteMask_r),64);
        tracep->fullCData(oldp+226,(vlTOPp->rvcpu__DOT__Ctrl__DOT__Redirect1_r),2);
        tracep->fullCData(oldp+227,(vlTOPp->rvcpu__DOT__Ctrl__DOT__ReadLoad),2);
        tracep->fullCData(oldp+228,(((~ (IData)(vlTOPp->rvcpu__DOT__Ctrl__DOT__Redirect1_r)) 
                                     & (((((0x1fU & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                           == (IData)(vlTOPp->rvcpu__DOT__rs2ReadAddr)) 
                                          & (IData)(vlTOPp->rvcpu__DOT__rs2ReadEnable)) 
                                         << 1U) | (
                                                   ((0x1fU 
                                                     & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                                    == (IData)(vlTOPp->rvcpu__DOT__rs1ReadAddr)) 
                                                   & (IData)(vlTOPp->rvcpu__DOT__rs1ReadEnable))))),2);
        tracep->fullQData(oldp+229,(((IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__jump_r)
                                      ? vlTOPp->rvcpu__DOT__Exe_stage__DOT__resADD
                                      : 0ULL)),64);
        tracep->fullQData(oldp+231,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+233,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+235,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+237,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+239,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+241,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+243,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+245,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+247,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+249,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+251,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+253,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+255,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+257,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+259,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+261,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+263,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+265,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+267,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+269,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+271,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+273,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+275,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+277,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+279,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+281,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+283,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+285,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+287,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+289,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+291,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+293,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[31]),64);
        tracep->fullBit(oldp+295,(vlTOPp->rvcpu__DOT__flushD));
        tracep->fullBit(oldp+296,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__jump_r));
        tracep->fullQData(oldp+297,(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result),64);
        tracep->fullQData(oldp+299,(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r),64);
        tracep->fullQData(oldp+301,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0]),64);
        tracep->fullQData(oldp+303,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[1]),64);
        tracep->fullQData(oldp+305,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[2]),64);
        tracep->fullQData(oldp+307,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[3]),64);
        tracep->fullQData(oldp+309,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[4]),64);
        tracep->fullQData(oldp+311,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[5]),64);
        tracep->fullQData(oldp+313,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[6]),64);
        tracep->fullQData(oldp+315,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[7]),64);
        tracep->fullQData(oldp+317,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[8]),64);
        tracep->fullQData(oldp+319,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[9]),64);
        tracep->fullQData(oldp+321,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[10]),64);
        tracep->fullQData(oldp+323,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[11]),64);
        tracep->fullQData(oldp+325,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[12]),64);
        tracep->fullQData(oldp+327,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[13]),64);
        tracep->fullQData(oldp+329,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[14]),64);
        tracep->fullQData(oldp+331,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[15]),64);
        tracep->fullQData(oldp+333,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[16]),64);
        tracep->fullQData(oldp+335,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[17]),64);
        tracep->fullQData(oldp+337,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[18]),64);
        tracep->fullQData(oldp+339,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[19]),64);
        tracep->fullQData(oldp+341,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[20]),64);
        tracep->fullQData(oldp+343,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[21]),64);
        tracep->fullQData(oldp+345,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[22]),64);
        tracep->fullQData(oldp+347,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[23]),64);
        tracep->fullQData(oldp+349,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[24]),64);
        tracep->fullQData(oldp+351,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[25]),64);
        tracep->fullQData(oldp+353,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[26]),64);
        tracep->fullQData(oldp+355,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[27]),64);
        tracep->fullQData(oldp+357,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[28]),64);
        tracep->fullQData(oldp+359,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[29]),64);
        tracep->fullQData(oldp+361,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[30]),64);
        tracep->fullQData(oldp+363,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[31]),64);
        tracep->fullBit(oldp+365,(vlTOPp->clk));
        tracep->fullBit(oldp+366,(vlTOPp->rst));
        tracep->fullIData(oldp+367,(vlTOPp->instF),32);
        tracep->fullQData(oldp+368,(vlTOPp->RamReadData),64);
        tracep->fullBit(oldp+370,(vlTOPp->RamReadEnable));
        tracep->fullBit(oldp+371,(vlTOPp->RamWriteEnable));
        tracep->fullQData(oldp+372,(vlTOPp->RamReadAddr),64);
        tracep->fullQData(oldp+374,(vlTOPp->RamWriteMask),64);
        tracep->fullQData(oldp+376,(vlTOPp->RamWriteAddr),64);
        tracep->fullQData(oldp+378,(vlTOPp->RamWriteData),64);
        tracep->fullQData(oldp+380,(vlTOPp->pcF),64);
        tracep->fullBit(oldp+382,(vlTOPp->pcEnableF));
        tracep->fullQData(oldp+383,(vlTOPp->regs_o[0]),64);
        tracep->fullQData(oldp+385,(vlTOPp->regs_o[1]),64);
        tracep->fullQData(oldp+387,(vlTOPp->regs_o[2]),64);
        tracep->fullQData(oldp+389,(vlTOPp->regs_o[3]),64);
        tracep->fullQData(oldp+391,(vlTOPp->regs_o[4]),64);
        tracep->fullQData(oldp+393,(vlTOPp->regs_o[5]),64);
        tracep->fullQData(oldp+395,(vlTOPp->regs_o[6]),64);
        tracep->fullQData(oldp+397,(vlTOPp->regs_o[7]),64);
        tracep->fullQData(oldp+399,(vlTOPp->regs_o[8]),64);
        tracep->fullQData(oldp+401,(vlTOPp->regs_o[9]),64);
        tracep->fullQData(oldp+403,(vlTOPp->regs_o[10]),64);
        tracep->fullQData(oldp+405,(vlTOPp->regs_o[11]),64);
        tracep->fullQData(oldp+407,(vlTOPp->regs_o[12]),64);
        tracep->fullQData(oldp+409,(vlTOPp->regs_o[13]),64);
        tracep->fullQData(oldp+411,(vlTOPp->regs_o[14]),64);
        tracep->fullQData(oldp+413,(vlTOPp->regs_o[15]),64);
        tracep->fullQData(oldp+415,(vlTOPp->regs_o[16]),64);
        tracep->fullQData(oldp+417,(vlTOPp->regs_o[17]),64);
        tracep->fullQData(oldp+419,(vlTOPp->regs_o[18]),64);
        tracep->fullQData(oldp+421,(vlTOPp->regs_o[19]),64);
        tracep->fullQData(oldp+423,(vlTOPp->regs_o[20]),64);
        tracep->fullQData(oldp+425,(vlTOPp->regs_o[21]),64);
        tracep->fullQData(oldp+427,(vlTOPp->regs_o[22]),64);
        tracep->fullQData(oldp+429,(vlTOPp->regs_o[23]),64);
        tracep->fullQData(oldp+431,(vlTOPp->regs_o[24]),64);
        tracep->fullQData(oldp+433,(vlTOPp->regs_o[25]),64);
        tracep->fullQData(oldp+435,(vlTOPp->regs_o[26]),64);
        tracep->fullQData(oldp+437,(vlTOPp->regs_o[27]),64);
        tracep->fullQData(oldp+439,(vlTOPp->regs_o[28]),64);
        tracep->fullQData(oldp+441,(vlTOPp->regs_o[29]),64);
        tracep->fullQData(oldp+443,(vlTOPp->regs_o[30]),64);
        tracep->fullQData(oldp+445,(vlTOPp->regs_o[31]),64);
        tracep->fullQData(oldp+447,(((IData)(vlTOPp->rst)
                                      ? 0ULL : ((IData)(vlTOPp->rvcpu__DOT__rs1ReadEnable)
                                                 ? 
                                                (((IData)(vlTOPp->rvcpu__DOT__rs1ReadAddr) 
                                                  == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                                                  ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                  : 
                                                 vlTOPp->rvcpu__DOT__Regfile__DOT__regs
                                                 [vlTOPp->rvcpu__DOT__rs1ReadAddr])
                                                 : 0ULL))),64);
        tracep->fullQData(oldp+449,(((IData)(vlTOPp->rst)
                                      ? 0ULL : ((IData)(vlTOPp->rvcpu__DOT__rs2ReadEnable)
                                                 ? 
                                                (((IData)(vlTOPp->rvcpu__DOT__rs2ReadAddr) 
                                                  == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                                                  ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                  : 
                                                 vlTOPp->rvcpu__DOT__Regfile__DOT__regs
                                                 [vlTOPp->rvcpu__DOT__rs2ReadAddr])
                                                 : 0ULL))),64);
        tracep->fullBit(oldp+451,((1U & (~ (IData)(vlTOPp->rst)))));
        tracep->fullQData(oldp+452,(((IData)(vlTOPp->rst)
                                      ? 0ULL : vlTOPp->rvcpu__DOT__Exe_stage__DOT__resADD)),64);
        tracep->fullQData(oldp+454,(((IData)(vlTOPp->rst)
                                      ? 0ULL : vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs2Data)),64);
        tracep->fullQData(oldp+456,(((IData)(vlTOPp->rst)
                                      ? 0ULL : ((IData)(
                                                        (0U 
                                                         != 
                                                         (0xc0U 
                                                          & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                                 ? 
                                                (4ULL 
                                                 + vlTOPp->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                  ? (QData)((IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__result))
                                                  : 
                                                 ((0x100U 
                                                   & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                   ? vlTOPp->rvcpu__DOT__Exe_stage__DOT__resADD
                                                   : 
                                                  ((0x200U 
                                                    & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                    ? vlTOPp->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r
                                                    : vlTOPp->rvcpu__DOT__Exe_stage__DOT__result)))))),64);
        tracep->fullQData(oldp+458,(((IData)(vlTOPp->rst)
                                      ? 0ULL : ((0xffffffffffffff00ULL 
                                                 & ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlTOPp->rvcpu__DOT__Mem_stage__DOT__result 
                                                                                >> 7U)))))) 
                                                    << 8U)) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result))))))),64);
        tracep->fullQData(oldp+460,(((IData)(vlTOPp->rst)
                                      ? 0ULL : (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result)))))),64);
        tracep->fullQData(oldp+462,(((IData)(vlTOPp->rst)
                                      ? 0ULL : ((0xffffffffffff0000ULL 
                                                 & ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlTOPp->rvcpu__DOT__Mem_stage__DOT__result 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U)) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result))))))),64);
        tracep->fullQData(oldp+464,(((IData)(vlTOPp->rst)
                                      ? 0ULL : (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result)))))),64);
        tracep->fullQData(oldp+466,(((IData)(vlTOPp->rst)
                                      ? 0ULL : (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlTOPp->rvcpu__DOT__Mem_stage__DOT__result 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result))))),64);
        tracep->fullQData(oldp+468,(((IData)(vlTOPp->rst)
                                      ? 0ULL : (QData)((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result)))),64);
        tracep->fullQData(oldp+470,(((IData)(vlTOPp->rst)
                                      ? 0ULL : vlTOPp->rvcpu__DOT__Mem_stage__DOT__result)),64);
        tracep->fullBit(oldp+472,(((~ (IData)(vlTOPp->rst)) 
                                   & (0U != (IData)(vlTOPp->rvcpu__DOT__Ctrl__DOT__ReadLoad)))));
        tracep->fullQData(oldp+473,(vlTOPp->rvcpu__DOT__RamReadAddrE),64);
        tracep->fullQData(oldp+475,(vlTOPp->rvcpu__DOT__RamWriteAddrE),64);
        tracep->fullQData(oldp+477,(vlTOPp->rvcpu__DOT__RamWriteDataE),64);
        tracep->fullQData(oldp+479,(vlTOPp->rvcpu__DOT__op1E),64);
        tracep->fullQData(oldp+481,(vlTOPp->rvcpu__DOT__op2E),64);
        tracep->fullSData(oldp+483,(vlTOPp->rvcpu__DOT__instTypeM),10);
        tracep->fullIData(oldp+484,(0x40U),32);
        tracep->fullBit(oldp+485,(0U));
        tracep->fullIData(oldp+486,(1U),32);
        tracep->fullIData(oldp+487,(0x20U),32);
        tracep->fullIData(oldp+488,(0xaU),32);
        tracep->fullIData(oldp+489,(0xbU),32);
        tracep->fullIData(oldp+490,(0xeU),32);
        tracep->fullIData(oldp+491,(6U),32);
        tracep->fullIData(oldp+492,(5U),32);
        tracep->fullIData(oldp+493,(2U),32);
    }
}
