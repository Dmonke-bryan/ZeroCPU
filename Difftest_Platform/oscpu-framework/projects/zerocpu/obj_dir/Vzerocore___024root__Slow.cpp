// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vzerocore.h for the primary calling header

#include "verilated.h"

#include "Vzerocore__Syms.h"
#include "Vzerocore___024root.h"

void Vzerocore___024root___ctor_var_reset(Vzerocore___024root* vlSelf);

Vzerocore___024root::Vzerocore___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vzerocore___024root___ctor_var_reset(this);
}

void Vzerocore___024root::__Vconfigure(Vzerocore__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vzerocore___024root::~Vzerocore___024root() {
}
