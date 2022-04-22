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
    tracep->declBit(c+106,"clock", false,-1);
    tracep->declBit(c+107,"reset", false,-1);
    tracep->pushNamePrefix("Main ");
    tracep->declBit(c+106,"clock", false,-1);
    tracep->declBit(c+107,"reset", false,-1);
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
    tracep->declBit(c+106,"exu_clock", false,-1);
    tracep->declBit(c+107,"exu_reset", false,-1);
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
    tracep->declBit(c+106,"clock", false,-1);
    tracep->declBit(c+107,"reset", false,-1);
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
    tracep->declQuad(c+15,"mem_Raddr", false,-1, 63,0);
    tracep->declQuad(c+17,"mem_Rdata", false,-1, 63,0);
    tracep->declQuad(c+15,"mem_Waddr", false,-1, 63,0);
    tracep->declQuad(c+19,"mem_Wdata", false,-1, 63,0);
    tracep->declBus(c+9,"mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+5,"mem_MemWrite", false,-1);
    tracep->declQuad(c+21,"Regs_0", false,-1, 63,0);
    tracep->declQuad(c+23,"Regs_1", false,-1, 63,0);
    tracep->declQuad(c+25,"Regs_2", false,-1, 63,0);
    tracep->declQuad(c+27,"Regs_3", false,-1, 63,0);
    tracep->declQuad(c+29,"Regs_4", false,-1, 63,0);
    tracep->declQuad(c+31,"Regs_5", false,-1, 63,0);
    tracep->declQuad(c+33,"Regs_6", false,-1, 63,0);
    tracep->declQuad(c+35,"Regs_7", false,-1, 63,0);
    tracep->declQuad(c+37,"Regs_8", false,-1, 63,0);
    tracep->declQuad(c+39,"Regs_9", false,-1, 63,0);
    tracep->declQuad(c+41,"Regs_10", false,-1, 63,0);
    tracep->declQuad(c+43,"Regs_11", false,-1, 63,0);
    tracep->declQuad(c+45,"Regs_12", false,-1, 63,0);
    tracep->declQuad(c+47,"Regs_13", false,-1, 63,0);
    tracep->declQuad(c+49,"Regs_14", false,-1, 63,0);
    tracep->declQuad(c+51,"Regs_15", false,-1, 63,0);
    tracep->declQuad(c+53,"Regs_16", false,-1, 63,0);
    tracep->declQuad(c+55,"Regs_17", false,-1, 63,0);
    tracep->declQuad(c+57,"Regs_18", false,-1, 63,0);
    tracep->declQuad(c+59,"Regs_19", false,-1, 63,0);
    tracep->declQuad(c+61,"Regs_20", false,-1, 63,0);
    tracep->declQuad(c+63,"Regs_21", false,-1, 63,0);
    tracep->declQuad(c+65,"Regs_22", false,-1, 63,0);
    tracep->declQuad(c+67,"Regs_23", false,-1, 63,0);
    tracep->declQuad(c+69,"Regs_24", false,-1, 63,0);
    tracep->declQuad(c+71,"Regs_25", false,-1, 63,0);
    tracep->declQuad(c+73,"Regs_26", false,-1, 63,0);
    tracep->declQuad(c+75,"Regs_27", false,-1, 63,0);
    tracep->declQuad(c+77,"Regs_28", false,-1, 63,0);
    tracep->declQuad(c+79,"Regs_29", false,-1, 63,0);
    tracep->declQuad(c+81,"Regs_30", false,-1, 63,0);
    tracep->declQuad(c+83,"Regs_31", false,-1, 63,0);
    tracep->declQuad(c+1,"Regs_32", false,-1, 63,0);
    tracep->declQuad(c+85,"DataR1", false,-1, 63,0);
    tracep->declQuad(c+17,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+87,"AluOut", false,-1, 63,0);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+15,"Raddr", false,-1, 63,0);
    tracep->declQuad(c+15,"Waddr", false,-1, 63,0);
    tracep->declQuad(c+19,"Wdata", false,-1, 63,0);
    tracep->declBus(c+9,"Wmask", false,-1, 7,0);
    tracep->declBit(c+5,"MemWrite", false,-1);
    tracep->declQuad(c+17,"Rdata", false,-1, 63,0);
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
    tracep->declBit(c+89,"ebreak_ebreak_in", false,-1);
    tracep->declBus(c+90,"opcode", false,-1, 6,0);
    tracep->declBus(c+91,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+92,"ImmI", false,-1, 63,0);
    tracep->declQuad(c+94,"ImmS", false,-1, 63,0);
    tracep->declQuad(c+96,"ImmB", false,-1, 63,0);
    tracep->declQuad(c+98,"ImmU", false,-1, 63,0);
    tracep->declQuad(c+100,"ImmJ", false,-1, 63,0);
    tracep->declBus(c+102,"inst_flag", false,-1, 16,0);
    tracep->declBus(c+103,"contr_code", false,-1, 20,0);
    tracep->pushNamePrefix("ebreak ");
    tracep->declBit(c+89,"ebreak_in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declQuad(c+1,"io_Pc", false,-1, 63,0);
    tracep->declBus(c+3,"io_Inst", false,-1, 31,0);
    tracep->declQuad(c+1,"mem_Raddr", false,-1, 63,0);
    tracep->declQuad(c+104,"mem_Rdata", false,-1, 63,0);
    tracep->declQuad(c+108,"mem_Waddr", false,-1, 63,0);
    tracep->declQuad(c+108,"mem_Wdata", false,-1, 63,0);
    tracep->declBus(c+110,"mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+111,"mem_MemWrite", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+1,"Raddr", false,-1, 63,0);
    tracep->declQuad(c+108,"Waddr", false,-1, 63,0);
    tracep->declQuad(c+108,"Wdata", false,-1, 63,0);
    tracep->declBus(c+110,"Wmask", false,-1, 7,0);
    tracep->declBit(c+111,"MemWrite", false,-1);
    tracep->declQuad(c+104,"Rdata", false,-1, 63,0);
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
    tracep->fullQData(oldp+1,(vlSelf->Main__DOT__exu__DOT__Regs_32),64);
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
    tracep->fullQData(oldp+15,(((5U == (0x1fU & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                                 >> 0xeU)))
                                 ? vlSelf->Main__DOT__exu__DOT___AluOut_T_18
                                 : vlSelf->Main__DOT__exu__DOT___AluOut_T_26)),64);
    tracep->fullQData(oldp+17,(vlSelf->Main__DOT__exu__DOT__mem_Rdata),64);
    tracep->fullQData(oldp+19,(vlSelf->Main__DOT__exu__DOT___GEN_64),64);
    tracep->fullQData(oldp+21,(vlSelf->Main__DOT__exu__DOT__Regs_0),64);
    tracep->fullQData(oldp+23,(vlSelf->Main__DOT__exu__DOT__Regs_1),64);
    tracep->fullQData(oldp+25,(vlSelf->Main__DOT__exu__DOT__Regs_2),64);
    tracep->fullQData(oldp+27,(vlSelf->Main__DOT__exu__DOT__Regs_3),64);
    tracep->fullQData(oldp+29,(vlSelf->Main__DOT__exu__DOT__Regs_4),64);
    tracep->fullQData(oldp+31,(vlSelf->Main__DOT__exu__DOT__Regs_5),64);
    tracep->fullQData(oldp+33,(vlSelf->Main__DOT__exu__DOT__Regs_6),64);
    tracep->fullQData(oldp+35,(vlSelf->Main__DOT__exu__DOT__Regs_7),64);
    tracep->fullQData(oldp+37,(vlSelf->Main__DOT__exu__DOT__Regs_8),64);
    tracep->fullQData(oldp+39,(vlSelf->Main__DOT__exu__DOT__Regs_9),64);
    tracep->fullQData(oldp+41,(vlSelf->Main__DOT__exu__DOT__Regs_10),64);
    tracep->fullQData(oldp+43,(vlSelf->Main__DOT__exu__DOT__Regs_11),64);
    tracep->fullQData(oldp+45,(vlSelf->Main__DOT__exu__DOT__Regs_12),64);
    tracep->fullQData(oldp+47,(vlSelf->Main__DOT__exu__DOT__Regs_13),64);
    tracep->fullQData(oldp+49,(vlSelf->Main__DOT__exu__DOT__Regs_14),64);
    tracep->fullQData(oldp+51,(vlSelf->Main__DOT__exu__DOT__Regs_15),64);
    tracep->fullQData(oldp+53,(vlSelf->Main__DOT__exu__DOT__Regs_16),64);
    tracep->fullQData(oldp+55,(vlSelf->Main__DOT__exu__DOT__Regs_17),64);
    tracep->fullQData(oldp+57,(vlSelf->Main__DOT__exu__DOT__Regs_18),64);
    tracep->fullQData(oldp+59,(vlSelf->Main__DOT__exu__DOT__Regs_19),64);
    tracep->fullQData(oldp+61,(vlSelf->Main__DOT__exu__DOT__Regs_20),64);
    tracep->fullQData(oldp+63,(vlSelf->Main__DOT__exu__DOT__Regs_21),64);
    tracep->fullQData(oldp+65,(vlSelf->Main__DOT__exu__DOT__Regs_22),64);
    tracep->fullQData(oldp+67,(vlSelf->Main__DOT__exu__DOT__Regs_23),64);
    tracep->fullQData(oldp+69,(vlSelf->Main__DOT__exu__DOT__Regs_24),64);
    tracep->fullQData(oldp+71,(vlSelf->Main__DOT__exu__DOT__Regs_25),64);
    tracep->fullQData(oldp+73,(vlSelf->Main__DOT__exu__DOT__Regs_26),64);
    tracep->fullQData(oldp+75,(vlSelf->Main__DOT__exu__DOT__Regs_27),64);
    tracep->fullQData(oldp+77,(vlSelf->Main__DOT__exu__DOT__Regs_28),64);
    tracep->fullQData(oldp+79,(vlSelf->Main__DOT__exu__DOT__Regs_29),64);
    tracep->fullQData(oldp+81,(vlSelf->Main__DOT__exu__DOT__Regs_30),64);
    tracep->fullQData(oldp+83,(vlSelf->Main__DOT__exu__DOT__Regs_31),64);
    tracep->fullQData(oldp+85,(vlSelf->Main__DOT__exu__DOT___GEN_31),64);
    tracep->fullQData(oldp+87,(vlSelf->Main__DOT__exu__DOT__AluOut),64);
    tracep->fullBit(oldp+89,((0x100073U == (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))));
    tracep->fullCData(oldp+90,((0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))),7);
    tracep->fullCData(oldp+91,(vlSelf->Main__DOT__idu__DOT__inst_type),3);
    tracep->fullQData(oldp+92,((QData)((IData)((0xfffU 
                                                & (IData)(
                                                          (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                           >> 0x14U)))))),64);
    tracep->fullQData(oldp+94,((QData)((IData)(((0xfe0U 
                                                 & ((IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0x19U)) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 7U))))))),64);
    tracep->fullQData(oldp+96,((QData)((IData)(((((0x1000U 
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
    tracep->fullQData(oldp+98,((QData)((IData)(((IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0xcU)) 
                                                << 0xcU)))),64);
    tracep->fullQData(oldp+100,((QData)((IData)((((
                                                   (0x100000U 
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
    tracep->fullIData(oldp+102,(vlSelf->Main__DOT__idu__DOT__inst_flag),17);
    tracep->fullIData(oldp+103,(vlSelf->Main__DOT__idu__DOT__contr_code),21);
    tracep->fullQData(oldp+104,(vlSelf->Main__DOT__ifu__DOT__mem_Rdata),64);
    tracep->fullBit(oldp+106,(vlSelf->clock));
    tracep->fullBit(oldp+107,(vlSelf->reset));
    tracep->fullQData(oldp+108,(0ULL),64);
    tracep->fullCData(oldp+110,(0U),8);
    tracep->fullBit(oldp+111,(0U));
}
