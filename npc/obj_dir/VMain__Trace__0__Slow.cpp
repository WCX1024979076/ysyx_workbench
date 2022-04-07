// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMain__Syms.h"


VL_ATTR_COLD void VMain___024root__trace_init_sub__TOP__0(VMain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+38,"clock", false,-1);
    tracep->declBit(c+39,"reset", false,-1);
    tracep->declBus(c+40,"io_Inst", false,-1, 31,0);
    tracep->declQuad(c+41,"io_PcVal", false,-1, 63,0);
    tracep->declBit(c+43,"io_RegWrite", false,-1);
    tracep->declBus(c+44,"io_AluOp", false,-1, 4,0);
    tracep->declBit(c+45,"io_AluSrc", false,-1);
    tracep->declBus(c+46,"io_R1", false,-1, 4,0);
    tracep->declBus(c+47,"io_R2", false,-1, 4,0);
    tracep->declBus(c+48,"io_Rdest", false,-1, 4,0);
    tracep->declQuad(c+49,"io_AluOut", false,-1, 63,0);
    tracep->declQuad(c+51,"io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+53,"io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+55,"io_DataImmI", false,-1, 63,0);
    tracep->pushNamePrefix("Main ");
    tracep->declBit(c+38,"clock", false,-1);
    tracep->declBit(c+39,"reset", false,-1);
    tracep->declBus(c+40,"io_Inst", false,-1, 31,0);
    tracep->declQuad(c+41,"io_PcVal", false,-1, 63,0);
    tracep->declBit(c+43,"io_RegWrite", false,-1);
    tracep->declBus(c+44,"io_AluOp", false,-1, 4,0);
    tracep->declBit(c+45,"io_AluSrc", false,-1);
    tracep->declBus(c+46,"io_R1", false,-1, 4,0);
    tracep->declBus(c+47,"io_R2", false,-1, 4,0);
    tracep->declBus(c+48,"io_Rdest", false,-1, 4,0);
    tracep->declQuad(c+49,"io_AluOut", false,-1, 63,0);
    tracep->declQuad(c+51,"io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+53,"io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+55,"io_DataImmI", false,-1, 63,0);
    tracep->declBit(c+38,"pc_clock", false,-1);
    tracep->declBit(c+39,"pc_reset", false,-1);
    tracep->declQuad(c+1,"pc_io_PcVal", false,-1, 63,0);
    tracep->declBus(c+3,"pc_io_Inst", false,-1, 31,0);
    tracep->declBus(c+40,"contr_io_Inst", false,-1, 31,0);
    tracep->declBit(c+57,"contr_io_RegWrite", false,-1);
    tracep->declBus(c+58,"contr_io_AluOp", false,-1, 3,0);
    tracep->declBus(c+40,"decode_io_Inst", false,-1, 31,0);
    tracep->declBus(c+59,"decode_io_Rdest", false,-1, 4,0);
    tracep->declBus(c+60,"decode_io_R1", false,-1, 4,0);
    tracep->declBus(c+61,"decode_io_R2", false,-1, 4,0);
    tracep->declQuad(c+62,"decode_io_ImmI", false,-1, 63,0);
    tracep->declBit(c+38,"registers_clock", false,-1);
    tracep->declBit(c+39,"registers_reset", false,-1);
    tracep->declBus(c+48,"registers_io_Rdest", false,-1, 4,0);
    tracep->declBus(c+46,"registers_io_R1", false,-1, 4,0);
    tracep->declBus(c+47,"registers_io_R2", false,-1, 4,0);
    tracep->declBit(c+43,"registers_io_RegWrite", false,-1);
    tracep->declQuad(c+49,"registers_io_AluOut", false,-1, 63,0);
    tracep->declQuad(c+64,"registers_io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+66,"registers_io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+51,"alu_io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+53,"alu_io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+55,"alu_io_DataImm", false,-1, 63,0);
    tracep->declBus(c+44,"alu_io_AluOp", false,-1, 4,0);
    tracep->declBit(c+72,"alu_io_AluSrc", false,-1);
    tracep->declQuad(c+68,"alu_io_AluOut", false,-1, 63,0);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+51,"io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+53,"io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+55,"io_DataImm", false,-1, 63,0);
    tracep->declBus(c+44,"io_AluOp", false,-1, 4,0);
    tracep->declBit(c+72,"io_AluSrc", false,-1);
    tracep->declQuad(c+68,"io_AluOut", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("contr ");
    tracep->declBus(c+40,"io_Inst", false,-1, 31,0);
    tracep->declBit(c+57,"io_RegWrite", false,-1);
    tracep->declBus(c+58,"io_AluOp", false,-1, 3,0);
    tracep->declBit(c+70,"ebreak_ebreak_in", false,-1);
    tracep->declBus(c+71,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("ebreak ");
    tracep->declBit(c+70,"ebreak_in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+40,"io_Inst", false,-1, 31,0);
    tracep->declBus(c+59,"io_Rdest", false,-1, 4,0);
    tracep->declBus(c+60,"io_R1", false,-1, 4,0);
    tracep->declBus(c+61,"io_R2", false,-1, 4,0);
    tracep->declQuad(c+62,"io_ImmI", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+38,"clock", false,-1);
    tracep->declBit(c+39,"reset", false,-1);
    tracep->declQuad(c+1,"io_PcVal", false,-1, 63,0);
    tracep->declBus(c+3,"io_Inst", false,-1, 31,0);
    tracep->declQuad(c+1,"mem_Raddr", false,-1, 63,0);
    tracep->declQuad(c+4,"mem_Rdata", false,-1, 63,0);
    tracep->declQuad(c+73,"mem_Waddr", false,-1, 63,0);
    tracep->declQuad(c+73,"mem_Wdata", false,-1, 63,0);
    tracep->declBus(c+75,"mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+72,"mem_MemWrite", false,-1);
    tracep->declQuad(c+1,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+1,"Raddr", false,-1, 63,0);
    tracep->declQuad(c+73,"Waddr", false,-1, 63,0);
    tracep->declQuad(c+73,"Wdata", false,-1, 63,0);
    tracep->declBus(c+75,"Wmask", false,-1, 7,0);
    tracep->declBit(c+72,"MemWrite", false,-1);
    tracep->declQuad(c+4,"Rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("registers ");
    tracep->declBit(c+38,"clock", false,-1);
    tracep->declBit(c+39,"reset", false,-1);
    tracep->declBus(c+48,"io_Rdest", false,-1, 4,0);
    tracep->declBus(c+46,"io_R1", false,-1, 4,0);
    tracep->declBus(c+47,"io_R2", false,-1, 4,0);
    tracep->declBit(c+43,"io_RegWrite", false,-1);
    tracep->declQuad(c+49,"io_AluOut", false,-1, 63,0);
    tracep->declQuad(c+64,"io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+66,"io_DataR2", false,-1, 63,0);
    tracep->declBus(c+6,"Regs_0", false,-1, 31,0);
    tracep->declBus(c+7,"Regs_1", false,-1, 31,0);
    tracep->declBus(c+8,"Regs_2", false,-1, 31,0);
    tracep->declBus(c+9,"Regs_3", false,-1, 31,0);
    tracep->declBus(c+10,"Regs_4", false,-1, 31,0);
    tracep->declBus(c+11,"Regs_5", false,-1, 31,0);
    tracep->declBus(c+12,"Regs_6", false,-1, 31,0);
    tracep->declBus(c+13,"Regs_7", false,-1, 31,0);
    tracep->declBus(c+14,"Regs_8", false,-1, 31,0);
    tracep->declBus(c+15,"Regs_9", false,-1, 31,0);
    tracep->declBus(c+16,"Regs_10", false,-1, 31,0);
    tracep->declBus(c+17,"Regs_11", false,-1, 31,0);
    tracep->declBus(c+18,"Regs_12", false,-1, 31,0);
    tracep->declBus(c+19,"Regs_13", false,-1, 31,0);
    tracep->declBus(c+20,"Regs_14", false,-1, 31,0);
    tracep->declBus(c+21,"Regs_15", false,-1, 31,0);
    tracep->declBus(c+22,"Regs_16", false,-1, 31,0);
    tracep->declBus(c+23,"Regs_17", false,-1, 31,0);
    tracep->declBus(c+24,"Regs_18", false,-1, 31,0);
    tracep->declBus(c+25,"Regs_19", false,-1, 31,0);
    tracep->declBus(c+26,"Regs_20", false,-1, 31,0);
    tracep->declBus(c+27,"Regs_21", false,-1, 31,0);
    tracep->declBus(c+28,"Regs_22", false,-1, 31,0);
    tracep->declBus(c+29,"Regs_23", false,-1, 31,0);
    tracep->declBus(c+30,"Regs_24", false,-1, 31,0);
    tracep->declBus(c+31,"Regs_25", false,-1, 31,0);
    tracep->declBus(c+32,"Regs_26", false,-1, 31,0);
    tracep->declBus(c+33,"Regs_27", false,-1, 31,0);
    tracep->declBus(c+34,"Regs_28", false,-1, 31,0);
    tracep->declBus(c+35,"Regs_29", false,-1, 31,0);
    tracep->declBus(c+36,"Regs_30", false,-1, 31,0);
    tracep->declBus(c+37,"Regs_31", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VMain___024root__trace_init_top(VMain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_init_top\n"); );
    // Body
    VMain___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMain___024root__trace_register(VMain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMain___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMain___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMain___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMain___024root__trace_full_sub_0(VMain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_full_top_0\n"); );
    // Init
    VMain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMain___024root*>(voidSelf);
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMain___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VMain___024root__trace_full_sub_0(VMain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullQData(oldp+1,(vlSelf->Main__DOT__pc__DOT__pc),64);
    tracep->fullIData(oldp+3,((IData)(vlSelf->Main__DOT__pc__DOT__mem_Rdata)),32);
    tracep->fullQData(oldp+4,(vlSelf->Main__DOT__pc__DOT__mem_Rdata),64);
    tracep->fullIData(oldp+6,(vlSelf->Main__DOT__registers__DOT__Regs_0),32);
    tracep->fullIData(oldp+7,(vlSelf->Main__DOT__registers__DOT__Regs_1),32);
    tracep->fullIData(oldp+8,(vlSelf->Main__DOT__registers__DOT__Regs_2),32);
    tracep->fullIData(oldp+9,(vlSelf->Main__DOT__registers__DOT__Regs_3),32);
    tracep->fullIData(oldp+10,(vlSelf->Main__DOT__registers__DOT__Regs_4),32);
    tracep->fullIData(oldp+11,(vlSelf->Main__DOT__registers__DOT__Regs_5),32);
    tracep->fullIData(oldp+12,(vlSelf->Main__DOT__registers__DOT__Regs_6),32);
    tracep->fullIData(oldp+13,(vlSelf->Main__DOT__registers__DOT__Regs_7),32);
    tracep->fullIData(oldp+14,(vlSelf->Main__DOT__registers__DOT__Regs_8),32);
    tracep->fullIData(oldp+15,(vlSelf->Main__DOT__registers__DOT__Regs_9),32);
    tracep->fullIData(oldp+16,(vlSelf->Main__DOT__registers__DOT__Regs_10),32);
    tracep->fullIData(oldp+17,(vlSelf->Main__DOT__registers__DOT__Regs_11),32);
    tracep->fullIData(oldp+18,(vlSelf->Main__DOT__registers__DOT__Regs_12),32);
    tracep->fullIData(oldp+19,(vlSelf->Main__DOT__registers__DOT__Regs_13),32);
    tracep->fullIData(oldp+20,(vlSelf->Main__DOT__registers__DOT__Regs_14),32);
    tracep->fullIData(oldp+21,(vlSelf->Main__DOT__registers__DOT__Regs_15),32);
    tracep->fullIData(oldp+22,(vlSelf->Main__DOT__registers__DOT__Regs_16),32);
    tracep->fullIData(oldp+23,(vlSelf->Main__DOT__registers__DOT__Regs_17),32);
    tracep->fullIData(oldp+24,(vlSelf->Main__DOT__registers__DOT__Regs_18),32);
    tracep->fullIData(oldp+25,(vlSelf->Main__DOT__registers__DOT__Regs_19),32);
    tracep->fullIData(oldp+26,(vlSelf->Main__DOT__registers__DOT__Regs_20),32);
    tracep->fullIData(oldp+27,(vlSelf->Main__DOT__registers__DOT__Regs_21),32);
    tracep->fullIData(oldp+28,(vlSelf->Main__DOT__registers__DOT__Regs_22),32);
    tracep->fullIData(oldp+29,(vlSelf->Main__DOT__registers__DOT__Regs_23),32);
    tracep->fullIData(oldp+30,(vlSelf->Main__DOT__registers__DOT__Regs_24),32);
    tracep->fullIData(oldp+31,(vlSelf->Main__DOT__registers__DOT__Regs_25),32);
    tracep->fullIData(oldp+32,(vlSelf->Main__DOT__registers__DOT__Regs_26),32);
    tracep->fullIData(oldp+33,(vlSelf->Main__DOT__registers__DOT__Regs_27),32);
    tracep->fullIData(oldp+34,(vlSelf->Main__DOT__registers__DOT__Regs_28),32);
    tracep->fullIData(oldp+35,(vlSelf->Main__DOT__registers__DOT__Regs_29),32);
    tracep->fullIData(oldp+36,(vlSelf->Main__DOT__registers__DOT__Regs_30),32);
    tracep->fullIData(oldp+37,(vlSelf->Main__DOT__registers__DOT__Regs_31),32);
    tracep->fullBit(oldp+38,(vlSelf->clock));
    tracep->fullBit(oldp+39,(vlSelf->reset));
    tracep->fullIData(oldp+40,(vlSelf->io_Inst),32);
    tracep->fullQData(oldp+41,(vlSelf->io_PcVal),64);
    tracep->fullBit(oldp+43,(vlSelf->io_RegWrite));
    tracep->fullCData(oldp+44,(vlSelf->io_AluOp),5);
    tracep->fullBit(oldp+45,(vlSelf->io_AluSrc));
    tracep->fullCData(oldp+46,(vlSelf->io_R1),5);
    tracep->fullCData(oldp+47,(vlSelf->io_R2),5);
    tracep->fullCData(oldp+48,(vlSelf->io_Rdest),5);
    tracep->fullQData(oldp+49,(vlSelf->io_AluOut),64);
    tracep->fullQData(oldp+51,(vlSelf->io_DataR1),64);
    tracep->fullQData(oldp+53,(vlSelf->io_DataR2),64);
    tracep->fullQData(oldp+55,(vlSelf->io_DataImmI),64);
    tracep->fullBit(oldp+57,((0x13U == (0x7fU & vlSelf->io_Inst))));
    tracep->fullCData(oldp+58,(((0x13U == (0x7fU & vlSelf->io_Inst))
                                 ? 1U : 0U)),4);
    tracep->fullCData(oldp+59,((0x1fU & (vlSelf->io_Inst 
                                         >> 7U))),5);
    tracep->fullCData(oldp+60,((0x1fU & (vlSelf->io_Inst 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+61,((0x1fU & (vlSelf->io_Inst 
                                         >> 0x14U))),5);
    tracep->fullQData(oldp+62,((QData)((IData)((vlSelf->io_Inst 
                                                >> 0x14U)))),64);
    tracep->fullQData(oldp+64,((QData)((IData)(((0x1fU 
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
    tracep->fullQData(oldp+66,((QData)((IData)(((0x1fU 
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
    tracep->fullQData(oldp+68,(((1U == (IData)(vlSelf->io_AluOp))
                                 ? (vlSelf->io_DataR1 
                                    + vlSelf->io_DataImmI)
                                 : 0ULL)),64);
    tracep->fullBit(oldp+70,((0x100073U == vlSelf->io_Inst)));
    tracep->fullCData(oldp+71,((0x7fU & vlSelf->io_Inst)),7);
    tracep->fullBit(oldp+72,(0U));
    tracep->fullQData(oldp+73,(0ULL),64);
    tracep->fullCData(oldp+75,(0U),8);
}
