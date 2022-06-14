// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrvcpu.h"
#include "Vrvcpu__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrvcpu::Vrvcpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vrvcpu__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , RamReadEnable{vlSymsp->TOP.RamReadEnable}
    , RamWriteEnable{vlSymsp->TOP.RamWriteEnable}
    , pcEnableF{vlSymsp->TOP.pcEnableF}
    , instF{vlSymsp->TOP.instF}
    , RamReadData{vlSymsp->TOP.RamReadData}
    , RamReadAddr{vlSymsp->TOP.RamReadAddr}
    , RamWriteMask{vlSymsp->TOP.RamWriteMask}
    , RamWriteAddr{vlSymsp->TOP.RamWriteAddr}
    , RamWriteData{vlSymsp->TOP.RamWriteData}
    , pcF{vlSymsp->TOP.pcF}
    , regs_o{vlSymsp->TOP.regs_o}
    , rootp{&(vlSymsp->TOP)}
{
}

Vrvcpu::Vrvcpu(const char* _vcname__)
    : Vrvcpu(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vrvcpu::~Vrvcpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vrvcpu___024root___eval_initial(Vrvcpu___024root* vlSelf);
void Vrvcpu___024root___eval_settle(Vrvcpu___024root* vlSelf);
void Vrvcpu___024root___eval(Vrvcpu___024root* vlSelf);
#ifdef VL_DEBUG
void Vrvcpu___024root___eval_debug_assertions(Vrvcpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vrvcpu___024root___final(Vrvcpu___024root* vlSelf);

static void _eval_initial_loop(Vrvcpu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vrvcpu___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vrvcpu___024root___eval_settle(&(vlSymsp->TOP));
        Vrvcpu___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vrvcpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrvcpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrvcpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vrvcpu___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vrvcpu::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vrvcpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vrvcpu::final() {
    Vrvcpu___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vrvcpu___024root__trace_init_top(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrvcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrvcpu___024root*>(voidSelf);
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vrvcpu___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vrvcpu___024root__trace_register(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrvcpu::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrvcpu___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
