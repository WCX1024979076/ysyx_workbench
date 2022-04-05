// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


VL_ATTR_COLD void Vmain___024root__trace_init_sub__TOP__0(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+35,"clock", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBus(c+37,"io_Inst", false,-1, 31,0);
    tracep->declQuad(c+38,"io_PcVal", false,-1, 63,0);
    tracep->declBit(c+40,"io_RegWrite", false,-1);
    tracep->declBus(c+41,"io_AluOp", false,-1, 4,0);
    tracep->declBit(c+42,"io_AluSrc", false,-1);
    tracep->declBus(c+43,"io_R1", false,-1, 4,0);
    tracep->declBus(c+44,"io_R2", false,-1, 4,0);
    tracep->declBus(c+45,"io_Rdest", false,-1, 4,0);
    tracep->declQuad(c+46,"io_AluOut", false,-1, 63,0);
    tracep->declQuad(c+48,"io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+50,"io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+52,"io_DataImmI", false,-1, 63,0);
    tracep->pushNamePrefix("Main ");
    tracep->declBit(c+35,"clock", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBus(c+37,"io_Inst", false,-1, 31,0);
    tracep->declQuad(c+38,"io_PcVal", false,-1, 63,0);
    tracep->declBit(c+40,"io_RegWrite", false,-1);
    tracep->declBus(c+41,"io_AluOp", false,-1, 4,0);
    tracep->declBit(c+42,"io_AluSrc", false,-1);
    tracep->declBus(c+43,"io_R1", false,-1, 4,0);
    tracep->declBus(c+44,"io_R2", false,-1, 4,0);
    tracep->declBus(c+45,"io_Rdest", false,-1, 4,0);
    tracep->declQuad(c+46,"io_AluOut", false,-1, 63,0);
    tracep->declQuad(c+48,"io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+50,"io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+52,"io_DataImmI", false,-1, 63,0);
    tracep->declBit(c+35,"pc_clock", false,-1);
    tracep->declBit(c+36,"pc_reset", false,-1);
    tracep->declQuad(c+1,"pc_io_PcVal", false,-1, 63,0);
    tracep->declBus(c+37,"contr_io_Inst", false,-1, 31,0);
    tracep->declBit(c+54,"contr_io_RegWrite", false,-1);
    tracep->declBus(c+55,"contr_io_AluOp", false,-1, 3,0);
    tracep->declBit(c+54,"contr_io_AluSrc", false,-1);
    tracep->declBus(c+37,"decode_io_Inst", false,-1, 31,0);
    tracep->declBus(c+56,"decode_io_Rdest", false,-1, 4,0);
    tracep->declBus(c+57,"decode_io_R1", false,-1, 4,0);
    tracep->declBus(c+58,"decode_io_R2", false,-1, 4,0);
    tracep->declQuad(c+59,"decode_io_ImmI", false,-1, 63,0);
    tracep->declBit(c+35,"registers_clock", false,-1);
    tracep->declBit(c+36,"registers_reset", false,-1);
    tracep->declBus(c+45,"registers_io_Rdest", false,-1, 4,0);
    tracep->declBus(c+43,"registers_io_R1", false,-1, 4,0);
    tracep->declBus(c+44,"registers_io_R2", false,-1, 4,0);
    tracep->declBit(c+40,"registers_io_RegWrite", false,-1);
    tracep->declQuad(c+46,"registers_io_AluOut", false,-1, 63,0);
    tracep->declQuad(c+61,"registers_io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+63,"registers_io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+48,"alu_io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+50,"alu_io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+52,"alu_io_DataImm", false,-1, 63,0);
    tracep->declBus(c+41,"alu_io_AluOp", false,-1, 4,0);
    tracep->declBit(c+42,"alu_io_AluSrc", false,-1);
    tracep->declQuad(c+65,"alu_io_AluOut", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+48,"io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+50,"io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+52,"io_DataImm", false,-1, 63,0);
    tracep->declBus(c+41,"io_AluOp", false,-1, 4,0);
    tracep->declBit(c+42,"io_AluSrc", false,-1);
    tracep->declQuad(c+65,"io_AluOut", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("contr ");
    tracep->declBus(c+37,"io_Inst", false,-1, 31,0);
    tracep->declBit(c+54,"io_RegWrite", false,-1);
    tracep->declBus(c+55,"io_AluOp", false,-1, 3,0);
    tracep->declBit(c+54,"io_AluSrc", false,-1);
    tracep->declBus(c+67,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+37,"io_Inst", false,-1, 31,0);
    tracep->declBus(c+56,"io_Rdest", false,-1, 4,0);
    tracep->declBus(c+57,"io_R1", false,-1, 4,0);
    tracep->declBus(c+58,"io_R2", false,-1, 4,0);
    tracep->declQuad(c+59,"io_ImmI", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+35,"clock", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declQuad(c+1,"io_PcVal", false,-1, 63,0);
    tracep->declQuad(c+1,"pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("registers ");
    tracep->declBit(c+35,"clock", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBus(c+45,"io_Rdest", false,-1, 4,0);
    tracep->declBus(c+43,"io_R1", false,-1, 4,0);
    tracep->declBus(c+44,"io_R2", false,-1, 4,0);
    tracep->declBit(c+40,"io_RegWrite", false,-1);
    tracep->declQuad(c+46,"io_AluOut", false,-1, 63,0);
    tracep->declQuad(c+61,"io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+63,"io_DataR2", false,-1, 63,0);
    tracep->declBus(c+3,"Regs_0", false,-1, 31,0);
    tracep->declBus(c+4,"Regs_1", false,-1, 31,0);
    tracep->declBus(c+5,"Regs_2", false,-1, 31,0);
    tracep->declBus(c+6,"Regs_3", false,-1, 31,0);
    tracep->declBus(c+7,"Regs_4", false,-1, 31,0);
    tracep->declBus(c+8,"Regs_5", false,-1, 31,0);
    tracep->declBus(c+9,"Regs_6", false,-1, 31,0);
    tracep->declBus(c+10,"Regs_7", false,-1, 31,0);
    tracep->declBus(c+11,"Regs_8", false,-1, 31,0);
    tracep->declBus(c+12,"Regs_9", false,-1, 31,0);
    tracep->declBus(c+13,"Regs_10", false,-1, 31,0);
    tracep->declBus(c+14,"Regs_11", false,-1, 31,0);
    tracep->declBus(c+15,"Regs_12", false,-1, 31,0);
    tracep->declBus(c+16,"Regs_13", false,-1, 31,0);
    tracep->declBus(c+17,"Regs_14", false,-1, 31,0);
    tracep->declBus(c+18,"Regs_15", false,-1, 31,0);
    tracep->declBus(c+19,"Regs_16", false,-1, 31,0);
    tracep->declBus(c+20,"Regs_17", false,-1, 31,0);
    tracep->declBus(c+21,"Regs_18", false,-1, 31,0);
    tracep->declBus(c+22,"Regs_19", false,-1, 31,0);
    tracep->declBus(c+23,"Regs_20", false,-1, 31,0);
    tracep->declBus(c+24,"Regs_21", false,-1, 31,0);
    tracep->declBus(c+25,"Regs_22", false,-1, 31,0);
    tracep->declBus(c+26,"Regs_23", false,-1, 31,0);
    tracep->declBus(c+27,"Regs_24", false,-1, 31,0);
    tracep->declBus(c+28,"Regs_25", false,-1, 31,0);
    tracep->declBus(c+29,"Regs_26", false,-1, 31,0);
    tracep->declBus(c+30,"Regs_27", false,-1, 31,0);
    tracep->declBus(c+31,"Regs_28", false,-1, 31,0);
    tracep->declBus(c+32,"Regs_29", false,-1, 31,0);
    tracep->declBus(c+33,"Regs_30", false,-1, 31,0);
    tracep->declBus(c+34,"Regs_31", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vmain___024root__trace_init_top(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_top\n"); );
    // Body
    Vmain___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vmain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmain___024root__trace_register(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmain___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmain___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmain___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmain___024root__trace_full_sub_0(Vmain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_top_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vmain___024root__trace_full_sub_0(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullQData(oldp+1,(vlSelf->Main__DOT__pc__DOT__pc),64);
    tracep->fullIData(oldp+3,(vlSelf->Main__DOT__registers__DOT__Regs_0),32);
    tracep->fullIData(oldp+4,(vlSelf->Main__DOT__registers__DOT__Regs_1),32);
    tracep->fullIData(oldp+5,(vlSelf->Main__DOT__registers__DOT__Regs_2),32);
    tracep->fullIData(oldp+6,(vlSelf->Main__DOT__registers__DOT__Regs_3),32);
    tracep->fullIData(oldp+7,(vlSelf->Main__DOT__registers__DOT__Regs_4),32);
    tracep->fullIData(oldp+8,(vlSelf->Main__DOT__registers__DOT__Regs_5),32);
    tracep->fullIData(oldp+9,(vlSelf->Main__DOT__registers__DOT__Regs_6),32);
    tracep->fullIData(oldp+10,(vlSelf->Main__DOT__registers__DOT__Regs_7),32);
    tracep->fullIData(oldp+11,(vlSelf->Main__DOT__registers__DOT__Regs_8),32);
    tracep->fullIData(oldp+12,(vlSelf->Main__DOT__registers__DOT__Regs_9),32);
    tracep->fullIData(oldp+13,(vlSelf->Main__DOT__registers__DOT__Regs_10),32);
    tracep->fullIData(oldp+14,(vlSelf->Main__DOT__registers__DOT__Regs_11),32);
    tracep->fullIData(oldp+15,(vlSelf->Main__DOT__registers__DOT__Regs_12),32);
    tracep->fullIData(oldp+16,(vlSelf->Main__DOT__registers__DOT__Regs_13),32);
    tracep->fullIData(oldp+17,(vlSelf->Main__DOT__registers__DOT__Regs_14),32);
    tracep->fullIData(oldp+18,(vlSelf->Main__DOT__registers__DOT__Regs_15),32);
    tracep->fullIData(oldp+19,(vlSelf->Main__DOT__registers__DOT__Regs_16),32);
    tracep->fullIData(oldp+20,(vlSelf->Main__DOT__registers__DOT__Regs_17),32);
    tracep->fullIData(oldp+21,(vlSelf->Main__DOT__registers__DOT__Regs_18),32);
    tracep->fullIData(oldp+22,(vlSelf->Main__DOT__registers__DOT__Regs_19),32);
    tracep->fullIData(oldp+23,(vlSelf->Main__DOT__registers__DOT__Regs_20),32);
    tracep->fullIData(oldp+24,(vlSelf->Main__DOT__registers__DOT__Regs_21),32);
    tracep->fullIData(oldp+25,(vlSelf->Main__DOT__registers__DOT__Regs_22),32);
    tracep->fullIData(oldp+26,(vlSelf->Main__DOT__registers__DOT__Regs_23),32);
    tracep->fullIData(oldp+27,(vlSelf->Main__DOT__registers__DOT__Regs_24),32);
    tracep->fullIData(oldp+28,(vlSelf->Main__DOT__registers__DOT__Regs_25),32);
    tracep->fullIData(oldp+29,(vlSelf->Main__DOT__registers__DOT__Regs_26),32);
    tracep->fullIData(oldp+30,(vlSelf->Main__DOT__registers__DOT__Regs_27),32);
    tracep->fullIData(oldp+31,(vlSelf->Main__DOT__registers__DOT__Regs_28),32);
    tracep->fullIData(oldp+32,(vlSelf->Main__DOT__registers__DOT__Regs_29),32);
    tracep->fullIData(oldp+33,(vlSelf->Main__DOT__registers__DOT__Regs_30),32);
    tracep->fullIData(oldp+34,(vlSelf->Main__DOT__registers__DOT__Regs_31),32);
    tracep->fullBit(oldp+35,(vlSelf->clock));
    tracep->fullBit(oldp+36,(vlSelf->reset));
    tracep->fullIData(oldp+37,(vlSelf->io_Inst),32);
    tracep->fullQData(oldp+38,(vlSelf->io_PcVal),64);
    tracep->fullBit(oldp+40,(vlSelf->io_RegWrite));
    tracep->fullCData(oldp+41,(vlSelf->io_AluOp),5);
    tracep->fullBit(oldp+42,(vlSelf->io_AluSrc));
    tracep->fullCData(oldp+43,(vlSelf->io_R1),5);
    tracep->fullCData(oldp+44,(vlSelf->io_R2),5);
    tracep->fullCData(oldp+45,(vlSelf->io_Rdest),5);
    tracep->fullQData(oldp+46,(vlSelf->io_AluOut),64);
    tracep->fullQData(oldp+48,(vlSelf->io_DataR1),64);
    tracep->fullQData(oldp+50,(vlSelf->io_DataR2),64);
    tracep->fullQData(oldp+52,(vlSelf->io_DataImmI),64);
    tracep->fullBit(oldp+54,((0x13U == (0x7fU & vlSelf->io_Inst))));
    tracep->fullCData(oldp+55,(((0x13U == (0x7fU & vlSelf->io_Inst))
                                 ? 1U : 0U)),4);
    tracep->fullCData(oldp+56,((0x1fU & (vlSelf->io_Inst 
                                         >> 7U))),5);
    tracep->fullCData(oldp+57,((0x1fU & (vlSelf->io_Inst 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+58,((0x1fU & (vlSelf->io_Inst 
                                         >> 0x14U))),5);
    tracep->fullQData(oldp+59,((QData)((IData)((vlSelf->io_Inst 
                                                >> 0x14U)))),64);
    tracep->fullQData(oldp+61,((QData)((IData)(((0x1fU 
                                                 == (IData)(vlSelf->io_R1))
                                                 ? vlSelf->Main__DOT__registers__DOT__Regs_31
                                                 : 
                                                ((0x1eU 
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
    tracep->fullQData(oldp+63,((QData)((IData)(((0x1fU 
                                                 == (IData)(vlSelf->io_R2))
                                                 ? vlSelf->Main__DOT__registers__DOT__Regs_31
                                                 : 
                                                ((0x1eU 
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
    tracep->fullQData(oldp+65,(((1U == (IData)(vlSelf->io_AluOp))
                                 ? (vlSelf->io_DataR1 
                                    + ((IData)(vlSelf->io_AluSrc)
                                        ? vlSelf->io_DataR2
                                        : vlSelf->io_DataImmI))
                                 : 0ULL)),64);
    tracep->fullCData(oldp+67,((0x7fU & vlSelf->io_Inst)),7);
}
