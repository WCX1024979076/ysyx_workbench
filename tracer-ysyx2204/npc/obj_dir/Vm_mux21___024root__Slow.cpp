// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_mux21.h for the primary calling header

#include "verilated.h"

#include "Vm_mux21__Syms.h"
#include "Vm_mux21___024root.h"

void Vm_mux21___024root___ctor_var_reset(Vm_mux21___024root* vlSelf);

Vm_mux21___024root::Vm_mux21___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vm_mux21___024root___ctor_var_reset(this);
}

void Vm_mux21___024root::__Vconfigure(Vm_mux21__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vm_mux21___024root::~Vm_mux21___024root() {
}
