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
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declQuad(c+70,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+72,"RamReadEnable", false,-1);
    tracep->declBit(c+73,"RamWriteEnable", false,-1);
    tracep->declQuad(c+74,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+76,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+78,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+80,"RamWriteData", false,-1, 63,0);
    tracep->pushNamePrefix("zerocore ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declQuad(c+70,"RamReadData", false,-1, 63,0);
    tracep->declBit(c+72,"RamReadEnable", false,-1);
    tracep->declBit(c+73,"RamWriteEnable", false,-1);
    tracep->declQuad(c+74,"RamReadAddr", false,-1, 63,0);
    tracep->declQuad(c+76,"RamWriteAddr", false,-1, 63,0);
    tracep->declQuad(c+78,"RamWriteMask", false,-1, 63,0);
    tracep->declQuad(c+80,"RamWriteData", false,-1, 63,0);
    tracep->declQuad(c+2,"pc", false,-1, 63,0);
    tracep->declBus(c+82,"inst", false,-1, 31,0);
    tracep->declBit(c+101,"aluBsrc", false,-1);
    tracep->declBus(c+83,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+84,"ra_addr", false,-1, 4,0);
    tracep->declBus(c+85,"rb_addr", false,-1, 4,0);
    tracep->declBus(c+86,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"ra", false,-1, 63,0);
    tracep->declQuad(c+89,"rb", false,-1, 63,0);
    tracep->declBit(c+101,"rd_en", false,-1);
    tracep->declQuad(c+91,"imm", false,-1, 63,0);
    tracep->declBit(c+101,"ra_en", false,-1);
    tracep->declBit(c+101,"rb_en", false,-1);
    tracep->declQuad(c+87,"ra_ex", false,-1, 63,0);
    tracep->declQuad(c+91,"rb_ex", false,-1, 63,0);
    tracep->declQuad(c+93,"res", false,-1, 63,0);
    tracep->pushNamePrefix("u_ex ");
    tracep->declQuad(c+87,"ra", false,-1, 63,0);
    tracep->declQuad(c+91,"rb", false,-1, 63,0);
    tracep->declBus(c+83,"aluCtl", false,-1, 3,0);
    tracep->declQuad(c+93,"res", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_id ");
    tracep->declBus(c+82,"inst", false,-1, 31,0);
    tracep->declBit(c+101,"ra_en", false,-1);
    tracep->declBus(c+84,"ra_addr", false,-1, 4,0);
    tracep->declBit(c+101,"rb_en", false,-1);
    tracep->declBus(c+85,"rb_addr", false,-1, 4,0);
    tracep->declBit(c+101,"rd_en", false,-1);
    tracep->declBus(c+86,"rd_addr", false,-1, 4,0);
    tracep->declQuad(c+91,"imm", false,-1, 63,0);
    tracep->declBit(c+101,"aluBsrc", false,-1);
    tracep->declBus(c+83,"aluCtl", false,-1, 3,0);
    tracep->declBus(c+95,"opcode", false,-1, 6,0);
    tracep->declBus(c+96,"funt3", false,-1, 2,0);
    tracep->declBit(c+97,"opcode_001_0011", false,-1);
    tracep->declBit(c+98,"funt3_000", false,-1);
    tracep->declBit(c+99,"ADDI", false,-1);
    tracep->declBus(c+100,"aluType", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_if ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declQuad(c+2,"pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regs ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBit(c+101,"Ra_en", false,-1);
    tracep->declBit(c+101,"Rb_en", false,-1);
    tracep->declBus(c+84,"Ra_addr", false,-1, 4,0);
    tracep->declBus(c+85,"Rb_addr", false,-1, 4,0);
    tracep->declQuad(c+87,"Ra", false,-1, 63,0);
    tracep->declQuad(c+89,"Rb", false,-1, 63,0);
    tracep->declBit(c+101,"Rw_en", false,-1);
    tracep->declBus(c+86,"Rw_addr", false,-1, 4,0);
    tracep->declQuad(c+93,"Rw", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+4+i*2,"regsheap", true,(i+0), 63,0);
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
    tracep->fullQData(oldp+2,(vlSelf->zerocore__DOT__pc),64);
    tracep->fullQData(oldp+4,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0]),64);
    tracep->fullQData(oldp+6,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[1]),64);
    tracep->fullQData(oldp+8,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[2]),64);
    tracep->fullQData(oldp+10,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[3]),64);
    tracep->fullQData(oldp+12,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[4]),64);
    tracep->fullQData(oldp+14,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[5]),64);
    tracep->fullQData(oldp+16,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[6]),64);
    tracep->fullQData(oldp+18,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[7]),64);
    tracep->fullQData(oldp+20,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[8]),64);
    tracep->fullQData(oldp+22,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[9]),64);
    tracep->fullQData(oldp+24,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[10]),64);
    tracep->fullQData(oldp+26,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[11]),64);
    tracep->fullQData(oldp+28,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[12]),64);
    tracep->fullQData(oldp+30,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[13]),64);
    tracep->fullQData(oldp+32,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[14]),64);
    tracep->fullQData(oldp+34,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[15]),64);
    tracep->fullQData(oldp+36,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[16]),64);
    tracep->fullQData(oldp+38,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[17]),64);
    tracep->fullQData(oldp+40,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[18]),64);
    tracep->fullQData(oldp+42,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[19]),64);
    tracep->fullQData(oldp+44,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[20]),64);
    tracep->fullQData(oldp+46,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[21]),64);
    tracep->fullQData(oldp+48,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[22]),64);
    tracep->fullQData(oldp+50,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[23]),64);
    tracep->fullQData(oldp+52,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[24]),64);
    tracep->fullQData(oldp+54,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[25]),64);
    tracep->fullQData(oldp+56,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[26]),64);
    tracep->fullQData(oldp+58,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[27]),64);
    tracep->fullQData(oldp+60,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[28]),64);
    tracep->fullQData(oldp+62,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[29]),64);
    tracep->fullQData(oldp+64,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[30]),64);
    tracep->fullQData(oldp+66,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[31]),64);
    tracep->fullBit(oldp+68,(vlSelf->clk));
    tracep->fullBit(oldp+69,(vlSelf->rst));
    tracep->fullQData(oldp+70,(vlSelf->RamReadData),64);
    tracep->fullBit(oldp+72,(vlSelf->RamReadEnable));
    tracep->fullBit(oldp+73,(vlSelf->RamWriteEnable));
    tracep->fullQData(oldp+74,(vlSelf->RamReadAddr),64);
    tracep->fullQData(oldp+76,(vlSelf->RamWriteAddr),64);
    tracep->fullQData(oldp+78,(vlSelf->RamWriteMask),64);
    tracep->fullQData(oldp+80,(vlSelf->RamWriteData),64);
    tracep->fullIData(oldp+82,((IData)(vlSelf->RamReadData)),32);
    tracep->fullCData(oldp+83,(vlSelf->zerocore__DOT__u_id__DOT__aluCtl__out__out0),4);
    tracep->fullCData(oldp+84,((0x1fU & (IData)((vlSelf->RamReadData 
                                                 >> 0xfU)))),5);
    tracep->fullCData(oldp+85,((0x1fU & (IData)((vlSelf->RamReadData 
                                                 >> 0x14U)))),5);
    tracep->fullCData(oldp+86,((0x1fU & (IData)((vlSelf->RamReadData 
                                                 >> 7U)))),5);
    tracep->fullQData(oldp+87,(((IData)(vlSelf->rst)
                                 ? 0ULL : (((0x1fU 
                                             & (IData)(
                                                       (vlSelf->RamReadData 
                                                        >> 0xfU))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->RamReadData 
                                                           >> 7U))))
                                            ? vlSelf->zerocore__DOT__res
                                            : vlSelf->zerocore__DOT__u_regs__DOT__regsheap
                                           [(0x1fU 
                                             & (IData)(
                                                       (vlSelf->RamReadData 
                                                        >> 0xfU)))]))),64);
    tracep->fullQData(oldp+89,(((IData)(vlSelf->rst)
                                 ? 0ULL : (((0x1fU 
                                             & (IData)(
                                                       (vlSelf->RamReadData 
                                                        >> 0x14U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->RamReadData 
                                                           >> 7U))))
                                            ? vlSelf->zerocore__DOT__res
                                            : vlSelf->zerocore__DOT__u_regs__DOT__regsheap
                                           [(0x1fU 
                                             & (IData)(
                                                       (vlSelf->RamReadData 
                                                        >> 0x14U)))]))),64);
    tracep->fullQData(oldp+91,((QData)((IData)((0xfffU 
                                                & (IData)(
                                                          (vlSelf->RamReadData 
                                                           >> 0x14U)))))),64);
    tracep->fullQData(oldp+93,(vlSelf->zerocore__DOT__res),64);
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
}
