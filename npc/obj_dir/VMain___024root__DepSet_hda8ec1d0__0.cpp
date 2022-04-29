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

VL_INLINE_OPT void VMain___024root___sequent__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ Main__DOT__idu__DOT___inst_type_T_25;
    IData/*22:0*/ Main__DOT__idu__DOT___contr_code_T_49;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_13;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_26;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_45;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_58;
    QData/*63:0*/ Main__DOT__exu__DOT___AluOut_T_17;
    VlWide<4>/*126:0*/ Main__DOT__exu__DOT___AluOut_T_43;
    VlWide<4>/*127:0*/ __Vtemp_h5d6048bf__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1248dd0__0;
    VlWide<4>/*127:0*/ __Vtemp_h3456d128__0;
    VlWide<4>/*127:0*/ __Vtemp_hd8739c38__0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"reg");
    }
    if (vlSelf->reset) {
        vlSelf->Main__DOT__exu__DOT__Regs_31 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_30 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_29 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_28 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_27 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_26 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_25 = 0ULL;
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
        vlSelf->Main__DOT__exu__DOT__Regs_24 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_12 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_11 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_10 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_9 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_8 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_3 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_2 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_4 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_7 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_1 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_5 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_6 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_13 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__pc = 0x80000000ULL;
    } else {
        if ((0x400000U & vlSelf->Main__DOT__idu__DOT__contr_code)) {
            if ((0x1fU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_31 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x1eU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_30 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x1dU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_29 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x1cU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_28 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x1bU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_27 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x1aU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_26 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x19U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_25 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0xeU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_14 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0xfU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_15 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x10U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_16 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x11U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_17 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x12U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_18 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x13U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_19 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x14U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_20 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x15U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_21 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x16U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_22 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x17U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_23 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0x18U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_24 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0xcU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_12 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0xbU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_11 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0xaU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_10 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((9U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_9 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((8U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_8 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((3U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_3 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((2U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_2 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((4U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_4 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((7U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_7 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((1U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_1 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((5U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_5 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((6U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_6 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
            if ((0xdU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_13 
                    = ((3U == (7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                     >> 8U))) ? vlSelf->Main__DOT__exu__DOT___DataIn_T_5
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_11);
            }
        }
        vlSelf->Main__DOT__exu__DOT__pc = ((3U == (0x1fU 
                                                   & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                      >> 0xbU)))
                                            ? ((1ULL 
                                                == 
                                                (((QData)((IData)(
                                                                  vlSelf->Main__DOT__exu__DOT___AluOut_T_45[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->Main__DOT__exu__DOT___AluOut_T_45[0U]))))
                                                ? vlSelf->Main__DOT__exu__DOT___pc_T_19
                                                : vlSelf->Main__DOT__exu__DOT___AluOut_T_13)
                                            : ((2U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                    >> 0xbU)))
                                                ? (0xfffffffffffffffeULL 
                                                   & (vlSelf->Main__DOT__exu__DOT__DataR1 
                                                      + vlSelf->Main__DOT__idu_io_Imm))
                                                : (
                                                   (1U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                        >> 0xbU)))
                                                    ? vlSelf->Main__DOT__exu__DOT___pc_T_8
                                                    : vlSelf->Main__DOT__exu__DOT___pc_T_23)));
    }
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1fU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_31;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1eU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_30;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1dU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_29;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1cU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_28;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1bU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_27;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1aU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_26;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x19U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_25;
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
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xcU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_12;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xbU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_11;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xaU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_10;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[9U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_9;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[8U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_8;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[3U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_3;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[2U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_2;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[4U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_4;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[7U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_7;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[1U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_1;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[5U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_5;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[6U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_6;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xdU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_13;
    vlSelf->Main__DOT__exu__DOT___AluOut_T_13 = (4ULL 
                                                 + vlSelf->Main__DOT__exu__DOT__pc);
    vlSelf->Main__DOT__exu__DOT___pc_T_23 = (4ULL + vlSelf->Main__DOT__exu__DOT__pc);
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x20U] 
        = vlSelf->Main__DOT__exu__DOT__pc;
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Main__DOT__exu__DOT__pc, vlSelf->__Vtask_pmem_read__0__Rdata);
    vlSelf->Main__DOT__ifu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__0__Rdata;
    VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf);
    if ((0x100073U == (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) {
        VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    Main__DOT__idu__DOT___contr_code_T_49 = ((0x5013U 
                                              == (0xfc00707fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                              ? 0x4a0000U
                                              : ((0x40005033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                  ? 0x4b0000U
                                                  : 
                                                 ((0x40005013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0x4b0000U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0x440800U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0x441000U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0x51800U
                                                      : 
                                                     ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0x410200U
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0x460000U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0x71800U
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 0x480000U
                                                          : 0U))))))))));
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
    Main__DOT__idu__DOT___inst_type_T_25 = ((0x63U 
                                             == (0x7fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                             ? 3U : 
                                            ((0x13U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                              ? 1U : 
                                             ((3U == 
                                               (0x7fU 
                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 1U
                                               : ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 3U
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
                                                    ((0x3bU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 1U
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 1U
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
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 4U
                                                            : 0U)))))))))))));
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
    vlSelf->Main__DOT__idu__DOT__contr_code = ((0x3003U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                ? 0x430000U
                                                : (
                                                   (0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0x410100U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0x2100ffU
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0x410000U
                                                      : 
                                                     ((0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0x420000U
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0x410300U
                                                        : 
                                                       ((0x3bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0x420300U
                                                         : 
                                                        ((0x1033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 0x490000U
                                                          : 
                                                         ((0x1013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0x490000U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 0x4a0000U
                                                            : Main__DOT__idu__DOT___contr_code_T_49))))))))));
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
    vlSelf->Main__DOT__idu__DOT__inst_type = ((0x33U 
                                               == (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : (IData)(Main__DOT__idu__DOT___inst_type_T_25));
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
    vlSelf->Main__DOT__idu_io_Imm = ((5U == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))
                                      ? (QData)((IData)(
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
                                                               << 0xcU)))))
                                      : ((4U == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))
                                          ? (QData)((IData)(
                                                            ((IData)(
                                                                     (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                      >> 0xcU)) 
                                                             << 0xcU)))
                                          : ((3U == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))
                                              ? (QData)((IData)(
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
                                                                       << 0xbU)))))
                                              : ((2U 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))
                                                  ? (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & ((IData)(
                                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                                >> 0x19U)) 
                                                                         << 5U)) 
                                                                     | (0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                                >> 7U))))))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->Main__DOT__idu__DOT__inst_type))
                                                   ? (QData)((IData)(
                                                                     (0xfffU 
                                                                      & (IData)(
                                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                                >> 0x14U)))))
                                                   : 0ULL)))));
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
    vlSelf->Main__DOT__exu__DOT__DataR2 = ((0x1fU == 
                                            (0x1fU 
                                             & (IData)(
                                                       (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                        >> 0x14U))))
                                            ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                            : vlSelf->Main__DOT__exu__DOT___GEN_62);
    VL_EXTEND_WQ(127,64, __Vtemp_h5d6048bf__0, vlSelf->Main__DOT__exu__DOT__DataR1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_hf1248dd0__0, __Vtemp_h5d6048bf__0, 
                  (0x3fU & (IData)(vlSelf->Main__DOT__exu__DOT__DataR2)));
    VL_EXTEND_WQ(127,64, __Vtemp_h3456d128__0, ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                     >> 0x10U)))
                                                 ? 
                                                (vlSelf->Main__DOT__exu__DOT__DataR1 
                                                 - vlSelf->Main__DOT__exu__DOT__DataR2)
                                                 : 
                                                ((7U 
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
                                                        : 0ULL)))))))));
    if ((9U == (0x1fU & (vlSelf->Main__DOT__idu__DOT__contr_code 
                         >> 0x10U)))) {
        Main__DOT__exu__DOT___AluOut_T_43[0U] = __Vtemp_hf1248dd0__0[0U];
        Main__DOT__exu__DOT___AluOut_T_43[1U] = __Vtemp_hf1248dd0__0[1U];
        Main__DOT__exu__DOT___AluOut_T_43[2U] = __Vtemp_hf1248dd0__0[2U];
        Main__DOT__exu__DOT___AluOut_T_43[3U] = (0x7fffffffU 
                                                 & __Vtemp_hf1248dd0__0[3U]);
    } else {
        Main__DOT__exu__DOT___AluOut_T_43[0U] = __Vtemp_h3456d128__0[0U];
        Main__DOT__exu__DOT___AluOut_T_43[1U] = __Vtemp_h3456d128__0[1U];
        Main__DOT__exu__DOT___AluOut_T_43[2U] = __Vtemp_h3456d128__0[2U];
        Main__DOT__exu__DOT___AluOut_T_43[3U] = (0x7fffffffU 
                                                 & __Vtemp_h3456d128__0[3U]);
    }
    VL_EXTEND_WQ(127,64, __Vtemp_hd8739c38__0, (vlSelf->Main__DOT__exu__DOT__DataR1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->Main__DOT__exu__DOT__DataR2))));
    if ((9U == (0x1fU & (vlSelf->Main__DOT__idu__DOT__contr_code 
                         >> 0x10U)))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_45[0U] 
            = __Vtemp_hd8739c38__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_45[1U] 
            = __Vtemp_hd8739c38__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_45[2U] 
            = __Vtemp_hd8739c38__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_45[3U] 
            = __Vtemp_hd8739c38__0[3U];
    } else {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_45[0U] 
            = Main__DOT__exu__DOT___AluOut_T_43[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_45[1U] 
            = Main__DOT__exu__DOT___AluOut_T_43[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_45[2U] 
            = Main__DOT__exu__DOT___AluOut_T_43[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_45[3U] 
            = Main__DOT__exu__DOT___AluOut_T_43[3U];
    }
    vlSelf->Main__DOT__exu__DOT___DataIn_T_5 = (((QData)((IData)(
                                                                 ((vlSelf->Main__DOT__exu__DOT___AluOut_T_45[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->Main__DOT__exu__DOT___AluOut_T_45[0U])));
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                           (((QData)((IData)(
                                                                             vlSelf->Main__DOT__exu__DOT___AluOut_T_45[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->Main__DOT__exu__DOT___AluOut_T_45[0U]))), vlSelf->__Vtask_pmem_read__2__Rdata);
    vlSelf->Main__DOT__exu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__2__Rdata;
    if ((0x200000U & vlSelf->Main__DOT__idu__DOT__contr_code)) {
        VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                (((QData)((IData)(
                                                                                vlSelf->Main__DOT__exu__DOT___AluOut_T_45[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->Main__DOT__exu__DOT___AluOut_T_45[0U]))), 
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
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->Main__DOT__exu__DOT___AluOut_T_45[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->Main__DOT__exu__DOT___AluOut_T_45[0U])))
                                                    : 0ULL)));
}
