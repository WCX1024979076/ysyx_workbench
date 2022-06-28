// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMain__Syms.h"


void VMain___024root__trace_chg_sub_0(VMain___024root* vlSelf, VerilatedVcd* tracep);

void VMain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_chg_top_0\n"); );
    // Init
    VMain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMain___024root*>(voidSelf);
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMain___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VMain___024root__trace_chg_sub_0(VMain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgQData(oldp+0,(vlSelf->Main__DOT__pc),64);
        tracep->chgIData(oldp+2,(vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUClear),32);
        tracep->chgBit(oldp+3,(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait));
        tracep->chgIData(oldp+4,(vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst),32);
        tracep->chgQData(oldp+5,(vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_PcVal),64);
        tracep->chgBit(oldp+7,(vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_IFUFlag));
        tracep->chgBit(oldp+8,(vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUClear));
        tracep->chgQData(oldp+9,(vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal),64);
        tracep->chgCData(oldp+11,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Rdest),5);
        tracep->chgCData(oldp+12,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1),5);
        tracep->chgCData(oldp+13,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2),5);
        tracep->chgQData(oldp+14,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm),64);
        tracep->chgBit(oldp+16,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_RegWrite));
        tracep->chgBit(oldp+17,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_MemWrite));
        tracep->chgCData(oldp+18,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp),5);
        tracep->chgCData(oldp+19,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op),5);
        tracep->chgCData(oldp+20,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op),5);
        tracep->chgCData(oldp+21,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc),5);
        tracep->chgCData(oldp+22,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_RinCtl),4);
        tracep->chgCData(oldp+23,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_MemMask),8);
        tracep->chgBit(oldp+24,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_EbreakIn));
        tracep->chgBit(oldp+25,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_IDUFlag));
        tracep->chgQData(oldp+26,(vlSelf->Main__DOT__regs_io_DataR1),64);
        tracep->chgQData(oldp+28,(vlSelf->Main__DOT__regs_io_DataR2),64);
        tracep->chgQData(oldp+30,(vlSelf->Main__DOT__exu__DOT__ifu_data_reg_PcVal),64);
        tracep->chgCData(oldp+32,(vlSelf->Main__DOT__exu__DOT__idu_data_reg_Rdest),5);
        tracep->chgBit(oldp+33,(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_RegWrite));
        tracep->chgBit(oldp+34,(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_MemWrite));
        tracep->chgCData(oldp+35,(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_RinCtl),4);
        tracep->chgCData(oldp+36,(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_MemMask),8);
        tracep->chgBit(oldp+37,(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_EbreakIn));
        tracep->chgQData(oldp+38,(vlSelf->Main__DOT__exu__DOT__exu_data_reg_DataR2),64);
        tracep->chgBit(oldp+40,(vlSelf->Main__DOT__exu__DOT__exu_data_reg_Zero));
        tracep->chgBit(oldp+41,(vlSelf->Main__DOT__exu__DOT__exu_data_reg_SignU));
        tracep->chgBit(oldp+42,(vlSelf->Main__DOT__exu__DOT__exu_data_reg_SignS));
        tracep->chgQData(oldp+43,(vlSelf->Main__DOT__exu__DOT__exu_data_reg_AluOut),64);
        tracep->chgBit(oldp+45,(vlSelf->Main__DOT__exu__DOT__exu_data_reg_EXUFlag));
        tracep->chgQData(oldp+46,(vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUPc),64);
        tracep->chgQData(oldp+48,(vlSelf->Main__DOT__memu__DOT__ifu_data_reg_PcVal),64);
        tracep->chgCData(oldp+50,(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest),5);
        tracep->chgBit(oldp+51,(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RegWrite));
        tracep->chgCData(oldp+52,(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl),4);
        tracep->chgBit(oldp+53,(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_EbreakIn));
        tracep->chgBit(oldp+54,(vlSelf->Main__DOT__memu__DOT__exu_data_reg_Zero));
        tracep->chgBit(oldp+55,(vlSelf->Main__DOT__memu__DOT__exu_data_reg_SignU));
        tracep->chgBit(oldp+56,(vlSelf->Main__DOT__memu__DOT__exu_data_reg_SignS));
        tracep->chgQData(oldp+57,(vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut),64);
        tracep->chgBit(oldp+59,(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MEMUFlag));
        tracep->chgQData(oldp+60,(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut),64);
        tracep->chgBit(oldp+62,(vlSelf->Main__DOT__wbu_io_wbu_data_out_RegWriteOut));
        tracep->chgQData(oldp+63,(vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn),64);
        tracep->chgQData(oldp+65,(vlSelf->Main__DOT__wbu__DOT__PcValReg),64);
        tracep->chgBit(oldp+67,((((((((IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1) 
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
                                 & (IData)(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_IDUFlag))));
        tracep->chgQData(oldp+68,(vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5),64);
        tracep->chgQData(oldp+70,(vlSelf->Main__DOT__exu__DOT__AluSrc2),64);
        tracep->chgQData(oldp+72,((((QData)((IData)(
                                                    vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U])))),64);
        tracep->chgBit(oldp+74,((0ULL == (((QData)((IData)(
                                                           vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U]))))));
        tracep->chgBit(oldp+75,((1U & (IData)((vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5 
                                               >> 0x3fU)))));
        tracep->chgBit(oldp+76,((1U & (IData)((vlSelf->Main__DOT__exu__DOT__AluSrc2 
                                               >> 0x3fU)))));
        tracep->chgBit(oldp+77,(vlSelf->Main__DOT__exu__DOT__SignSTmp));
        tracep->chgBit(oldp+78,(vlSelf->Main__DOT__exu__DOT__SignUTmp));
        tracep->chgIData(oldp+79,((0x1fffffU & (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm))),21);
        tracep->chgQData(oldp+80,(((1U & (IData)((vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm 
                                                  >> 0x14U)))
                                    ? 0x7ffffffffffULL
                                    : 0ULL)),43);
        tracep->chgSData(oldp+82,((0x1fffU & (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm))),13);
        tracep->chgQData(oldp+83,(((1U & (IData)((vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm 
                                                  >> 0xcU)))
                                    ? 0x7ffffffffffffULL
                                    : 0ULL)),51);
        tracep->chgCData(oldp+85,((0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)),7);
        tracep->chgIData(oldp+86,((0xfffff000U & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)),32);
        tracep->chgIData(oldp+87,(((vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                                    >> 0x1fU) ? 0xffffffffU
                                    : 0U)),32);
        tracep->chgSData(oldp+88,((vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                                   >> 0x14U)),12);
        tracep->chgQData(oldp+89,(((vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                                    >> 0x1fU) ? 0xfffffffffffffULL
                                    : 0ULL)),52);
        tracep->chgSData(oldp+91,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_2),12);
        tracep->chgQData(oldp+92,(((0x800U & (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_2))
                                    ? 0xfffffffffffffULL
                                    : 0ULL)),52);
        tracep->chgIData(oldp+94,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_6),21);
        tracep->chgQData(oldp+95,(((0x100000U & vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_6)
                                    ? 0x7ffffffffffULL
                                    : 0ULL)),43);
        tracep->chgSData(oldp+97,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_8),13);
        tracep->chgQData(oldp+98,(((0x1000U & (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_8))
                                    ? 0x7ffffffffffffULL
                                    : 0ULL)),51);
        tracep->chgBit(oldp+100,(((0x17U == (0x7fU 
                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                  | ((0x3003U == (0x707fU 
                                                  & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                     | (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_174)))));
        tracep->chgCData(oldp+101,(((0x17U == (0x7fU 
                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                     ? 1U : ((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                              ? 0U : 
                                             ((0x3023U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 0U
                                               : ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                      ? 3U
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
                                                            : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_279))))))))))))))),2);
        tracep->chgCData(oldp+102,(((0x17U == (0x7fU 
                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                     ? 4U : ((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                              ? 4U : 
                                             ((0x3023U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 4U
                                               : ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 4U
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 4U
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
                                                       ? 1U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                        ? 2U
                                                        : 
                                                       ((0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x5013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                          ? 2U
                                                          : 
                                                         ((0x40005033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                           ? 1U
                                                           : 
                                                          ((0x40005013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x40000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_336)))))))))))))))),3);
        tracep->chgCData(oldp+103,(((0x17U == (0x7fU 
                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                     ? 0U : ((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                              ? 0U : 
                                             ((0x3023U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                               ? 0U
                                               : ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                   ? 0U
                                                   : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_462)))))),4);
        tracep->chgQData(oldp+104,(vlSelf->Main__DOT__ifu__DOT__mem_Rdata),64);
        tracep->chgQData(oldp+106,(vlSelf->Main__DOT__memu__DOT__mem_Rdata),64);
        tracep->chgBit(oldp+108,(((IData)(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_MemWrite) 
                                  & (IData)(vlSelf->Main__DOT__exu__DOT__exu_data_reg_EXUFlag))));
        tracep->chgQData(oldp+109,(vlSelf->Main__DOT__regs__DOT__Regs_1),64);
        tracep->chgQData(oldp+111,(vlSelf->Main__DOT__regs__DOT__Regs_2),64);
        tracep->chgQData(oldp+113,(vlSelf->Main__DOT__regs__DOT__Regs_3),64);
        tracep->chgQData(oldp+115,(vlSelf->Main__DOT__regs__DOT__Regs_4),64);
        tracep->chgQData(oldp+117,(vlSelf->Main__DOT__regs__DOT__Regs_5),64);
        tracep->chgQData(oldp+119,(vlSelf->Main__DOT__regs__DOT__Regs_6),64);
        tracep->chgQData(oldp+121,(vlSelf->Main__DOT__regs__DOT__Regs_7),64);
        tracep->chgQData(oldp+123,(vlSelf->Main__DOT__regs__DOT__Regs_8),64);
        tracep->chgQData(oldp+125,(vlSelf->Main__DOT__regs__DOT__Regs_9),64);
        tracep->chgQData(oldp+127,(vlSelf->Main__DOT__regs__DOT__Regs_10),64);
        tracep->chgQData(oldp+129,(vlSelf->Main__DOT__regs__DOT__Regs_11),64);
        tracep->chgQData(oldp+131,(vlSelf->Main__DOT__regs__DOT__Regs_12),64);
        tracep->chgQData(oldp+133,(vlSelf->Main__DOT__regs__DOT__Regs_13),64);
        tracep->chgQData(oldp+135,(vlSelf->Main__DOT__regs__DOT__Regs_14),64);
        tracep->chgQData(oldp+137,(vlSelf->Main__DOT__regs__DOT__Regs_15),64);
        tracep->chgQData(oldp+139,(vlSelf->Main__DOT__regs__DOT__Regs_16),64);
        tracep->chgQData(oldp+141,(vlSelf->Main__DOT__regs__DOT__Regs_17),64);
        tracep->chgQData(oldp+143,(vlSelf->Main__DOT__regs__DOT__Regs_18),64);
        tracep->chgQData(oldp+145,(vlSelf->Main__DOT__regs__DOT__Regs_19),64);
        tracep->chgQData(oldp+147,(vlSelf->Main__DOT__regs__DOT__Regs_20),64);
        tracep->chgQData(oldp+149,(vlSelf->Main__DOT__regs__DOT__Regs_21),64);
        tracep->chgQData(oldp+151,(vlSelf->Main__DOT__regs__DOT__Regs_22),64);
        tracep->chgQData(oldp+153,(vlSelf->Main__DOT__regs__DOT__Regs_23),64);
        tracep->chgQData(oldp+155,(vlSelf->Main__DOT__regs__DOT__Regs_24),64);
        tracep->chgQData(oldp+157,(vlSelf->Main__DOT__regs__DOT__Regs_25),64);
        tracep->chgQData(oldp+159,(vlSelf->Main__DOT__regs__DOT__Regs_26),64);
        tracep->chgQData(oldp+161,(vlSelf->Main__DOT__regs__DOT__Regs_27),64);
        tracep->chgQData(oldp+163,(vlSelf->Main__DOT__regs__DOT__Regs_28),64);
        tracep->chgQData(oldp+165,(vlSelf->Main__DOT__regs__DOT__Regs_29),64);
        tracep->chgQData(oldp+167,(vlSelf->Main__DOT__regs__DOT__Regs_30),64);
        tracep->chgQData(oldp+169,(vlSelf->Main__DOT__regs__DOT__Regs_31),64);
        tracep->chgBit(oldp+171,(((IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_EbreakIn) 
                                  & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MEMUFlag))));
        tracep->chgCData(oldp+172,((0xffU & (IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut))),8);
        tracep->chgQData(oldp+173,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut 
                                                   >> 7U)))
                                     ? 0xffffffffffffffULL
                                     : 0ULL)),56);
        tracep->chgCData(oldp+175,((0xffU & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut))),8);
        tracep->chgQData(oldp+176,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut 
                                                   >> 7U)))
                                     ? 0xffffffffffffffULL
                                     : 0ULL)),56);
        tracep->chgSData(oldp+178,((0xffffU & (IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut))),16);
        tracep->chgQData(oldp+179,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut 
                                                   >> 0xfU)))
                                     ? 0xffffffffffffULL
                                     : 0ULL)),48);
        tracep->chgSData(oldp+181,((0xffffU & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut))),16);
        tracep->chgQData(oldp+182,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut 
                                                   >> 0xfU)))
                                     ? 0xffffffffffffULL
                                     : 0ULL)),48);
        tracep->chgIData(oldp+184,((IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut)),32);
        tracep->chgIData(oldp+185,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut 
                                                   >> 0x1fU)))
                                     ? 0xffffffffU : 0U)),32);
        tracep->chgIData(oldp+186,((IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut)),32);
        tracep->chgIData(oldp+187,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut 
                                                   >> 0x1fU)))
                                     ? 0xffffffffU : 0U)),32);
    }
    tracep->chgBit(oldp+188,(vlSelf->clock));
    tracep->chgBit(oldp+189,(vlSelf->reset));
    tracep->chgIData(oldp+190,(vlSelf->io_Inst),32);
}

void VMain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_cleanup\n"); );
    // Init
    VMain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMain___024root*>(voidSelf);
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
