// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_mux21.h for the primary calling header

#include "verilated.h"

#include "Vm_mux21___024root.h"

VL_ATTR_COLD void Vm_mux21___024root___eval_initial(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_initial\n"); );
}

void Vm_mux21___024root___combo__TOP__0(Vm_mux21___024root* vlSelf);

VL_ATTR_COLD void Vm_mux21___024root___eval_settle(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_settle\n"); );
    // Body
    Vm_mux21___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vm_mux21___024root___final(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___final\n"); );
}

VL_ATTR_COLD void Vm_mux21___024root___ctor_var_reset(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->s = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(1);
}
