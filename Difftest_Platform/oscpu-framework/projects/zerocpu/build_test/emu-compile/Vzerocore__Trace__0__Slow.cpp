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
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+74,"rst", false,-1);
    tracep->declQuad(c+75,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+77,"RamReadEnable", false,-1);
    tracep->declBit(c+78,"RamWriteEnable", false,-1);
    tracep->declQuad(c+79,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+81,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+83,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+85,"RamWriteData", false,-1, 63,0);
    tracep->pushNamePrefix("zerocore ");
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+74,"rst", false,-1);
    tracep->declQuad(c+75,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+77,"RamReadEnable", false,-1);
    tracep->declBit(c+78,"RamWriteEnable", false,-1);
    tracep->declQuad(c+79,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+81,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+83,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+85,"RamWriteData", false,-1, 63,0);
    tracep->declQuad(c+7,"pc", false,-1, 63,0);
    tracep->declBus(c+87,"inst", false,-1, 31,0);
    tracep->declBit(c+101,"aluBsrc", false,-1);
    tracep->declBus(c+2,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+88,"ra_addr", false,-1, 4,0);
    tracep->declBus(c+89,"rb_addr", false,-1, 4,0);
    tracep->declBus(c+90,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+102,"ra", false,-1, 63,0);
    tracep->declQuad(c+91,"rb", false,-1, 63,0);
    tracep->declQuad(c+104,"rw", false,-1, 63,0);
    tracep->declBit(c+101,"rd_en", false,-1);
    tracep->declQuad(c+93,"imm", false,-1, 63,0);
    tracep->declBit(c+101,"ra_en", false,-1);
    tracep->declBit(c+101,"rb_en", false,-1);
    tracep->declQuad(c+3,"ina", false,-1, 63,0);
    tracep->declQuad(c+93,"inb", false,-1, 63,0);
    tracep->declQuad(c+5,"res", false,-1, 63,0);
    tracep->pushNamePrefix("u_ex ");
    tracep->declQuad(c+3,"ina", false,-1, 63,0);
    tracep->declQuad(c+93,"inb", false,-1, 63,0);
    tracep->declBus(c+2,"aluCtl", false,-1, 3,0);
    tracep->declQuad(c+5,"res", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_id ");
    tracep->declBus(c+87,"inst", false,-1, 31,0);
    tracep->declBit(c+101,"ra_en", false,-1);
    tracep->declBus(c+88,"ra_addr", false,-1, 4,0);
    tracep->declBit(c+101,"rb_en", false,-1);
    tracep->declBus(c+89,"rb_addr", false,-1, 4,0);
    tracep->declBit(c+101,"rd_en", false,-1);
    tracep->declBus(c+90,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"imm", false,-1, 63,0);
    tracep->declBit(c+101,"aluBsrc", false,-1);
    tracep->declBus(c+2,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+95,"opcode", false,-1, 6,0);
    tracep->declBus(c+96,"funt3", false,-1, 2,0);
    tracep->declBit(c+97,"opcode_001_0011", false,-1);
    tracep->declBit(c+98,"funt3_000", false,-1);
    tracep->declBit(c+99,"ADDI", false,-1);
    tracep->declBus(c+100,"aluType", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_if ");
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+74,"rst", false,-1);
    tracep->declQuad(c+7,"pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regs ");
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+74,"rst", false,-1);
    tracep->declBit(c+101,"Ra_en", false,-1);
    tracep->declBit(c+101,"Rb_en", false,-1);
    tracep->declBus(c+88,"Ra_addr", false,-1, 4,0);
    tracep->declBus(c+89,"Rb_addr", false,-1, 4,0);
    tracep->declQuad(c+3,"Ra", false,-1, 63,0);
    tracep->declQuad(c+91,"Rb", false,-1, 63,0);
    tracep->declBit(c+101,"Rw_en", false,-1);
    tracep->declBus(c+90,"Rw_addr", false,-1, 4,0);
    tracep->declQuad(c+104,"Rw", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+9+i*2,"regsheap", true,(i+0), 63,0);
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
    tracep->fullCData(oldp+2,(vlSelf->zerocore__DOT__u_id__DOT__aluCtl__out__out0),4);
    tracep->fullQData(oldp+3,(vlSelf->zerocore__DOT__ina),64);
    tracep->fullQData(oldp+5,(vlSelf->zerocore__DOT__res),64);
    tracep->fullQData(oldp+7,(vlSelf->zerocore__DOT__pc),64);
    tracep->fullQData(oldp+9,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0]),64);
    tracep->fullQData(oldp+11,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[1]),64);
    tracep->fullQData(oldp+13,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[2]),64);
    tracep->fullQData(oldp+15,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[3]),64);
    tracep->fullQData(oldp+17,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[4]),64);
    tracep->fullQData(oldp+19,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[5]),64);
    tracep->fullQData(oldp+21,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[6]),64);
    tracep->fullQData(oldp+23,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[7]),64);
    tracep->fullQData(oldp+25,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[8]),64);
    tracep->fullQData(oldp+27,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[9]),64);
    tracep->fullQData(oldp+29,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[10]),64);
    tracep->fullQData(oldp+31,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[11]),64);
    tracep->fullQData(oldp+33,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[12]),64);
    tracep->fullQData(oldp+35,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[13]),64);
    tracep->fullQData(oldp+37,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[14]),64);
    tracep->fullQData(oldp+39,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[15]),64);
    tracep->fullQData(oldp+41,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[16]),64);
    tracep->fullQData(oldp+43,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[17]),64);
    tracep->fullQData(oldp+45,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[18]),64);
    tracep->fullQData(oldp+47,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[19]),64);
    tracep->fullQData(oldp+49,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[20]),64);
    tracep->fullQData(oldp+51,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[21]),64);
    tracep->fullQData(oldp+53,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[22]),64);
    tracep->fullQData(oldp+55,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[23]),64);
    tracep->fullQData(oldp+57,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[24]),64);
    tracep->fullQData(oldp+59,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[25]),64);
    tracep->fullQData(oldp+61,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[26]),64);
    tracep->fullQData(oldp+63,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[27]),64);
    tracep->fullQData(oldp+65,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[28]),64);
    tracep->fullQData(oldp+67,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[29]),64);
    tracep->fullQData(oldp+69,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[30]),64);
    tracep->fullQData(oldp+71,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[31]),64);
    tracep->fullBit(oldp+73,(vlSelf->clk));
    tracep->fullBit(oldp+74,(vlSelf->rst));
    tracep->fullQData(oldp+75,(vlSelf->RamReadData),64);
    tracep->fullBit(oldp+77,(vlSelf->RamReadEnable));
    tracep->fullBit(oldp+78,(vlSelf->RamWriteEnable));
    tracep->fullQData(oldp+79,(vlSelf->RamReadAddr),64);
    tracep->fullQData(oldp+81,(vlSelf->RamWriteAddr),64);
    tracep->fullQData(oldp+83,(vlSelf->RamWriteMask),64);
    tracep->fullQData(oldp+85,(vlSelf->RamWriteData),64);
    tracep->fullIData(oldp+87,((IData)(vlSelf->RamReadData)),32);
    tracep->fullCData(oldp+88,((0x1fU & (IData)((vlSelf->RamReadData 
                                                 >> 0xfU)))),5);
    tracep->fullCData(oldp+89,((0x1fU & (IData)((vlSelf->RamReadData 
                                                 >> 0x14U)))),5);
    tracep->fullCData(oldp+90,((0x1fU & (IData)((vlSelf->RamReadData 
                                                 >> 7U)))),5);
    tracep->fullQData(oldp+91,(((IData)(vlSelf->rst)
                                 ? 0ULL : (((0x1fU 
                                             & (IData)(
                                                       (vlSelf->RamReadData 
                                                        >> 0x14U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->RamReadData 
                                                           >> 7U))))
                                            ? vlSelf->zerocore__DOT__rw
                                            : vlSelf->zerocore__DOT__u_regs__DOT__regsheap
                                           [(0x1fU 
                                             & (IData)(
                                                       (vlSelf->RamReadData 
                                                        >> 0x14U)))]))),64);
    tracep->fullQData(oldp+93,((QData)((IData)((0xfffU 
                                                & (IData)(
                                                          (vlSelf->RamReadData 
                                                           >> 0x14U)))))),64);
    tracep->fullCData(oldp+95,((0x7fU & (IData)(vlSelf->RamReadData))),7);
    tracep->fullCData(oldp+96,((7U & (IData)((vlSelf->RamReadData 
                                              >> 0xcU)))),3);
    tracep->fullBit(oldp+97,((0x13U == (0x7fU & (IData)(vlSelf->RamReadData)))));
    tracep->fullBit(oldp+98,((0U == (7U & (IData)((vlSelf->RamReadData 
                                                   >> 0xcU))))));
    tracep->fullBit(oldp+99,((IData)((0x13ULL == (0x707fULL 
                                                  & vlSelf->RamReadData)))));
    tracep->fullCData(oldp+100,(((0x13U == (0x7fU & (IData)(vlSelf->RamReadData))) 
                                 & (0U == (7U & (IData)(
                                                        (vlSelf->RamReadData 
                                                         >> 0xcU)))))),8);
    tracep->fullBit(oldp+101,(1U));
    tracep->fullQData(oldp+102,(vlSelf->zerocore__DOT__ra),64);
    tracep->fullQData(oldp+104,(vlSelf->zerocore__DOT__rw),64);
}
