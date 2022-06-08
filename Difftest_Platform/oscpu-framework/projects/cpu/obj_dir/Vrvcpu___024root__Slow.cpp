// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvcpu.h for the primary calling header

#include "verilated.h"

#include "Vrvcpu__Syms.h"
#include "Vrvcpu___024root.h"

void Vrvcpu___024root___ctor_var_reset(Vrvcpu___024root* vlSelf);

Vrvcpu___024root::Vrvcpu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrvcpu___024root___ctor_var_reset(this);
}

void Vrvcpu___024root::__Vconfigure(Vrvcpu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrvcpu___024root::~Vrvcpu___024root() {
}
