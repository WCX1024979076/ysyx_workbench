// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

void VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 33> &a);
void VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);

VL_INLINE_OPT void VMain___024root___sequent__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_135;
    CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_209;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_249;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_264;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_306;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_321;
    CData/*4:0*/ Main__DOT__idu__DOT___contr_code_T_363;
    CData/*4:0*/ Main__DOT__idu__DOT___contr_code_T_378;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_447;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_480;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_495;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_554;
    QData/*63:0*/ Main__DOT__exu__DOT___AluSrc1_T_7;
    QData/*63:0*/ Main__DOT__exu__DOT___AluSrc2_T_17;
    VlWide<4>/*127:0*/ Main__DOT__exu__DOT___AluOutTmp_T_64;
    QData/*63:0*/ Main__DOT__exu__DOT___io_exu_ctrl_out_EXUPc_T_24;
    QData/*63:0*/ Main__DOT__wbu__DOT___io_wbu_data_out_DataIn_T_50;
    QData/*63:0*/ Main__DOT__regs__DOT___GEN_20;
    QData/*63:0*/ Main__DOT__regs__DOT___GEN_52;
    VlWide<4>/*127:0*/ __Vtemp_h8cc9721b__0;
    VlWide<4>/*127:0*/ __Vtemp_h6867a458__0;
    VlWide<4>/*127:0*/ __Vtemp_h6c1423dd__0;
    VlWide<4>/*127:0*/ __Vtemp_hfa32d3c7__0;
    VlWide<4>/*127:0*/ __Vtemp_h6ccf3aed__0;
    VlWide<4>/*127:0*/ __Vtemp_h26dd609b__0;
    VlWide<4>/*127:0*/ __Vtemp_h2378d707__0;
    VlWide<4>/*127:0*/ __Vtemp_h436a5ffd__0;
    VlWide<4>/*127:0*/ __Vtemp_h42fdd196__0;
    VlWide<4>/*127:0*/ __Vtemp_h43606850__0;
    VlWide<3>/*95:0*/ __Vtemp_hfa226cf6__0;
    VlWide<3>/*95:0*/ __Vtemp_he2994060__0;
    VlWide<3>/*95:0*/ __Vtemp_h104f9c54__0;
    VlWide<3>/*95:0*/ __Vtemp_h8a625cc0__0;
    VlWide<3>/*95:0*/ __Vtemp_h028ec434__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf579a1c__0;
    VlWide<4>/*127:0*/ __Vtemp_h20c9ba9f__0;
    VlWide<4>/*127:0*/ __Vtemp_hfa32d3c7__1;
    VlWide<4>/*127:0*/ __Vtemp_h105d8525__0;
    VlWide<4>/*127:0*/ __Vtemp_hc42dfd7d__0;
    VlWide<4>/*127:0*/ __Vtemp_hb01981ea__0;
    VlWide<4>/*127:0*/ __Vtemp_h4d7c48d8__0;
    VlWide<4>/*127:0*/ __Vtemp_h179394d8__0;
    VlWide<4>/*127:0*/ __Vtemp_heb5bc280__0;
    VlWide<3>/*95:0*/ __Vtemp_h6c97d905__0;
    VlWide<3>/*95:0*/ __Vtemp_ha0220312__0;
    VlWide<3>/*95:0*/ __Vtemp_h49165262__0;
    VlWide<4>/*127:0*/ __Vtemp_h4e6d79b4__0;
    VlWide<4>/*127:0*/ __Vtemp_h8cc4edb3__0;
    VlWide<4>/*127:0*/ __Vtemp_h8cf57d36__0;
    // Body
    vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut 
        = ((IData)(vlSelf->reset) ? 0ULL : vlSelf->Main__DOT__memu__DOT__mem_Rdata);
    vlSelf->Main__DOT__memu__DOT__exu_data_reg_Zero 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->Main__DOT__exu__DOT__exu_data_reg_Zero));
    vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut 
        = ((IData)(vlSelf->reset) ? 0ULL : vlSelf->Main__DOT__exu__DOT__exu_data_reg_AluOut);
    vlSelf->Main__DOT__memu__DOT__exu_data_reg_SignS 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->Main__DOT__exu__DOT__exu_data_reg_SignS));
    vlSelf->Main__DOT__memu__DOT__exu_data_reg_SignU 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->Main__DOT__exu__DOT__exu_data_reg_SignU));
    vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_MemWrite 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_MemWrite));
    if (vlSelf->reset) {
        vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_MemMask = 0U;
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc = 0U;
    } else {
        vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_MemMask 
            = vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_MemMask;
        if ((1U & (~ (IData)(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait)))) {
            vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc 
                = ((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                    ? 0U : ((0x3003U == (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                             ? 0U : ((0x3023U == (0x707fU 
                                                  & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                      ? 0U : ((0x13U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 0U
                                               : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_462)))));
        }
    }
    vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_EbreakIn 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_EbreakIn));
    vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RegWrite 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_RegWrite));
    if (vlSelf->reset) {
        vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl = 0U;
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp = 0U;
        vlSelf->Main__DOT__exu__DOT__exu_data_reg_DataR2 = 0ULL;
        vlSelf->Main__DOT__wbu__DOT__PcValReg = 0ULL;
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 0U;
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 0U;
        vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_30 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_28 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_27 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_26 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_25 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_29 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_31 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_21 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_22 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_23 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_24 = 0ULL;
        vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2 = 0U;
        vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1 = 0U;
        vlSelf->Main__DOT__regs__DOT__Regs_12 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_11 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_10 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_9 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_3 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_2 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_1 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_8 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_7 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_4 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_5 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_6 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_13 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_14 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_15 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_16 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_17 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_18 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_19 = 0ULL;
        vlSelf->Main__DOT__regs__DOT__Regs_20 = 0ULL;
    } else {
        vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl 
            = vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_RinCtl;
        if ((1U & (~ (IData)(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait)))) {
            vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp 
                = ((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                    ? 1U : ((0x3003U == (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                             ? 1U : ((0x3023U == (0x707fU 
                                                  & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                      ? 1U : ((0x13U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 1U
                                               : ((0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 1U
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 1U
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 1U
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 8U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 8U
                                                       : 
                                                      ((0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 9U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 9U
                                                         : 
                                                        ((0x40005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 0xaU
                                                          : 
                                                         ((0x40005013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 0xaU
                                                           : 
                                                          ((0x40000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x4000003bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 2U
                                                             : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_393))))))))))))))));
        }
        vlSelf->Main__DOT__exu__DOT__exu_data_reg_DataR2 
            = vlSelf->Main__DOT__regs_io_DataR2;
        if (vlSelf->Main__DOT__memu__DOT__memu_data_reg_MEMUFlag) {
            vlSelf->Main__DOT__wbu__DOT__PcValReg = vlSelf->Main__DOT__memu__DOT__ifu_data_reg_PcVal;
        }
        if ((1U & (~ (IData)(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait)))) {
            if ((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))) {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 4U;
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 1U;
            } else if ((0x3003U == (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))) {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 4U;
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 0U;
            } else if ((0x3023U == (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))) {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 4U;
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 0U;
            } else if ((0x13U == (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))) {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 4U;
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))) {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 0U;
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 0U;
            } else if ((0x1bU == (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))) {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 4U;
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 0U;
            } else if ((0x3bU == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))) {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 0U;
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 3U;
            } else if ((0x1033U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))) {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 1U;
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 0U;
            } else if ((0x1013U == (0xfc00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))) {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 2U;
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))) {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 1U;
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 0U;
            } else if ((0x5013U == (0xfc00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))) {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 2U;
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))) {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 1U;
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 0U;
            } else if ((0x40005013U == (0xfc00707fU 
                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))) {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = 2U;
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = 0U;
            } else {
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op 
                    = ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                        ? 0U : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_336));
                vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op 
                    = vlSelf->Main__DOT__idu__DOT___contr_code_T_279;
            }
            vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm 
                = ((0x63U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                    ? ((((0x1000U & (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_8))
                          ? 0x7ffffffffffffULL : 0ULL) 
                        << 0xdU) | (QData)((IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_8)))
                    : ((0x67U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                        ? vlSelf->Main__DOT__idu__DOT___idu_data_reg_Imm_T_9
                        : ((0x6fU == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                            ? ((((0x100000U & vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_6)
                                  ? 0x7ffffffffffULL
                                  : 0ULL) << 0x15U) 
                               | (QData)((IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_6)))
                            : ((0x37U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                ? vlSelf->Main__DOT__idu__DOT___idu_data_reg_Imm_T_4
                                : ((0x3bU == (0x7fU 
                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                    ? 0ULL : ((0x1bU 
                                               == (0x7fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? vlSelf->Main__DOT__idu__DOT___idu_data_reg_Imm_T_9
                                               : ((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 0ULL
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? vlSelf->Main__DOT__idu__DOT___idu_data_reg_Imm_T_9
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 
                                                    ((((0x800U 
                                                        & (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_2))
                                                        ? 0xfffffffffffffULL
                                                        : 0ULL) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_2)))
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? vlSelf->Main__DOT__idu__DOT___idu_data_reg_Imm_T_9
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? vlSelf->Main__DOT__idu__DOT___idu_data_reg_Imm_T_4
                                                       : 0ULL)))))))))));
        }
        if (vlSelf->Main__DOT__wbu_io_wbu_data_out_RegWriteOut) {
            if ((0x1eU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_30 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x1cU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_28 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x1bU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_27 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x1aU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_26 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x19U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_25 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x1dU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_29 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x1fU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_31 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x15U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_21 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x16U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_22 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x17U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_23 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x18U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_24 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
        }
        if ((1U & (~ (IData)(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait)))) {
            vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2 
                = (0x1fU & (vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                            >> 0x14U));
            vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1 
                = (0x1fU & (vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                            >> 0xfU));
        }
        if (vlSelf->Main__DOT__wbu_io_wbu_data_out_RegWriteOut) {
            if ((0xcU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_12 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0xbU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_11 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0xaU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_10 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((9U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_9 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((3U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_3 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((2U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_2 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((1U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_1 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((8U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_8 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((7U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_7 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((4U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_4 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((5U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_5 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((6U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_6 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0xdU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_13 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0xeU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_14 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0xfU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_15 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x10U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_16 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x11U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_17 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x12U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_18 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x13U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_19 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
            if ((0x14U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest))) {
                vlSelf->Main__DOT__regs__DOT__Regs_20 
                    = vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn;
            }
        }
    }
    vlSelf->Main__DOT__exu__DOT__exu_data_reg_Zero 
        = ((~ (IData)(vlSelf->reset)) & (0ULL == (((QData)((IData)(
                                                                   vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U])))));
    vlSelf->Main__DOT__exu__DOT__exu_data_reg_AluOut 
        = ((IData)(vlSelf->reset) ? 0ULL : (((QData)((IData)(
                                                             vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U]))));
    vlSelf->Main__DOT__exu__DOT__exu_data_reg_SignS 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((3U 
                                                == (IData)(vlSelf->Main__DOT__exu__DOT___SignSTmp_T))
                                                ? (~ 
                                                   (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
                                                    >> 0x1fU))
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelf->Main__DOT__exu__DOT___SignSTmp_T))
                                                    ? 
                                                   (~ 
                                                    (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
                                                     >> 0x1fU))
                                                    : 
                                                   (1U 
                                                    == (IData)(vlSelf->Main__DOT__exu__DOT___SignSTmp_T))))));
    vlSelf->Main__DOT__exu__DOT__exu_data_reg_SignU 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((3U 
                                                == (IData)(vlSelf->Main__DOT__exu__DOT___SignSTmp_T))
                                                ? (~ 
                                                   (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
                                                    >> 0x1fU))
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelf->Main__DOT__exu__DOT___SignSTmp_T))
                                                    ? 
                                                   (~ 
                                                    (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
                                                     >> 0x1fU))
                                                    : 
                                                   (1U 
                                                    != (IData)(vlSelf->Main__DOT__exu__DOT___SignSTmp_T))))));
    if (vlSelf->reset) {
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_MemWrite = 0U;
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_MemMask = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait)))) {
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_MemWrite 
            = ((0x17U != (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
               & ((0x3003U != (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                  & ((0x3023U == (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                     | ((0x13U != (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                        & ((0x33U != (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                           & ((0x1bU != (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                              & ((0x3bU != (0xfe00707fU 
                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                 & ((0x1033U != (0xfe00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                    & (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_226)))))))));
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_MemMask 
            = ((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                ? 0U : ((0x3003U == (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                         ? 0U : ((0x3023U == (0x707fU 
                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                  ? 0xffU : ((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                              ? 0U : 
                                             ((0x33U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 0U
                                               : ((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x40005013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 0U
                                                          : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_569))))))))))))));
    }
    vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_EbreakIn 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_EbreakIn));
    vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_RegWrite 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_RegWrite));
    Main__DOT__wbu__DOT___io_wbu_data_out_DataIn_T_50 
        = ((8U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
            ? (QData)((IData)((0xffU & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut))))
            : ((7U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
                ? (((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut)))
                : ((6U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
                    ? (((QData)((IData)(((1U & (IData)(
                                                       (vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut 
                                                        >> 0x1fU)))
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut)))
                    : ((5U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
                        ? ((((1U & (IData)((vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut 
                                            >> 0xfU)))
                              ? 0xffffffffffffULL : 0ULL) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut)))))
                        : ((4U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
                            ? ((((1U & (IData)((vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut 
                                                >> 0xfU)))
                                  ? 0xffffffffffffULL
                                  : 0ULL) << 0x10U) 
                               | (QData)((IData)((0xffffU 
                                                  & (IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut)))))
                            : ((3U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
                                ? ((((1U & (IData)(
                                                   (vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut 
                                                    >> 7U)))
                                      ? 0xffffffffffffffULL
                                      : 0ULL) << 8U) 
                                   | (QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut)))))
                                : ((2U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
                                    ? ((((1U & (IData)(
                                                       (vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut 
                                                        >> 7U)))
                                          ? 0xffffffffffffffULL
                                          : 0ULL) << 8U) 
                                       | (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut)))))
                                    : ((1U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
                                        ? vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut
                                        : vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut))))))));
    vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_RinCtl 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_RinCtl));
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x20U] 
        = vlSelf->Main__DOT__wbu__DOT__PcValReg;
    vlSelf->Main__DOT__memu__DOT__memu_data_reg_MEMUFlag 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->Main__DOT__exu__DOT__exu_data_reg_EXUFlag));
    vlSelf->Main__DOT__memu__DOT__ifu_data_reg_PcVal 
        = ((IData)(vlSelf->reset) ? 0ULL : vlSelf->Main__DOT__exu__DOT__ifu_data_reg_PcVal);
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x1eU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_30;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x1cU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_28;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x1bU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_27;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x1aU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_26;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x19U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_25;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x1dU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_29;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x1fU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_31;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x15U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_21;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x16U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_22;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x17U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_23;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x18U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_24;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0xcU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_12;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0xbU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_11;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0xaU] 
        = vlSelf->Main__DOT__regs__DOT__Regs_10;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[9U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_9;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[3U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_3;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[2U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_2;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[1U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_1;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[8U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_8;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[7U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_7;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[4U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_4;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[5U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_5;
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[6U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_6;
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
    vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->Main__DOT__exu__DOT__idu_data_reg_Rdest));
    vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[0x14U] 
        = vlSelf->Main__DOT__regs__DOT__Regs_20;
    Main__DOT__regs__DOT___GEN_52 = ((0x14U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                      ? vlSelf->Main__DOT__regs__DOT__Regs_20
                                      : ((0x13U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                          ? vlSelf->Main__DOT__regs__DOT__Regs_19
                                          : ((0x12U 
                                              == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                              ? vlSelf->Main__DOT__regs__DOT__Regs_18
                                              : ((0x11U 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                  ? vlSelf->Main__DOT__regs__DOT__Regs_17
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                   ? vlSelf->Main__DOT__regs__DOT__Regs_16
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                    ? vlSelf->Main__DOT__regs__DOT__Regs_15
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                     ? vlSelf->Main__DOT__regs__DOT__Regs_14
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                      ? vlSelf->Main__DOT__regs__DOT__Regs_13
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                       ? vlSelf->Main__DOT__regs__DOT__Regs_12
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                        ? vlSelf->Main__DOT__regs__DOT__Regs_11
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                         ? vlSelf->Main__DOT__regs__DOT__Regs_10
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                          ? vlSelf->Main__DOT__regs__DOT__Regs_9
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                           ? vlSelf->Main__DOT__regs__DOT__Regs_8
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                            ? vlSelf->Main__DOT__regs__DOT__Regs_7
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                             ? vlSelf->Main__DOT__regs__DOT__Regs_6
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                              ? vlSelf->Main__DOT__regs__DOT__Regs_5
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                               ? vlSelf->Main__DOT__regs__DOT__Regs_4
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                                ? vlSelf->Main__DOT__regs__DOT__Regs_3
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                                 ? vlSelf->Main__DOT__regs__DOT__Regs_2
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                                  ? vlSelf->Main__DOT__regs__DOT__Regs_1
                                                                  : 0ULL))))))))))))))))))));
    Main__DOT__regs__DOT___GEN_20 = ((0x14U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                      ? vlSelf->Main__DOT__regs__DOT__Regs_20
                                      : ((0x13U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                          ? vlSelf->Main__DOT__regs__DOT__Regs_19
                                          : ((0x12U 
                                              == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                              ? vlSelf->Main__DOT__regs__DOT__Regs_18
                                              : ((0x11U 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                  ? vlSelf->Main__DOT__regs__DOT__Regs_17
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                   ? vlSelf->Main__DOT__regs__DOT__Regs_16
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                    ? vlSelf->Main__DOT__regs__DOT__Regs_15
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                     ? vlSelf->Main__DOT__regs__DOT__Regs_14
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                      ? vlSelf->Main__DOT__regs__DOT__Regs_13
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                       ? vlSelf->Main__DOT__regs__DOT__Regs_12
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                        ? vlSelf->Main__DOT__regs__DOT__Regs_11
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                         ? vlSelf->Main__DOT__regs__DOT__Regs_10
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                          ? vlSelf->Main__DOT__regs__DOT__Regs_9
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                           ? vlSelf->Main__DOT__regs__DOT__Regs_8
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                            ? vlSelf->Main__DOT__regs__DOT__Regs_7
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                             ? vlSelf->Main__DOT__regs__DOT__Regs_6
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                              ? vlSelf->Main__DOT__regs__DOT__Regs_5
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                               ? vlSelf->Main__DOT__regs__DOT__Regs_4
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                                ? vlSelf->Main__DOT__regs__DOT__Regs_3
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                                 ? vlSelf->Main__DOT__regs__DOT__Regs_2
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                                  ? vlSelf->Main__DOT__regs__DOT__Regs_1
                                                                  : 0ULL))))))))))))))))))));
    vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn = 
        ((0xfU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
          ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_SignS)))))
          : ((0xeU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
              ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_SignU)))))
              : ((0xdU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
                  ? (QData)((IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_SignS))
                  : ((0xcU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
                      ? (QData)((IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_SignU))
                      : ((0xbU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
                          ? (QData)((IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_Zero))
                          : ((0xaU == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
                              ? (QData)((IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut))
                              : ((9U == (IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl))
                                  ? (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut))))
                                  : Main__DOT__wbu__DOT___io_wbu_data_out_DataIn_T_50)))))));
    VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf);
    vlSelf->Main__DOT__regs_io_DataR2 = ((0x1fU == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                          ? vlSelf->Main__DOT__regs__DOT__Regs_31
                                          : ((0x1eU 
                                              == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                              ? vlSelf->Main__DOT__regs__DOT__Regs_30
                                              : ((0x1dU 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                  ? vlSelf->Main__DOT__regs__DOT__Regs_29
                                                  : 
                                                 ((0x1cU 
                                                   == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                   ? vlSelf->Main__DOT__regs__DOT__Regs_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                    ? vlSelf->Main__DOT__regs__DOT__Regs_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                     ? vlSelf->Main__DOT__regs__DOT__Regs_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                      ? vlSelf->Main__DOT__regs__DOT__Regs_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                       ? vlSelf->Main__DOT__regs__DOT__Regs_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                        ? vlSelf->Main__DOT__regs__DOT__Regs_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                         ? vlSelf->Main__DOT__regs__DOT__Regs_22
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2))
                                                          ? vlSelf->Main__DOT__regs__DOT__Regs_21
                                                          : Main__DOT__regs__DOT___GEN_52)))))))))));
    vlSelf->Main__DOT__regs_io_DataR1 = ((0x1fU == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                          ? vlSelf->Main__DOT__regs__DOT__Regs_31
                                          : ((0x1eU 
                                              == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                              ? vlSelf->Main__DOT__regs__DOT__Regs_30
                                              : ((0x1dU 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                  ? vlSelf->Main__DOT__regs__DOT__Regs_29
                                                  : 
                                                 ((0x1cU 
                                                   == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                   ? vlSelf->Main__DOT__regs__DOT__Regs_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                    ? vlSelf->Main__DOT__regs__DOT__Regs_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                     ? vlSelf->Main__DOT__regs__DOT__Regs_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                      ? vlSelf->Main__DOT__regs__DOT__Regs_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                       ? vlSelf->Main__DOT__regs__DOT__Regs_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                        ? vlSelf->Main__DOT__regs__DOT__Regs_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                         ? vlSelf->Main__DOT__regs__DOT__Regs_22
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1))
                                                          ? vlSelf->Main__DOT__regs__DOT__Regs_21
                                                          : Main__DOT__regs__DOT___GEN_20)))))))))));
    if (vlSelf->reset) {
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_EbreakIn = 0U;
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_RegWrite = 0U;
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_RinCtl = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait)))) {
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_EbreakIn 
            = (0x100073U == vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst);
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_RegWrite 
            = ((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
               | ((0x3003U == (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                  | (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_174)));
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_RinCtl 
            = ((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                ? 0U : ((0x3003U == (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                         ? 1U : ((0x3023U == (0x707fU 
                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                  ? 0U : ((0x13U == 
                                           (0x707fU 
                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                           ? 0U : (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 6U
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 6U
                                                      : 
                                                     ((0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x5013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x40005033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x40005013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x40000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_510)))))))))))))));
    }
    if (((IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_EbreakIn) 
         & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MEMUFlag))) {
        VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    vlSelf->Main__DOT__wbu_io_wbu_data_out_RegWriteOut 
        = ((IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RegWrite) 
           & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MEMUFlag));
    vlSelf->Main__DOT__exu__DOT__exu_data_reg_EXUFlag 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_IDUFlag) 
                                         & (~ (IData)(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait))));
    if (vlSelf->reset) {
        vlSelf->Main__DOT__exu__DOT__ifu_data_reg_PcVal = 0ULL;
        vlSelf->Main__DOT__exu__DOT__idu_data_reg_Rdest = 0U;
    } else {
        vlSelf->Main__DOT__exu__DOT__ifu_data_reg_PcVal 
            = vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal;
        vlSelf->Main__DOT__exu__DOT__idu_data_reg_Rdest 
            = vlSelf->Main__DOT__idu__DOT__idu_data_reg_Rdest;
    }
    Main__DOT__exu__DOT___AluSrc2_T_17 = ((6U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op))
                                           ? (QData)((IData)(vlSelf->Main__DOT__regs_io_DataR2))
                                           : ((5U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op))
                                               ? 4ULL
                                               : ((4U 
                                                   == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op))
                                                   ? vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op))
                                                    ? 0xcULL
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op))
                                                     ? (QData)((IData)(
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm))))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op))
                                                      ? (QData)((IData)(
                                                                        (0x3fU 
                                                                         & (IData)(vlSelf->Main__DOT__regs_io_DataR2))))
                                                      : vlSelf->Main__DOT__regs_io_DataR2))))));
    vlSelf->Main__DOT__exu__DOT__AluSrc2 = ((7U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op))
                                             ? (QData)((IData)(
                                                               (0x1fU 
                                                                & (IData)(vlSelf->Main__DOT__regs_io_DataR2))))
                                             : Main__DOT__exu__DOT___AluSrc2_T_17);
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Main__DOT__exu__DOT__exu_data_reg_AluOut, vlSelf->__Vtask_pmem_read__1__Rdata);
    vlSelf->Main__DOT__memu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__1__Rdata;
    if (((IData)(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_MemWrite) 
         & (IData)(vlSelf->Main__DOT__exu__DOT__exu_data_reg_EXUFlag))) {
        VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->Main__DOT__exu__DOT__exu_data_reg_AluOut, vlSelf->Main__DOT__exu__DOT__exu_data_reg_DataR2, (IData)(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_MemMask));
    }
    if (vlSelf->reset) {
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_IDUFlag = 0U;
        vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal = 0ULL;
        vlSelf->Main__DOT__idu__DOT__idu_data_reg_Rdest = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait)))) {
        vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_IDUFlag 
            = ((IData)(vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_IFUFlag) 
               & (~ (IData)(vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUClear)));
        vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal 
            = vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_PcVal;
        vlSelf->Main__DOT__idu__DOT__idu_data_reg_Rdest 
            = (0x1fU & (vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                        >> 7U));
    }
    vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_IFUFlag 
        = (1U & ((~ (IData)(vlSelf->reset)) & vlSelf->Main__DOT__ifu__DOT___GEN_3));
    if (vlSelf->reset) {
        vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_PcVal = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait)))) {
        vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_PcVal 
            = vlSelf->Main__DOT__pc;
    }
    Main__DOT__exu__DOT___io_exu_ctrl_out_EXUPc_T_24 
        = (vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal 
           + ((((1U & (IData)((vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm 
                               >> 0xcU))) ? 0x7ffffffffffffULL
                 : 0ULL) << 0xdU) | (QData)((IData)(
                                                    (0x1fffU 
                                                     & (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm))))));
    Main__DOT__exu__DOT___AluSrc1_T_7 = ((2U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op))
                                          ? (QData)((IData)(
                                                            (0xfffffU 
                                                             & (IData)(
                                                                       (vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm 
                                                                        >> 0xcU)))))
                                          : ((1U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op))
                                              ? vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal
                                              : vlSelf->Main__DOT__regs_io_DataR1));
    if (vlSelf->reset) {
        vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait)))) {
        vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
            = (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata);
    }
    vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5 = (
                                                   (3U 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op))
                                                    ? (QData)((IData)(vlSelf->Main__DOT__regs_io_DataR1))
                                                    : Main__DOT__exu__DOT___AluSrc1_T_7);
    vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait = 
        (((((((IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1) 
              == (IData)(vlSelf->Main__DOT__exu__DOT__idu_data_reg_Rdest)) 
             | ((IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2) 
                == (IData)(vlSelf->Main__DOT__exu__DOT__idu_data_reg_Rdest))) 
            & (IData)(vlSelf->Main__DOT__exu__DOT__exu_data_reg_EXUFlag)) 
           | (((IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1) 
               == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest)) 
              & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MEMUFlag))) 
          | (((IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2) 
              == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest)) 
             & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MEMUFlag))) 
         & (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_IDUFlag));
    if (vlSelf->reset) {
        vlSelf->Main__DOT__pc = 0x80000000ULL;
    } else if ((3U == (IData)(vlSelf->Main__DOT___pc_T))) {
        vlSelf->Main__DOT__pc = vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUPc;
    } else if ((2U != (IData)(vlSelf->Main__DOT___pc_T))) {
        vlSelf->Main__DOT__pc = ((1U == (IData)(vlSelf->Main__DOT___pc_T))
                                  ? vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUPc
                                  : vlSelf->Main__DOT___pc_T_2);
    }
    vlSelf->Main__DOT__exu__DOT___SignSTmp_T = ((2U 
                                                 & ((IData)(
                                                            (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5 
                                                             >> 0x3fU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__exu__DOT__AluSrc2 
                                                              >> 0x3fU))));
    VL_EXTEND_WQ(128,64, __Vtemp_h8cc9721b__0, (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5 
                                                ^ vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_h6867a458__0, VL_SHIFTRS_QQI(64,64,6, vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5, 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2))));
    VL_EXTEND_WQ(128,64, __Vtemp_h6c1423dd__0, (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2))));
    VL_EXTEND_WQ(127,64, __Vtemp_hfa32d3c7__0, vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h6ccf3aed__0, __Vtemp_hfa32d3c7__0, 
                  (0x3fU & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)));
    __Vtemp_h26dd609b__0[0U] = __Vtemp_h6ccf3aed__0[0U];
    __Vtemp_h26dd609b__0[1U] = __Vtemp_h6ccf3aed__0[1U];
    __Vtemp_h26dd609b__0[2U] = __Vtemp_h6ccf3aed__0[2U];
    __Vtemp_h26dd609b__0[3U] = (0x7fffffffU & __Vtemp_h6ccf3aed__0[3U]);
    VL_EXTEND_WW(128,127, __Vtemp_h2378d707__0, __Vtemp_h26dd609b__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h436a5ffd__0, VL_MODDIV_QQQ(64, vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5, vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_h42fdd196__0, VL_MODDIVS_QQQ(64, vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5, vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_h43606850__0, VL_DIV_QQQ(64, vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5, vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTENDS_WQ(65,64, __Vtemp_hfa226cf6__0, vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5);
    __Vtemp_he2994060__0[0U] = __Vtemp_hfa226cf6__0[0U];
    __Vtemp_he2994060__0[1U] = __Vtemp_hfa226cf6__0[1U];
    __Vtemp_he2994060__0[2U] = (1U & __Vtemp_hfa226cf6__0[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp_h104f9c54__0, vlSelf->Main__DOT__exu__DOT__AluSrc2);
    __Vtemp_h8a625cc0__0[0U] = __Vtemp_h104f9c54__0[0U];
    __Vtemp_h8a625cc0__0[1U] = __Vtemp_h104f9c54__0[1U];
    __Vtemp_h8a625cc0__0[2U] = (1U & __Vtemp_h104f9c54__0[2U]);
    VL_DIVS_WWW(65, __Vtemp_h028ec434__0, __Vtemp_he2994060__0, __Vtemp_h8a625cc0__0);
    __Vtemp_hdf579a1c__0[0U] = __Vtemp_h028ec434__0[0U];
    __Vtemp_hdf579a1c__0[1U] = __Vtemp_h028ec434__0[1U];
    __Vtemp_hdf579a1c__0[2U] = (1U & __Vtemp_h028ec434__0[2U]);
    VL_EXTEND_WW(128,65, __Vtemp_h20c9ba9f__0, __Vtemp_hdf579a1c__0);
    VL_EXTEND_WQ(128,64, __Vtemp_hfa32d3c7__1, vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5);
    VL_EXTEND_WQ(128,64, __Vtemp_h105d8525__0, vlSelf->Main__DOT__exu__DOT__AluSrc2);
    VL_MUL_W(4, __Vtemp_hc42dfd7d__0, __Vtemp_hfa32d3c7__1, __Vtemp_h105d8525__0);
    VL_EXTEND_WQ(128,64, __Vtemp_hb01981ea__0, ((2U 
                                                 == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))
                                                 ? 
                                                (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5 
                                                 - vlSelf->Main__DOT__exu__DOT__AluSrc2)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))
                                                  ? 
                                                 (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5 
                                                  + vlSelf->Main__DOT__exu__DOT__AluSrc2)
                                                  : 0ULL)));
    if ((0xbU == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_h8cc9721b__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_h8cc9721b__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_h8cc9721b__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_h8cc9721b__0[3U];
    } else if ((0xaU == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_h6867a458__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_h6867a458__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_h6867a458__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_h6867a458__0[3U];
    } else if ((9U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_h6c1423dd__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_h6c1423dd__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_h6c1423dd__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_h6c1423dd__0[3U];
    } else if ((8U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_h2378d707__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_h2378d707__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_h2378d707__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_h2378d707__0[3U];
    } else if ((7U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_h436a5ffd__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_h436a5ffd__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_h436a5ffd__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_h436a5ffd__0[3U];
    } else if ((6U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_h42fdd196__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_h42fdd196__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_h42fdd196__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_h42fdd196__0[3U];
    } else if ((5U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_h43606850__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_h43606850__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_h43606850__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_h43606850__0[3U];
    } else if ((4U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_h20c9ba9f__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_h20c9ba9f__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_h20c9ba9f__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_h20c9ba9f__0[3U];
    } else if ((3U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_hc42dfd7d__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_hc42dfd7d__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_hc42dfd7d__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_hc42dfd7d__0[3U];
    } else {
        Main__DOT__exu__DOT___AluOutTmp_T_64[0U] = 
            __Vtemp_hb01981ea__0[0U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[1U] = 
            __Vtemp_hb01981ea__0[1U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[2U] = 
            __Vtemp_hb01981ea__0[2U];
        Main__DOT__exu__DOT___AluOutTmp_T_64[3U] = 
            __Vtemp_hb01981ea__0[3U];
    }
    vlSelf->io_Inst = vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst;
    vlSelf->Main__DOT__idu__DOT___idu_data_reg_Imm_T_4 
        = (((QData)((IData)(((vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))));
    vlSelf->Main__DOT__idu__DOT___idu_data_reg_Imm_T_9 
        = ((((vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
              >> 0x1fU) ? 0xfffffffffffffULL : 0ULL) 
            << 0xcU) | (QData)((IData)((vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                                        >> 0x14U))));
    vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_2 
        = ((0xfe0U & (vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                      >> 0x14U)) | (0x1fU & (vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                                             >> 7U)));
    vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_6 
        = ((((0x100000U & (vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                           >> 0xbU)) | (0x7feU & (vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                                                  >> 0x14U))) 
            | (0x800U & (vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                         >> 9U))) | (0xff000U & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst));
    vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_8 
        = ((((0x1000U & (vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                         >> 0x13U)) | (0x7e0U & (vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                                                 >> 0x14U))) 
            | (0x1eU & (vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                        >> 7U))) | (0x800U & (vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                                              << 4U)));
    Main__DOT__idu__DOT___contr_code_T_135 = ((0x1023U 
                                               != (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                              & ((0x2023U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                 & ((0x2000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                    | ((0x2006033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                       | ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                          | ((0x2007033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                             | ((0x200703bU 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                | ((0x200003bU 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                   | ((0x2004033U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                      | ((0x2005033U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                         | ((0x200503bU 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                            | ((0x4000503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                               | ((0x503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((0x101bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((0x4000501bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((0x200403bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((0x103bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | (0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)))))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_209 = ((0x3013U 
                                               != (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                              & ((0x63U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                 & ((0x1063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                    & ((0x4063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                       & ((0x5063U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                          & ((0x6063U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                             & ((0x7063U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                & ((0x6fU 
                                                                    != 
                                                                    (0x7fU 
                                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                   & ((0x67U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                      & ((0x501bU 
                                                                          != 
                                                                          (0xfc00707fU 
                                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                         & ((3U 
                                                                             != 
                                                                             (0x707fU 
                                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                            & ((0x1003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                               & ((0x4003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                & ((0x5003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                & ((0x2003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                & ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)))))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_447 = ((0x6013U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 0U
                                               : ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 4U
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 3U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 6U
                                                            : 
                                                           ((0x6063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 7U
                                                             : 
                                                            ((0x7063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                              ? 8U
                                                              : 
                                                             ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                               ? 1U
                                                               : 
                                                              ((0x67U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                                ? 2U
                                                                : 0U)))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_554 = ((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 0U
                                               : ((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 0U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 0U
                                                             : 
                                                            ((0x23U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                              ? 1U
                                                              : 
                                                             ((0x1023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                               ? 3U
                                                               : 
                                                              ((0x2023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                                ? 0xfU
                                                                : 0U)))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_249 = ((0x2000033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 0U
                                               : ((0x2006033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x200603bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x2007033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x200703bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 3U
                                                      : 
                                                     ((0x200003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2004033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x200503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 3U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 3U
                                                           : 
                                                          ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 3U
                                                            : 
                                                           ((0x101bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 3U
                                                             : 
                                                            ((0x4000501bU 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                              ? 3U
                                                              : 
                                                             ((0x200403bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                               ? 3U
                                                               : 
                                                              ((0x103bU 
                                                                == 
                                                                (0xfc00707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                                ? 3U
                                                                : 0U)))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_306 = ((0x2006033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 0U
                                               : ((0x200603bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x2007033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x200703bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 6U
                                                     : 
                                                    ((0x200003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x2004033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x200503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 6U
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 7U
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 7U
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 2U
                                                             : 
                                                            ((0x200403bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                              ? 6U
                                                              : 
                                                             ((0x103bU 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                               ? 7U
                                                               : 
                                                              ((0x3013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                                ? 4U
                                                                : 0U)))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_363 = ((0x200603bU 
                                               == (0xfe00707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 6U
                                               : ((0x2007033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 7U
                                                   : 
                                                  ((0x200703bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 7U
                                                    : 
                                                   ((0x200003bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 3U
                                                     : 
                                                    ((0x2004033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 4U
                                                      : 
                                                     ((0x2005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 5U
                                                       : 
                                                      ((0x200503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 0x10U
                                                         : 
                                                        ((0x503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 0xfU
                                                          : 
                                                         ((0x101bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 0xeU
                                                           : 
                                                          ((0x4000501bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 0x10U
                                                            : 
                                                           ((0x200403bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 0x11U
                                                             : 
                                                            ((0x103bU 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                              ? 0xeU
                                                              : 
                                                             ((0x3013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                               ? 2U
                                                               : 0U))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_480 = ((0x2006033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 0U
                                               : ((0x200603bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 6U
                                                   : 
                                                  ((0x2007033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x200703bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x200003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 6U
                                                      : 
                                                     ((0x2004033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x200503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 6U
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 6U
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 6U
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 6U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 6U
                                                             : 
                                                            ((0x200403bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                              ? 6U
                                                              : 
                                                             ((0x103bU 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                               ? 6U
                                                               : 
                                                              ((0x3013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                                ? 0xeU
                                                                : 0U)))))))))))))));
    VL_EXTEND_WQ(128,33, __Vtemp_h4d7c48d8__0, (0x1ffffffffULL 
                                                & VL_DIVS_QQQ(33, 
                                                              (0x1ffffffffULL 
                                                               & VL_EXTENDS_QI(33,32, (IData)(vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5))), 
                                                              (0x1ffffffffULL 
                                                               & VL_EXTENDS_QI(33,32, (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2))))));
    VL_EXTEND_WI(128,32, __Vtemp_h179394d8__0, ((0x1fU 
                                                 >= 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)))
                                                 ? 
                                                VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5), 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)))
                                                 : 
                                                (- 
                                                 ((IData)(vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5) 
                                                  >> 0x1fU))));
    VL_EXTEND_WI(128,32, __Vtemp_heb5bc280__0, ((0x1fU 
                                                 >= 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)))
                                                 ? 
                                                ((IData)(vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5) 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)))
                                                 : 0U));
    VL_EXTEND_WI(95,32, __Vtemp_h6c97d905__0, (IData)(vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5));
    VL_SHIFTL_WWI(95,95,6, __Vtemp_ha0220312__0, __Vtemp_h6c97d905__0, 
                  (0x3fU & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)));
    __Vtemp_h49165262__0[0U] = __Vtemp_ha0220312__0[0U];
    __Vtemp_h49165262__0[1U] = __Vtemp_ha0220312__0[1U];
    __Vtemp_h49165262__0[2U] = (0x7fffffffU & __Vtemp_ha0220312__0[2U]);
    VL_EXTEND_WW(128,95, __Vtemp_h4e6d79b4__0, __Vtemp_h49165262__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h8cc4edb3__0, (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5 
                                                & vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_h8cf57d36__0, (vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5 
                                                | vlSelf->Main__DOT__exu__DOT__AluSrc2));
    if ((0x11U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U] 
            = __Vtemp_h4d7c48d8__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
            = __Vtemp_h4d7c48d8__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[2U] 
            = __Vtemp_h4d7c48d8__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[3U] 
            = __Vtemp_h4d7c48d8__0[3U];
    } else if ((0x10U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U] 
            = __Vtemp_h179394d8__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
            = __Vtemp_h179394d8__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[2U] 
            = __Vtemp_h179394d8__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[3U] 
            = __Vtemp_h179394d8__0[3U];
    } else if ((0xfU == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U] 
            = __Vtemp_heb5bc280__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
            = __Vtemp_heb5bc280__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[2U] 
            = __Vtemp_heb5bc280__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[3U] 
            = __Vtemp_heb5bc280__0[3U];
    } else if ((0xeU == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U] 
            = __Vtemp_h4e6d79b4__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
            = __Vtemp_h4e6d79b4__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[2U] 
            = __Vtemp_h4e6d79b4__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[3U] 
            = __Vtemp_h4e6d79b4__0[3U];
    } else if ((0xdU == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U] 
            = __Vtemp_h8cc4edb3__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
            = __Vtemp_h8cc4edb3__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[2U] 
            = __Vtemp_h8cc4edb3__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[3U] 
            = __Vtemp_h8cc4edb3__0[3U];
    } else if ((0xcU == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U] 
            = __Vtemp_h8cf57d36__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U] 
            = __Vtemp_h8cf57d36__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[2U] 
            = __Vtemp_h8cf57d36__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[3U] 
            = __Vtemp_h8cf57d36__0[3U];
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
    vlSelf->Main__DOT__idu__DOT___contr_code_T_174 
        = ((0x3023U != (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
           & ((0x13U == (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
              | ((0x33U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                 | ((0x1bU == (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                    | ((0x3bU == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                       | ((0x1033U == (0xfe00707fU 
                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                          | ((0x1013U == (0xfc00707fU 
                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                             | ((0x5033U == (0xfe00707fU 
                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                | ((0x5013U == (0xfc00707fU 
                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                   | ((0x40005033U 
                                       == (0xfe00707fU 
                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                      | ((0x40005013U 
                                          == (0xfc00707fU 
                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                         | ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                            | ((0x4000003bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                               | ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                  | ((0x4033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                     | ((0x4013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                        | ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                           | ((0x6013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                              | ((0x7033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                 | ((0x7013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                    | ((0x2033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                       | ((0x2013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                          | ((0x3033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                             | ((0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                & ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((0x501bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                | ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                                                & (IData)(Main__DOT__idu__DOT___contr_code_T_135))))))))))))))))))))))))))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_226 
        = ((0x1013U != (0xfc00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
           & ((0x5033U != (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
              & ((0x5013U != (0xfc00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                 & ((0x40005033U != (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                    & ((0x40005013U != (0xfc00707fU 
                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                       & ((0x40000033U != (0xfe00707fU 
                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                          & ((0x4000003bU != (0xfe00707fU 
                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                             & ((0x37U != (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                & ((0x4033U != (0xfe00707fU 
                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                   & ((0x4013U != (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                      & ((0x6033U != 
                                          (0xfe00707fU 
                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                         & ((0x6013U 
                                             != (0x707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                            & ((0x7033U 
                                                != 
                                                (0xfe00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                               & ((0x7013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                  & ((0x2033U 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                     & ((0x2013U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                        & ((0x3033U 
                                                            != 
                                                            (0xfe00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                                           & (IData)(Main__DOT__idu__DOT___contr_code_T_209))))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_462 
        = ((0x33U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
            ? 0U : ((0x1bU == (0x707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                     ? 0U : ((0x3bU == (0xfe00707fU 
                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                              ? 0U : ((0x1033U == (0xfe00707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                       ? 0U : ((0x1013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                ? 0U
                                                : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x40000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x4000003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x6033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 0U
                                                             : (IData)(Main__DOT__idu__DOT___contr_code_T_447))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_569 
        = ((0x40000033U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
            ? 0U : ((0x4000003bU == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                     ? 0U : ((0x37U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                              ? 0U : ((0x4033U == (0xfe00707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                       ? 0U : ((0x4013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                ? 0U
                                                : (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x3033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x1063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 0U
                                                             : (IData)(Main__DOT__idu__DOT___contr_code_T_554))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_264 = ((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 0U
                                               : ((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 1U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 1U
                                                       : 
                                                      ((0x501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 3U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 0U
                                                             : 
                                                            ((0x23U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                              ? 0U
                                                              : 
                                                             ((0x1023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                               ? 0U
                                                               : 
                                                              ((0x2023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                                ? 0U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_249))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_321 = ((0x5063U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 0U
                                               : ((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 5U
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 2U
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 4U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 4U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 4U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 4U
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 4U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 4U
                                                             : 
                                                            ((0x1023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                              ? 4U
                                                              : 
                                                             ((0x2023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                               ? 4U
                                                               : 
                                                              ((0x2000033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                                ? 0U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_306))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_378 = ((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 2U
                                               : ((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 2U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 1U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 1U
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 0xfU
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 1U
                                                       : 
                                                      ((0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 1U
                                                        : 
                                                       ((0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 1U
                                                          : 
                                                         ((0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 1U
                                                           : 
                                                          ((0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 1U
                                                            : 
                                                           ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 1U
                                                             : 
                                                            ((0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                              ? 1U
                                                              : 
                                                             ((0x2000033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                               ? 3U
                                                               : 
                                                              ((0x2006033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                                ? 6U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_363))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_495 = ((0x5063U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 0U
                                               : ((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 6U
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 3U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 5U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 8U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 9U
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 7U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 0U
                                                             : 
                                                            ((0x1023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                              ? 0U
                                                              : 
                                                             ((0x2023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                               ? 0U
                                                               : 
                                                              ((0x2000033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                                ? 0U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_480))))))))))))))));
    vlSelf->Main__DOT___pc_T_2 = (4ULL + vlSelf->Main__DOT__pc);
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Main__DOT__pc, vlSelf->__Vtask_pmem_read__0__Rdata);
    vlSelf->Main__DOT__ifu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__0__Rdata;
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
    vlSelf->Main__DOT__idu__DOT___contr_code_T_279 
        = ((0x40000033U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
            ? 0U : ((0x4000003bU == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                     ? 3U : ((0x37U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                              ? 2U : ((0x4033U == (0xfe00707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                       ? 0U : ((0x4013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                ? 0U
                                                : (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x3033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x1063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 0U
                                                             : (IData)(Main__DOT__idu__DOT___contr_code_T_264))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_336 
        = ((0x4000003bU == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
            ? 0U : ((0x37U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                     ? 3U : ((0x4033U == (0xfe00707fU 
                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                              ? 0U : ((0x4013U == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                       ? 4U : ((0x6033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                ? 0U
                                                : (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 4U
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 4U
                                                      : 
                                                     ((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 4U
                                                        : 
                                                       ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 4U
                                                          : 
                                                         ((0x63U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x4063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 0U
                                                             : (IData)(Main__DOT__idu__DOT___contr_code_T_321))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_393 
        = ((0x37U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
            ? 8U : ((0x4033U == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                     ? 0xbU : ((0x4013U == (0x707fU 
                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                ? 0xbU : ((0x6033U 
                                           == (0xfe00707fU 
                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                           ? 0xcU : 
                                          ((0x6013U 
                                            == (0x707fU 
                                                & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                            ? 0xcU : 
                                           ((0x7033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                             ? 0xdU
                                             : ((0x7013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                 ? 0xdU
                                                 : 
                                                ((0x2033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                  ? 2U
                                                  : 
                                                 ((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 2U
                                                   : 
                                                  ((0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 2U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 2U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 2U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 2U
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 2U
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 2U
                                                         : (IData)(Main__DOT__idu__DOT___contr_code_T_378))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_510 
        = ((0x4000003bU == (0xfe00707fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
            ? 6U : ((0x37U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                     ? 6U : ((0x4033U == (0xfe00707fU 
                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                              ? 0U : ((0x4013U == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                       ? 0U : ((0x6033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                ? 0U
                                                : (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                       ? 0xfU
                                                       : 
                                                      ((0x2013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 0xfU
                                                        : 
                                                       ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 0xeU
                                                         : 
                                                        ((0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 0xeU
                                                          : 
                                                         ((0x63U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x4063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 0U
                                                             : (IData)(Main__DOT__idu__DOT___contr_code_T_495))))))))))))))));
    vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUPc = 
        ((8U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc))
          ? ((IData)(vlSelf->Main__DOT__exu__DOT__SignUTmp)
              ? Main__DOT__exu__DOT___io_exu_ctrl_out_EXUPc_T_24
              : (4ULL + vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal))
          : ((7U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc))
              ? ((IData)(vlSelf->Main__DOT__exu__DOT__SignUTmp)
                  ? (4ULL + vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal)
                  : Main__DOT__exu__DOT___io_exu_ctrl_out_EXUPc_T_24)
              : ((6U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc))
                  ? ((IData)(vlSelf->Main__DOT__exu__DOT__SignSTmp)
                      ? Main__DOT__exu__DOT___io_exu_ctrl_out_EXUPc_T_24
                      : (4ULL + vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal))
                  : ((5U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc))
                      ? ((IData)(vlSelf->Main__DOT__exu__DOT__SignSTmp)
                          ? (4ULL + vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal)
                          : Main__DOT__exu__DOT___io_exu_ctrl_out_EXUPc_T_24)
                      : ((4U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc))
                          ? ((0ULL == (((QData)((IData)(
                                                        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U]))))
                              ? Main__DOT__exu__DOT___io_exu_ctrl_out_EXUPc_T_24
                              : (4ULL + vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal))
                          : ((3U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc))
                              ? ((0ULL != (((QData)((IData)(
                                                            vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U]))))
                                  ? Main__DOT__exu__DOT___io_exu_ctrl_out_EXUPc_T_24
                                  : (4ULL + vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal))
                              : ((2U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc))
                                  ? (0xfffffffffffffffeULL 
                                     & (vlSelf->Main__DOT__regs_io_DataR1 
                                        + vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm))
                                  : ((1U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc))
                                      ? (vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal 
                                         + ((((1U & (IData)(
                                                            (vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm 
                                                             >> 0x14U)))
                                               ? 0x7ffffffffffULL
                                               : 0ULL) 
                                             << 0x15U) 
                                            | (QData)((IData)(
                                                              (0x1fffffU 
                                                               & (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm))))))
                                      : (4ULL + vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal)))))))));
    vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUClear 
        = (((IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_IDUFlag) 
            & (~ (IData)(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait))) 
           & (((((((((3U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc)) 
                     & (0ULL != (((QData)((IData)(vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U]))))) 
                    | ((4U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc)) 
                       & (0ULL == (((QData)((IData)(
                                                    vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U])))))) 
                   | ((5U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc)) 
                      & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignSTmp)))) 
                  | ((6U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc)) 
                     & (IData)(vlSelf->Main__DOT__exu__DOT__SignSTmp))) 
                 | ((7U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc)) 
                    & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignUTmp)))) 
                | ((8U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc)) 
                   & (IData)(vlSelf->Main__DOT__exu__DOT__SignUTmp))) 
               | (1U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc))) 
              | (2U == (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc))));
    vlSelf->Main__DOT__ifu__DOT___GEN_3 = ((IData)(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait)
                                            ? (IData)(vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_IFUFlag)
                                            : (~ (IData)(vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUClear)));
    vlSelf->Main__DOT___pc_T = (((((((((IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1) 
                                       == (IData)(vlSelf->Main__DOT__exu__DOT__idu_data_reg_Rdest)) 
                                      | ((IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2) 
                                         == (IData)(vlSelf->Main__DOT__exu__DOT__idu_data_reg_Rdest))) 
                                     & (IData)(vlSelf->Main__DOT__exu__DOT__exu_data_reg_EXUFlag)) 
                                    | (((IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1) 
                                        == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest)) 
                                       & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MEMUFlag))) 
                                   | (((IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2) 
                                       == (IData)(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest)) 
                                      & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MEMUFlag))) 
                                  & (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_IDUFlag)) 
                                 << 1U) | (IData)(vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUClear));
}
