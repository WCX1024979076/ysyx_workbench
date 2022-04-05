// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"

#include "Vmain__Syms.h"
#include "Vmain___024root.h"

void Vmain___024root___ctor_var_reset(Vmain___024root* vlSelf);

Vmain___024root::Vmain___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmain___024root___ctor_var_reset(this);
}

void Vmain___024root::__Vconfigure(Vmain__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmain___024root::~Vmain___024root() {
}
