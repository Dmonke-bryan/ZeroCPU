// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvcpu.h for the primary calling header

#include "Vrvcpu.h"
#include "Vrvcpu__Syms.h"

//==========

Vrvcpu::Vrvcpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    Vrvcpu__Syms* __restrict vlSymsp = __VlSymsp = new Vrvcpu__Syms(_vcontextp__, this, name());
    Vrvcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void Vrvcpu::__Vconfigure(Vrvcpu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-9);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

Vrvcpu::~Vrvcpu() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vrvcpu::_settle__TOP__2(Vrvcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu::_settle__TOP__2\n"); );
    Vrvcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst) {
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[1U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[2U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[3U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[4U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[5U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[6U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[7U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[8U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[9U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0xaU] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0xbU] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0xcU] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0xdU] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0xeU] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0xfU] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x10U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x11U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x12U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x13U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x14U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x15U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x16U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x17U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x18U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x19U] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x1aU] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x1bU] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x1cU] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x1dU] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x1eU] = 0ULL;
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0x1fU] = 0ULL;
    } else {
        vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0U] = 0ULL;
    }
    vlTOPp->pcEnableF = vlTOPp->rvcpu__DOT__If_stage__DOT__pcEnableF_dff__DOT__qout_r;
    vlTOPp->rvcpu__DOT__Id_stage__DOT__memFuncE_r = 
        (((IData)((3U == (0x707fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
          << 0xaU) | (((IData)((0x4003U == (0x707fU 
                                            & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                       << 9U) | (((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                  << 8U) | (((IData)(
                                                     (0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                             << 7U) 
                                            | (((IData)(
                                                        (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                << 6U) 
                                               | (((IData)(
                                                           (0x6003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                   << 5U) 
                                                  | (((IData)(
                                                              (0x3003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                      << 4U) 
                                                     | (((IData)(
                                                                 (0x23U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                         << 3U) 
                                                        | (((IData)(
                                                                    (0x1023U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                            << 2U) 
                                                           | (((IData)(
                                                                       (0x2023U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                               << 1U) 
                                                              | (IData)(
                                                                        (0x3023U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))))))))))));
    vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_r 
        = ((((((IData)((0x33U == (0xfe00707fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
               | (IData)((0x13U == (0x707fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
              | (IData)((0x3bU == (0xfe00707fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
             | (IData)((0x1bU == (0x707fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
            << 0xdU) | (((IData)((0x40000033U == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                         << 0xcU) | ((((((IData)((0x1033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                         | (IData)(
                                                   (0x1013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                        | (IData)((0x103bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                       | (IData)((0x101bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                      << 0xbU) | ((
                                                   (((IData)(
                                                             (0x2033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                     | (IData)(
                                                               (0x2013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                    | (IData)(
                                                              (0x4063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                   << 0xaU) 
                                                  | (((((IData)(
                                                                (0x3033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                        | (IData)(
                                                                  (0x3013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                       | (IData)(
                                                                 (0x6063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                      << 9U) 
                                                     | ((((((IData)(
                                                                    (0x5033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                            | (IData)(
                                                                      (0x5013U 
                                                                       == 
                                                                       (0xfc00707fU 
                                                                        & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                           | (IData)(
                                                                     (0x503bU 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                          | (IData)(
                                                                    (0x501bU 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                         << 8U) 
                                                        | ((((((IData)(
                                                                       (0x40005033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                               | (IData)(
                                                                         (0x40005013U 
                                                                          == 
                                                                          (0xfc00707fU 
                                                                           & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                              | (IData)(
                                                                        (0x4000503bU 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                             | (IData)(
                                                                       (0x4000501bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                            << 7U) 
                                                           | ((((IData)(
                                                                        (0x4033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                | (IData)(
                                                                          (0x4013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                               << 6U) 
                                                              | ((((IData)(
                                                                           (0x6033U 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                   | (IData)(
                                                                             (0x6013U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                                  << 5U) 
                                                                 | ((((IData)(
                                                                              (0x7033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                      | (IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))) 
                                                                     << 4U) 
                                                                    | (((IData)(
                                                                                (0x5063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                        << 3U) 
                                                                       | (((IData)(
                                                                                (0x7063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                           << 2U) 
                                                                          | (((IData)(
                                                                                (0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                              << 1U) 
                                                                             | (IData)(
                                                                                (0x1063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))))))))))))));
    if (vlTOPp->rst) {
        vlTOPp->RamReadAddr = 0ULL;
        vlTOPp->RamWriteAddr = 0ULL;
    } else {
        vlTOPp->RamReadAddr = vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r;
        vlTOPp->RamWriteAddr = vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r;
    }
    vlTOPp->RamWriteEnable = ((~ (IData)(vlTOPp->rst)) 
                              & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamWriteEnableM_clk_diff__DOT__qout_r));
    vlTOPp->RamReadEnable = ((~ (IData)(vlTOPp->rst)) 
                             & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamReadEnableM_clk_diff__DOT__qout_r));
    vlTOPp->rvcpu__DOT__flushD = ((~ (IData)(vlTOPp->rst)) 
                                  & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__jump_dff__DOT__qout_r));
    vlTOPp->pcF = ((IData)(vlTOPp->rst) ? 0ULL : ((IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__jump_dff__DOT__qout_r)
                                                   ? vlTOPp->rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r
                                                   : vlTOPp->rvcpu__DOT__If_stage__DOT__pc));
    if ((((((((((0x400U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                | (0x200U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
               | ((0x100U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                  | (0x80U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))) 
              | ((0x40U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                 | (0x20U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))) 
             | (0x10U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
            | (8U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
           | (4U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
          | (2U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
         | (1U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))) {
        if ((1U & (~ ((0x400U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                      | (0x200U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))))) {
            if ((1U & (~ ((0x100U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                          | (0x80U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))))) {
                if ((1U & (~ ((0x40U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                              | (0x20U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))))) {
                    if ((0x10U != (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) {
                        vlTOPp->rvcpu__DOT__Mem_stage__DOT__RamWriteMask_r 
                            = ((8U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                ? 0xffULL : ((4U == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                              ? 0xffffULL
                                              : ((2U 
                                                  == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                  ? 0xffffffffULL
                                                  : 0xffffffffffffffffULL)));
                    }
                }
            }
        }
    } else {
        vlTOPp->rvcpu__DOT__Mem_stage__DOT__RamWriteMask_r = 0ULL;
    }
    vlTOPp->rvcpu__DOT__Id_stage__DOT__Utype = ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                | (0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)));
    vlTOPp->rvcpu__DOT__Mem_stage__DOT__result = ((
                                                   ((((((((0x400U 
                                                           == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                                                          | (0x200U 
                                                             == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
                                                         | ((0x100U 
                                                             == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                                                            | (0x80U 
                                                               == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))) 
                                                        | ((0x40U 
                                                            == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                                                           | (0x20U 
                                                              == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))) 
                                                       | (0x10U 
                                                          == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
                                                      | (8U 
                                                         == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
                                                     | (4U 
                                                        == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
                                                    | (2U 
                                                       == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))) 
                                                   | (1U 
                                                      == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))
                                                   ? 
                                                  (((0x400U 
                                                     == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                                                    | (0x200U 
                                                       == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))
                                                    ? vlTOPp->RamReadData
                                                    : 
                                                   (((0x100U 
                                                      == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                                                     | (0x80U 
                                                        == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))
                                                     ? vlTOPp->RamReadData
                                                     : 
                                                    (((0x40U 
                                                       == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)) 
                                                      | (0x20U 
                                                         == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r)))
                                                      ? vlTOPp->RamReadData
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                       ? vlTOPp->RamReadData
                                                       : vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r))))
                                                   : 0ULL);
    vlTOPp->rvcpu__DOT__Id_stage__DOT__Itype = ((((
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                    | (0xfU 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                   | (0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                  | (0x73U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                 | (0x1bU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                | (0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)));
    vlTOPp->rvcpu__DOT__Id_stage__DOT__Rtype = ((0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                | (0x3bU 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)));
    vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data = (
                                                   (1U 
                                                    & (IData)(vlTOPp->rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r))
                                                    ? vlTOPp->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r))
                                                     ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r))
                                                      ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                      : vlTOPp->rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r)));
    vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs2Data = (
                                                   (2U 
                                                    & (IData)(vlTOPp->rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r))
                                                    ? vlTOPp->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r))
                                                     ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r))
                                                      ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                      : vlTOPp->rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r)));
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0U] 
        = vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0U];
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[1U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (1U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [1U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[2U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (2U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [2U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[3U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (3U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [3U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[4U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (4U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [4U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[5U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (5U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [5U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[6U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (6U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [6U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[7U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (7U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [7U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[8U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (8U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [8U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[9U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (9U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [9U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0xaU] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0xaU == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0xaU]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0xbU] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0xbU == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0xbU]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0xcU] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0xcU == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0xcU]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0xdU] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0xdU == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0xdU]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0xeU] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0xeU == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0xeU]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0xfU] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0xfU == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0xfU]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x10U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x10U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x10U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x11U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x11U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x11U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x12U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x12U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x12U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x13U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x13U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x13U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x14U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x14U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x14U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x15U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x15U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x15U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x16U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x16U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x16U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x17U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x17U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x17U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x18U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x18U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x18U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x19U] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x19U == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x19U]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x1aU] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x1aU == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x1aU]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x1bU] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x1bU == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x1bU]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x1cU] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x1cU == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x1cU]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x1dU] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x1dU == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x1dU]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x1eU] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x1eU == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x1eU]);
    vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0x1fU] 
        = (((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
            & (0x1fU == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))
            ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->rvcpu__DOT__Regfile__DOT__regs
           [0x1fU]);
    if (vlTOPp->rst) {
        vlTOPp->RamWriteMask = 0ULL;
        vlTOPp->RamWriteData = 0ULL;
    } else {
        vlTOPp->RamWriteMask = vlTOPp->rvcpu__DOT__Mem_stage__DOT__RamWriteMask_r;
        vlTOPp->RamWriteData = vlTOPp->rvcpu__DOT__Mem_stage__DOT__result;
    }
    vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r 
        = ((0x400U & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
            ? ((IData)(vlTOPp->rst) ? 0ULL : ((0xffffffffffffff00ULL 
                                               & ((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlTOPp->rvcpu__DOT__Mem_stage__DOT__result 
                                                                                >> 7U)))))) 
                                                  << 8U)) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result))))))
            : ((0x200U & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                ? ((IData)(vlTOPp->rst) ? 0ULL : (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result)))))
                : ((0x100U & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                    ? ((IData)(vlTOPp->rst) ? 0ULL : 
                       ((0xffffffffffff0000ULL & ((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlTOPp->rvcpu__DOT__Mem_stage__DOT__result 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U)) 
                        | (QData)((IData)((0xffffU 
                                           & (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result))))))
                    : ((0x80U & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                        ? ((IData)(vlTOPp->rst) ? 0ULL
                            : (QData)((IData)((0xffffU 
                                               & (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result)))))
                        : ((0x40U & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                            ? ((IData)(vlTOPp->rst)
                                ? 0ULL : (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->rvcpu__DOT__Mem_stage__DOT__result 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result))))
                            : ((0x20U & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                ? ((IData)(vlTOPp->rst)
                                    ? 0ULL : (QData)((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result)))
                                : ((0x10U & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                    ? ((IData)(vlTOPp->rst)
                                        ? 0ULL : vlTOPp->rvcpu__DOT__Mem_stage__DOT__result)
                                    : vlTOPp->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r)))))));
    vlTOPp->rvcpu__DOT__Id_stage__DOT__imm_r = ((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))
                                                 ? 
                                                ((0xffffffffffffe000ULL 
                                                  & ((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                            >> 0x1fU))))) 
                                                     << 0xdU)) 
                                                 | (QData)((IData)(
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
                                                                                >> 7U))))))))
                                                 : 
                                                ((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))
                                                  ? 
                                                 ((0xfffffffffffff000ULL 
                                                   & ((- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                             >> 0x1fU))))) 
                                                      << 0xcU)) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                           >> 7U))))))
                                                  : 
                                                 ((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__Itype)
                                                   ? 
                                                  ((0xfffffffffffff000ULL 
                                                    & ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                              >> 0x1fU))))) 
                                                       << 0xcU)) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                         >> 0x14U)))))
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))
                                                    ? 
                                                   ((0xffffffffffe00000ULL 
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
                                                                                >> 0x14U))))))))
                                                    : 
                                                   ((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__Utype)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                                >> 0x1fU)))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0xfffff000U 
                                                                        & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))
                                                     : 0ULL)))));
    vlTOPp->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r 
        = ((((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__Rtype) 
             | (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__Itype)) 
            | (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__Utype)) 
           | (0x6fU == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)));
    vlTOPp->rvcpu__DOT__rs2ReadEnable = (((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__Rtype) 
                                          | (0x23U 
                                             == (0x7fU 
                                                 & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)));
    vlTOPp->rvcpu__DOT__rs1ReadEnable = ((((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__Rtype) 
                                           | (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__Itype)) 
                                          | (0x23U 
                                             == (0x7fU 
                                                 & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)));
    vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2 = ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x24U 
                                                         & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                                ? vlTOPp->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r
                                                : vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs2Data);
    vlTOPp->rvcpu__DOT__Exe_stage__DOT__resADD = (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x1a0U 
                                                             & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                                    ? vlTOPp->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                                                    : vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data) 
                                                  + 
                                                  ((2U 
                                                    & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                    ? vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs2Data
                                                    : vlTOPp->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r));
    vlTOPp->regs_o[0U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0U];
    vlTOPp->regs_o[1U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [1U];
    vlTOPp->regs_o[2U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [2U];
    vlTOPp->regs_o[3U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [3U];
    vlTOPp->regs_o[4U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [4U];
    vlTOPp->regs_o[5U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [5U];
    vlTOPp->regs_o[6U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [6U];
    vlTOPp->regs_o[7U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [7U];
    vlTOPp->regs_o[8U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [8U];
    vlTOPp->regs_o[9U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [9U];
    vlTOPp->regs_o[0xaU] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0xaU];
    vlTOPp->regs_o[0xbU] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0xbU];
    vlTOPp->regs_o[0xcU] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0xcU];
    vlTOPp->regs_o[0xdU] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0xdU];
    vlTOPp->regs_o[0xeU] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0xeU];
    vlTOPp->regs_o[0xfU] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0xfU];
    vlTOPp->regs_o[0x10U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x10U];
    vlTOPp->regs_o[0x11U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x11U];
    vlTOPp->regs_o[0x12U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x12U];
    vlTOPp->regs_o[0x13U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x13U];
    vlTOPp->regs_o[0x14U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x14U];
    vlTOPp->regs_o[0x15U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x15U];
    vlTOPp->regs_o[0x16U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x16U];
    vlTOPp->regs_o[0x17U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x17U];
    vlTOPp->regs_o[0x18U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x18U];
    vlTOPp->regs_o[0x19U] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x19U];
    vlTOPp->regs_o[0x1aU] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x1aU];
    vlTOPp->regs_o[0x1bU] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x1bU];
    vlTOPp->regs_o[0x1cU] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x1cU];
    vlTOPp->regs_o[0x1dU] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x1dU];
    vlTOPp->regs_o[0x1eU] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x1eU];
    vlTOPp->regs_o[0x1fU] = vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o
        [0x1fU];
    vlTOPp->rvcpu__DOT__rs2ReadAddr = ((IData)(vlTOPp->rvcpu__DOT__rs2ReadEnable)
                                        ? (0x1fU & 
                                           (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0x14U))
                                        : 0U);
    vlTOPp->rvcpu__DOT__rs1ReadAddr = ((IData)(vlTOPp->rvcpu__DOT__rs1ReadEnable)
                                        ? (0x1fU & 
                                           (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0xfU))
                                        : 0U);
    vlTOPp->rvcpu__DOT__Exe_stage__DOT__result = ((1U 
                                                   & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                   ? (QData)((IData)(
                                                                     (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                                      != vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                    ? (QData)((IData)(
                                                                      (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                                       == vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                     ? (QData)((IData)(
                                                                       VL_GTS_IQQ(1,64,64, vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data, vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                      ? (QData)((IData)(
                                                                        (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                                         > vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                       ? 
                                                      (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                       & vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)
                                                       : 
                                                      ((0x20U 
                                                        & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                        ? 
                                                       (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                        | vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)
                                                        : 
                                                       ((0x40U 
                                                         & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                         ? 
                                                        (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                         ^ vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)
                                                         : 
                                                        ((0x80U 
                                                          & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                          ? 
                                                         VL_SHIFTRS_QQI(64,64,6, vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data, 
                                                                        (0x3fU 
                                                                         & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                          : 
                                                         ((0x100U 
                                                           & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                           ? 
                                                          (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                           : 
                                                          ((0x200U 
                                                            & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                            ? (QData)((IData)(
                                                                              VL_LTS_IQQ(1,64,64, vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data, vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                            : 
                                                           ((0x400U 
                                                             & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                             ? (QData)((IData)(
                                                                               (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                                                < vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                             : 
                                                            ((0x800U 
                                                              & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                              ? 
                                                             (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                              << 
                                                              (0x3fU 
                                                               & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))
                                                              : 
                                                             ((0x1000U 
                                                               & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                               ? 
                                                              (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                               - vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)
                                                               : 
                                                              ((0x2000U 
                                                                & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                                ? vlTOPp->rvcpu__DOT__Exe_stage__DOT__resADD
                                                                : 0ULL))))))))))))));
    vlTOPp->rvcpu__DOT__Ctrl__DOT__Redirect1_r = ((~ 
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                                  >> 4U))))) 
                                                  & (((((0x1fU 
                                                         & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r)) 
                                                        == (IData)(vlTOPp->rvcpu__DOT__rs2ReadAddr)) 
                                                       & (IData)(vlTOPp->rvcpu__DOT__rs2ReadEnable)) 
                                                      << 1U) 
                                                     | (((0x1fU 
                                                          & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r)) 
                                                         == (IData)(vlTOPp->rvcpu__DOT__rs1ReadAddr)) 
                                                        & (IData)(vlTOPp->rvcpu__DOT__rs1ReadEnable))));
    vlTOPp->rvcpu__DOT__Ctrl__DOT__ReadLoad = ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                              >> 4U)))) 
                                               & (((((0x1fU 
                                                      & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r)) 
                                                     == (IData)(vlTOPp->rvcpu__DOT__rs2ReadAddr)) 
                                                    & (IData)(vlTOPp->rvcpu__DOT__rs2ReadEnable)) 
                                                   << 1U) 
                                                  | (((0x1fU 
                                                       & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r)) 
                                                      == (IData)(vlTOPp->rvcpu__DOT__rs1ReadAddr)) 
                                                     & (IData)(vlTOPp->rvcpu__DOT__rs1ReadEnable))));
    vlTOPp->rvcpu__DOT__Exe_stage__DOT__jump_r = (1U 
                                                  & ((~ (IData)(vlTOPp->rst)) 
                                                     & (((((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                           >> 5U) 
                                                          & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__result)) 
                                                         | ((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                            >> 6U)) 
                                                        | ((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                           >> 7U))));
}

void Vrvcpu::_eval_initial(Vrvcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu::_eval_initial\n"); );
    Vrvcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vrvcpu::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu::final\n"); );
    // Variables
    Vrvcpu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vrvcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vrvcpu::_eval_settle(Vrvcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu::_eval_settle\n"); );
    Vrvcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vrvcpu::_ctor_var_reset(Vrvcpu* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clk = VL_RAND_RESET_I(1);
    self->rst = VL_RAND_RESET_I(1);
    self->instF = VL_RAND_RESET_I(32);
    self->RamReadData = VL_RAND_RESET_Q(64);
    self->RamReadEnable = VL_RAND_RESET_I(1);
    self->RamWriteEnable = VL_RAND_RESET_I(1);
    self->RamReadAddr = VL_RAND_RESET_Q(64);
    self->RamWriteMask = VL_RAND_RESET_Q(64);
    self->RamWriteAddr = VL_RAND_RESET_Q(64);
    self->RamWriteData = VL_RAND_RESET_Q(64);
    self->pcF = VL_RAND_RESET_Q(64);
    self->pcEnableF = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        self->regs_o[__Vi0] = VL_RAND_RESET_Q(64);
    }
    self->rvcpu__DOT__rs1ReadEnable = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__rs2ReadEnable = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__rs1ReadAddr = VL_RAND_RESET_I(5);
    self->rvcpu__DOT__rs2ReadAddr = VL_RAND_RESET_I(5);
    self->rvcpu__DOT__RamReadAddrE = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__RamWriteAddrE = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__RamWriteDataE = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__op1E = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__op2E = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__flushD = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__instTypeM = VL_RAND_RESET_I(10);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        self->rvcpu__DOT____Vcellout__Regfile__regs_o[__Vi0] = VL_RAND_RESET_Q(64);
    }
    self->rvcpu__DOT__If_stage__DOT__pc = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__If_stage__DOT__pcEnableF_dff__DOT__qout_r = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    self->rvcpu__DOT__Id_stage__DOT__Rtype = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__Id_stage__DOT__Itype = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__Id_stage__DOT__Utype = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__Id_stage__DOT__memFuncE_r = VL_RAND_RESET_I(11);
    self->rvcpu__DOT__Id_stage__DOT__instFuncE_r = VL_RAND_RESET_I(14);
    self->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__Id_stage__DOT__imm_r = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r = VL_RAND_RESET_I(10);
    self->rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r = VL_RAND_RESET_I(11);
    self->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r = VL_RAND_RESET_I(14);
    self->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Id_stage__DOT__RamReadEnableE_dff__DOT__qout_r = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__Id_stage__DOT__RamWriteEnableE_dff__DOT__qout_r = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r = VL_RAND_RESET_I(6);
    self->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Exe_stage__DOT__rs1Data = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Exe_stage__DOT__rs2Data = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Exe_stage__DOT__op2 = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Exe_stage__DOT__resADD = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Exe_stage__DOT__result = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Exe_stage__DOT__jump_r = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r = VL_RAND_RESET_I(11);
    self->rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Exe_stage__DOT__RamReadEnableM_clk_diff__DOT__qout_r = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__Exe_stage__DOT__RamWriteEnableM_clk_diff__DOT__qout_r = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__Exe_stage__DOT__jump_dff__DOT__qout_r = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r = VL_RAND_RESET_I(6);
    self->rvcpu__DOT__Mem_stage__DOT__result = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Mem_stage__DOT__RamWriteMask_r = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r = VL_RAND_RESET_Q(64);
    self->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r = VL_RAND_RESET_I(5);
    self->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        self->rvcpu__DOT__Regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    self->rvcpu__DOT__Ctrl__DOT__Redirect1_r = VL_RAND_RESET_I(2);
    self->rvcpu__DOT__Ctrl__DOT__ReadLoad = VL_RAND_RESET_I(2);
    self->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r = VL_RAND_RESET_I(1);
    self->rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r = VL_RAND_RESET_I(2);
    self->rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r = VL_RAND_RESET_I(2);
    self->rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
