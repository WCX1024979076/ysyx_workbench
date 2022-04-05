// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

void VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ &ebreak__Vfuncrtn);

VL_ATTR_COLD void VMain___024root___settle__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___settle__TOP__0\n"); );
    // Body
    VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->__Vfunc_ebreak__0__Vfuncout);
    vlSelf->Main__DOT__contr__DOT__ebreakbox__DOT__tmp 
        = ((0x100073U == vlSelf->io_Inst) ? vlSelf->__Vfunc_ebreak__0__Vfuncout
            : 0U);
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
