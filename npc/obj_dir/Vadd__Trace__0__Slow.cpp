// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadd__Syms.h"


VL_ATTR_COLD void Vadd___024root__trace_init_sub__TOP__0(Vadd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declQuad(c+3,"io_value1", false,-1, 63,0);
    tracep->declQuad(c+5,"io_value2", false,-1, 63,0);
    tracep->declQuad(c+7,"io_output", false,-1, 63,0);
    tracep->pushNamePrefix("add ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declQuad(c+3,"io_value1", false,-1, 63,0);
    tracep->declQuad(c+5,"io_value2", false,-1, 63,0);
    tracep->declQuad(c+7,"io_output", false,-1, 63,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vadd___024root__trace_init_top(Vadd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_init_top\n"); );
    // Body
    Vadd___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vadd___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vadd___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vadd___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vadd___024root__trace_register(Vadd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vadd___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vadd___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vadd___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vadd___024root__trace_full_sub_0(Vadd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vadd___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_full_top_0\n"); );
    // Init
    Vadd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd___024root*>(voidSelf);
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vadd___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vadd___024root__trace_full_sub_0(Vadd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullQData(oldp+3,(vlSelf->io_value1),64);
    tracep->fullQData(oldp+5,(vlSelf->io_value2),64);
    tracep->fullQData(oldp+7,(vlSelf->io_output),64);
}
