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
        tracep->chgIData(oldp+2,(vlSelf->Main__DOT__exu_io_EXUClear),32);
        tracep->chgBit(oldp+3,(vlSelf->Main__DOT__ifu_io_IDUWait));
        tracep->chgIData(oldp+4,(vlSelf->Main__DOT__ifu__DOT__InstReg),32);
        tracep->chgIData(oldp+5,(vlSelf->Main__DOT__ifu__DOT__IFUFlagReg),32);
        tracep->chgQData(oldp+6,(vlSelf->Main__DOT__ifu__DOT__PcValReg),64);
        tracep->chgBit(oldp+8,(vlSelf->Main__DOT__ifu__DOT__IFUFlagReg));
        tracep->chgBit(oldp+9,(vlSelf->Main__DOT__exu_io_EXUClear));
        tracep->chgBit(oldp+10,(vlSelf->Main__DOT__idu__DOT__RegWriteReg));
        tracep->chgBit(oldp+11,(vlSelf->Main__DOT__idu__DOT__MemWriteReg));
        tracep->chgCData(oldp+12,(vlSelf->Main__DOT__idu__DOT__AluOpReg),5);
        tracep->chgCData(oldp+13,(vlSelf->Main__DOT__idu__DOT__AluSrc1OpReg),5);
        tracep->chgCData(oldp+14,(vlSelf->Main__DOT__idu__DOT__AluSrc2OpReg),5);
        tracep->chgCData(oldp+15,(vlSelf->Main__DOT__idu__DOT__PcSrcReg),5);
        tracep->chgCData(oldp+16,(vlSelf->Main__DOT__idu__DOT__RinCtlReg),4);
        tracep->chgCData(oldp+17,(vlSelf->Main__DOT__idu__DOT__MemMaskReg),8);
        tracep->chgCData(oldp+18,(vlSelf->Main__DOT__idu__DOT__RdestReg),5);
        tracep->chgCData(oldp+19,(vlSelf->Main__DOT__idu__DOT__R1Reg),5);
        tracep->chgCData(oldp+20,(vlSelf->Main__DOT__idu__DOT__R2Reg),5);
        tracep->chgQData(oldp+21,(vlSelf->Main__DOT__idu__DOT__ImmReg),64);
        tracep->chgBit(oldp+23,(vlSelf->Main__DOT__idu__DOT__EbreakInReg));
        tracep->chgQData(oldp+24,(vlSelf->Main__DOT__idu__DOT__PcValReg),64);
        tracep->chgBit(oldp+26,(vlSelf->Main__DOT__idu__DOT__IDUFlagReg));
        tracep->chgQData(oldp+27,(vlSelf->Main__DOT__regs_io_DataR1),64);
        tracep->chgQData(oldp+29,(vlSelf->Main__DOT__regs_io_DataR2),64);
        tracep->chgBit(oldp+31,(vlSelf->Main__DOT__exu_io_IDUFlag));
        tracep->chgCData(oldp+32,(vlSelf->Main__DOT__exu__DOT__MemMaskOutReg),8);
        tracep->chgCData(oldp+33,(vlSelf->Main__DOT__exu__DOT__RdestOutReg),5);
        tracep->chgQData(oldp+34,(vlSelf->Main__DOT__exu__DOT__DataR2OutReg),64);
        tracep->chgBit(oldp+36,(vlSelf->Main__DOT__exu__DOT__MemWriteOutReg));
        tracep->chgBit(oldp+37,(vlSelf->Main__DOT__exu__DOT__ZeroReg));
        tracep->chgBit(oldp+38,(vlSelf->Main__DOT__exu__DOT__SignUReg));
        tracep->chgBit(oldp+39,(vlSelf->Main__DOT__exu__DOT__SignSReg));
        tracep->chgQData(oldp+40,(vlSelf->Main__DOT__exu__DOT__AluOutReg),64);
        tracep->chgBit(oldp+42,(vlSelf->Main__DOT__exu__DOT__RegWriteOutReg));
        tracep->chgCData(oldp+43,(vlSelf->Main__DOT__exu__DOT__RinCtlOutReg),4);
        tracep->chgBit(oldp+44,(vlSelf->Main__DOT__exu__DOT__EXUFlagReg));
        tracep->chgBit(oldp+45,(vlSelf->Main__DOT__exu__DOT__EbreakInOutReg));
        tracep->chgQData(oldp+46,(vlSelf->Main__DOT__exu__DOT__PcValReg),64);
        tracep->chgQData(oldp+48,(vlSelf->Main__DOT__exu_io_EXUPc),64);
        tracep->chgBit(oldp+50,(vlSelf->Main__DOT__memu__DOT__MEMUFlagReg));
        tracep->chgQData(oldp+51,(vlSelf->Main__DOT__memu__DOT__MemOutReg),64);
        tracep->chgBit(oldp+53,(vlSelf->Main__DOT__memu__DOT__ZeroOutReg));
        tracep->chgBit(oldp+54,(vlSelf->Main__DOT__memu__DOT__SignUOutReg));
        tracep->chgBit(oldp+55,(vlSelf->Main__DOT__memu__DOT__SignSOutReg));
        tracep->chgQData(oldp+56,(vlSelf->Main__DOT__memu__DOT__AluOutOutReg),64);
        tracep->chgBit(oldp+58,(vlSelf->Main__DOT__memu__DOT__RegWriteOutReg));
        tracep->chgCData(oldp+59,(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg),4);
        tracep->chgBit(oldp+60,(vlSelf->Main__DOT__memu__DOT__EbreakInOutReg));
        tracep->chgCData(oldp+61,(vlSelf->Main__DOT__memu__DOT__RdestOutReg),5);
        tracep->chgQData(oldp+62,(vlSelf->Main__DOT__memu__DOT__PcValReg),64);
        tracep->chgBit(oldp+64,(vlSelf->Main__DOT__wbu_io_RegWriteOut));
        tracep->chgQData(oldp+65,(vlSelf->Main__DOT__wbu_io_DataIn),64);
        tracep->chgQData(oldp+67,(vlSelf->Main__DOT__wbu__DOT__PcValReg),64);
        tracep->chgQData(oldp+69,(vlSelf->Main__DOT__exu__DOT__AluSrc1),64);
        tracep->chgQData(oldp+71,(vlSelf->Main__DOT__exu__DOT__AluSrc2),64);
        tracep->chgQData(oldp+73,((((QData)((IData)(
                                                    vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U])))),64);
        tracep->chgBit(oldp+75,((0ULL == (((QData)((IData)(
                                                           vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U]))))));
        tracep->chgBit(oldp+76,((1U & (IData)((vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                               >> 0x3fU)))));
        tracep->chgBit(oldp+77,((1U & (IData)((vlSelf->Main__DOT__exu__DOT__AluSrc2 
                                               >> 0x3fU)))));
        tracep->chgBit(oldp+78,(vlSelf->Main__DOT__exu__DOT__SignSTmp));
        tracep->chgBit(oldp+79,(vlSelf->Main__DOT__exu__DOT__SignUTmp));
        tracep->chgIData(oldp+80,((0x1fffffU & (IData)(vlSelf->Main__DOT__idu__DOT__ImmReg))),21);
        tracep->chgQData(oldp+81,(((1U & (IData)((vlSelf->Main__DOT__idu__DOT__ImmReg 
                                                  >> 0x14U)))
                                    ? 0x7ffffffffffULL
                                    : 0ULL)),43);
        tracep->chgSData(oldp+83,((0x1fffU & (IData)(vlSelf->Main__DOT__idu__DOT__ImmReg))),13);
        tracep->chgQData(oldp+84,(((1U & (IData)((vlSelf->Main__DOT__idu__DOT__ImmReg 
                                                  >> 0xcU)))
                                    ? 0x7ffffffffffffULL
                                    : 0ULL)),51);
        tracep->chgCData(oldp+86,((0x7fU & vlSelf->Main__DOT__ifu__DOT__InstReg)),7);
        tracep->chgIData(oldp+87,((0xfffff000U & vlSelf->Main__DOT__ifu__DOT__InstReg)),32);
        tracep->chgIData(oldp+88,(((vlSelf->Main__DOT__ifu__DOT__InstReg 
                                    >> 0x1fU) ? 0xffffffffU
                                    : 0U)),32);
        tracep->chgSData(oldp+89,((vlSelf->Main__DOT__ifu__DOT__InstReg 
                                   >> 0x14U)),12);
        tracep->chgQData(oldp+90,(((vlSelf->Main__DOT__ifu__DOT__InstReg 
                                    >> 0x1fU) ? 0xfffffffffffffULL
                                    : 0ULL)),52);
        tracep->chgSData(oldp+92,(vlSelf->Main__DOT__idu__DOT__ImmReg_lo_2),12);
        tracep->chgQData(oldp+93,(((0x800U & (IData)(vlSelf->Main__DOT__idu__DOT__ImmReg_lo_2))
                                    ? 0xfffffffffffffULL
                                    : 0ULL)),52);
        tracep->chgIData(oldp+95,(vlSelf->Main__DOT__idu__DOT__ImmReg_lo_6),21);
        tracep->chgQData(oldp+96,(((0x100000U & vlSelf->Main__DOT__idu__DOT__ImmReg_lo_6)
                                    ? 0x7ffffffffffULL
                                    : 0ULL)),43);
        tracep->chgSData(oldp+98,(vlSelf->Main__DOT__idu__DOT__ImmReg_lo_8),13);
        tracep->chgQData(oldp+99,(((0x1000U & (IData)(vlSelf->Main__DOT__idu__DOT__ImmReg_lo_8))
                                    ? 0x7ffffffffffffULL
                                    : 0ULL)),51);
        tracep->chgBit(oldp+101,(((0x17U == (0x7fU 
                                             & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                  | ((0x3003U == (0x707fU 
                                                  & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                     | (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_168)))));
        tracep->chgCData(oldp+102,(((0x17U == (0x7fU 
                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                     ? 1U : ((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                              ? 0U : 
                                             ((0x3023U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                               ? 0U
                                               : ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 0U
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 3U
                                                      : 
                                                     ((0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 0U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 0U
                                                        : 
                                                       ((0x5033U 
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
                                                          : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_271))))))))))))),2);
        tracep->chgCData(oldp+103,(((0x17U == (0x7fU 
                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                     ? 4U : ((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                              ? 4U : 
                                             ((0x3023U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                               ? 4U
                                               : ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 4U
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 4U
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                      ? 0U
                                                      : 
                                                     ((0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                       ? 1U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                        ? 2U
                                                        : 
                                                       ((0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                         ? 1U
                                                         : 
                                                        ((0x5013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                          ? 2U
                                                          : 
                                                         ((0x40005033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                           ? 1U
                                                           : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_326)))))))))))))),3);
        tracep->chgCData(oldp+104,(((0x17U == (0x7fU 
                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                     ? 0U : ((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                              ? 0U : 
                                             ((0x3023U 
                                               == (0x707fU 
                                                   & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                               ? 0U
                                               : ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                   ? 0U
                                                   : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_446)))))),4);
        tracep->chgQData(oldp+105,(vlSelf->Main__DOT__ifu__DOT__mem_Rdata),64);
        tracep->chgQData(oldp+107,(vlSelf->Main__DOT__memu__DOT__mem_Rdata),64);
        tracep->chgBit(oldp+109,(((IData)(vlSelf->Main__DOT__exu__DOT__MemWriteOutReg) 
                                  & (IData)(vlSelf->Main__DOT__exu__DOT__EXUFlagReg))));
        tracep->chgQData(oldp+110,(vlSelf->Main__DOT__regs__DOT__Regs_1),64);
        tracep->chgQData(oldp+112,(vlSelf->Main__DOT__regs__DOT__Regs_2),64);
        tracep->chgQData(oldp+114,(vlSelf->Main__DOT__regs__DOT__Regs_3),64);
        tracep->chgQData(oldp+116,(vlSelf->Main__DOT__regs__DOT__Regs_4),64);
        tracep->chgQData(oldp+118,(vlSelf->Main__DOT__regs__DOT__Regs_5),64);
        tracep->chgQData(oldp+120,(vlSelf->Main__DOT__regs__DOT__Regs_6),64);
        tracep->chgQData(oldp+122,(vlSelf->Main__DOT__regs__DOT__Regs_7),64);
        tracep->chgQData(oldp+124,(vlSelf->Main__DOT__regs__DOT__Regs_8),64);
        tracep->chgQData(oldp+126,(vlSelf->Main__DOT__regs__DOT__Regs_9),64);
        tracep->chgQData(oldp+128,(vlSelf->Main__DOT__regs__DOT__Regs_10),64);
        tracep->chgQData(oldp+130,(vlSelf->Main__DOT__regs__DOT__Regs_11),64);
        tracep->chgQData(oldp+132,(vlSelf->Main__DOT__regs__DOT__Regs_12),64);
        tracep->chgQData(oldp+134,(vlSelf->Main__DOT__regs__DOT__Regs_13),64);
        tracep->chgQData(oldp+136,(vlSelf->Main__DOT__regs__DOT__Regs_14),64);
        tracep->chgQData(oldp+138,(vlSelf->Main__DOT__regs__DOT__Regs_15),64);
        tracep->chgQData(oldp+140,(vlSelf->Main__DOT__regs__DOT__Regs_16),64);
        tracep->chgQData(oldp+142,(vlSelf->Main__DOT__regs__DOT__Regs_17),64);
        tracep->chgQData(oldp+144,(vlSelf->Main__DOT__regs__DOT__Regs_18),64);
        tracep->chgQData(oldp+146,(vlSelf->Main__DOT__regs__DOT__Regs_19),64);
        tracep->chgQData(oldp+148,(vlSelf->Main__DOT__regs__DOT__Regs_20),64);
        tracep->chgQData(oldp+150,(vlSelf->Main__DOT__regs__DOT__Regs_21),64);
        tracep->chgQData(oldp+152,(vlSelf->Main__DOT__regs__DOT__Regs_22),64);
        tracep->chgQData(oldp+154,(vlSelf->Main__DOT__regs__DOT__Regs_23),64);
        tracep->chgQData(oldp+156,(vlSelf->Main__DOT__regs__DOT__Regs_24),64);
        tracep->chgQData(oldp+158,(vlSelf->Main__DOT__regs__DOT__Regs_25),64);
        tracep->chgQData(oldp+160,(vlSelf->Main__DOT__regs__DOT__Regs_26),64);
        tracep->chgQData(oldp+162,(vlSelf->Main__DOT__regs__DOT__Regs_27),64);
        tracep->chgQData(oldp+164,(vlSelf->Main__DOT__regs__DOT__Regs_28),64);
        tracep->chgQData(oldp+166,(vlSelf->Main__DOT__regs__DOT__Regs_29),64);
        tracep->chgQData(oldp+168,(vlSelf->Main__DOT__regs__DOT__Regs_30),64);
        tracep->chgQData(oldp+170,(vlSelf->Main__DOT__regs__DOT__Regs_31),64);
        tracep->chgBit(oldp+172,(((IData)(vlSelf->Main__DOT__memu__DOT__EbreakInOutReg) 
                                  & (IData)(vlSelf->Main__DOT__memu__DOT__MEMUFlagReg))));
        tracep->chgCData(oldp+173,((0xffU & (IData)(vlSelf->Main__DOT__memu__DOT__AluOutOutReg))),8);
        tracep->chgQData(oldp+174,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__AluOutOutReg 
                                                   >> 7U)))
                                     ? 0xffffffffffffffULL
                                     : 0ULL)),56);
        tracep->chgCData(oldp+176,((0xffU & (IData)(vlSelf->Main__DOT__memu__DOT__MemOutReg))),8);
        tracep->chgQData(oldp+177,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__MemOutReg 
                                                   >> 7U)))
                                     ? 0xffffffffffffffULL
                                     : 0ULL)),56);
        tracep->chgSData(oldp+179,((0xffffU & (IData)(vlSelf->Main__DOT__memu__DOT__AluOutOutReg))),16);
        tracep->chgQData(oldp+180,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__AluOutOutReg 
                                                   >> 0xfU)))
                                     ? 0xffffffffffffULL
                                     : 0ULL)),48);
        tracep->chgSData(oldp+182,((0xffffU & (IData)(vlSelf->Main__DOT__memu__DOT__MemOutReg))),16);
        tracep->chgQData(oldp+183,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__MemOutReg 
                                                   >> 0xfU)))
                                     ? 0xffffffffffffULL
                                     : 0ULL)),48);
        tracep->chgIData(oldp+185,((IData)(vlSelf->Main__DOT__memu__DOT__AluOutOutReg)),32);
        tracep->chgIData(oldp+186,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__AluOutOutReg 
                                                   >> 0x1fU)))
                                     ? 0xffffffffU : 0U)),32);
        tracep->chgIData(oldp+187,((IData)(vlSelf->Main__DOT__memu__DOT__MemOutReg)),32);
        tracep->chgIData(oldp+188,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__MemOutReg 
                                                   >> 0x1fU)))
                                     ? 0xffffffffU : 0U)),32);
    }
    tracep->chgBit(oldp+189,(vlSelf->clock));
    tracep->chgBit(oldp+190,(vlSelf->reset));
    tracep->chgIData(oldp+191,(vlSelf->io_Inst),32);
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
