// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vzerocore.h"
#include "Vzerocore__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vzerocore::Vzerocore(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vzerocore__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , RamReadEnable{vlSymsp->TOP.RamReadEnable}
    , RamWriteEnable{vlSymsp->TOP.RamWriteEnable}
    , RamReadData{vlSymsp->TOP.RamReadData}
    , RamReadAddr{vlSymsp->TOP.RamReadAddr}
    , RamWriteAddr{vlSymsp->TOP.RamWriteAddr}
    , RamWriteMask{vlSymsp->TOP.RamWriteMask}
    , RamWriteData{vlSymsp->TOP.RamWriteData}
    , rootp{&(vlSymsp->TOP)}
{
}

Vzerocore::Vzerocore(const char* _vcname__)
    : Vzerocore(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vzerocore::~Vzerocore() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vzerocore___024root___eval_initial(Vzerocore___024root* vlSelf);
void Vzerocore___024root___eval_settle(Vzerocore___024root* vlSelf);
void Vzerocore___024root___eval(Vzerocore___024root* vlSelf);
#ifdef VL_DEBUG
void Vzerocore___024root___eval_debug_assertions(Vzerocore___024root* vlSelf);
#endif  // VL_DEBUG
void Vzerocore___024root___final(Vzerocore___024root* vlSelf);

static void _eval_initial_loop(Vzerocore__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vzerocore___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vzerocore___024root___eval_settle(&(vlSymsp->TOP));
        Vzerocore___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vzerocore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vzerocore::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vzerocore___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vzerocore___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vzerocore::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vzerocore::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vzerocore::final() {
    Vzerocore___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vzerocore___024root__trace_init_top(Vzerocore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vzerocore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vzerocore___024root*>(voidSelf);
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vzerocore___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vzerocore___024root__trace_register(Vzerocore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vzerocore::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vzerocore___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
