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
    tracep->declBit(c+74,"clock", false,-1);
    tracep->declBit(c+75,"reset", false,-1);
    tracep->pushNamePrefix("Main ");
    tracep->declBit(c+74,"clock", false,-1);
    tracep->declBit(c+75,"reset", false,-1);
    tracep->declQuad(c+1,"ifu_io_Pc", false,-1, 63,0);
    tracep->declBus(c+3,"ifu_io_Inst", false,-1, 31,0);
    tracep->declBus(c+3,"idu_io_Inst", false,-1, 31,0);
    tracep->declBit(c+4,"idu_io_RegWrite", false,-1);
    tracep->declBit(c+5,"idu_io_MemWrite", false,-1);
    tracep->declBus(c+6,"idu_io_AluOp", false,-1, 4,0);
    tracep->declBus(c+7,"idu_io_PcSrc", false,-1, 4,0);
    tracep->declBit(c+8,"idu_io_MemToReg", false,-1);
    tracep->declBus(c+9,"idu_io_MemMask", false,-1, 7,0);
    tracep->declBus(c+10,"idu_io_Rdest", false,-1, 4,0);
    tracep->declBus(c+11,"idu_io_R1", false,-1, 4,0);
    tracep->declBus(c+12,"idu_io_R2", false,-1, 4,0);
    tracep->declQuad(c+13,"idu_io_Imm", false,-1, 63,0);
    tracep->declBit(c+74,"exu_clock", false,-1);
    tracep->declBit(c+75,"exu_reset", false,-1);
    tracep->declBus(c+10,"exu_io_Rdest", false,-1, 4,0);
    tracep->declBus(c+11,"exu_io_R1", false,-1, 4,0);
    tracep->declBus(c+12,"exu_io_R2", false,-1, 4,0);
    tracep->declQuad(c+13,"exu_io_Imm", false,-1, 63,0);
    tracep->declBit(c+4,"exu_io_RegWrite", false,-1);
    tracep->declBit(c+5,"exu_io_MemWrite", false,-1);
    tracep->declBus(c+6,"exu_io_AluOp", false,-1, 4,0);
    tracep->declBus(c+7,"exu_io_PcSrc", false,-1, 4,0);
    tracep->declBit(c+8,"exu_io_MemToReg", false,-1);
    tracep->declBus(c+9,"exu_io_MemMask", false,-1, 7,0);
    tracep->declQuad(c+1,"exu_io_PcVal", false,-1, 63,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+74,"clock", false,-1);
    tracep->declBit(c+75,"reset", false,-1);
    tracep->declBus(c+10,"io_Rdest", false,-1, 4,0);
    tracep->declBus(c+11,"io_R1", false,-1, 4,0);
    tracep->declBus(c+12,"io_R2", false,-1, 4,0);
    tracep->declQuad(c+13,"io_Imm", false,-1, 63,0);
    tracep->declBit(c+4,"io_RegWrite", false,-1);
    tracep->declBit(c+5,"io_MemWrite", false,-1);
    tracep->declBus(c+6,"io_AluOp", false,-1, 4,0);
    tracep->declBus(c+7,"io_PcSrc", false,-1, 4,0);
    tracep->declBit(c+8,"io_MemToReg", false,-1);
    tracep->declBus(c+9,"io_MemMask", false,-1, 7,0);
    tracep->declQuad(c+1,"io_PcVal", false,-1, 63,0);
    tracep->declBit(c+74,"registers_clock", false,-1);
    tracep->declBit(c+75,"registers_reset", false,-1);
    tracep->declBus(c+10,"registers_io_Rdest", false,-1, 4,0);
    tracep->declBus(c+11,"registers_io_R1", false,-1, 4,0);
    tracep->declBus(c+12,"registers_io_R2", false,-1, 4,0);
    tracep->declBit(c+4,"registers_io_RegWrite", false,-1);
    tracep->declQuad(c+15,"registers_io_DataIn", false,-1, 63,0);
    tracep->declQuad(c+17,"registers_io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+19,"registers_io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+21,"mem_Raddr", false,-1, 63,0);
    tracep->declQuad(c+23,"mem_Rdata", false,-1, 63,0);
    tracep->declQuad(c+21,"mem_Waddr", false,-1, 63,0);
    tracep->declQuad(c+19,"mem_Wdata", false,-1, 63,0);
    tracep->declBus(c+9,"mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+5,"mem_MemWrite", false,-1);
    tracep->declQuad(c+23,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+17,"DataR1", false,-1, 63,0);
    tracep->declQuad(c+1,"pc", false,-1, 63,0);
    tracep->declQuad(c+21,"AluOut", false,-1, 63,0);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+21,"Raddr", false,-1, 63,0);
    tracep->declQuad(c+21,"Waddr", false,-1, 63,0);
    tracep->declQuad(c+19,"Wdata", false,-1, 63,0);
    tracep->declBus(c+9,"Wmask", false,-1, 7,0);
    tracep->declBit(c+5,"MemWrite", false,-1);
    tracep->declQuad(c+23,"Rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("registers ");
    tracep->declBit(c+74,"clock", false,-1);
    tracep->declBit(c+75,"reset", false,-1);
    tracep->declBus(c+10,"io_Rdest", false,-1, 4,0);
    tracep->declBus(c+11,"io_R1", false,-1, 4,0);
    tracep->declBus(c+12,"io_R2", false,-1, 4,0);
    tracep->declBit(c+4,"io_RegWrite", false,-1);
    tracep->declQuad(c+15,"io_DataIn", false,-1, 63,0);
    tracep->declQuad(c+17,"io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+19,"io_DataR2", false,-1, 63,0);
    tracep->declBus(c+25,"Regs_0", false,-1, 31,0);
    tracep->declBus(c+26,"Regs_1", false,-1, 31,0);
    tracep->declBus(c+27,"Regs_2", false,-1, 31,0);
    tracep->declBus(c+28,"Regs_3", false,-1, 31,0);
    tracep->declBus(c+29,"Regs_4", false,-1, 31,0);
    tracep->declBus(c+30,"Regs_5", false,-1, 31,0);
    tracep->declBus(c+31,"Regs_6", false,-1, 31,0);
    tracep->declBus(c+32,"Regs_7", false,-1, 31,0);
    tracep->declBus(c+33,"Regs_8", false,-1, 31,0);
    tracep->declBus(c+34,"Regs_9", false,-1, 31,0);
    tracep->declBus(c+35,"Regs_10", false,-1, 31,0);
    tracep->declBus(c+36,"Regs_11", false,-1, 31,0);
    tracep->declBus(c+37,"Regs_12", false,-1, 31,0);
    tracep->declBus(c+38,"Regs_13", false,-1, 31,0);
    tracep->declBus(c+39,"Regs_14", false,-1, 31,0);
    tracep->declBus(c+40,"Regs_15", false,-1, 31,0);
    tracep->declBus(c+41,"Regs_16", false,-1, 31,0);
    tracep->declBus(c+42,"Regs_17", false,-1, 31,0);
    tracep->declBus(c+43,"Regs_18", false,-1, 31,0);
    tracep->declBus(c+44,"Regs_19", false,-1, 31,0);
    tracep->declBus(c+45,"Regs_20", false,-1, 31,0);
    tracep->declBus(c+46,"Regs_21", false,-1, 31,0);
    tracep->declBus(c+47,"Regs_22", false,-1, 31,0);
    tracep->declBus(c+48,"Regs_23", false,-1, 31,0);
    tracep->declBus(c+49,"Regs_24", false,-1, 31,0);
    tracep->declBus(c+50,"Regs_25", false,-1, 31,0);
    tracep->declBus(c+51,"Regs_26", false,-1, 31,0);
    tracep->declBus(c+52,"Regs_27", false,-1, 31,0);
    tracep->declBus(c+53,"Regs_28", false,-1, 31,0);
    tracep->declBus(c+54,"Regs_29", false,-1, 31,0);
    tracep->declBus(c+55,"Regs_30", false,-1, 31,0);
    tracep->declBus(c+56,"Regs_31", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+3,"io_Inst", false,-1, 31,0);
    tracep->declBit(c+4,"io_RegWrite", false,-1);
    tracep->declBit(c+5,"io_MemWrite", false,-1);
    tracep->declBus(c+6,"io_AluOp", false,-1, 4,0);
    tracep->declBus(c+7,"io_PcSrc", false,-1, 4,0);
    tracep->declBit(c+8,"io_MemToReg", false,-1);
    tracep->declBus(c+9,"io_MemMask", false,-1, 7,0);
    tracep->declBus(c+10,"io_Rdest", false,-1, 4,0);
    tracep->declBus(c+11,"io_R1", false,-1, 4,0);
    tracep->declBus(c+12,"io_R2", false,-1, 4,0);
    tracep->declQuad(c+13,"io_Imm", false,-1, 63,0);
    tracep->declBit(c+57,"ebreak_ebreak_in", false,-1);
    tracep->declBus(c+58,"opcode", false,-1, 6,0);
    tracep->declBus(c+59,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+60,"ImmI", false,-1, 63,0);
    tracep->declQuad(c+62,"ImmS", false,-1, 63,0);
    tracep->declQuad(c+64,"ImmB", false,-1, 63,0);
    tracep->declQuad(c+66,"ImmU", false,-1, 63,0);
    tracep->declQuad(c+68,"ImmJ", false,-1, 63,0);
    tracep->declBus(c+70,"inst_flag", false,-1, 16,0);
    tracep->declBus(c+71,"contr_code", false,-1, 20,0);
    tracep->pushNamePrefix("ebreak ");
    tracep->declBit(c+57,"ebreak_in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declQuad(c+1,"io_Pc", false,-1, 63,0);
    tracep->declBus(c+3,"io_Inst", false,-1, 31,0);
    tracep->declQuad(c+1,"mem_Raddr", false,-1, 63,0);
    tracep->declQuad(c+72,"mem_Rdata", false,-1, 63,0);
    tracep->declQuad(c+76,"mem_Waddr", false,-1, 63,0);
    tracep->declQuad(c+76,"mem_Wdata", false,-1, 63,0);
    tracep->declBus(c+78,"mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+79,"mem_MemWrite", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+1,"Raddr", false,-1, 63,0);
    tracep->declQuad(c+76,"Waddr", false,-1, 63,0);
    tracep->declQuad(c+76,"Wdata", false,-1, 63,0);
    tracep->declBus(c+78,"Wmask", false,-1, 7,0);
    tracep->declBit(c+79,"MemWrite", false,-1);
    tracep->declQuad(c+72,"Rdata", false,-1, 63,0);
    tracep->popNamePrefix(3);
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
    tracep->fullQData(oldp+1,(vlSelf->Main__DOT__exu__DOT__pc),64);
    tracep->fullIData(oldp+3,((IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)),32);
    tracep->fullBit(oldp+4,((1U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                   >> 0x14U))));
    tracep->fullBit(oldp+5,((1U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                   >> 0x13U))));
    tracep->fullCData(oldp+6,((0x1fU & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                        >> 0xeU))),5);
    tracep->fullCData(oldp+7,((0x1fU & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                        >> 9U))),5);
    tracep->fullBit(oldp+8,((1U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                   >> 8U))));
    tracep->fullCData(oldp+9,((0xffU & vlSelf->Main__DOT__idu__DOT__contr_code)),8);
    tracep->fullCData(oldp+10,((0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                 >> 7U)))),5);
    tracep->fullCData(oldp+11,((0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                 >> 0xfU)))),5);
    tracep->fullCData(oldp+12,((0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                 >> 0x14U)))),5);
    tracep->fullQData(oldp+13,(vlSelf->Main__DOT__idu_io_Imm),64);
    tracep->fullQData(oldp+15,(vlSelf->Main__DOT__exu__DOT__registers_io_DataIn),64);
    tracep->fullQData(oldp+17,((QData)((IData)(vlSelf->Main__DOT__exu__DOT__registers__DOT___GEN_31))),64);
    tracep->fullQData(oldp+19,((QData)((IData)(vlSelf->Main__DOT__exu__DOT__registers__DOT___GEN_63))),64);
    tracep->fullQData(oldp+21,(((5U == (0x1fU & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                 >> 0xeU)))
                                 ? vlSelf->Main__DOT__exu__DOT___AluOut_T_18
                                 : vlSelf->Main__DOT__exu__DOT___AluOut_T_26)),64);
    tracep->fullQData(oldp+23,(vlSelf->Main__DOT__exu__DOT__mem_Rdata),64);
    tracep->fullIData(oldp+25,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_0),32);
    tracep->fullIData(oldp+26,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_1),32);
    tracep->fullIData(oldp+27,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_2),32);
    tracep->fullIData(oldp+28,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_3),32);
    tracep->fullIData(oldp+29,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_4),32);
    tracep->fullIData(oldp+30,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_5),32);
    tracep->fullIData(oldp+31,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_6),32);
    tracep->fullIData(oldp+32,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_7),32);
    tracep->fullIData(oldp+33,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_8),32);
    tracep->fullIData(oldp+34,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_9),32);
    tracep->fullIData(oldp+35,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_10),32);
    tracep->fullIData(oldp+36,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_11),32);
    tracep->fullIData(oldp+37,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_12),32);
    tracep->fullIData(oldp+38,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_13),32);
    tracep->fullIData(oldp+39,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_14),32);
    tracep->fullIData(oldp+40,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_15),32);
    tracep->fullIData(oldp+41,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_16),32);
    tracep->fullIData(oldp+42,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_17),32);
    tracep->fullIData(oldp+43,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_18),32);
    tracep->fullIData(oldp+44,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_19),32);
    tracep->fullIData(oldp+45,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_20),32);
    tracep->fullIData(oldp+46,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_21),32);
    tracep->fullIData(oldp+47,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_22),32);
    tracep->fullIData(oldp+48,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_23),32);
    tracep->fullIData(oldp+49,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_24),32);
    tracep->fullIData(oldp+50,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_25),32);
    tracep->fullIData(oldp+51,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_26),32);
    tracep->fullIData(oldp+52,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_27),32);
    tracep->fullIData(oldp+53,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_28),32);
    tracep->fullIData(oldp+54,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_29),32);
    tracep->fullIData(oldp+55,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_30),32);
    tracep->fullIData(oldp+56,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_31),32);
    tracep->fullBit(oldp+57,((0x100073U == (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))));
    tracep->fullCData(oldp+58,((0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))),7);
    tracep->fullCData(oldp+59,(vlSelf->Main__DOT__idu__DOT__inst_type),3);
    tracep->fullQData(oldp+60,((QData)((IData)((0xfffU 
                                                & (IData)(
                                                          (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                           >> 0x14U)))))),64);
    tracep->fullQData(oldp+62,((QData)((IData)(((0xfe0U 
                                                 & ((IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0x19U)) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 7U))))))),64);
    tracep->fullQData(oldp+64,((QData)((IData)(((((0x1000U 
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
                                                      << 0xbU)))))),64);
    tracep->fullQData(oldp+66,((QData)((IData)(((IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0xcU)) 
                                                << 0xcU)))),64);
    tracep->fullQData(oldp+68,((QData)((IData)(((((0x100000U 
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
                                                      << 0xcU)))))),64);
    tracep->fullIData(oldp+70,(vlSelf->Main__DOT__idu__DOT__inst_flag),17);
    tracep->fullIData(oldp+71,(vlSelf->Main__DOT__idu__DOT__contr_code),21);
    tracep->fullQData(oldp+72,(vlSelf->Main__DOT__ifu__DOT__mem_Rdata),64);
    tracep->fullBit(oldp+74,(vlSelf->clock));
    tracep->fullBit(oldp+75,(vlSelf->reset));
    tracep->fullQData(oldp+76,(0ULL),64);
    tracep->fullCData(oldp+78,(0U),8);
    tracep->fullBit(oldp+79,(0U));
}
