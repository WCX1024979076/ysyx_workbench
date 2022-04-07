// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain___024root.h"

VL_ATTR_COLD void VMain___024root___initial__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->io_Inst = 0U;
    vlSelf->io_AluSrc = 0U;
    vlSelf->io_AluOp = 0U;
    vlSelf->io_DataImmI = 0ULL;
    vlSelf->io_R2 = 0U;
    vlSelf->io_R1 = 0U;
    vlSelf->io_RegWrite = 0U;
    vlSelf->io_Rdest = 0U;
}

VL_ATTR_COLD void VMain___024root___eval_initial(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_initial\n"); );
    // Body
    VMain___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VMain___024root___settle__TOP__0(VMain___024root* vlSelf);

VL_ATTR_COLD void VMain___024root___eval_settle(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_settle\n"); );
    // Body
    VMain___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VMain___024root___final(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___final\n"); );
}

VL_ATTR_COLD void VMain___024root___ctor_var_reset(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_Inst = VL_RAND_RESET_I(32);
    vlSelf->io_PcVal = VL_RAND_RESET_Q(64);
    vlSelf->io_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->io_AluOp = VL_RAND_RESET_I(5);
    vlSelf->io_AluSrc = VL_RAND_RESET_I(1);
    vlSelf->io_R1 = VL_RAND_RESET_I(5);
    vlSelf->io_R2 = VL_RAND_RESET_I(5);
    vlSelf->io_Rdest = VL_RAND_RESET_I(5);
    vlSelf->io_AluOut = VL_RAND_RESET_Q(64);
    vlSelf->io_DataR1 = VL_RAND_RESET_Q(64);
    vlSelf->io_DataR2 = VL_RAND_RESET_Q(64);
    vlSelf->io_DataImmI = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__pc__DOT__mem_Rdata = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__pc__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__pc__DOT___pc_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__registers__DOT__Regs_0 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_1 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_2 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_3 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_4 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_5 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_6 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_7 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_8 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_9 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_10 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_11 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_12 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_13 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_14 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_15 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_16 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_17 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_18 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_19 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_20 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_21 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_22 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_23 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_24 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_25 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_26 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_27 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_28 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_29 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_30 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT__Regs_31 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT___GEN_21 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__registers__DOT___GEN_53 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_pmem_read__0__Rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
