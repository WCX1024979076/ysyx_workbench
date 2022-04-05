// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

void VMain___024root___ctor_var_reset(VMain___024root* vlSelf);

VMain___024root::VMain___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMain___024root___ctor_var_reset(this);
}

void VMain___024root::__Vconfigure(VMain__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMain___024root::~VMain___024root() {
}
