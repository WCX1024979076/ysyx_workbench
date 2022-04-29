// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMain__Syms.h"


VL_ATTR_COLD void VMain___024root__trace_init_sub__TOP__0(VMain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+9,"clock", false,-1);
    tracep->declBit(c+10,"reset", false,-1);
    tracep->pushNamePrefix("Main ");
    tracep->declBit(c+9,"clock", false,-1);
    tracep->declBit(c+10,"reset", false,-1);
    tracep->declQuad(c+3,"ifu_io_Pc", false,-1, 63,0);
    tracep->declBus(c+5,"ifu_io_Inst", false,-1, 31,0);
    tracep->declBus(c+5,"idu_io_Inst", false,-1, 31,0);
    tracep->declBit(c+9,"exu_clock", false,-1);
    tracep->declBit(c+10,"exu_reset", false,-1);
    tracep->declQuad(c+3,"exu_io_PcVal", false,-1, 63,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+9,"clock", false,-1);
    tracep->declBit(c+10,"reset", false,-1);
    tracep->declQuad(c+3,"io_PcVal", false,-1, 63,0);
    tracep->declQuad(c+11,"mem_Raddr", false,-1, 63,0);
    tracep->declQuad(c+1,"mem_Rdata", false,-1, 63,0);
    tracep->declQuad(c+11,"mem_Waddr", false,-1, 63,0);
    tracep->declQuad(c+11,"mem_Wdata", false,-1, 63,0);
    tracep->declBus(c+13,"mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+14,"mem_MemWrite", false,-1);
    tracep->declQuad(c+11,"difftest_gpr_0", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_1", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_2", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_3", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_4", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_5", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_6", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_7", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_8", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_9", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_10", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_11", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_12", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_13", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_14", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_15", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_16", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_17", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_18", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_19", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_20", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_21", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_22", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_23", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_24", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_25", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_26", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_27", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_28", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_29", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_30", false,-1, 63,0);
    tracep->declQuad(c+11,"difftest_gpr_31", false,-1, 63,0);
    tracep->declQuad(c+3,"difftest_PcVal", false,-1, 63,0);
    tracep->declQuad(c+3,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("difftest ");
    tracep->declQuad(c+11,"gpr_0", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_1", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_2", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_3", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_4", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_5", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_6", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_7", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_8", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_9", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_10", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_11", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_12", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_13", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_14", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_15", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_16", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_17", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_18", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_19", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_20", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_21", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_22", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_23", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_24", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_25", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_26", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_27", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_28", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_29", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_30", false,-1, 63,0);
    tracep->declQuad(c+11,"gpr_31", false,-1, 63,0);
    tracep->declQuad(c+3,"PcVal", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+11,"Raddr", false,-1, 63,0);
    tracep->declQuad(c+11,"Waddr", false,-1, 63,0);
    tracep->declQuad(c+11,"Wdata", false,-1, 63,0);
    tracep->declBus(c+13,"Wmask", false,-1, 7,0);
    tracep->declBit(c+14,"MemWrite", false,-1);
    tracep->declQuad(c+1,"Rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+5,"io_Inst", false,-1, 31,0);
    tracep->declBit(c+6,"ebreak_ebreak_in", false,-1);
    tracep->pushNamePrefix("ebreak ");
    tracep->declBit(c+6,"ebreak_in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declQuad(c+3,"io_Pc", false,-1, 63,0);
    tracep->declBus(c+5,"io_Inst", false,-1, 31,0);
    tracep->declQuad(c+3,"mem_Raddr", false,-1, 63,0);
    tracep->declQuad(c+7,"mem_Rdata", false,-1, 63,0);
    tracep->declQuad(c+11,"mem_Waddr", false,-1, 63,0);
    tracep->declQuad(c+11,"mem_Wdata", false,-1, 63,0);
    tracep->declBus(c+13,"mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+14,"mem_MemWrite", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+3,"Raddr", false,-1, 63,0);
    tracep->declQuad(c+11,"Waddr", false,-1, 63,0);
    tracep->declQuad(c+11,"Wdata", false,-1, 63,0);
    tracep->declBus(c+13,"Wmask", false,-1, 7,0);
    tracep->declBit(c+14,"MemWrite", false,-1);
    tracep->declQuad(c+7,"Rdata", false,-1, 63,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VMain___024root__trace_init_top(VMain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_init_top\n"); );
    // Body
    VMain___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMain___024root__trace_register(VMain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMain___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMain___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMain___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMain___024root__trace_full_sub_0(VMain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_full_top_0\n"); );
    // Init
    VMain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMain___024root*>(voidSelf);
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMain___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VMain___024root__trace_full_sub_0(VMain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullQData(oldp+1,(vlSelf->Main__DOT__exu__DOT__mem_Rdata),64);
    tracep->fullQData(oldp+3,(vlSelf->Main__DOT__exu__DOT__pc),64);
    tracep->fullIData(oldp+5,((IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)),32);
    tracep->fullBit(oldp+6,((0x100073U == (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))));
    tracep->fullQData(oldp+7,(vlSelf->Main__DOT__ifu__DOT__mem_Rdata),64);
    tracep->fullBit(oldp+9,(vlSelf->clock));
    tracep->fullBit(oldp+10,(vlSelf->reset));
    tracep->fullQData(oldp+11,(0ULL),64);
    tracep->fullCData(oldp+13,(0U),8);
    tracep->fullBit(oldp+14,(0U));
}
