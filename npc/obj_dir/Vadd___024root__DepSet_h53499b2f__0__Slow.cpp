// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd.h for the primary calling header

#include "verilated.h"

#include "Vadd___024root.h"

VL_ATTR_COLD void Vadd___024root___eval_initial(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_initial\n"); );
}

void Vadd___024root___combo__TOP__0(Vadd___024root* vlSelf);

VL_ATTR_COLD void Vadd___024root___eval_settle(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_settle\n"); );
    // Body
    Vadd___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vadd___024root___final(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___final\n"); );
}

VL_ATTR_COLD void Vadd___024root___ctor_var_reset(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_value1 = VL_RAND_RESET_Q(64);
    vlSelf->io_value2 = VL_RAND_RESET_Q(64);
    vlSelf->io_output = VL_RAND_RESET_Q(64);
}
