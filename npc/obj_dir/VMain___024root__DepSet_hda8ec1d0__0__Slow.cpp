// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

void VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);
void VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 33> &a);

VL_ATTR_COLD void VMain___024root___settle__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_139;
    CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_201;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_241;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_256;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_296;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_311;
    CData/*4:0*/ Main__DOT__idu__DOT___contr_code_T_351;
    CData/*4:0*/ Main__DOT__idu__DOT___contr_code_T_366;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_431;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_464;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_479;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_534;
    QData/*63:0*/ Main__DOT__exu__DOT___AluSrc1_T_7;
    QData/*63:0*/ Main__DOT__exu__DOT___AluSrc2_T_14;
    VlWide<4>/*127:0*/ Main__DOT__exu__DOT___AluOutTmp_T_64;
    QData/*63:0*/ Main__DOT__exu__DOT___io_EXUPc_T_24;
    QData/*63:0*/ Main__DOT__wbu__DOT___io_DataIn_T_50;
    QData/*63:0*/ Main__DOT__regs__DOT___GEN_20;
    QData/*63:0*/ Main__DOT__regs__DOT___GEN_52;
    VlWide<4>/*127:0*/ __Vtemp_heca35210__0;
    VlWide<4>/*127:0*/ __Vtemp_h095499dd__0;
    VlWide<4>/*127:0*/ __Vtemp_h0963fab0__0;
    VlWide<4>/*127:0*/ __Vtemp_h380fad78__0;
    VlWide<4>/*127:0*/ __Vtemp_h71ab9800__0;
    VlWide<4>/*127:0*/ __Vtemp_h091903f5__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2f91b4c__0;
    VlWide<4>/*127:0*/ __Vtemp_hea7202bd__0;
    VlWide<4>/*127:0*/ __Vtemp_hea5ef5de__0;
    VlWide<4>/*127:0*/ __Vtemp_hea730a05__0;
    VlWide<3>/*95:0*/ __Vtemp_h046d9405__0;
    VlWide<3>/*95:0*/ __Vtemp_hcc8b333a__0;
    VlWide<3>/*95:0*/ __Vtemp_h104f9c54__0;
    VlWide<3>/*95:0*/ __Vtemp_h8a625cc0__0;
    VlWide<3>/*95:0*/ __Vtemp_h047d57b8__0;
    VlWide<3>/*95:0*/ __Vtemp_h0ef72c5c__0;
    VlWide<4>/*127:0*/ __Vtemp_h844e48cf__0;
    VlWide<4>/*127:0*/ __Vtemp_h380fad78__1;
    VlWide<4>/*127:0*/ __Vtemp_h105d8525__0;
    VlWide<4>/*127:0*/ __Vtemp_h869d37e7__0;
    VlWide<4>/*127:0*/ __Vtemp_h421b6ee2__0;
    VlWide<4>/*127:0*/ __Vtemp_h47e711db__0;
    VlWide<4>/*127:0*/ __Vtemp_hb1487360__0;
    VlWide<4>/*127:0*/ __Vtemp_h4587e76d__0;
    VlWide<3>/*95:0*/ __Vtemp_h30bf6211__0;
    VlWide<3>/*95:0*/ __Vtemp_hc162dda6__0;
    VlWide<3>/*95:0*/ __Vtemp_h1e81b01f__0;
    VlWide<4>/*127:0*/ __Vtemp_h5596e474__0;
    VlWide<4>/*127:0*/ __Vtemp_hecc15f8d__0;
    VlWide<4>/*127:0*/ __Vtemp_hecd1af0b__0;
    // Body
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0U] = 0ULL;
    Main__DOT__wbu__DOT___io_DataIn_T_50 = ((8U == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                             ? (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->Main__DOT__memu__DOT__MemOutReg))))
                                             : ((7U 
                                                 == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                                 ? 
                                                (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->Main__DOT__memu__DOT__MemOutReg 
                                                                               >> 0x1fU)))
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->Main__DOT__memu__DOT__MemOutReg)))
                                                 : 
                                                ((6U 
                                                  == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->Main__DOT__memu__DOT__AluOutOutReg 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->Main__DOT__memu__DOT__AluOutOutReg)))
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                                   ? 
                                                  ((((1U 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__memu__DOT__MemOutReg 
                                                                 >> 0xfU)))
                                                      ? 0xffffffffffffULL
                                                      : 0ULL) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->Main__DOT__memu__DOT__MemOutReg)))))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__memu__DOT__AluOutOutReg 
                                                                  >> 0xfU)))
                                                       ? 0xffffffffffffULL
                                                       : 0ULL) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->Main__DOT__memu__DOT__AluOutOutReg)))))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                                     ? 
                                                    ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->Main__DOT__memu__DOT__MemOutReg 
                                                                   >> 7U)))
                                                        ? 0xffffffffffffffULL
                                                        : 0ULL) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->Main__DOT__memu__DOT__MemOutReg)))))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                                      ? 
                                                     ((((1U 
                                                         & (IData)(
                                                                   (vlSelf->Main__DOT__memu__DOT__AluOutOutReg 
                                                                    >> 7U)))
                                                         ? 0xffffffffffffffULL
                                                         : 0ULL) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->Main__DOT__memu__DOT__AluOutOutReg)))))
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                                       ? vlSelf->Main__DOT__memu__DOT__MemOutReg
                                                       : vlSelf->Main__DOT__memu__DOT__AluOutOutReg))))))));
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[1U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_1;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[2U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_2;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[3U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_3;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[4U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_4;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[5U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_5;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[6U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_6;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[7U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_7;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[8U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_8;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[9U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_9;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0xaU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_10;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0xbU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_11;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0xcU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_12;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0xdU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_13;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0xeU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_14;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0xfU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_15;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x10U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_16;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x11U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_17;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x12U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_18;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x13U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_19;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x14U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_20;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x15U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_21;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x16U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_22;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x17U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_23;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x18U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_24;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x19U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_25;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x1aU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_26;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x1bU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_27;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x1cU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_28;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x1dU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_29;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x1eU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_30;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x1fU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_31;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x20U] 
        = vlSelf->Main__DOT__wbu__DOT__PcValReg;
    Main__DOT__regs__DOT___GEN_52 = ((0x14U == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                      ? vlSelf->Main__DOT__regs__DOT__Regs_20
                                      : ((0x13U == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                          ? vlSelf->Main__DOT__regs__DOT__Regs_19
                                          : ((0x12U 
                                              == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                              ? vlSelf->Main__DOT__regs__DOT__Regs_18
                                              : ((0x11U 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                  ? vlSelf->Main__DOT__regs__DOT__Regs_17
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                   ? vlSelf->Main__DOT__regs__DOT__Regs_16
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                    ? vlSelf->Main__DOT__regs__DOT__Regs_15
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                     ? vlSelf->Main__DOT__regs__DOT__Regs_14
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                      ? vlSelf->Main__DOT__regs__DOT__Regs_13
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                       ? vlSelf->Main__DOT__regs__DOT__Regs_12
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                        ? vlSelf->Main__DOT__regs__DOT__Regs_11
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                         ? vlSelf->Main__DOT__regs__DOT__Regs_10
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                          ? vlSelf->Main__DOT__regs__DOT__Regs_9
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                           ? vlSelf->Main__DOT__regs__DOT__Regs_8
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                            ? vlSelf->Main__DOT__regs__DOT__Regs_7
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                             ? vlSelf->Main__DOT__regs__DOT__Regs_6
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                              ? vlSelf->Main__DOT__regs__DOT__Regs_5
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                               ? vlSelf->Main__DOT__regs__DOT__Regs_4
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                                ? vlSelf->Main__DOT__regs__DOT__Regs_3
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                                 ? vlSelf->Main__DOT__regs__DOT__Regs_2
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                                  ? vlSelf->Main__DOT__regs__DOT__Regs_1
                                                                  : 0ULL))))))))))))))))))));
    Main__DOT__regs__DOT___GEN_20 = ((0x14U == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                      ? vlSelf->Main__DOT__regs__DOT__Regs_20
                                      : ((0x13U == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                          ? vlSelf->Main__DOT__regs__DOT__Regs_19
                                          : ((0x12U 
                                              == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                              ? vlSelf->Main__DOT__regs__DOT__Regs_18
                                              : ((0x11U 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                  ? vlSelf->Main__DOT__regs__DOT__Regs_17
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                   ? vlSelf->Main__DOT__regs__DOT__Regs_16
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                    ? vlSelf->Main__DOT__regs__DOT__Regs_15
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                     ? vlSelf->Main__DOT__regs__DOT__Regs_14
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                      ? vlSelf->Main__DOT__regs__DOT__Regs_13
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                       ? vlSelf->Main__DOT__regs__DOT__Regs_12
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                        ? vlSelf->Main__DOT__regs__DOT__Regs_11
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                         ? vlSelf->Main__DOT__regs__DOT__Regs_10
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                          ? vlSelf->Main__DOT__regs__DOT__Regs_9
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                           ? vlSelf->Main__DOT__regs__DOT__Regs_8
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                            ? vlSelf->Main__DOT__regs__DOT__Regs_7
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                             ? vlSelf->Main__DOT__regs__DOT__Regs_6
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                              ? vlSelf->Main__DOT__regs__DOT__Regs_5
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                               ? vlSelf->Main__DOT__regs__DOT__Regs_4
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                                ? vlSelf->Main__DOT__regs__DOT__Regs_3
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                                 ? vlSelf->Main__DOT__regs__DOT__Regs_2
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                                  ? vlSelf->Main__DOT__regs__DOT__Regs_1
                                                                  : 0ULL))))))))))))))))))));
    if (((IData)(vlSelf->Main__DOT__memu__DOT__EbreakInOutReg) 
         & (IData)(vlSelf->Main__DOT__memu__DOT__MEMUFlagReg))) {
        VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    vlSelf->Main__DOT__wbu_io_RegWriteOut = ((IData)(vlSelf->Main__DOT__memu__DOT__RegWriteOutReg) 
                                             & (IData)(vlSelf->Main__DOT__memu__DOT__MEMUFlagReg));
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Main__DOT__exu__DOT__AluOutReg, vlSelf->__Vtask_pmem_read__1__Rdata);
    vlSelf->Main__DOT__memu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__1__Rdata;
    if (((IData)(vlSelf->Main__DOT__exu__DOT__MemWriteOutReg) 
         & (IData)(vlSelf->Main__DOT__exu__DOT__EXUFlagReg))) {
        VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->Main__DOT__exu__DOT__AluOutReg, vlSelf->Main__DOT__exu__DOT__DataR2OutReg, (IData)(vlSelf->Main__DOT__exu__DOT__MemMaskOutReg));
    }
    Main__DOT__exu__DOT___io_EXUPc_T_24 = (vlSelf->Main__DOT__idu__DOT__PcValReg 
                                           + ((((1U 
                                                 & (IData)(
                                                           (vlSelf->Main__DOT__idu__DOT__ImmReg 
                                                            >> 0xcU)))
                                                 ? 0x7ffffffffffffULL
                                                 : 0ULL) 
                                               << 0xdU) 
                                              | (QData)((IData)(
                                                                (0x1fffU 
                                                                 & (IData)(vlSelf->Main__DOT__idu__DOT__ImmReg))))));
    vlSelf->Main__DOT__ifu_io_IDUWait = (((((((IData)(vlSelf->Main__DOT__idu__DOT__R1Reg) 
                                              == (IData)(vlSelf->Main__DOT__exu__DOT__RdestOutReg)) 
                                             | ((IData)(vlSelf->Main__DOT__idu__DOT__R2Reg) 
                                                == (IData)(vlSelf->Main__DOT__exu__DOT__RdestOutReg))) 
                                            & (IData)(vlSelf->Main__DOT__exu__DOT__EXUFlagReg)) 
                                           | (((IData)(vlSelf->Main__DOT__idu__DOT__R1Reg) 
                                               == (IData)(vlSelf->Main__DOT__memu__DOT__RdestOutReg)) 
                                              & (IData)(vlSelf->Main__DOT__memu__DOT__MEMUFlagReg))) 
                                          | (((IData)(vlSelf->Main__DOT__idu__DOT__R2Reg) 
                                              == (IData)(vlSelf->Main__DOT__memu__DOT__RdestOutReg)) 
                                             & (IData)(vlSelf->Main__DOT__memu__DOT__MEMUFlagReg))) 
                                         & (IData)(vlSelf->Main__DOT__idu__DOT__IDUFlagReg));
    vlSelf->io_Inst = vlSelf->Main__DOT__ifu__DOT__InstReg;
    vlSelf->Main__DOT__idu__DOT___ImmReg_T_4 = (((QData)((IData)(
                                                                 ((vlSelf->Main__DOT__ifu__DOT__InstReg 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))));
    vlSelf->Main__DOT__idu__DOT___ImmReg_T_9 = ((((vlSelf->Main__DOT__ifu__DOT__InstReg 
                                                   >> 0x1fU)
                                                   ? 0xfffffffffffffULL
                                                   : 0ULL) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->Main__DOT__ifu__DOT__InstReg 
                                                                   >> 0x14U))));
    vlSelf->Main__DOT__idu__DOT__ImmReg_lo_2 = ((0xfe0U 
                                                 & (vlSelf->Main__DOT__ifu__DOT__InstReg 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->Main__DOT__ifu__DOT__InstReg 
                                                      >> 7U)));
    vlSelf->Main__DOT__idu__DOT__ImmReg_lo_6 = ((((0x100000U 
                                                   & (vlSelf->Main__DOT__ifu__DOT__InstReg 
                                                      >> 0xbU)) 
                                                  | (0x7feU 
                                                     & (vlSelf->Main__DOT__ifu__DOT__InstReg 
                                                        >> 0x14U))) 
                                                 | (0x800U 
                                                    & (vlSelf->Main__DOT__ifu__DOT__InstReg 
                                                       >> 9U))) 
                                                | (0xff000U 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg));
    vlSelf->Main__DOT__idu__DOT__ImmReg_lo_8 = ((((0x1000U 
                                                   & (vlSelf->Main__DOT__ifu__DOT__InstReg 
                                                      >> 0x13U)) 
                                                  | (0x7e0U 
                                                     & (vlSelf->Main__DOT__ifu__DOT__InstReg 
                                                        >> 0x14U))) 
                                                 | (0x1eU 
                                                    & (vlSelf->Main__DOT__ifu__DOT__InstReg 
                                                       >> 7U))) 
                                                | (0x800U 
                                                   & (vlSelf->Main__DOT__ifu__DOT__InstReg 
                                                      << 4U)));
    Main__DOT__idu__DOT___contr_code_T_139 = ((0x7063U 
                                               != (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                              & ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                 | ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                    | ((0x501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                       | ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                          | ((0x1003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                             | ((0x4003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                | ((0x5003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                   | ((0x2003U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                      | ((0x23U 
                                                                          != 
                                                                          (0x707fU 
                                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                         & ((0x1023U 
                                                                             != 
                                                                             (0x707fU 
                                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                            & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                               & ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x200603bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x200003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x4000503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x503bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x101bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x4000501bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x200403bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x103bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | (0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)))))))))))))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_201 = ((0x3013U 
                                               != (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                              & ((0x63U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                 & ((0x1063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                    & ((0x4063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                       & ((0x5063U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                          & ((0x6063U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                             & ((0x7063U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                & ((0x6fU 
                                                                    != 
                                                                    (0x7fU 
                                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                   & ((0x67U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                      & ((0x501bU 
                                                                          != 
                                                                          (0xfc00707fU 
                                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                         & ((3U 
                                                                             != 
                                                                             (0x707fU 
                                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                            & ((0x1003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                               & ((0x4003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                & ((0x5003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                & ((0x2003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                & ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)))))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_431 = ((0x6013U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                               ? 0U
                                               : ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 0U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : 
                                                    ((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0U
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 0U
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 0U
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 4U
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 3U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 5U
                                                           : 
                                                          ((0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 6U
                                                            : 
                                                           ((0x6063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 7U
                                                             : 
                                                            ((0x7063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                              ? 8U
                                                              : 
                                                             ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                               ? 1U
                                                               : 
                                                              ((0x67U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                                ? 2U
                                                                : 0U)))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_534 = ((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                               ? 0U
                                               : ((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 0U
                                                   : 
                                                  ((0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 0U
                                                       : 
                                                      ((0x501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 0U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 0U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 0U
                                                          : 
                                                         ((0x4003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 0U
                                                           : 
                                                          ((0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 0U
                                                            : 
                                                           ((0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 0U
                                                             : 
                                                            ((0x23U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                              ? 1U
                                                              : 
                                                             ((0x1023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                               ? 3U
                                                               : 
                                                              ((0x2023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                                ? 0xfU
                                                                : 0U)))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_241 = ((0x1023U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                               ? 0U
                                               : ((0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 0U
                                                   : 
                                                  ((0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x2006033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : 
                                                    ((0x200603bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0U
                                                      : 
                                                     ((0x2007033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 0U
                                                       : 
                                                      ((0x200003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 0U
                                                        : 
                                                       ((0x2004033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 0U
                                                         : 
                                                        ((0x2005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 0U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 3U
                                                           : 
                                                          ((0x503bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 3U
                                                            : 
                                                           ((0x101bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 3U
                                                             : 
                                                            ((0x4000501bU 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                              ? 3U
                                                              : 
                                                             ((0x200403bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                               ? 3U
                                                               : 
                                                              ((0x103bU 
                                                                == 
                                                                (0xfc00707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                                ? 3U
                                                                : 0U)))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_296 = ((0x2023U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                               ? 4U
                                               : ((0x2000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 0U
                                                   : 
                                                  ((0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x200603bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : 
                                                    ((0x2007033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0U
                                                      : 
                                                     ((0x200003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 0U
                                                       : 
                                                      ((0x2004033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 0U
                                                        : 
                                                       ((0x2005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 0U
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 0U
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 0U
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 2U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 2U
                                                             : 
                                                            ((0x200403bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                              ? 6U
                                                              : 
                                                             ((0x103bU 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                               ? 0U
                                                               : 
                                                              ((0x3013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                                ? 4U
                                                                : 0U)))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_351 = ((0x2000033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                               ? 3U
                                               : ((0x2006033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 6U
                                                   : 
                                                  ((0x200603bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 6U
                                                    : 
                                                   ((0x2007033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 7U
                                                     : 
                                                    ((0x200003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 3U
                                                      : 
                                                     ((0x2004033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 4U
                                                       : 
                                                      ((0x2005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 5U
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 0x10U
                                                         : 
                                                        ((0x503bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 0xfU
                                                          : 
                                                         ((0x101bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 0xeU
                                                           : 
                                                          ((0x4000501bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 0x10U
                                                            : 
                                                           ((0x200403bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 0x11U
                                                             : 
                                                            ((0x103bU 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                              ? 0xeU
                                                              : 
                                                             ((0x3013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                               ? 2U
                                                               : 0U))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_464 = ((0x2023U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                               ? 0U
                                               : ((0x2000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 0U
                                                   : 
                                                  ((0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x200603bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 6U
                                                     : 
                                                    ((0x2007033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0U
                                                      : 
                                                     ((0x200003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 6U
                                                       : 
                                                      ((0x2004033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 0U
                                                        : 
                                                       ((0x2005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 0U
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 6U
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 6U
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 6U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 6U
                                                             : 
                                                            ((0x200403bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                              ? 6U
                                                              : 
                                                             ((0x103bU 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                               ? 6U
                                                               : 
                                                              ((0x3013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                                ? 0xeU
                                                                : 0U)))))))))))))));
    vlSelf->Main__DOT___pc_T_2 = (4ULL + vlSelf->Main__DOT__pc);
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Main__DOT__pc, vlSelf->__Vtask_pmem_read__0__Rdata);
    vlSelf->Main__DOT__ifu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__0__Rdata;
    vlSelf->Main__DOT__wbu_io_DataIn = ((0xfU == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                         ? (QData)((IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelf->Main__DOT__memu__DOT__SignSOutReg)))))
                                         : ((0xeU == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                             ? (QData)((IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelf->Main__DOT__memu__DOT__SignUOutReg)))))
                                             : ((0xdU 
                                                 == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                                 ? (QData)((IData)(vlSelf->Main__DOT__memu__DOT__SignSOutReg))
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                                  ? (QData)((IData)(vlSelf->Main__DOT__memu__DOT__SignUOutReg))
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                                   ? (QData)((IData)(vlSelf->Main__DOT__memu__DOT__ZeroOutReg))
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                                    ? (QData)((IData)(vlSelf->Main__DOT__memu__DOT__MemOutReg))
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg))
                                                     ? (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->Main__DOT__memu__DOT__MemOutReg))))
                                                     : Main__DOT__wbu__DOT___io_DataIn_T_50)))))));
    VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf);
    vlSelf->Main__DOT__regs_io_DataR2 = ((0x1fU == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                          ? vlSelf->Main__DOT__regs__DOT__Regs_31
                                          : ((0x1eU 
                                              == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                              ? vlSelf->Main__DOT__regs__DOT__Regs_30
                                              : ((0x1dU 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                  ? vlSelf->Main__DOT__regs__DOT__Regs_29
                                                  : 
                                                 ((0x1cU 
                                                   == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                   ? vlSelf->Main__DOT__regs__DOT__Regs_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                    ? vlSelf->Main__DOT__regs__DOT__Regs_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                     ? vlSelf->Main__DOT__regs__DOT__Regs_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                      ? vlSelf->Main__DOT__regs__DOT__Regs_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                       ? vlSelf->Main__DOT__regs__DOT__Regs_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                        ? vlSelf->Main__DOT__regs__DOT__Regs_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                         ? vlSelf->Main__DOT__regs__DOT__Regs_22
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->Main__DOT__idu__DOT__R2Reg))
                                                          ? vlSelf->Main__DOT__regs__DOT__Regs_21
                                                          : Main__DOT__regs__DOT___GEN_52)))))))))));
    vlSelf->Main__DOT__regs_io_DataR1 = ((0x1fU == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                          ? vlSelf->Main__DOT__regs__DOT__Regs_31
                                          : ((0x1eU 
                                              == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                              ? vlSelf->Main__DOT__regs__DOT__Regs_30
                                              : ((0x1dU 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                  ? vlSelf->Main__DOT__regs__DOT__Regs_29
                                                  : 
                                                 ((0x1cU 
                                                   == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                   ? vlSelf->Main__DOT__regs__DOT__Regs_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                    ? vlSelf->Main__DOT__regs__DOT__Regs_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                     ? vlSelf->Main__DOT__regs__DOT__Regs_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                      ? vlSelf->Main__DOT__regs__DOT__Regs_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                       ? vlSelf->Main__DOT__regs__DOT__Regs_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                        ? vlSelf->Main__DOT__regs__DOT__Regs_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                         ? vlSelf->Main__DOT__regs__DOT__Regs_22
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->Main__DOT__idu__DOT__R1Reg))
                                                          ? vlSelf->Main__DOT__regs__DOT__Regs_21
                                                          : Main__DOT__regs__DOT___GEN_20)))))))))));
    vlSelf->Main__DOT__exu_io_IDUFlag = ((IData)(vlSelf->Main__DOT__idu__DOT__IDUFlagReg) 
                                         & (~ (IData)(vlSelf->Main__DOT__ifu_io_IDUWait)));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_168 
        = ((0x3023U != (0x707fU & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
           & ((0x13U == (0x707fU & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
              | ((0x33U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                 | ((0x1bU == (0x707fU & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                    | ((0x3bU == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                       | ((0x1033U == (0xfe00707fU 
                                       & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                          | ((0x1013U == (0xfc00707fU 
                                          & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                             | ((0x5033U == (0xfe00707fU 
                                             & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                | ((0x5013U == (0xfc00707fU 
                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                   | ((0x40005033U 
                                       == (0xfe00707fU 
                                           & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                      | ((0x40005013U 
                                          == (0xfc00707fU 
                                              & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                         | ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                            | ((0x4000003bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                               | ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                  | ((0x4033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                     | ((0x4013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                        | ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                           | ((0x6013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                              | ((0x7033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                 | ((0x7013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                    | ((0x2033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                       | ((0x2013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                          | ((0x3033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                             | ((0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                | ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                                                & (IData)(Main__DOT__idu__DOT___contr_code_T_139))))))))))))))))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_218 
        = ((0x1013U != (0xfc00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
           & ((0x5033U != (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
              & ((0x5013U != (0xfc00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                 & ((0x40005033U != (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                    & ((0x40005013U != (0xfc00707fU 
                                        & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                       & ((0x40000033U != (0xfe00707fU 
                                           & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                          & ((0x4000003bU != (0xfe00707fU 
                                              & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                             & ((0x37U != (0x7fU & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                & ((0x4033U != (0xfe00707fU 
                                                & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                   & ((0x4013U != (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                      & ((0x6033U != 
                                          (0xfe00707fU 
                                           & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                         & ((0x6013U 
                                             != (0x707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                            & ((0x7033U 
                                                != 
                                                (0xfe00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                               & ((0x7013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                  & ((0x2033U 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                     & ((0x2013U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                        & ((0x3033U 
                                                            != 
                                                            (0xfe00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                                           & (IData)(Main__DOT__idu__DOT___contr_code_T_201))))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_446 
        = ((0x33U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
            ? 0U : ((0x1bU == (0x707fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
                     ? 0U : ((0x3bU == (0xfe00707fU 
                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                              ? 0U : ((0x1033U == (0xfe00707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                       ? 0U : ((0x1013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                ? 0U
                                                : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 0U
                                                       : 
                                                      ((0x40000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 0U
                                                        : 
                                                       ((0x4000003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 0U
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 0U
                                                          : 
                                                         ((0x4033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 0U
                                                           : 
                                                          ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 0U
                                                            : 
                                                           ((0x6033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 0U
                                                             : (IData)(Main__DOT__idu__DOT___contr_code_T_431))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_549 
        = ((0x40000033U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
            ? 0U : ((0x4000003bU == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
                     ? 0U : ((0x37U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
                              ? 0U : ((0x4033U == (0xfe00707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                       ? 0U : ((0x4013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                ? 0U
                                                : (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : 
                                                    ((0x7033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 0U
                                                       : 
                                                      ((0x2033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 0U
                                                        : 
                                                       ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 0U
                                                         : 
                                                        ((0x3033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 0U
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 0U
                                                           : 
                                                          ((0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 0U
                                                            : 
                                                           ((0x1063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 0U
                                                             : (IData)(Main__DOT__idu__DOT___contr_code_T_534))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_256 = ((0x63U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                               ? 0U
                                               : ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 0U
                                                   : 
                                                  ((0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0U
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 0U
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 1U
                                                        : 
                                                       ((0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 1U
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 3U
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 0U
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 0U
                                                            : 
                                                           ((0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 0U
                                                             : 
                                                            ((0x5003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                              ? 0U
                                                              : 
                                                             ((0x2003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                               ? 0U
                                                               : 
                                                              ((0x23U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                                ? 0U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_241))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_311 = ((0x1063U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                               ? 0U
                                               : ((0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 0U
                                                   : 
                                                  ((0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x6063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 5U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 5U
                                                        : 
                                                       ((0x501bU 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 2U
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 4U
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 4U
                                                           : 
                                                          ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 4U
                                                            : 
                                                           ((0x5003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 4U
                                                             : 
                                                            ((0x2003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                              ? 4U
                                                              : 
                                                             ((0x23U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                               ? 4U
                                                               : 
                                                              ((0x1023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                                ? 4U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_296))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_366 = ((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                               ? 2U
                                               : ((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 2U
                                                   : 
                                                  ((0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 2U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 2U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 1U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 1U
                                                       : 
                                                      ((0x501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 0xfU
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 1U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 1U
                                                          : 
                                                         ((0x4003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 1U
                                                           : 
                                                          ((0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 1U
                                                            : 
                                                           ((0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 1U
                                                             : 
                                                            ((0x23U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                              ? 1U
                                                              : 
                                                             ((0x1023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                               ? 1U
                                                               : 
                                                              ((0x2023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                                ? 1U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_351))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_479 = ((0x1063U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                               ? 0U
                                               : ((0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 0U
                                                   : 
                                                  ((0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x6063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 0U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 0U
                                                        : 
                                                       ((0x501bU 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 6U
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 3U
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 5U
                                                           : 
                                                          ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 8U
                                                            : 
                                                           ((0x5003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 9U
                                                             : 
                                                            ((0x2003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                              ? 7U
                                                              : 
                                                             ((0x23U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                               ? 0U
                                                               : 
                                                              ((0x1023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                                ? 0U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_464))))))))))))))));
    Main__DOT__exu__DOT___AluSrc2_T_14 = ((5U == (IData)(vlSelf->Main__DOT__idu__DOT__AluSrc2OpReg))
                                           ? 4ULL : 
                                          ((4U == (IData)(vlSelf->Main__DOT__idu__DOT__AluSrc2OpReg))
                                            ? vlSelf->Main__DOT__idu__DOT__ImmReg
                                            : ((3U 
                                                == (IData)(vlSelf->Main__DOT__idu__DOT__AluSrc2OpReg))
                                                ? 0xcULL
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__AluSrc2OpReg))
                                                    ? (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (IData)(vlSelf->Main__DOT__idu__DOT__ImmReg))))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__AluSrc2OpReg))
                                                     ? (QData)((IData)(
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->Main__DOT__regs_io_DataR2))))
                                                     : vlSelf->Main__DOT__regs_io_DataR2)))));
    Main__DOT__exu__DOT___AluSrc1_T_7 = ((2U == (IData)(vlSelf->Main__DOT__idu__DOT__AluSrc1OpReg))
                                          ? (QData)((IData)(
                                                            (0xfffffU 
                                                             & (IData)(
                                                                       (vlSelf->Main__DOT__idu__DOT__ImmReg 
                                                                        >> 0xcU)))))
                                          : ((1U == (IData)(vlSelf->Main__DOT__idu__DOT__AluSrc1OpReg))
                                              ? vlSelf->Main__DOT__idu__DOT__PcValReg
                                              : vlSelf->Main__DOT__regs_io_DataR1));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_271 
        = ((0x40005033U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
            ? 0U : ((0x40005013U == (0xfc00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
                     ? 0U : ((0x40000033U == (0xfe00707fU 
                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                              ? 0U : ((0x4000003bU 
                                       == (0xfe00707fU 
                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                       ? 3U : ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                ? 2U
                                                : (
                                                   (0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0U
                                                      : 
                                                     ((0x6013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 0U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 0U
                                                        : 
                                                       ((0x7013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 0U
                                                         : 
                                                        ((0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 0U
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 0U
                                                           : 
                                                          ((0x3033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 0U
                                                            : 
                                                           ((0x3013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 0U
                                                             : (IData)(Main__DOT__idu__DOT___contr_code_T_256))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_326 
        = ((0x40005013U == (0xfc00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
            ? 2U : ((0x40000033U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
                     ? 0U : ((0x4000003bU == (0xfe00707fU 
                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                              ? 0U : ((0x37U == (0x7fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                       ? 3U : ((0x4033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                ? 0U
                                                : (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 4U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 4U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 0U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 4U
                                                        : 
                                                       ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 0U
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 4U
                                                          : 
                                                         ((0x3033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 0U
                                                           : 
                                                          ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 4U
                                                            : 
                                                           ((0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 0U
                                                             : (IData)(Main__DOT__idu__DOT___contr_code_T_311))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_381 
        = ((0x40000033U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
            ? 2U : ((0x4000003bU == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
                     ? 2U : ((0x37U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
                              ? 8U : ((0x4033U == (0xfe00707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                       ? 0xbU : ((0x4013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                  ? 0xbU
                                                  : 
                                                 ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 0xcU
                                                   : 
                                                  ((0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0xcU
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0xdU
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0xdU
                                                      : 
                                                     ((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 2U
                                                       : 
                                                      ((0x2013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 2U
                                                        : 
                                                       ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 2U
                                                         : 
                                                        ((0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 2U
                                                          : 
                                                         ((0x63U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 2U
                                                           : 
                                                          ((0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 2U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_366))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_494 
        = ((0x40005013U == (0xfc00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
            ? 0U : ((0x40000033U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
                     ? 0U : ((0x4000003bU == (0xfe00707fU 
                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                              ? 6U : ((0x37U == (0x7fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                       ? 6U : ((0x4033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                ? 0U
                                                : (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 0U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 0U
                                                        : 
                                                       ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 0xfU
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 0xfU
                                                          : 
                                                         ((0x3033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 0xeU
                                                           : 
                                                          ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                            ? 0xeU
                                                            : 
                                                           ((0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                             ? 0U
                                                             : (IData)(Main__DOT__idu__DOT___contr_code_T_479))))))))))))))));
    vlSelf->Main__DOT__exu__DOT__AluSrc2 = ((6U == (IData)(vlSelf->Main__DOT__idu__DOT__AluSrc2OpReg))
                                             ? (QData)((IData)(vlSelf->Main__DOT__regs_io_DataR2))
                                             : Main__DOT__exu__DOT___AluSrc2_T_14);
    vlSelf->Main__DOT__exu__DOT__AluSrc1 = ((3U == (IData)(vlSelf->Main__DOT__idu__DOT__AluSrc1OpReg))
                                             ? (QData)((IData)(vlSelf->Main__DOT__regs_io_DataR1))
                                             : Main__DOT__exu__DOT___AluSrc1_T_7);
    vlSelf->Main__DOT__exu__DOT___SignSTmp_T = ((2U 
                                                 & ((IData)(
                                                            (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                             >> 0x3fU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__exu__DOT__AluSrc2 
                                                              >> 0x3fU))));
    VL_EXTEND_WQ(128,64, __Vtemp_heca35210__0, (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                ^ vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_h095499dd__0, VL_SHIFTRS_QQI(64,64,6, vlSelf->Main__DOT__exu__DOT__AluSrc1, 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2))));
    VL_EXTEND_WQ(128,64, __Vtemp_h0963fab0__0, (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2))));
    VL_EXTEND_WQ(127,64, __Vtemp_h380fad78__0, vlSelf->Main__DOT__exu__DOT__AluSrc1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h71ab9800__0, __Vtemp_h380fad78__0, 
                  (0x3fU & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)));
    __Vtemp_h091903f5__0[0U] = __Vtemp_h71ab9800__0[0U];
    __Vtemp_h091903f5__0[1U] = __Vtemp_h71ab9800__0[1U];
    __Vtemp_h091903f5__0[2U] = __Vtemp_h71ab9800__0[2U];
    __Vtemp_h091903f5__0[3U] = (0x7fffffffU & __Vtemp_h71ab9800__0[3U]);
    VL_EXTEND_WW(128,127, __Vtemp_hd2f91b4c__0, __Vtemp_h091903f5__0);
    VL_EXTEND_WQ(128,64, __Vtemp_hea7202bd__0, VL_MODDIV_QQQ(64, vlSelf->Main__DOT__exu__DOT__AluSrc1, vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_hea5ef5de__0, VL_MODDIVS_QQQ(64, vlSelf->Main__DOT__exu__DOT__AluSrc1, vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_hea730a05__0, VL_DIV_QQQ(64, vlSelf->Main__DOT__exu__DOT__AluSrc1, vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTENDS_WQ(65,64, __Vtemp_h046d9405__0, vlSelf->Main__DOT__exu__DOT__AluSrc1);
    __Vtemp_hcc8b333a__0[0U] = __Vtemp_h046d9405__0[0U];
    __Vtemp_hcc8b333a__0[1U] = __Vtemp_h046d9405__0[1U];
    __Vtemp_hcc8b333a__0[2U] = (1U & __Vtemp_h046d9405__0[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp_h104f9c54__0, vlSelf->Main__DOT__exu__DOT__AluSrc2);
    __Vtemp_h8a625cc0__0[0U] = __Vtemp_h104f9c54__0[0U];
    __Vtemp_h8a625cc0__0[1U] = __Vtemp_h104f9c54__0[1U];
    __Vtemp_h8a625cc0__0[2U] = (1U & __Vtemp_h104f9c54__0[2U]);
    VL_DIVS_WWW(65, __Vtemp_h047d57b8__0, __Vtemp_hcc8b333a__0, __Vtemp_h8a625cc0__0);
    __Vtemp_h0ef72c5c__0[0U] = __Vtemp_h047d57b8__0[0U];
    __Vtemp_h0ef72c5c__0[1U] = __Vtemp_h047d57b8__0[1U];
    __Vtemp_h0ef72c5c__0[2U] = (1U & __Vtemp_h047d57b8__0[2U]);
    VL_EXTEND_WW(128,65, __Vtemp_h844e48cf__0, __Vtemp_h0ef72c5c__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h380fad78__1, vlSelf->Main__DOT__exu__DOT__AluSrc1);
    VL_EXTEND_WQ(128,64, __Vtemp_h105d8525__0, vlSelf->Main__DOT__exu__DOT__AluSrc2);
    VL_MUL_W(4, __Vtemp_h869d37e7__0, __Vtemp_h380fad78__1, __Vtemp_h105d8525__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h421b6ee2__0, ((2U 
                                                 == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))
                                                 ? 
                                                (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                 - vlSelf->Main__DOT__exu__DOT__AluSrc2)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))
                                                  ? 
                                                 (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                  + vlSelf->Main__DOT__exu__DOT__AluSrc2)
                                                  : 0ULL)));
    if ((0xbU == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_heca35210__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_heca35210__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_heca35210__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_heca35210__0[3U];
    } else if ((0xaU == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_h095499dd__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_h095499dd__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_h095499dd__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_h095499dd__0[3U];
    } else if ((9U == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_h0963fab0__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_h0963fab0__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_h0963fab0__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_h0963fab0__0[3U];
    } else if ((8U == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_hd2f91b4c__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_hd2f91b4c__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_hd2f91b4c__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_hd2f91b4c__0[3U];
    } else if ((7U == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_hea7202bd__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_hea7202bd__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_hea7202bd__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_hea7202bd__0[3U];
    } else if ((6U == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_hea5ef5de__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_hea5ef5de__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_hea5ef5de__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_hea5ef5de__0[3U];
    } else if ((5U == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_hea730a05__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_hea730a05__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_hea730a05__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_hea730a05__0[3U];
    } else if ((4U == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_h844e48cf__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_h844e48cf__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_h844e48cf__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_h844e48cf__0[3U];
    } else if ((3U == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_h869d37e7__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_h869d37e7__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_h869d37e7__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_h869d37e7__0[3U];
    } else {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_h421b6ee2__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_h421b6ee2__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_h421b6ee2__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_h421b6ee2__0[3U];
    }
    VL_EXTEND_WQ(128,33, __Vtemp_h47e711db__0, (0x1ffffffffULL 
                                                & VL_DIVS_QQQ(33, 
                                                              (0x1ffffffffULL 
                                                               & VL_EXTENDS_QI(33,32, (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc1))), 
                                                              (0x1ffffffffULL 
                                                               & VL_EXTENDS_QI(33,32, (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2))))));
    VL_EXTEND_WI(128,32, __Vtemp_hb1487360__0, ((0x1fU 
                                                 >= 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)))
                                                 ? 
                                                VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc1), 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)))
                                                 : 
                                                (- 
                                                 ((IData)(vlSelf->Main__DOT__exu__DOT__AluSrc1) 
                                                  >> 0x1fU))));
    VL_EXTEND_WI(128,32, __Vtemp_h4587e76d__0, ((0x1fU 
                                                 >= 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)))
                                                 ? 
                                                ((IData)(vlSelf->Main__DOT__exu__DOT__AluSrc1) 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)))
                                                 : 0U));
    VL_EXTEND_WI(95,32, __Vtemp_h30bf6211__0, (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc1));
    VL_SHIFTL_WWI(95,95,6, __Vtemp_hc162dda6__0, __Vtemp_h30bf6211__0, 
                  (0x3fU & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)));
    __Vtemp_h1e81b01f__0[0U] = __Vtemp_hc162dda6__0[0U];
    __Vtemp_h1e81b01f__0[1U] = __Vtemp_hc162dda6__0[1U];
    __Vtemp_h1e81b01f__0[2U] = (0x7fffffffU & __Vtemp_hc162dda6__0[2U]);
    VL_EXTEND_WW(128,95, __Vtemp_h5596e474__0, __Vtemp_h1e81b01f__0);
    VL_EXTEND_WQ(128,64, __Vtemp_hecc15f8d__0, (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                & vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_hecd1af0b__0, (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                | vlSelf->Main__DOT__exu__DOT__AluSrc2));
    if ((0x11U == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U] 
            = __Vtemp_h47e711db__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
            = __Vtemp_h47e711db__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[2U] 
            = __Vtemp_h47e711db__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[3U] 
            = __Vtemp_h47e711db__0[3U];
    } else if ((0x10U == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U] 
            = __Vtemp_hb1487360__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
            = __Vtemp_hb1487360__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[2U] 
            = __Vtemp_hb1487360__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[3U] 
            = __Vtemp_hb1487360__0[3U];
    } else if ((0xfU == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U] 
            = __Vtemp_h4587e76d__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
            = __Vtemp_h4587e76d__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[2U] 
            = __Vtemp_h4587e76d__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[3U] 
            = __Vtemp_h4587e76d__0[3U];
    } else if ((0xeU == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U] 
            = __Vtemp_h5596e474__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
            = __Vtemp_h5596e474__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[2U] 
            = __Vtemp_h5596e474__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[3U] 
            = __Vtemp_h5596e474__0[3U];
    } else if ((0xdU == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U] 
            = __Vtemp_hecc15f8d__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
            = __Vtemp_hecc15f8d__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[2U] 
            = __Vtemp_hecc15f8d__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[3U] 
            = __Vtemp_hecc15f8d__0[3U];
    } else if ((0xcU == (IData)(vlSelf->Main__DOT__idu__DOT__AluOpReg))) {
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U] 
            = __Vtemp_hecd1af0b__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
            = __Vtemp_hecd1af0b__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[2U] 
            = __Vtemp_hecd1af0b__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[3U] 
            = __Vtemp_hecd1af0b__0[3U];
    } else {
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U] 
            = Main__DOT__exu__DOT___AluOutTmp_T_64[0U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
            = Main__DOT__exu__DOT___AluOutTmp_T_64[1U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[2U] 
            = Main__DOT__exu__DOT___AluOutTmp_T_64[2U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[3U] 
            = Main__DOT__exu__DOT___AluOutTmp_T_64[3U];
    }
    if ((3U == (IData)(vlSelf->Main__DOT__exu__DOT___SignSTmp_T))) {
        vlSelf->Main__DOT__exu__DOT__SignSTmp = (1U 
                                                 & (~ 
                                                    (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
                                                     >> 0x1fU)));
        vlSelf->Main__DOT__exu__DOT__SignUTmp = (1U 
                                                 & (~ 
                                                    (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
                                                     >> 0x1fU)));
    } else if ((0U == (IData)(vlSelf->Main__DOT__exu__DOT___SignSTmp_T))) {
        vlSelf->Main__DOT__exu__DOT__SignSTmp = (1U 
                                                 & (~ 
                                                    (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
                                                     >> 0x1fU)));
        vlSelf->Main__DOT__exu__DOT__SignUTmp = (1U 
                                                 & (~ 
                                                    (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
                                                     >> 0x1fU)));
    } else {
        vlSelf->Main__DOT__exu__DOT__SignSTmp = (1U 
                                                 & (1U 
                                                    == (IData)(vlSelf->Main__DOT__exu__DOT___SignSTmp_T)));
        vlSelf->Main__DOT__exu__DOT__SignUTmp = (1U 
                                                 & (1U 
                                                    != (IData)(vlSelf->Main__DOT__exu__DOT___SignSTmp_T)));
    }
    vlSelf->Main__DOT__exu_io_EXUPc = ((8U == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg))
                                        ? ((IData)(vlSelf->Main__DOT__exu__DOT__SignUTmp)
                                            ? Main__DOT__exu__DOT___io_EXUPc_T_24
                                            : (4ULL 
                                               + vlSelf->Main__DOT__idu__DOT__PcValReg))
                                        : ((7U == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg))
                                            ? ((IData)(vlSelf->Main__DOT__exu__DOT__SignUTmp)
                                                ? (4ULL 
                                                   + vlSelf->Main__DOT__idu__DOT__PcValReg)
                                                : Main__DOT__exu__DOT___io_EXUPc_T_24)
                                            : ((6U 
                                                == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg))
                                                ? ((IData)(vlSelf->Main__DOT__exu__DOT__SignSTmp)
                                                    ? Main__DOT__exu__DOT___io_EXUPc_T_24
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->Main__DOT__idu__DOT__PcValReg))
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg))
                                                    ? 
                                                   ((IData)(vlSelf->Main__DOT__exu__DOT__SignSTmp)
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->Main__DOT__idu__DOT__PcValReg)
                                                     : Main__DOT__exu__DOT___io_EXUPc_T_24)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg))
                                                     ? 
                                                    ((0ULL 
                                                      == 
                                                      (((QData)((IData)(
                                                                        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U]))))
                                                      ? Main__DOT__exu__DOT___io_EXUPc_T_24
                                                      : 
                                                     (4ULL 
                                                      + vlSelf->Main__DOT__idu__DOT__PcValReg))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg))
                                                      ? 
                                                     ((0ULL 
                                                       != 
                                                       (((QData)((IData)(
                                                                         vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U]))))
                                                       ? Main__DOT__exu__DOT___io_EXUPc_T_24
                                                       : 
                                                      (4ULL 
                                                       + vlSelf->Main__DOT__idu__DOT__PcValReg))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg))
                                                       ? 
                                                      (0xfffffffffffffffeULL 
                                                       & (vlSelf->Main__DOT__regs_io_DataR1 
                                                          + vlSelf->Main__DOT__idu__DOT__ImmReg))
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg))
                                                        ? 
                                                       (vlSelf->Main__DOT__idu__DOT__PcValReg 
                                                        + 
                                                        ((((1U 
                                                            & (IData)(
                                                                      (vlSelf->Main__DOT__idu__DOT__ImmReg 
                                                                       >> 0x14U)))
                                                            ? 0x7ffffffffffULL
                                                            : 0ULL) 
                                                          << 0x15U) 
                                                         | (QData)((IData)(
                                                                           (0x1fffffU 
                                                                            & (IData)(vlSelf->Main__DOT__idu__DOT__ImmReg))))))
                                                        : 
                                                       (4ULL 
                                                        + vlSelf->Main__DOT__idu__DOT__PcValReg)))))))));
    vlSelf->Main__DOT__exu_io_EXUClear = ((IData)(vlSelf->Main__DOT__exu_io_IDUFlag) 
                                          & (((((((((3U 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg)) 
                                                    & (0ULL 
                                                       != 
                                                       (((QData)((IData)(
                                                                         vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U]))))) 
                                                   | ((4U 
                                                       == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg)) 
                                                      & (0ULL 
                                                         == 
                                                         (((QData)((IData)(
                                                                           vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U])))))) 
                                                  | ((5U 
                                                      == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg)) 
                                                     & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignSTmp)))) 
                                                 | ((6U 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg)) 
                                                    & (IData)(vlSelf->Main__DOT__exu__DOT__SignSTmp))) 
                                                | ((7U 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg)) 
                                                   & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignUTmp)))) 
                                               | ((8U 
                                                   == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg)) 
                                                  & (IData)(vlSelf->Main__DOT__exu__DOT__SignUTmp))) 
                                              | (1U 
                                                 == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg))) 
                                             | (2U 
                                                == (IData)(vlSelf->Main__DOT__idu__DOT__PcSrcReg))));
    vlSelf->Main__DOT___pc_T = (((IData)(vlSelf->Main__DOT__ifu_io_IDUWait) 
                                 << 1U) | (IData)(vlSelf->Main__DOT__exu_io_EXUClear));
    vlSelf->Main__DOT__ifu__DOT___GEN_3 = ((IData)(vlSelf->Main__DOT__ifu_io_IDUWait)
                                            ? (IData)(vlSelf->Main__DOT__ifu__DOT__IFUFlagReg)
                                            : (~ (IData)(vlSelf->Main__DOT__exu_io_EXUClear)));
}
