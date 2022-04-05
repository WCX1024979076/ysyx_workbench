// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"

#include "Vmain___024root.h"

VL_INLINE_OPT void Vmain___024root___combo__TOP__0(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___combo__TOP__0\n"); );
    // Body
    if ((0x13U == (0x7fU & vlSelf->io_Inst))) {
        vlSelf->io_AluOp = 1U;
        vlSelf->io_AluSrc = 1U;
    } else {
        vlSelf->io_AluOp = 0U;
        vlSelf->io_AluSrc = 0U;
    }
    vlSelf->io_DataImmI = (QData)((IData)((vlSelf->io_Inst 
                                           >> 0x14U)));
    vlSelf->io_R1 = (0x1fU & (vlSelf->io_Inst >> 0xfU));
    vlSelf->io_R2 = (0x1fU & (vlSelf->io_Inst >> 0x14U));
}

VL_INLINE_OPT void Vmain___024root___sequent__TOP__0(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Main__DOT__pc__DOT__pc = 0x80000000ULL;
        vlSelf->Main__DOT__registers__DOT__Regs_29 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_27 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_26 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_25 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_24 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_28 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_30 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_31 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_22 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_23 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_11 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_10 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_9 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_8 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_2 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_1 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_0 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_7 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_6 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_3 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_4 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_5 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_12 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_13 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_14 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_15 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_16 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_17 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_18 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_19 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_20 = 0U;
        vlSelf->Main__DOT__registers__DOT__Regs_21 = 0U;
    } else {
        vlSelf->Main__DOT__pc__DOT__pc = vlSelf->Main__DOT__pc__DOT___pc_T_1;
        if (vlSelf->io_RegWrite) {
            if ((0x1dU == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_29 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x1bU == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_27 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x1aU == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_26 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x19U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_25 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x18U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_24 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x1cU == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_28 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x1eU == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_30 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x1fU == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_31 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x16U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_22 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x17U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_23 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0xbU == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_11 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0xaU == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_10 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((9U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_9 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((8U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_8 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((2U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_2 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((1U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_1 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_0 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((7U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_7 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((6U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_6 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((3U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_3 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((4U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_4 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((5U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_5 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0xcU == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_12 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0xdU == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_13 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0xeU == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_14 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0xfU == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_15 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x10U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_16 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x11U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_17 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x12U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_18 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x13U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_19 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x14U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_20 
                    = (IData)(vlSelf->io_AluOut);
            }
            if ((0x15U == (IData)(vlSelf->io_Rdest))) {
                vlSelf->Main__DOT__registers__DOT__Regs_21 
                    = (IData)(vlSelf->io_AluOut);
            }
        }
    }
    vlSelf->io_PcVal = vlSelf->Main__DOT__pc__DOT__pc;
    vlSelf->Main__DOT__pc__DOT___pc_T_1 = (4ULL + vlSelf->Main__DOT__pc__DOT__pc);
}

VL_INLINE_OPT void Vmain___024root___combo__TOP__1(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->io_RegWrite = (0x13U == (0x7fU & vlSelf->io_Inst));
    vlSelf->io_Rdest = (0x1fU & (vlSelf->io_Inst >> 7U));
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
    vlSelf->io_AluOut = ((1U == (IData)(vlSelf->io_AluOp))
                          ? (vlSelf->io_DataR1 + ((IData)(vlSelf->io_AluSrc)
                                                   ? vlSelf->io_DataR2
                                                   : vlSelf->io_DataImmI))
                          : 0ULL);
}

void Vmain___024root___eval(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval\n"); );
    // Body
    Vmain___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vmain___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vmain___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void Vmain___024root___eval_debug_assertions(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
