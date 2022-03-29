// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexample__Syms.h"


VL_ATTR_COLD void Vexample___024root__trace_init_sub__TOP__0(Vexample___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"f", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"f", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vexample___024root__trace_init_top(Vexample___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root__trace_init_top\n"); );
    // Body
    Vexample___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vexample___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vexample___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vexample___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vexample___024root__trace_register(Vexample___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vexample___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vexample___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vexample___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vexample___024root__trace_full_sub_0(Vexample___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vexample___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root__trace_full_top_0\n"); );
    // Init
    Vexample___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexample___024root*>(voidSelf);
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vexample___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vexample___024root__trace_full_sub_0(Vexample___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->a));
    tracep->fullBit(oldp+2,(vlSelf->b));
    tracep->fullBit(oldp+3,(vlSelf->f));
}
