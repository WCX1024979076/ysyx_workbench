// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024unit.h"

void VMain___024unit___ctor_var_reset(VMain___024unit* vlSelf);

VMain___024unit::VMain___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMain___024unit___ctor_var_reset(this);
}

void VMain___024unit::__Vconfigure(VMain__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMain___024unit::~VMain___024unit() {
}
