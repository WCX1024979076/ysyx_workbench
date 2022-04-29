// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

void VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 33> &a);
void VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);

VL_ATTR_COLD void VMain___024root___settle__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___settle__TOP__0\n"); );
    // Init
    CData/*2:0*/ Main__DOT__idu__DOT___inst_type_T_25;
    SData/*9:0*/ Main__DOT__idu__DOT___inst_flag_T_10;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_13;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_26;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_45;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_58;
    QData/*63:0*/ Main__DOT__exu__DOT___AluOut_T_17;
    // Body
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT___AluOut_T_13 = (4ULL 
                                                 + vlSelf->Main__DOT__exu__DOT__pc);
    vlSelf->Main__DOT__exu__DOT___pc_T_23 = (4ULL + vlSelf->Main__DOT__exu__DOT__pc);
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[1U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_1;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[2U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_2;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[3U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_3;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[4U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_4;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[5U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_5;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[6U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_6;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[7U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_7;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[8U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_8;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[9U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_9;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xaU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_10;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xbU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_11;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xcU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_12;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xdU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_13;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xeU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_14;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xfU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_15;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x10U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_16;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x11U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_17;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x12U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_18;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x13U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_19;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x14U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_20;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x15U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_21;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x16U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_22;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x17U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_23;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x18U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_24;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x19U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_25;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1aU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_26;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1bU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_27;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1cU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_28;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1dU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_29;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1eU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_30;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1fU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_31;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x20U] 
        = vlSelf->Main__DOT__exu__DOT__pc;
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Main__DOT__exu__DOT__pc, vlSelf->__Vtask_pmem_read__0__Rdata);
    vlSelf->Main__DOT__ifu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__0__Rdata;
    VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf);
    if ((0x100073U == (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) {
        VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    Main__DOT__idu__DOT___inst_flag_T_10 = ((0x380U 
                                             & ((IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0xcU)) 
                                                << 7U)) 
                                            | (0x7fU 
                                               & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)));
    Main__DOT__exu__DOT___GEN_13 = ((0xdU == (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0xfU))))
                                     ? vlSelf->Main__DOT__exu__DOT__Regs_13
                                     : ((0xcU == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0xfU))))
                                         ? vlSelf->Main__DOT__exu__DOT__Regs_12
                                         : ((0xbU == 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0xfU))))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_11
                                             : ((0xaU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0xfU))))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_10
                                                 : 
                                                ((9U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0xfU))))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_9
                                                  : 
                                                 ((8U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 0xfU))))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_8
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0xfU))))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_7
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0xfU))))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_6
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0xfU))))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_5
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                   >> 0xfU))))
                                                       ? vlSelf->Main__DOT__exu__DOT__Regs_4
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                    >> 0xfU))))
                                                        ? vlSelf->Main__DOT__exu__DOT__Regs_3
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                     >> 0xfU))))
                                                         ? vlSelf->Main__DOT__exu__DOT__Regs_2
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                      >> 0xfU))))
                                                          ? vlSelf->Main__DOT__exu__DOT__Regs_1
                                                          : 0ULL)))))))))))));
    Main__DOT__exu__DOT___GEN_45 = ((0xdU == (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0x14U))))
                                     ? vlSelf->Main__DOT__exu__DOT__Regs_13
                                     : ((0xcU == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0x14U))))
                                         ? vlSelf->Main__DOT__exu__DOT__Regs_12
                                         : ((0xbU == 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0x14U))))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_11
                                             : ((0xaU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0x14U))))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_10
                                                 : 
                                                ((9U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0x14U))))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_9
                                                  : 
                                                 ((8U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 0x14U))))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_8
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0x14U))))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_7
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0x14U))))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_6
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0x14U))))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_5
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                   >> 0x14U))))
                                                       ? vlSelf->Main__DOT__exu__DOT__Regs_4
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                    >> 0x14U))))
                                                        ? vlSelf->Main__DOT__exu__DOT__Regs_3
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                     >> 0x14U))))
                                                         ? vlSelf->Main__DOT__exu__DOT__Regs_2
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                      >> 0x14U))))
                                                          ? vlSelf->Main__DOT__exu__DOT__Regs_1
                                                          : 0ULL)))))))))))));
    Main__DOT__idu__DOT___inst_type_T_25 = ((0x33U 
                                             == (0x7fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                             ? 0U : 
                                            ((0x63U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                              ? 3U : 
                                             ((0x13U 
                                               == (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 1U
                                               : ((0x1bU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 1U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 3U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 2U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 1U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 1U
                                                        : 
                                                       ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 5U
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 4U
                                                          : 
                                                         ((0x33U 
                                                           != 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                          & (0x13U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))))))))))))));
    Main__DOT__exu__DOT___GEN_26 = ((0x1aU == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                          >> 0xfU))))
                                     ? vlSelf->Main__DOT__exu__DOT__Regs_26
                                     : ((0x19U == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0xfU))))
                                         ? vlSelf->Main__DOT__exu__DOT__Regs_25
                                         : ((0x18U 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                            >> 0xfU))))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_24
                                             : ((0x17U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0xfU))))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_23
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0xfU))))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_22
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 0xfU))))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_21
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0xfU))))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_20
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0xfU))))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_19
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0xfU))))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_18
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                   >> 0xfU))))
                                                       ? vlSelf->Main__DOT__exu__DOT__Regs_17
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                    >> 0xfU))))
                                                        ? vlSelf->Main__DOT__exu__DOT__Regs_16
                                                        : 
                                                       ((0xfU 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                     >> 0xfU))))
                                                         ? vlSelf->Main__DOT__exu__DOT__Regs_15
                                                         : 
                                                        ((0xeU 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                      >> 0xfU))))
                                                          ? vlSelf->Main__DOT__exu__DOT__Regs_14
                                                          : Main__DOT__exu__DOT___GEN_13)))))))))))));
    Main__DOT__exu__DOT___GEN_58 = ((0x1aU == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                          >> 0x14U))))
                                     ? vlSelf->Main__DOT__exu__DOT__Regs_26
                                     : ((0x19U == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0x14U))))
                                         ? vlSelf->Main__DOT__exu__DOT__Regs_25
                                         : ((0x18U 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                            >> 0x14U))))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_24
                                             : ((0x17U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0x14U))))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_23
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0x14U))))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_22
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 0x14U))))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_21
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0x14U))))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_20
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0x14U))))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_19
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0x14U))))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_18
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                   >> 0x14U))))
                                                       ? vlSelf->Main__DOT__exu__DOT__Regs_17
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                    >> 0x14U))))
                                                        ? vlSelf->Main__DOT__exu__DOT__Regs_16
                                                        : 
                                                       ((0xfU 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                     >> 0x14U))))
                                                         ? vlSelf->Main__DOT__exu__DOT__Regs_15
                                                         : 
                                                        ((0xeU 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                      >> 0x14U))))
                                                          ? vlSelf->Main__DOT__exu__DOT__Regs_14
                                                          : Main__DOT__exu__DOT___GEN_45)))))))))))));
    vlSelf->Main__DOT__idu__DOT__inst_type = ((0x3bU 
                                               == (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : (IData)(Main__DOT__idu__DOT___inst_type_T_25));
    vlSelf->Main__DOT__exu__DOT__DataR1 = ((0x1fU == 
                                            (0x1fU 
                                             & (IData)(
                                                       (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                        >> 0xfU))))
                                            ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                            : ((0x1eU 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                            >> 0xfU))))
                                                ? vlSelf->Main__DOT__exu__DOT__Regs_30
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0xfU))))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0xfU))))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0xfU))))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_27
                                                      : Main__DOT__exu__DOT___GEN_26)))));
    vlSelf->Main__DOT__exu__DOT___GEN_62 = ((0x1eU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                            >> 0x14U))))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_30
                                             : ((0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0x14U))))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_29
                                                 : 
                                                ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0x14U))))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_28
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 0x14U))))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_27
                                                   : Main__DOT__exu__DOT___GEN_58))));
    if ((5U == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))) {
        vlSelf->Main__DOT__idu__DOT__inst_flag = (0x7fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata));
        vlSelf->Main__DOT__idu_io_Imm = (QData)((IData)(
                                                        ((((0x100000U 
                                                            & ((IData)(
                                                                       (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                        >> 0x1fU)) 
                                                               << 0x14U)) 
                                                           | (0x7feU 
                                                              & ((IData)(
                                                                         (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                          >> 0x15U)) 
                                                                 << 1U))) 
                                                          | (0x800U 
                                                             & ((IData)(
                                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                         >> 0x14U)) 
                                                                << 0xbU))) 
                                                         | (0xff000U 
                                                            & ((IData)(
                                                                       (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                        >> 0xcU)) 
                                                               << 0xcU)))));
    } else if ((4U == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))) {
        vlSelf->Main__DOT__idu__DOT__inst_flag = (0x7fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata));
        vlSelf->Main__DOT__idu_io_Imm = (QData)((IData)(
                                                        ((IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0xcU)) 
                                                         << 0xcU)));
    } else if ((3U == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))) {
        vlSelf->Main__DOT__idu__DOT__inst_flag = Main__DOT__idu__DOT___inst_flag_T_10;
        vlSelf->Main__DOT__idu_io_Imm = (QData)((IData)(
                                                        ((((0x1000U 
                                                            & ((IData)(
                                                                       (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                        >> 0x1fU)) 
                                                               << 0xcU)) 
                                                           | (0x7e0U 
                                                              & ((IData)(
                                                                         (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                          >> 0x19U)) 
                                                                 << 5U))) 
                                                          | (0x1eU 
                                                             & ((IData)(
                                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                         >> 8U)) 
                                                                << 1U))) 
                                                         | (0x800U 
                                                            & ((IData)(
                                                                       (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                        >> 7U)) 
                                                               << 0xbU)))));
    } else if ((2U == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))) {
        vlSelf->Main__DOT__idu__DOT__inst_flag = Main__DOT__idu__DOT___inst_flag_T_10;
        vlSelf->Main__DOT__idu_io_Imm = (QData)((IData)(
                                                        ((0xfe0U 
                                                          & ((IData)(
                                                                     (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                      >> 0x19U)) 
                                                             << 5U)) 
                                                         | (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                       >> 7U))))));
    } else if ((1U == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))) {
        vlSelf->Main__DOT__idu__DOT__inst_flag = Main__DOT__idu__DOT___inst_flag_T_10;
        vlSelf->Main__DOT__idu_io_Imm = (QData)((IData)(
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                    >> 0x14U)))));
    } else {
        vlSelf->Main__DOT__idu__DOT__inst_flag = ((0U 
                                                   == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))
                                                   ? 
                                                  (((0x1fc00U 
                                                     & ((IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0x19U)) 
                                                        << 0xaU)) 
                                                    | (0x380U 
                                                       & ((IData)(
                                                                  (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                   >> 0xcU)) 
                                                          << 7U))) 
                                                   | (0x7fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   : 0U);
        vlSelf->Main__DOT__idu_io_Imm = 0ULL;
    }
    vlSelf->Main__DOT__exu__DOT__DataR2 = ((0x1fU == 
                                            (0x1fU 
                                             & (IData)(
                                                       (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                        >> 0x14U))))
                                            ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                            : vlSelf->Main__DOT__exu__DOT___GEN_62);
    vlSelf->Main__DOT__idu__DOT__contr_code = ((0x3bU 
                                                == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                ? 0x420300U
                                                : (
                                                   (0x8033U 
                                                    == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                    ? 0x480000U
                                                    : 
                                                   ((0xe3U 
                                                     == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                     ? 0x71800U
                                                     : 
                                                    ((0x193U 
                                                      == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                      ? 0x460000U
                                                      : 
                                                     ((0x1bU 
                                                       == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                       ? 0x410300U
                                                       : 
                                                      ((0x103U 
                                                        == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                        ? 0x410200U
                                                        : 
                                                       ((0x63U 
                                                         == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                         ? 0x51800U
                                                         : 
                                                        ((0x1a3U 
                                                          == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                          ? 0x2100ffU
                                                          : 
                                                         ((0x183U 
                                                           == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                           ? 0x410100U
                                                           : 
                                                          ((0x67U 
                                                            == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                            ? 0x441000U
                                                            : 
                                                           ((0x6fU 
                                                             == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                             ? 0x440800U
                                                             : 
                                                            ((0x17U 
                                                              == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                              ? 0x430000U
                                                              : 
                                                             ((0x33U 
                                                               == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                               ? 0x420000U
                                                               : 
                                                              ((0x13U 
                                                                == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                                ? 0x410000U
                                                                : 0U))))))))))))));
    vlSelf->Main__DOT__exu__DOT___pc_T_8 = (vlSelf->Main__DOT__exu__DOT__pc 
                                            + ((((1U 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__idu_io_Imm 
                                                             >> 0x14U)))
                                                  ? 0x7ffffffffffULL
                                                  : 0ULL) 
                                                << 0x15U) 
                                               | (QData)((IData)(
                                                                 (0x1fffffU 
                                                                  & (IData)(vlSelf->Main__DOT__idu_io_Imm))))));
    vlSelf->Main__DOT__exu__DOT___pc_T_19 = (vlSelf->Main__DOT__exu__DOT__pc 
                                             + ((((1U 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__idu_io_Imm 
                                                              >> 0xcU)))
                                                   ? 0x7ffffffffffffULL
                                                   : 0ULL) 
                                                 << 0xdU) 
                                                | (QData)((IData)(
                                                                  (0x1fffU 
                                                                   & (IData)(vlSelf->Main__DOT__idu_io_Imm))))));
    Main__DOT__exu__DOT___AluOut_T_17 = ((((1U & (IData)(
                                                         (vlSelf->Main__DOT__idu_io_Imm 
                                                          >> 0xbU)))
                                            ? 0xfffffffffffffULL
                                            : 0ULL) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (0xfffU 
                                                            & (IData)(vlSelf->Main__DOT__idu_io_Imm)))));
    vlSelf->Main__DOT__exu__DOT___AluOut_T_21 = (vlSelf->Main__DOT__exu__DOT__DataR1 
                                                 - vlSelf->Main__DOT__exu__DOT__DataR2);
    vlSelf->Main__DOT__exu__DOT___AluOut_T_35 = ((7U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                      >> 0x10U)))
                                                  ? (QData)((IData)(
                                                                    (vlSelf->Main__DOT__exu__DOT__DataR1 
                                                                     != vlSelf->Main__DOT__exu__DOT__DataR2)))
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                       >> 0x10U)))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->Main__DOT__exu__DOT__DataR1 
                                                                      < Main__DOT__exu__DOT___AluOut_T_17)))
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                        >> 0x10U)))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->Main__DOT__exu__DOT__DataR1 
                                                                       == vlSelf->Main__DOT__exu__DOT__DataR2)))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                         >> 0x10U)))
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->Main__DOT__exu__DOT__pc)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                          >> 0x10U)))
                                                      ? 
                                                     (vlSelf->Main__DOT__exu__DOT__pc 
                                                      + 
                                                      ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->Main__DOT__idu_io_Imm 
                                                                     >> 0x13U)))
                                                          ? 0xfffffffffffULL
                                                          : 0ULL) 
                                                        << 0x14U) 
                                                       | (QData)((IData)(
                                                                         (0xfffffU 
                                                                          & (IData)(vlSelf->Main__DOT__idu_io_Imm))))))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                           >> 0x10U)))
                                                       ? 
                                                      (vlSelf->Main__DOT__exu__DOT__DataR1 
                                                       + vlSelf->Main__DOT__exu__DOT__DataR2)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                            >> 0x10U)))
                                                        ? 
                                                       (vlSelf->Main__DOT__exu__DOT__DataR1 
                                                        + Main__DOT__exu__DOT___AluOut_T_17)
                                                        : 0ULL)))))));
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                           ((8U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                                 >> 0x10U)))
                                                             ? vlSelf->Main__DOT__exu__DOT___AluOut_T_21
                                                             : vlSelf->Main__DOT__exu__DOT___AluOut_T_35), vlSelf->__Vtask_pmem_read__2__Rdata);
    vlSelf->Main__DOT__exu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__2__Rdata;
    if ((0x200000U & vlSelf->Main__DOT__idu__DOT__contr_code)) {
        VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                ((8U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                                      >> 0x10U)))
                                                                  ? vlSelf->Main__DOT__exu__DOT___AluOut_T_21
                                                                  : vlSelf->Main__DOT__exu__DOT___AluOut_T_35), 
                                                                ((0x1fU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(
                                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                              >> 0x14U))))
                                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                                                  : vlSelf->Main__DOT__exu__DOT___GEN_62), 
                                                                (0xffU 
                                                                 & vlSelf->Main__DOT__idu__DOT__contr_code));
    }
    vlSelf->Main__DOT__exu__DOT__AluOut = ((8U == (0x1fU 
                                                   & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                      >> 0x10U)))
                                            ? vlSelf->Main__DOT__exu__DOT___AluOut_T_21
                                            : vlSelf->Main__DOT__exu__DOT___AluOut_T_35);
    vlSelf->Main__DOT__exu__DOT___DataIn_T_5 = (((QData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->Main__DOT__exu__DOT__AluOut 
                                                                              >> 0x1fU)))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->Main__DOT__exu__DOT__AluOut)));
    vlSelf->Main__DOT__exu__DOT___DataIn_T_11 = ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                      >> 8U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->Main__DOT__exu__DOT__mem_Rdata 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata)))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                       >> 8U)))
                                                   ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                        >> 8U)))
                                                    ? vlSelf->Main__DOT__exu__DOT__AluOut
                                                    : 0ULL)));
}
