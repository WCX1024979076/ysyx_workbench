// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd.h for the primary calling header

#include "verilated.h"

#include "Vadd__Syms.h"
#include "Vadd___024root.h"

void Vadd___024root___ctor_var_reset(Vadd___024root* vlSelf);

Vadd___024root::Vadd___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vadd___024root___ctor_var_reset(this);
}

void Vadd___024root::__Vconfigure(Vadd__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vadd___024root::~Vadd___024root() {
}
