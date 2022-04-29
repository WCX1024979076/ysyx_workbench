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
    VlWide<3>/*95:0*/ Main__DOT__idu__DOT___io_Imm_T_3;
    VlWide<3>/*75:0*/ Main__DOT__idu__DOT___io_Imm_T_7;
    VlWide<3>/*76:0*/ Main__DOT__idu__DOT___io_Imm_T_59;
    QData/*63:0*/ Main__DOT__idu__DOT___io_Imm_T_100;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_133;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_157;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_168;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_185;
    CData/*4:0*/ Main__DOT__idu__DOT___contr_code_T_195;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_207;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_218;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_229;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_247;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_13;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_26;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_45;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_58;
    QData/*63:0*/ Main__DOT__exu__DOT___AluSrc1_T_4;
    QData/*63:0*/ Main__DOT__exu__DOT___AluSrc2_T_13;
    QData/*63:0*/ Main__DOT__exu__DOT___AluOut_T_24;
    QData/*63:0*/ Main__DOT__exu__DOT___AluOut_T_18;
    VlWide<4>/*127:0*/ __Vtemp_hea7202bd__0;
    VlWide<4>/*127:0*/ __Vtemp_h86ca5ee3__0;
    VlWide<4>/*127:0*/ __Vtemp_h380fad78__0;
    VlWide<4>/*127:0*/ __Vtemp_h105d8525__0;
    VlWide<4>/*127:0*/ __Vtemp_h608edee7__0;
    VlWide<4>/*127:0*/ __Vtemp_h97af0371__0;
    // Body
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
        if ((1U & (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_7))) {
            if ((0x1fU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_31 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x1eU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_30 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x1dU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_29 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x1cU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_28 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x1bU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_27 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x1aU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_26 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x19U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_25 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0xeU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_14 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0xfU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_15 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x10U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_16 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x11U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_17 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x12U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_18 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x13U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_19 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x14U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_20 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x15U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_21 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x16U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_22 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x17U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_23 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0x18U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                            >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_24 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0xcU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_12 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0xbU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_11 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0xaU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_10 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((9U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_9 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((8U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_8 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((3U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_3 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((2U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_2 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((4U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_4 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((7U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_7 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((1U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_1 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((5U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_5 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((6U == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                         >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_6 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
            if ((0xdU == (0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                           >> 7U))))) {
                vlSelf->Main__DOT__exu__DOT__Regs_13 
                    = vlSelf->Main__DOT__exu__DOT___DataIn_T_11;
            }
        }
        vlSelf->Main__DOT__exu__DOT__pc = ((3U == (
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x3003U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_144)))))
                                            ? ((1ULL 
                                                == 
                                                (((QData)((IData)(
                                                                  vlSelf->Main__DOT__exu__DOT___AluOut_T_40[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->Main__DOT__exu__DOT___AluOut_T_40[0U]))))
                                                ? vlSelf->Main__DOT__exu__DOT___pc_T_19
                                                : vlSelf->Main__DOT__exu__DOT___pc_T_1)
                                            : ((2U 
                                                == 
                                                ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                  ? 0U
                                                  : 
                                                 ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_144)))))
                                                ? (0xfffffffffffffffeULL 
                                                   & (vlSelf->Main__DOT__exu__DOT__DataR1 
                                                      + vlSelf->Main__DOT__idu_io_Imm))
                                                : (
                                                   (1U 
                                                    == 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x3003U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_144)))))
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
    vlSelf->Main__DOT__exu__DOT___pc_T_1 = (4ULL + vlSelf->Main__DOT__exu__DOT__pc);
    vlSelf->Main__DOT__exu__DOT___pc_T_23 = (4ULL + vlSelf->Main__DOT__exu__DOT__pc);
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x20U] 
        = vlSelf->Main__DOT__exu__DOT__pc;
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Main__DOT__exu__DOT__pc, vlSelf->__Vtask_pmem_read__0__Rdata);
    vlSelf->Main__DOT__ifu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__0__Rdata;
    VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf);
    if ((0x100073U == (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) {
        VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    vlSelf->Main__DOT__idu__DOT__contr_code_7 = ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                  ? 0U
                                                  : 
                                                 ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0xffU
                                                    : 0U)));
    Main__DOT__idu__DOT___contr_code_T_133 = ((0x4000003bU 
                                               == (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 2U
                                                   : 
                                                  ((0x4033U 
                                                    != 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                   & ((0x4013U 
                                                       != 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                      & ((0x6033U 
                                                          != 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                         & ((0x6013U 
                                                             != 
                                                             (0x707fU 
                                                              & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                            & ((0x7033U 
                                                                != 
                                                                (0xfe00707fU 
                                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                               & ((0x7013U 
                                                                   != 
                                                                   (0x707fU 
                                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                  & ((0x2033U 
                                                                      != 
                                                                      (0xfe00707fU 
                                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                     & ((0x2013U 
                                                                         != 
                                                                         (0x707fU 
                                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                        & ((0x6fU 
                                                                            == 
                                                                            (0x7fU 
                                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                           | (0x67U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))))))))))))));
    vlSelf->Main__DOT__idu__DOT__contr_code_1 = ((0x17U 
                                                  != 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                 & ((0x3003U 
                                                     != 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                    & (0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_87 = 
        ((0x3023U != (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
         & ((0x13U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
            | ((0x33U == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
               | ((0x1bU == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                  | ((0x3bU == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                     | ((0x1033U == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                        | ((0x1013U == (0xfc00707fU 
                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                           | ((0x5033U == (0xfe00707fU 
                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                              | ((0x5013U == (0xfc00707fU 
                                              & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                 | ((0x40005033U == 
                                     (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                    | ((0x40005013U 
                                        == (0xfc00707fU 
                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                       | ((0x40000033U 
                                           == (0xfe00707fU 
                                               & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                          | ((0x4000003bU 
                                              == (0xfe00707fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                             | ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                | ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                   | ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                      | ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                         | ((0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                            | ((0x7033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                               | ((0x7013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                  | ((0x2033U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                     | ((0x2013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                        | ((0x6fU 
                                                                            == 
                                                                            (0x7fU 
                                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                           | ((0x67U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                              | ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                & ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | (0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))))))))))))))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_157 = ((0x6013U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 4U
                                               : ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 4U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 4U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 6U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 6U
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0U
                                                         : 
                                                        ((0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 4U
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 4U
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
    Main__DOT__idu__DOT___contr_code_T_185 = ((0x7033U 
                                               == (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 1U
                                               : ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 1U
                                                   : 
                                                  ((0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0xcU
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0xcU
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 1U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 1U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 8U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 8U
                                                         : 
                                                        ((0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 0xaU
                                                          : 
                                                         ((0x1063U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 9U
                                                           : 0U))))))))));
    vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8 = ((((0x1000U 
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
                                                      << 0xbU)));
    Main__DOT__idu__DOT___io_Imm_T_3[0U] = ((IData)(
                                                    (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                     >> 0xcU)) 
                                            << 0xcU);
    Main__DOT__idu__DOT___io_Imm_T_3[1U] = (IData)(
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0x1fU)))
                                                     ? 0xffffffffffffffffULL
                                                     : 0ULL));
    Main__DOT__idu__DOT___io_Imm_T_3[2U] = (IData)(
                                                   (((1U 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0x1fU)))
                                                      ? 0xffffffffffffffffULL
                                                      : 0ULL) 
                                                    >> 0x20U));
    vlSelf->Main__DOT__idu__DOT__io_Imm_lo_2 = ((0xfe0U 
                                                 & ((IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0x19U)) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 7U))));
    vlSelf->Main__DOT__idu__DOT__io_Imm_lo_6 = ((((0x100000U 
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
                                                      << 0xcU)));
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
    Main__DOT__idu__DOT___io_Imm_T_7[0U] = (((IData)(
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0x1fU)))
                                                       ? 0xffffffffffffffffULL
                                                       : 0ULL)) 
                                             << 0xcU) 
                                            | (0xfffU 
                                               & (IData)(
                                                         (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                          >> 0x14U))));
    Main__DOT__idu__DOT___io_Imm_T_7[1U] = (((IData)(
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0x1fU)))
                                                       ? 0xffffffffffffffffULL
                                                       : 0ULL)) 
                                             >> 0x14U) 
                                            | ((IData)(
                                                       (((1U 
                                                          & (IData)(
                                                                    (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                     >> 0x1fU)))
                                                          ? 0xffffffffffffffffULL
                                                          : 0ULL) 
                                                        >> 0x20U)) 
                                               << 0xcU));
    Main__DOT__idu__DOT___io_Imm_T_7[2U] = ((IData)(
                                                    (((1U 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0x1fU)))
                                                       ? 0xffffffffffffffffULL
                                                       : 0ULL) 
                                                     >> 0x20U)) 
                                            >> 0x14U);
    Main__DOT__idu__DOT___contr_code_T_207 = ((0x2003U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 3U
                                               : ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 3U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 3U
                                                    : 0U)));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_144 
        = ((0x13U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
            ? 0U : ((0x33U == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                     ? 0U : ((0x1bU == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                              ? 0U : ((0x3bU == (0xfe00707fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                       ? 0U : ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                ? 0U
                                                : (
                                                   (0x1013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x40005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x40005013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0U
                                                         : (IData)(Main__DOT__idu__DOT___contr_code_T_133))))))))))));
    Main__DOT__idu__DOT___contr_code_T_168 = ((0x1013U 
                                               == (0xfc00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 2U
                                               : ((0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 1U
                                                   : 
                                                  ((0x5013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 2U
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 1U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 2U
                                                      : 
                                                     ((0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 3U
                                                         : 
                                                        ((0x4033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 0U
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 4U
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 0U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_157))))))))))));
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
    Main__DOT__idu__DOT___contr_code_T_195 = ((0x5013U 
                                               == (0xfc00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0xfU
                                               : ((0x40005033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0x10U
                                                   : 
                                                  ((0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0x10U
                                                    : 
                                                   ((0x40000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 2U
                                                     : 
                                                    ((0x4000003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 2U
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0xeU
                                                       : 
                                                      ((0x4033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0x11U
                                                        : 
                                                       ((0x4013U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0x11U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 0x12U
                                                          : 
                                                         ((0x6013U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0x12U
                                                           : (IData)(Main__DOT__idu__DOT___contr_code_T_185)))))))))));
    Main__DOT__idu__DOT___io_Imm_T_59[0U] = (((IData)(
                                                      ((0x1000U 
                                                        & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8))
                                                        ? 0xffffffffffffffffULL
                                                        : 0ULL)) 
                                              << 0xdU) 
                                             | (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8));
    Main__DOT__idu__DOT___io_Imm_T_59[1U] = (((IData)(
                                                      ((0x1000U 
                                                        & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8))
                                                        ? 0xffffffffffffffffULL
                                                        : 0ULL)) 
                                              >> 0x13U) 
                                             | ((IData)(
                                                        (((0x1000U 
                                                           & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8))
                                                           ? 0xffffffffffffffffULL
                                                           : 0ULL) 
                                                         >> 0x20U)) 
                                                << 0xdU));
    Main__DOT__idu__DOT___io_Imm_T_59[2U] = ((IData)(
                                                     (((0x1000U 
                                                        & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8))
                                                        ? 0xffffffffffffffffULL
                                                        : 0ULL) 
                                                      >> 0x20U)) 
                                             >> 0x13U);
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
    Main__DOT__idu__DOT___io_Imm_T_100 = ((0x6fU == 
                                           (0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                           ? ((((0x100000U 
                                                 & vlSelf->Main__DOT__idu__DOT__io_Imm_lo_6)
                                                 ? 0x7ffffffffffULL
                                                 : 0ULL) 
                                               << 0x15U) 
                                              | (QData)((IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_6)))
                                           : ((0x37U 
                                               == (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? (((QData)((IData)(
                                                                   Main__DOT__idu__DOT___io_Imm_T_3[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    Main__DOT__idu__DOT___io_Imm_T_3[0U])))
                                               : ((0x3bU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0ULL
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     Main__DOT__idu__DOT___io_Imm_T_7[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      Main__DOT__idu__DOT___io_Imm_T_7[0U])))
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0ULL
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       Main__DOT__idu__DOT___io_Imm_T_7[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        Main__DOT__idu__DOT___io_Imm_T_7[0U])))
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 
                                                      ((((0x800U 
                                                          & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_2))
                                                          ? 0xfffffffffffffULL
                                                          : 0ULL) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_2)))
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         Main__DOT__idu__DOT___io_Imm_T_7[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          Main__DOT__idu__DOT___io_Imm_T_7[0U])))
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          Main__DOT__idu__DOT___io_Imm_T_3[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           Main__DOT__idu__DOT___io_Imm_T_3[0U])))
                                                         : 0ULL)))))))));
    if ((0x4033U == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        Main__DOT__idu__DOT___contr_code_T_247 = 0U;
        Main__DOT__idu__DOT___contr_code_T_218 = 0U;
    } else if ((0x4013U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        Main__DOT__idu__DOT___contr_code_T_247 = 0U;
        Main__DOT__idu__DOT___contr_code_T_218 = 0U;
    } else if ((0x6033U == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        Main__DOT__idu__DOT___contr_code_T_247 = 0U;
        Main__DOT__idu__DOT___contr_code_T_218 = 0U;
    } else if ((0x6013U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        Main__DOT__idu__DOT___contr_code_T_247 = 0U;
        Main__DOT__idu__DOT___contr_code_T_218 = 0U;
    } else if ((0x7033U == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        Main__DOT__idu__DOT___contr_code_T_247 = 0U;
        Main__DOT__idu__DOT___contr_code_T_218 = 0U;
    } else if ((0x7013U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        Main__DOT__idu__DOT___contr_code_T_247 = 0U;
        Main__DOT__idu__DOT___contr_code_T_218 = 0U;
    } else if ((0x2033U == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        Main__DOT__idu__DOT___contr_code_T_247 = 0U;
        Main__DOT__idu__DOT___contr_code_T_218 = 0U;
    } else if ((0x2013U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        Main__DOT__idu__DOT___contr_code_T_247 = 0U;
        Main__DOT__idu__DOT___contr_code_T_218 = 0U;
    } else if ((0x6fU == (0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        Main__DOT__idu__DOT___contr_code_T_247 = 0U;
        Main__DOT__idu__DOT___contr_code_T_218 = 1U;
    } else if ((0x67U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        Main__DOT__idu__DOT___contr_code_T_247 = 0U;
        Main__DOT__idu__DOT___contr_code_T_218 = 2U;
    } else if ((0x63U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        Main__DOT__idu__DOT___contr_code_T_247 = 0U;
        Main__DOT__idu__DOT___contr_code_T_218 = 3U;
    } else {
        Main__DOT__idu__DOT___contr_code_T_247 = Main__DOT__idu__DOT___contr_code_T_207;
        Main__DOT__idu__DOT___contr_code_T_218 = Main__DOT__idu__DOT___contr_code_T_207;
    }
    vlSelf->Main__DOT__idu__DOT__contr_code_3 = ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                  ? 7U
                                                  : 
                                                 ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 4U
                                                   : 
                                                  ((0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 4U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 4U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 4U
                                                       : 
                                                      ((0x3bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x1033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 1U
                                                         : (IData)(Main__DOT__idu__DOT___contr_code_T_168)))))))));
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
    vlSelf->Main__DOT__idu_io_AluSrc2Op = ((0x17U == 
                                            (0x7fU 
                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                            ? 1U : 
                                           ((0x3003U 
                                             == (0x707fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                             ? 1U : 
                                            ((0x3023U 
                                              == (0x707fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                              ? 1U : 
                                             ((0x13U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 1U
                                               : ((0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 1U
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 1U
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 1U
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0xeU
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0xeU
                                                       : 
                                                      ((0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0xfU
                                                        : (IData)(Main__DOT__idu__DOT___contr_code_T_195)))))))))));
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
    vlSelf->Main__DOT__idu_io_Imm = ((0x63U == (0x7fU 
                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                      ? (((QData)((IData)(
                                                          Main__DOT__idu__DOT___io_Imm_T_59[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           Main__DOT__idu__DOT___io_Imm_T_59[0U])))
                                      : ((0x13U == 
                                          (0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                          ? (((QData)((IData)(
                                                              Main__DOT__idu__DOT___io_Imm_T_7[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               Main__DOT__idu__DOT___io_Imm_T_7[0U])))
                                          : ((3U == 
                                              (0x7fU 
                                               & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                              ? (((QData)((IData)(
                                                                  Main__DOT__idu__DOT___io_Imm_T_7[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   Main__DOT__idu__DOT___io_Imm_T_7[0U])))
                                              : ((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   Main__DOT__idu__DOT___io_Imm_T_59[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    Main__DOT__idu__DOT___io_Imm_T_59[0U])))
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    Main__DOT__idu__DOT___io_Imm_T_7[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     Main__DOT__idu__DOT___io_Imm_T_7[0U])))
                                                   : Main__DOT__idu__DOT___io_Imm_T_100)))));
    if ((0x1bU == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu__DOT___contr_code_T_258 = 2U;
        Main__DOT__idu__DOT___contr_code_T_229 = 0U;
    } else if ((0x3bU == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu__DOT___contr_code_T_258 = 0U;
        Main__DOT__idu__DOT___contr_code_T_229 = 0U;
    } else if ((0x1033U == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu__DOT___contr_code_T_258 = 0U;
        Main__DOT__idu__DOT___contr_code_T_229 = 0U;
    } else if ((0x1013U == (0xfc00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu__DOT___contr_code_T_258 = 0U;
        Main__DOT__idu__DOT___contr_code_T_229 = 0U;
    } else if ((0x5033U == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu__DOT___contr_code_T_258 = 0U;
        Main__DOT__idu__DOT___contr_code_T_229 = 0U;
    } else if ((0x5013U == (0xfc00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu__DOT___contr_code_T_258 = 0U;
        Main__DOT__idu__DOT___contr_code_T_229 = 0U;
    } else if ((0x40005033U == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu__DOT___contr_code_T_258 = 0U;
        Main__DOT__idu__DOT___contr_code_T_229 = 0U;
    } else if ((0x40005013U == (0xfc00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu__DOT___contr_code_T_258 = 0U;
        Main__DOT__idu__DOT___contr_code_T_229 = 0U;
    } else if ((0x40000033U == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu__DOT___contr_code_T_258 = 0U;
        Main__DOT__idu__DOT___contr_code_T_229 = 0U;
    } else if ((0x4000003bU == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu__DOT___contr_code_T_258 = 2U;
        Main__DOT__idu__DOT___contr_code_T_229 = 0U;
    } else if ((0x37U == (0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu__DOT___contr_code_T_258 = 2U;
        Main__DOT__idu__DOT___contr_code_T_229 = 0U;
    } else {
        vlSelf->Main__DOT__idu__DOT___contr_code_T_258 
            = Main__DOT__idu__DOT___contr_code_T_247;
        Main__DOT__idu__DOT___contr_code_T_229 = Main__DOT__idu__DOT___contr_code_T_218;
    }
    vlSelf->Main__DOT__exu__DOT__DataR2 = ((0x1fU == 
                                            (0x1fU 
                                             & (IData)(
                                                       (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                        >> 0x14U))))
                                            ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                            : vlSelf->Main__DOT__exu__DOT___GEN_62);
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
    vlSelf->Main__DOT__idu__DOT__contr_code_5 = ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                  ? 0U
                                                  : 
                                                 ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : (IData)(Main__DOT__idu__DOT___contr_code_T_229))))));
    Main__DOT__exu__DOT___AluSrc2_T_13 = ((6U == (IData)(vlSelf->Main__DOT__idu_io_AluSrc2Op))
                                           ? 4ULL : 
                                          ((4U == (IData)(vlSelf->Main__DOT__idu_io_AluSrc2Op))
                                            ? vlSelf->Main__DOT__idu_io_Imm
                                            : ((3U 
                                                == (IData)(vlSelf->Main__DOT__idu_io_AluSrc2Op))
                                                ? 0xcULL
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->Main__DOT__idu_io_AluSrc2Op))
                                                    ? (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (IData)(vlSelf->Main__DOT__idu_io_Imm))))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->Main__DOT__idu_io_AluSrc2Op))
                                                     ? (QData)((IData)(
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->Main__DOT__exu__DOT__DataR2))))
                                                     : vlSelf->Main__DOT__exu__DOT__DataR2)))));
    Main__DOT__exu__DOT___AluSrc1_T_4 = ((1U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_5))
                                          ? vlSelf->Main__DOT__exu__DOT__pc
                                          : vlSelf->Main__DOT__exu__DOT__DataR1);
    if ((7U == (IData)(vlSelf->Main__DOT__idu_io_AluSrc2Op))) {
        vlSelf->Main__DOT__exu__DOT__AluSrc2 = vlSelf->Main__DOT__exu__DOT__pc;
        Main__DOT__exu__DOT___AluOut_T_18 = vlSelf->Main__DOT__exu__DOT__pc;
    } else {
        vlSelf->Main__DOT__exu__DOT__AluSrc2 = Main__DOT__exu__DOT___AluSrc2_T_13;
        Main__DOT__exu__DOT___AluOut_T_18 = Main__DOT__exu__DOT___AluSrc2_T_13;
    }
    if ((2U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_5))) {
        vlSelf->Main__DOT__exu__DOT__AluSrc1 = (QData)((IData)(
                                                               (0xfffffU 
                                                                & (IData)(
                                                                          (vlSelf->Main__DOT__idu_io_Imm 
                                                                           >> 0xcU)))));
        Main__DOT__exu__DOT___AluOut_T_24 = (QData)((IData)(
                                                            (0xfffffU 
                                                             & (IData)(
                                                                       (vlSelf->Main__DOT__idu_io_Imm 
                                                                        >> 0xcU)))));
    } else {
        vlSelf->Main__DOT__exu__DOT__AluSrc1 = Main__DOT__exu__DOT___AluSrc1_T_4;
        Main__DOT__exu__DOT___AluOut_T_24 = Main__DOT__exu__DOT___AluSrc1_T_4;
    }
    VL_EXTEND_WQ(128,64, __Vtemp_hea7202bd__0, VL_MODDIV_QQQ(64, vlSelf->Main__DOT__exu__DOT__AluSrc1, vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_h86ca5ee3__0, VL_MODDIVS_QQQ(64, Main__DOT__exu__DOT___AluOut_T_24, Main__DOT__exu__DOT___AluOut_T_18));
    VL_EXTEND_WQ(128,64, __Vtemp_h380fad78__0, vlSelf->Main__DOT__exu__DOT__AluSrc1);
    VL_EXTEND_WQ(128,64, __Vtemp_h105d8525__0, vlSelf->Main__DOT__exu__DOT__AluSrc2);
    VL_MUL_W(4, __Vtemp_h608edee7__0, __Vtemp_h380fad78__0, __Vtemp_h105d8525__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h97af0371__0, ((2U 
                                                 == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))
                                                 ? 
                                                (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                 - vlSelf->Main__DOT__exu__DOT__AluSrc2)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))
                                                  ? 
                                                 (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                  + vlSelf->Main__DOT__exu__DOT__AluSrc2)
                                                  : 0ULL)));
    if ((7U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[0U] 
            = __Vtemp_hea7202bd__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[1U] 
            = __Vtemp_hea7202bd__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[2U] 
            = __Vtemp_hea7202bd__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[3U] 
            = __Vtemp_hea7202bd__0[3U];
    } else if ((6U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[0U] 
            = __Vtemp_h86ca5ee3__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[1U] 
            = __Vtemp_h86ca5ee3__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[2U] 
            = __Vtemp_h86ca5ee3__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[3U] 
            = __Vtemp_h86ca5ee3__0[3U];
    } else if ((3U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[0U] 
            = __Vtemp_h608edee7__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[1U] 
            = __Vtemp_h608edee7__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[2U] 
            = __Vtemp_h608edee7__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[3U] 
            = __Vtemp_h608edee7__0[3U];
    } else {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[0U] 
            = __Vtemp_h97af0371__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[1U] 
            = __Vtemp_h97af0371__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[2U] 
            = __Vtemp_h97af0371__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_40[3U] 
            = __Vtemp_h97af0371__0[3U];
    }
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                           (((QData)((IData)(
                                                                             vlSelf->Main__DOT__exu__DOT___AluOut_T_40[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->Main__DOT__exu__DOT___AluOut_T_40[0U]))), vlSelf->__Vtask_pmem_read__2__Rdata);
    vlSelf->Main__DOT__exu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__2__Rdata;
    if (((0x17U == (0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
          ? 0U : ((0x3003U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                   ? 1U : ((0x3023U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                            ? 0U : ((0x13U == (0x707fU 
                                               & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                     ? 0U : ((0x33U 
                                              == (0xfe00707fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                              ? 0U : 
                                             (1U & (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_258)))))))) {
        VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                (((QData)((IData)(
                                                                                vlSelf->Main__DOT__exu__DOT___AluOut_T_40[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->Main__DOT__exu__DOT___AluOut_T_40[0U]))), 
                                                                ((0x1fU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(
                                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                              >> 0x14U))))
                                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                                                  : vlSelf->Main__DOT__exu__DOT___GEN_62), 
                                                                ((0x17U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                 | ((0x3003U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                    | (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_87))));
    }
    vlSelf->Main__DOT__exu__DOT___DataIn_T_11 = ((IData)(vlSelf->Main__DOT__idu__DOT__contr_code_1)
                                                  ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                                                  : 
                                                 ((IData)(vlSelf->Main__DOT__idu__DOT__contr_code_1)
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->Main__DOT__exu__DOT___AluOut_T_40[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->Main__DOT__exu__DOT___AluOut_T_40[0U])))));
}
