// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"

#include "VMain___024root.h"

VL_ATTR_COLD void VMain___024root___initial__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->io_AluSrc = 0U;
}

VL_ATTR_COLD void VMain___024root___settle__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->io_AluOp = ((0x13U == (0x7fU & vlSelf->io_Inst))
                         ? 1U : 0U);
    vlSelf->io_DataImmI = (QData)((IData)((vlSelf->io_Inst 
                                           >> 0x14U)));
    vlSelf->io_R2 = (0x1fU & (vlSelf->io_Inst >> 0x14U));
    vlSelf->io_R1 = (0x1fU & (vlSelf->io_Inst >> 0xfU));
    vlSelf->io_RegWrite = (0x13U == (0x7fU & vlSelf->io_Inst));
    vlSelf->io_Rdest = (0x1fU & (vlSelf->io_Inst >> 7U));
    vlSelf->io_PcVal = vlSelf->Main__DOT__pc__DOT__pc;
    vlSelf->Main__DOT__pc__DOT___pc_T_1 = (4ULL + vlSelf->Main__DOT__pc__DOT__pc);
    vlSelf->Main__DOT__registers__DOT___GEN_53 = ((0x15U 
                                                   == (IData)(vlSelf->io_R2))
                                                   ? vlSelf->Main__DOT__registers__DOT__Regs_21
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(vlSelf->io_R2))
                                                    ? vlSelf->Main__DOT__registers__DOT__Regs_20
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->io_R2))
                                                     ? vlSelf->Main__DOT__registers__DOT__Regs_19
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->io_R2))
                                                      ? vlSelf->Main__DOT__registers__DOT__Regs_18
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->io_R2))
                                                       ? vlSelf->Main__DOT__registers__DOT__Regs_17
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlSelf->io_R2))
                                                        ? vlSelf->Main__DOT__registers__DOT__Regs_16
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlSelf->io_R2))
                                                         ? vlSelf->Main__DOT__registers__DOT__Regs_15
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelf->io_R2))
                                                          ? vlSelf->Main__DOT__registers__DOT__Regs_14
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->io_R2))
                                                           ? vlSelf->Main__DOT__registers__DOT__Regs_13
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlSelf->io_R2))
                                                            ? vlSelf->Main__DOT__registers__DOT__Regs_12
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(vlSelf->io_R2))
                                                             ? vlSelf->Main__DOT__registers__DOT__Regs_11
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(vlSelf->io_R2))
                                                              ? vlSelf->Main__DOT__registers__DOT__Regs_10
                                                              : 
                                                             ((9U 
                                                               == (IData)(vlSelf->io_R2))
                                                               ? vlSelf->Main__DOT__registers__DOT__Regs_9
                                                               : 
                                                              ((8U 
                                                                == (IData)(vlSelf->io_R2))
                                                                ? vlSelf->Main__DOT__registers__DOT__Regs_8
                                                                : 
                                                               ((7U 
                                                                 == (IData)(vlSelf->io_R2))
                                                                 ? vlSelf->Main__DOT__registers__DOT__Regs_7
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(vlSelf->io_R2))
                                                                  ? vlSelf->Main__DOT__registers__DOT__Regs_6
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(vlSelf->io_R2))
                                                                   ? vlSelf->Main__DOT__registers__DOT__Regs_5
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(vlSelf->io_R2))
                                                                    ? vlSelf->Main__DOT__registers__DOT__Regs_4
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->io_R2))
                                                                     ? vlSelf->Main__DOT__registers__DOT__Regs_3
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(vlSelf->io_R2))
                                                                      ? vlSelf->Main__DOT__registers__DOT__Regs_2
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelf->io_R2))
                                                                       ? vlSelf->Main__DOT__registers__DOT__Regs_1
                                                                       : vlSelf->Main__DOT__registers__DOT__Regs_0)))))))))))))))))))));
    vlSelf->Main__DOT__registers__DOT___GEN_21 = ((0x15U 
                                                   == (IData)(vlSelf->io_R1))
                                                   ? vlSelf->Main__DOT__registers__DOT__Regs_21
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(vlSelf->io_R1))
                                                    ? vlSelf->Main__DOT__registers__DOT__Regs_20
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->io_R1))
                                                     ? vlSelf->Main__DOT__registers__DOT__Regs_19
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->io_R1))
                                                      ? vlSelf->Main__DOT__registers__DOT__Regs_18
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->io_R1))
                                                       ? vlSelf->Main__DOT__registers__DOT__Regs_17
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlSelf->io_R1))
                                                        ? vlSelf->Main__DOT__registers__DOT__Regs_16
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlSelf->io_R1))
                                                         ? vlSelf->Main__DOT__registers__DOT__Regs_15
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelf->io_R1))
                                                          ? vlSelf->Main__DOT__registers__DOT__Regs_14
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->io_R1))
                                                           ? vlSelf->Main__DOT__registers__DOT__Regs_13
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlSelf->io_R1))
                                                            ? vlSelf->Main__DOT__registers__DOT__Regs_12
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(vlSelf->io_R1))
                                                             ? vlSelf->Main__DOT__registers__DOT__Regs_11
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(vlSelf->io_R1))
                                                              ? vlSelf->Main__DOT__registers__DOT__Regs_10
                                                              : 
                                                             ((9U 
                                                               == (IData)(vlSelf->io_R1))
                                                               ? vlSelf->Main__DOT__registers__DOT__Regs_9
                                                               : 
                                                              ((8U 
                                                                == (IData)(vlSelf->io_R1))
                                                                ? vlSelf->Main__DOT__registers__DOT__Regs_8
                                                                : 
                                                               ((7U 
                                                                 == (IData)(vlSelf->io_R1))
                                                                 ? vlSelf->Main__DOT__registers__DOT__Regs_7
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(vlSelf->io_R1))
                                                                  ? vlSelf->Main__DOT__registers__DOT__Regs_6
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(vlSelf->io_R1))
                                                                   ? vlSelf->Main__DOT__registers__DOT__Regs_5
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(vlSelf->io_R1))
                                                                    ? vlSelf->Main__DOT__registers__DOT__Regs_4
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->io_R1))
                                                                     ? vlSelf->Main__DOT__registers__DOT__Regs_3
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(vlSelf->io_R1))
                                                                      ? vlSelf->Main__DOT__registers__DOT__Regs_2
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelf->io_R1))
                                                                       ? vlSelf->Main__DOT__registers__DOT__Regs_1
                                                                       : vlSelf->Main__DOT__registers__DOT__Regs_0)))))))))))))))))))));
    vlSelf->io_DataR2 = (QData)((IData)(((0x1fU == (IData)(vlSelf->io_R2))
                                          ? vlSelf->Main__DOT__registers__DOT__Regs_31
                                          : ((0x1eU 
                                              == (IData)(vlSelf->io_R2))
                                              ? vlSelf->Main__DOT__registers__DOT__Regs_30
                                              : ((0x1dU 
                                                  == (IData)(vlSelf->io_R2))
                                                  ? vlSelf->Main__DOT__registers__DOT__Regs_29
                                                  : 
                                                 ((0x1cU 
                                                   == (IData)(vlSelf->io_R2))
                                                   ? vlSelf->Main__DOT__registers__DOT__Regs_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->io_R2))
                                                    ? vlSelf->Main__DOT__registers__DOT__Regs_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->io_R2))
                                                     ? vlSelf->Main__DOT__registers__DOT__Regs_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->io_R2))
                                                      ? vlSelf->Main__DOT__registers__DOT__Regs_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->io_R2))
                                                       ? vlSelf->Main__DOT__registers__DOT__Regs_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->io_R2))
                                                        ? vlSelf->Main__DOT__registers__DOT__Regs_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->io_R2))
                                                         ? vlSelf->Main__DOT__registers__DOT__Regs_22
                                                         : vlSelf->Main__DOT__registers__DOT___GEN_53))))))))))));
    vlSelf->io_DataR1 = (QData)((IData)(((0x1fU == (IData)(vlSelf->io_R1))
                                          ? vlSelf->Main__DOT__registers__DOT__Regs_31
                                          : ((0x1eU 
                                              == (IData)(vlSelf->io_R1))
                                              ? vlSelf->Main__DOT__registers__DOT__Regs_30
                                              : ((0x1dU 
                                                  == (IData)(vlSelf->io_R1))
                                                  ? vlSelf->Main__DOT__registers__DOT__Regs_29
                                                  : 
                                                 ((0x1cU 
                                                   == (IData)(vlSelf->io_R1))
                                                   ? vlSelf->Main__DOT__registers__DOT__Regs_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->io_R1))
                                                    ? vlSelf->Main__DOT__registers__DOT__Regs_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->io_R1))
                                                     ? vlSelf->Main__DOT__registers__DOT__Regs_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->io_R1))
                                                      ? vlSelf->Main__DOT__registers__DOT__Regs_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->io_R1))
                                                       ? vlSelf->Main__DOT__registers__DOT__Regs_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->io_R1))
                                                        ? vlSelf->Main__DOT__registers__DOT__Regs_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->io_R1))
                                                         ? vlSelf->Main__DOT__registers__DOT__Regs_22
                                                         : vlSelf->Main__DOT__registers__DOT___GEN_21))))))))))));
    vlSelf->io_AluOut = ((1U == (IData)(vlSelf->io_AluOp))
                          ? (vlSelf->io_DataR1 + vlSelf->io_DataImmI)
                          : 0ULL);
}

VL_ATTR_COLD void VMain___024root___eval_initial(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_initial\n"); );
    // Body
    VMain___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VMain___024root___eval_settle(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_settle\n"); );
    // Body
    VMain___024root___settle__TOP__0(vlSelf);
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
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
