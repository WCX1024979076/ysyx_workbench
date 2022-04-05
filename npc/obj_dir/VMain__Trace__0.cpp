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
        tracep->chgIData(oldp+2,(vlSelf->Main__DOT__registers__DOT__Regs_0),32);
        tracep->chgIData(oldp+3,(vlSelf->Main__DOT__registers__DOT__Regs_1),32);
        tracep->chgIData(oldp+4,(vlSelf->Main__DOT__registers__DOT__Regs_2),32);
        tracep->chgIData(oldp+5,(vlSelf->Main__DOT__registers__DOT__Regs_3),32);
        tracep->chgIData(oldp+6,(vlSelf->Main__DOT__registers__DOT__Regs_4),32);
        tracep->chgIData(oldp+7,(vlSelf->Main__DOT__registers__DOT__Regs_5),32);
        tracep->chgIData(oldp+8,(vlSelf->Main__DOT__registers__DOT__Regs_6),32);
        tracep->chgIData(oldp+9,(vlSelf->Main__DOT__registers__DOT__Regs_7),32);
        tracep->chgIData(oldp+10,(vlSelf->Main__DOT__registers__DOT__Regs_8),32);
        tracep->chgIData(oldp+11,(vlSelf->Main__DOT__registers__DOT__Regs_9),32);
        tracep->chgIData(oldp+12,(vlSelf->Main__DOT__registers__DOT__Regs_10),32);
        tracep->chgIData(oldp+13,(vlSelf->Main__DOT__registers__DOT__Regs_11),32);
        tracep->chgIData(oldp+14,(vlSelf->Main__DOT__registers__DOT__Regs_12),32);
        tracep->chgIData(oldp+15,(vlSelf->Main__DOT__registers__DOT__Regs_13),32);
        tracep->chgIData(oldp+16,(vlSelf->Main__DOT__registers__DOT__Regs_14),32);
        tracep->chgIData(oldp+17,(vlSelf->Main__DOT__registers__DOT__Regs_15),32);
        tracep->chgIData(oldp+18,(vlSelf->Main__DOT__registers__DOT__Regs_16),32);
        tracep->chgIData(oldp+19,(vlSelf->Main__DOT__registers__DOT__Regs_17),32);
        tracep->chgIData(oldp+20,(vlSelf->Main__DOT__registers__DOT__Regs_18),32);
        tracep->chgIData(oldp+21,(vlSelf->Main__DOT__registers__DOT__Regs_19),32);
        tracep->chgIData(oldp+22,(vlSelf->Main__DOT__registers__DOT__Regs_20),32);
        tracep->chgIData(oldp+23,(vlSelf->Main__DOT__registers__DOT__Regs_21),32);
        tracep->chgIData(oldp+24,(vlSelf->Main__DOT__registers__DOT__Regs_22),32);
        tracep->chgIData(oldp+25,(vlSelf->Main__DOT__registers__DOT__Regs_23),32);
        tracep->chgIData(oldp+26,(vlSelf->Main__DOT__registers__DOT__Regs_24),32);
        tracep->chgIData(oldp+27,(vlSelf->Main__DOT__registers__DOT__Regs_25),32);
        tracep->chgIData(oldp+28,(vlSelf->Main__DOT__registers__DOT__Regs_26),32);
        tracep->chgIData(oldp+29,(vlSelf->Main__DOT__registers__DOT__Regs_27),32);
        tracep->chgIData(oldp+30,(vlSelf->Main__DOT__registers__DOT__Regs_28),32);
        tracep->chgIData(oldp+31,(vlSelf->Main__DOT__registers__DOT__Regs_29),32);
        tracep->chgIData(oldp+32,(vlSelf->Main__DOT__registers__DOT__Regs_30),32);
        tracep->chgIData(oldp+33,(vlSelf->Main__DOT__registers__DOT__Regs_31),32);
    }
    tracep->chgBit(oldp+34,(vlSelf->clock));
    tracep->chgBit(oldp+35,(vlSelf->reset));
    tracep->chgIData(oldp+36,(vlSelf->io_Inst),32);
    tracep->chgQData(oldp+37,(vlSelf->io_PcVal),64);
    tracep->chgBit(oldp+39,(vlSelf->io_RegWrite));
    tracep->chgCData(oldp+40,(vlSelf->io_AluOp),5);
    tracep->chgBit(oldp+41,(vlSelf->io_AluSrc));
    tracep->chgCData(oldp+42,(vlSelf->io_R1),5);
    tracep->chgCData(oldp+43,(vlSelf->io_R2),5);
    tracep->chgCData(oldp+44,(vlSelf->io_Rdest),5);
    tracep->chgQData(oldp+45,(vlSelf->io_AluOut),64);
    tracep->chgQData(oldp+47,(vlSelf->io_DataR1),64);
    tracep->chgQData(oldp+49,(vlSelf->io_DataR2),64);
    tracep->chgQData(oldp+51,(vlSelf->io_DataImmI),64);
    tracep->chgBit(oldp+53,((0x13U == (0x7fU & vlSelf->io_Inst))));
    tracep->chgCData(oldp+54,(((0x13U == (0x7fU & vlSelf->io_Inst))
                                ? 1U : 0U)),4);
    tracep->chgCData(oldp+55,((0x1fU & (vlSelf->io_Inst 
                                        >> 7U))),5);
    tracep->chgCData(oldp+56,((0x1fU & (vlSelf->io_Inst 
                                        >> 0xfU))),5);
    tracep->chgCData(oldp+57,((0x1fU & (vlSelf->io_Inst 
                                        >> 0x14U))),5);
    tracep->chgQData(oldp+58,((QData)((IData)((vlSelf->io_Inst 
                                               >> 0x14U)))),64);
    tracep->chgQData(oldp+60,((QData)((IData)(((0x1fU 
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
    tracep->chgQData(oldp+62,((QData)((IData)(((0x1fU 
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
    tracep->chgQData(oldp+64,(((1U == (IData)(vlSelf->io_AluOp))
                                ? (vlSelf->io_DataR1 
                                   + vlSelf->io_DataImmI)
                                : 0ULL)),64);
    tracep->chgCData(oldp+66,((0x7fU & vlSelf->io_Inst)),7);
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
