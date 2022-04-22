// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

void VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);

VL_INLINE_OPT void VMain___024root___sequent__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ Main__DOT__idu__DOT___inst_flag_T_10;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_13;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_26;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_46;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_59;
    // Body
    if (vlSelf->reset) {
        vlSelf->Main__DOT__exu__DOT__Regs_29 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_28 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_27 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_30 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_31 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_26 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_25 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_24 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_14 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_15 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_16 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_17 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_18 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_19 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_20 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_21 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_22 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_23 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_11 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_10 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_9 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_8 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_7 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_2 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_1 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_3 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_6 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_0 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_4 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_5 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_12 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_13 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_32 = 0x80000000ULL;
    } else {
        if ((0x100000U & vlSelf->Main__DOT__idu__DOT__contr_code)) {
            if ((0x1dU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_29 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x1cU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_28 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x1bU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_27 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x1eU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_30 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x1fU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_31 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x1aU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_26 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x19U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_25 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x18U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_24 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0xeU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_14 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0xfU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_15 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x10U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_16 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x11U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_17 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x12U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_18 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x13U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_19 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x14U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_20 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x15U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_21 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x16U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_22 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0x17U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_23 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0xbU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_11 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0xaU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_10 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((9U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_9 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((8U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_8 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((7U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_7 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((2U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_2 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((1U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_1 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((3U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_3 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((6U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_6 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_0 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((4U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_4 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((5U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_5 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0xcU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_12 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
            if ((0xdU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_13 
                    = ((0x100U & vlSelf->Main__DOT__idu__DOT__contr_code)
                        ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                        : vlSelf->Main__DOT__exu__DOT__AluOut);
            }
        }
        vlSelf->Main__DOT__exu__DOT__Regs_32 = ((2U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                     >> 9U)))
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->Main__DOT__exu__DOT___AluOut_T_18)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                      >> 9U)))
                                                  ? vlSelf->Main__DOT__exu__DOT___Regs_32_T_10
                                                  : vlSelf->Main__DOT__exu__DOT___AluOut_T_16));
    }
    vlSelf->Main__DOT__exu__DOT___AluOut_T_16 = (4ULL 
                                                 + vlSelf->Main__DOT__exu__DOT__Regs_32);
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Main__DOT__exu__DOT__Regs_32, vlSelf->__Vtask_pmem_read__0__Rdata);
    vlSelf->Main__DOT__ifu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__0__Rdata;
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
    Main__DOT__exu__DOT___GEN_46 = ((0xdU == (0x1fU 
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
                                                          : vlSelf->Main__DOT__exu__DOT__Regs_0)))))))))))));
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
                                                          : vlSelf->Main__DOT__exu__DOT__Regs_0)))))))))))));
    vlSelf->Main__DOT__idu__DOT__inst_type = ((0x67U 
                                               == (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 1U
                                               : ((0x6fU 
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
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))))));
    Main__DOT__exu__DOT___GEN_59 = ((0x1aU == (0x1fU 
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
                                                          : Main__DOT__exu__DOT___GEN_46)))))))))))));
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
    if ((5U == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))) {
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
        vlSelf->Main__DOT__idu__DOT__inst_flag = (0x7fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata));
    } else if ((4U == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))) {
        vlSelf->Main__DOT__idu_io_Imm = (QData)((IData)(
                                                        ((IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0xcU)) 
                                                         << 0xcU)));
        vlSelf->Main__DOT__idu__DOT__inst_flag = (0x7fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata));
    } else if ((3U == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))) {
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
        vlSelf->Main__DOT__idu__DOT__inst_flag = Main__DOT__idu__DOT___inst_flag_T_10;
    } else if ((2U == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))) {
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
        vlSelf->Main__DOT__idu__DOT__inst_flag = Main__DOT__idu__DOT___inst_flag_T_10;
    } else if ((1U == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))) {
        vlSelf->Main__DOT__idu_io_Imm = (QData)((IData)(
                                                        (0xfffU 
                                                         & (IData)(
                                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                    >> 0x14U)))));
        vlSelf->Main__DOT__idu__DOT__inst_flag = Main__DOT__idu__DOT___inst_flag_T_10;
    } else {
        vlSelf->Main__DOT__idu_io_Imm = 0ULL;
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
    }
    vlSelf->Main__DOT__exu__DOT___GEN_64 = ((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                            >> 0x14U))))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                             : ((0x1eU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0x14U))))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_30
                                                 : 
                                                ((0x1dU 
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
                                                    : Main__DOT__exu__DOT___GEN_59)))));
    vlSelf->Main__DOT__exu__DOT___GEN_31 = ((0x1fU 
                                             == (0x1fU 
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
                                                 : 
                                                ((0x1dU 
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
    vlSelf->Main__DOT__exu__DOT___Regs_32_T_10 = (vlSelf->Main__DOT__exu__DOT__Regs_32 
                                                  + 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->Main__DOT__idu_io_Imm 
                                                                                >> 0x14U)))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     (0x1fffffU 
                                                                      & (IData)(vlSelf->Main__DOT__idu_io_Imm))))));
    vlSelf->Main__DOT__idu__DOT__contr_code = ((0x67U 
                                                == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                ? 0x110400U
                                                : (
                                                   (0x6fU 
                                                    == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                    ? 0x110200U
                                                    : 
                                                   ((0x17U 
                                                     == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                     ? 0x10c000U
                                                     : 
                                                    ((0x13U 
                                                      == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                      ? 0x108000U
                                                      : 
                                                     ((0x13U 
                                                       == vlSelf->Main__DOT__idu__DOT__inst_flag)
                                                       ? 0x104000U
                                                       : 0U)))));
    vlSelf->Main__DOT__exu__DOT___AluOut_T_18 = (vlSelf->Main__DOT__exu__DOT___GEN_31 
                                                 + vlSelf->Main__DOT__idu_io_Imm);
    vlSelf->Main__DOT__exu__DOT___AluOut_T_26 = ((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                      >> 0xeU)))
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->Main__DOT__exu__DOT__Regs_32)
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                       >> 0xeU)))
                                                   ? 
                                                  (vlSelf->Main__DOT__exu__DOT__Regs_32 
                                                   + vlSelf->Main__DOT__idu_io_Imm)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                        >> 0xeU)))
                                                    ? 
                                                   (vlSelf->Main__DOT__exu__DOT___GEN_31 
                                                    + vlSelf->Main__DOT__exu__DOT___GEN_64)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                         >> 0xeU)))
                                                     ? 
                                                    (vlSelf->Main__DOT__exu__DOT___GEN_31 
                                                     + 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->Main__DOT__idu_io_Imm 
                                                                                >> 0xbU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(vlSelf->Main__DOT__idu_io_Imm))))))
                                                     : 0ULL))));
    vlSelf->Main__DOT__exu__DOT__AluOut = ((5U == (0x1fU 
                                                   & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                      >> 0xeU)))
                                            ? vlSelf->Main__DOT__exu__DOT___AluOut_T_18
                                            : vlSelf->Main__DOT__exu__DOT___AluOut_T_26);
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                           ((5U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                                 >> 0xeU)))
                                                             ? vlSelf->Main__DOT__exu__DOT___AluOut_T_18
                                                             : vlSelf->Main__DOT__exu__DOT___AluOut_T_26), vlSelf->__Vtask_pmem_read__2__Rdata);
    vlSelf->Main__DOT__exu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__2__Rdata;
    if ((0x80000U & vlSelf->Main__DOT__idu__DOT__contr_code)) {
        VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                ((5U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                                      >> 0xeU)))
                                                                  ? vlSelf->Main__DOT__exu__DOT___AluOut_T_18
                                                                  : vlSelf->Main__DOT__exu__DOT___AluOut_T_26), vlSelf->Main__DOT__exu__DOT___GEN_64, 
                                                                (0xffU 
                                                                 & vlSelf->Main__DOT__idu__DOT__contr_code));
    }
}
