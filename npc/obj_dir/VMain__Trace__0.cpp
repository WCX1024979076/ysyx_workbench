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
        tracep->chgQData(oldp+0,(vlSelf->Main__DOT__pc__DOT__pc),64);
        tracep->chgIData(oldp+2,((IData)(vlSelf->Main__DOT__pc__DOT__mem_Rdata)),32);
        tracep->chgQData(oldp+3,(vlSelf->Main__DOT__mem_Rdata),64);
        tracep->chgQData(oldp+5,(vlSelf->Main__DOT__pc__DOT__mem_Rdata),64);
        tracep->chgIData(oldp+7,(vlSelf->Main__DOT__registers__DOT__Regs_0),32);
        tracep->chgIData(oldp+8,(vlSelf->Main__DOT__registers__DOT__Regs_1),32);
        tracep->chgIData(oldp+9,(vlSelf->Main__DOT__registers__DOT__Regs_2),32);
        tracep->chgIData(oldp+10,(vlSelf->Main__DOT__registers__DOT__Regs_3),32);
        tracep->chgIData(oldp+11,(vlSelf->Main__DOT__registers__DOT__Regs_4),32);
        tracep->chgIData(oldp+12,(vlSelf->Main__DOT__registers__DOT__Regs_5),32);
        tracep->chgIData(oldp+13,(vlSelf->Main__DOT__registers__DOT__Regs_6),32);
        tracep->chgIData(oldp+14,(vlSelf->Main__DOT__registers__DOT__Regs_7),32);
        tracep->chgIData(oldp+15,(vlSelf->Main__DOT__registers__DOT__Regs_8),32);
        tracep->chgIData(oldp+16,(vlSelf->Main__DOT__registers__DOT__Regs_9),32);
        tracep->chgIData(oldp+17,(vlSelf->Main__DOT__registers__DOT__Regs_10),32);
        tracep->chgIData(oldp+18,(vlSelf->Main__DOT__registers__DOT__Regs_11),32);
        tracep->chgIData(oldp+19,(vlSelf->Main__DOT__registers__DOT__Regs_12),32);
        tracep->chgIData(oldp+20,(vlSelf->Main__DOT__registers__DOT__Regs_13),32);
        tracep->chgIData(oldp+21,(vlSelf->Main__DOT__registers__DOT__Regs_14),32);
        tracep->chgIData(oldp+22,(vlSelf->Main__DOT__registers__DOT__Regs_15),32);
        tracep->chgIData(oldp+23,(vlSelf->Main__DOT__registers__DOT__Regs_16),32);
        tracep->chgIData(oldp+24,(vlSelf->Main__DOT__registers__DOT__Regs_17),32);
        tracep->chgIData(oldp+25,(vlSelf->Main__DOT__registers__DOT__Regs_18),32);
        tracep->chgIData(oldp+26,(vlSelf->Main__DOT__registers__DOT__Regs_19),32);
        tracep->chgIData(oldp+27,(vlSelf->Main__DOT__registers__DOT__Regs_20),32);
        tracep->chgIData(oldp+28,(vlSelf->Main__DOT__registers__DOT__Regs_21),32);
        tracep->chgIData(oldp+29,(vlSelf->Main__DOT__registers__DOT__Regs_22),32);
        tracep->chgIData(oldp+30,(vlSelf->Main__DOT__registers__DOT__Regs_23),32);
        tracep->chgIData(oldp+31,(vlSelf->Main__DOT__registers__DOT__Regs_24),32);
        tracep->chgIData(oldp+32,(vlSelf->Main__DOT__registers__DOT__Regs_25),32);
        tracep->chgIData(oldp+33,(vlSelf->Main__DOT__registers__DOT__Regs_26),32);
        tracep->chgIData(oldp+34,(vlSelf->Main__DOT__registers__DOT__Regs_27),32);
        tracep->chgIData(oldp+35,(vlSelf->Main__DOT__registers__DOT__Regs_28),32);
        tracep->chgIData(oldp+36,(vlSelf->Main__DOT__registers__DOT__Regs_29),32);
        tracep->chgIData(oldp+37,(vlSelf->Main__DOT__registers__DOT__Regs_30),32);
        tracep->chgIData(oldp+38,(vlSelf->Main__DOT__registers__DOT__Regs_31),32);
    }
    tracep->chgBit(oldp+39,(vlSelf->clock));
    tracep->chgBit(oldp+40,(vlSelf->reset));
    tracep->chgIData(oldp+41,(vlSelf->io_Inst),32);
    tracep->chgQData(oldp+42,(vlSelf->io_PcVal),64);
    tracep->chgBit(oldp+44,(vlSelf->io_RegWrite));
    tracep->chgCData(oldp+45,(vlSelf->io_AluOp),5);
    tracep->chgCData(oldp+46,(vlSelf->io_R1),5);
    tracep->chgCData(oldp+47,(vlSelf->io_R2),5);
    tracep->chgCData(oldp+48,(vlSelf->io_Rdest),5);
    tracep->chgQData(oldp+49,(vlSelf->io_AluOut),64);
    tracep->chgQData(oldp+51,(vlSelf->io_DataR1),64);
    tracep->chgQData(oldp+53,(vlSelf->io_DataR2),64);
    tracep->chgQData(oldp+55,(vlSelf->io_DataImmI),64);
    tracep->chgQData(oldp+57,(vlSelf->io_DataImmJ),64);
    tracep->chgQData(oldp+59,(vlSelf->io_DataImmU),64);
    tracep->chgQData(oldp+61,(vlSelf->io_DataImmS),64);
    tracep->chgCData(oldp+63,(vlSelf->io_PcSrc),5);
    tracep->chgBit(oldp+64,(vlSelf->io_MemWrite));
    tracep->chgBit(oldp+65,(vlSelf->io_MemToReg));
    tracep->chgQData(oldp+66,(vlSelf->io_MemOut),64);
    tracep->chgCData(oldp+68,(vlSelf->io_MemMask),8);
    tracep->chgBit(oldp+69,(((0x23U == (0x7fU & vlSelf->io_Inst)) 
                             | (0x13U == (0x7fU & vlSelf->io_Inst)))));
    tracep->chgBit(oldp+70,((0x23U == (0x7fU & vlSelf->io_Inst))));
    tracep->chgCData(oldp+71,(((0x23U == (0x7fU & vlSelf->io_Inst))
                                ? 4U : ((0x67U == (0x7fU 
                                                   & vlSelf->io_Inst))
                                         ? 3U : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_Inst))
                                                  ? 3U
                                                  : 
                                                 ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_Inst))
                                                   ? 2U
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_Inst))
                                                    ? 1U
                                                    : 0U)))))),5);
    tracep->chgCData(oldp+72,(((0x67U == (0x7fU & vlSelf->io_Inst))
                                ? 2U : (0x6fU == (0x7fU 
                                                  & vlSelf->io_Inst)))),5);
    tracep->chgCData(oldp+73,(((0x23U == (0x7fU & vlSelf->io_Inst))
                                ? 0xffU : 0U)),8);
    tracep->chgCData(oldp+74,((0x1fU & (vlSelf->io_Inst 
                                        >> 7U))),5);
    tracep->chgCData(oldp+75,((0x1fU & (vlSelf->io_Inst 
                                        >> 0xfU))),5);
    tracep->chgCData(oldp+76,((0x1fU & (vlSelf->io_Inst 
                                        >> 0x14U))),5);
    tracep->chgQData(oldp+77,((QData)((IData)((vlSelf->io_Inst 
                                               >> 0x14U)))),64);
    tracep->chgQData(oldp+79,((QData)((IData)((0xfffU 
                                               & ((0xfe0U 
                                                   & (vlSelf->io_Inst 
                                                      >> 0x14U)) 
                                                  + 
                                                  (0x1fU 
                                                   & (vlSelf->io_Inst 
                                                      >> 7U))))))),64);
    tracep->chgQData(oldp+81,((QData)((IData)((0x1fffffU 
                                               & ((((0x100000U 
                                                     & (vlSelf->io_Inst 
                                                        >> 0xbU)) 
                                                    + 
                                                    (0x7feU 
                                                     & (vlSelf->io_Inst 
                                                        >> 0x14U))) 
                                                   + 
                                                   (0x800U 
                                                    & (vlSelf->io_Inst 
                                                       >> 9U))) 
                                                  + 
                                                  (0xff000U 
                                                   & vlSelf->io_Inst)))))),64);
    tracep->chgQData(oldp+83,((QData)((IData)((0xfffff000U 
                                               & vlSelf->io_Inst)))),64);
    tracep->chgQData(oldp+85,((QData)((IData)(((0x1fU 
                                                == (IData)(vlSelf->io_R1))
                                                ? vlSelf->Main__DOT__registers__DOT__Regs_31
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->io_R1))
                                                    ? vlSelf->Main__DOT__registers__DOT__Regs_30
                                                    : 
                                                   ((0x1dU 
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
                                                            : vlSelf->Main__DOT__registers__DOT___GEN_21))))))))))))),64);
    tracep->chgQData(oldp+87,((QData)((IData)(((0x1fU 
                                                == (IData)(vlSelf->io_R2))
                                                ? vlSelf->Main__DOT__registers__DOT__Regs_31
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->io_R2))
                                                    ? vlSelf->Main__DOT__registers__DOT__Regs_30
                                                    : 
                                                   ((0x1dU 
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
                                                            : vlSelf->Main__DOT__registers__DOT___GEN_53))))))))))))),64);
    tracep->chgQData(oldp+89,(((4U == (IData)(vlSelf->io_AluOp))
                                ? (vlSelf->io_DataR1 
                                   + vlSelf->io_DataImmS)
                                : ((3U == (IData)(vlSelf->io_AluOp))
                                    ? (4ULL + vlSelf->io_PcVal)
                                    : ((2U == (IData)(vlSelf->io_AluOp))
                                        ? (vlSelf->io_PcVal 
                                           + vlSelf->io_DataImmU)
                                        : ((1U == (IData)(vlSelf->io_AluOp))
                                            ? (vlSelf->io_DataR1 
                                               + vlSelf->io_DataImmI)
                                            : 0ULL))))),64);
    tracep->chgBit(oldp+91,((0x100073U == vlSelf->io_Inst)));
    tracep->chgCData(oldp+92,((0x7fU & vlSelf->io_Inst)),7);
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
