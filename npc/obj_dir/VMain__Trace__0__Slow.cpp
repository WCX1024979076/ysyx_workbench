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
    tracep->declBit(c+127,"clock", false,-1);
    tracep->declBit(c+128,"reset", false,-1);
    tracep->declBus(c+129,"io_Inst", false,-1, 31,0);
    tracep->pushNamePrefix("Main ");
    tracep->declBit(c+127,"clock", false,-1);
    tracep->declBit(c+128,"reset", false,-1);
    tracep->declBus(c+129,"io_Inst", false,-1, 31,0);
    tracep->declQuad(c+1,"ifu_io_Pc", false,-1, 63,0);
    tracep->declBus(c+3,"ifu_io_Inst", false,-1, 31,0);
    tracep->declBus(c+129,"idu_io_Inst", false,-1, 31,0);
    tracep->declBit(c+4,"idu_io_RegWrite", false,-1);
    tracep->declBit(c+130,"idu_io_MemWrite", false,-1);
    tracep->declBus(c+5,"idu_io_AluOp", false,-1, 4,0);
    tracep->declBus(c+6,"idu_io_AluSrc1Op", false,-1, 4,0);
    tracep->declBus(c+7,"idu_io_AluSrc2Op", false,-1, 4,0);
    tracep->declBus(c+8,"idu_io_PcSrc", false,-1, 4,0);
    tracep->declBus(c+9,"idu_io_RinCtl", false,-1, 3,0);
    tracep->declBus(c+131,"idu_io_MemMask", false,-1, 7,0);
    tracep->declBus(c+132,"idu_io_Rdest", false,-1, 4,0);
    tracep->declBus(c+133,"idu_io_R1", false,-1, 4,0);
    tracep->declBus(c+134,"idu_io_R2", false,-1, 4,0);
    tracep->declQuad(c+10,"idu_io_Imm", false,-1, 63,0);
    tracep->declBit(c+127,"exu_clock", false,-1);
    tracep->declBit(c+128,"exu_reset", false,-1);
    tracep->declBus(c+132,"exu_io_Rdest", false,-1, 4,0);
    tracep->declBus(c+133,"exu_io_R1", false,-1, 4,0);
    tracep->declBus(c+134,"exu_io_R2", false,-1, 4,0);
    tracep->declQuad(c+10,"exu_io_Imm", false,-1, 63,0);
    tracep->declBit(c+4,"exu_io_RegWrite", false,-1);
    tracep->declBit(c+130,"exu_io_MemWrite", false,-1);
    tracep->declBus(c+5,"exu_io_AluOp", false,-1, 4,0);
    tracep->declBus(c+6,"exu_io_AluSrc1Op", false,-1, 4,0);
    tracep->declBus(c+7,"exu_io_AluSrc2Op", false,-1, 4,0);
    tracep->declBus(c+8,"exu_io_PcSrc", false,-1, 4,0);
    tracep->declBus(c+9,"exu_io_RinCtl", false,-1, 3,0);
    tracep->declBus(c+131,"exu_io_MemMask", false,-1, 7,0);
    tracep->declQuad(c+1,"exu_io_PcVal", false,-1, 63,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+127,"clock", false,-1);
    tracep->declBit(c+128,"reset", false,-1);
    tracep->declBus(c+132,"io_Rdest", false,-1, 4,0);
    tracep->declBus(c+133,"io_R1", false,-1, 4,0);
    tracep->declBus(c+134,"io_R2", false,-1, 4,0);
    tracep->declQuad(c+10,"io_Imm", false,-1, 63,0);
    tracep->declBit(c+4,"io_RegWrite", false,-1);
    tracep->declBit(c+130,"io_MemWrite", false,-1);
    tracep->declBus(c+5,"io_AluOp", false,-1, 4,0);
    tracep->declBus(c+6,"io_AluSrc1Op", false,-1, 4,0);
    tracep->declBus(c+7,"io_AluSrc2Op", false,-1, 4,0);
    tracep->declBus(c+8,"io_PcSrc", false,-1, 4,0);
    tracep->declBus(c+9,"io_RinCtl", false,-1, 3,0);
    tracep->declBus(c+131,"io_MemMask", false,-1, 7,0);
    tracep->declQuad(c+1,"io_PcVal", false,-1, 63,0);
    tracep->declQuad(c+12,"mem_Raddr", false,-1, 63,0);
    tracep->declQuad(c+14,"mem_Rdata", false,-1, 63,0);
    tracep->declQuad(c+12,"mem_Waddr", false,-1, 63,0);
    tracep->declQuad(c+135,"mem_Wdata", false,-1, 63,0);
    tracep->declBus(c+131,"mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+130,"mem_MemWrite", false,-1);
    tracep->declQuad(c+144,"difftest_gpr_0", false,-1, 63,0);
    tracep->declQuad(c+16,"difftest_gpr_1", false,-1, 63,0);
    tracep->declQuad(c+18,"difftest_gpr_2", false,-1, 63,0);
    tracep->declQuad(c+20,"difftest_gpr_3", false,-1, 63,0);
    tracep->declQuad(c+22,"difftest_gpr_4", false,-1, 63,0);
    tracep->declQuad(c+24,"difftest_gpr_5", false,-1, 63,0);
    tracep->declQuad(c+26,"difftest_gpr_6", false,-1, 63,0);
    tracep->declQuad(c+28,"difftest_gpr_7", false,-1, 63,0);
    tracep->declQuad(c+30,"difftest_gpr_8", false,-1, 63,0);
    tracep->declQuad(c+32,"difftest_gpr_9", false,-1, 63,0);
    tracep->declQuad(c+34,"difftest_gpr_10", false,-1, 63,0);
    tracep->declQuad(c+36,"difftest_gpr_11", false,-1, 63,0);
    tracep->declQuad(c+38,"difftest_gpr_12", false,-1, 63,0);
    tracep->declQuad(c+40,"difftest_gpr_13", false,-1, 63,0);
    tracep->declQuad(c+42,"difftest_gpr_14", false,-1, 63,0);
    tracep->declQuad(c+44,"difftest_gpr_15", false,-1, 63,0);
    tracep->declQuad(c+46,"difftest_gpr_16", false,-1, 63,0);
    tracep->declQuad(c+48,"difftest_gpr_17", false,-1, 63,0);
    tracep->declQuad(c+50,"difftest_gpr_18", false,-1, 63,0);
    tracep->declQuad(c+52,"difftest_gpr_19", false,-1, 63,0);
    tracep->declQuad(c+54,"difftest_gpr_20", false,-1, 63,0);
    tracep->declQuad(c+56,"difftest_gpr_21", false,-1, 63,0);
    tracep->declQuad(c+58,"difftest_gpr_22", false,-1, 63,0);
    tracep->declQuad(c+60,"difftest_gpr_23", false,-1, 63,0);
    tracep->declQuad(c+62,"difftest_gpr_24", false,-1, 63,0);
    tracep->declQuad(c+64,"difftest_gpr_25", false,-1, 63,0);
    tracep->declQuad(c+66,"difftest_gpr_26", false,-1, 63,0);
    tracep->declQuad(c+68,"difftest_gpr_27", false,-1, 63,0);
    tracep->declQuad(c+70,"difftest_gpr_28", false,-1, 63,0);
    tracep->declQuad(c+72,"difftest_gpr_29", false,-1, 63,0);
    tracep->declQuad(c+74,"difftest_gpr_30", false,-1, 63,0);
    tracep->declQuad(c+76,"difftest_gpr_31", false,-1, 63,0);
    tracep->declQuad(c+1,"difftest_PcVal", false,-1, 63,0);
    tracep->declQuad(c+16,"Regs_1", false,-1, 63,0);
    tracep->declQuad(c+18,"Regs_2", false,-1, 63,0);
    tracep->declQuad(c+20,"Regs_3", false,-1, 63,0);
    tracep->declQuad(c+22,"Regs_4", false,-1, 63,0);
    tracep->declQuad(c+24,"Regs_5", false,-1, 63,0);
    tracep->declQuad(c+26,"Regs_6", false,-1, 63,0);
    tracep->declQuad(c+28,"Regs_7", false,-1, 63,0);
    tracep->declQuad(c+30,"Regs_8", false,-1, 63,0);
    tracep->declQuad(c+32,"Regs_9", false,-1, 63,0);
    tracep->declQuad(c+34,"Regs_10", false,-1, 63,0);
    tracep->declQuad(c+36,"Regs_11", false,-1, 63,0);
    tracep->declQuad(c+38,"Regs_12", false,-1, 63,0);
    tracep->declQuad(c+40,"Regs_13", false,-1, 63,0);
    tracep->declQuad(c+42,"Regs_14", false,-1, 63,0);
    tracep->declQuad(c+44,"Regs_15", false,-1, 63,0);
    tracep->declQuad(c+46,"Regs_16", false,-1, 63,0);
    tracep->declQuad(c+48,"Regs_17", false,-1, 63,0);
    tracep->declQuad(c+50,"Regs_18", false,-1, 63,0);
    tracep->declQuad(c+52,"Regs_19", false,-1, 63,0);
    tracep->declQuad(c+54,"Regs_20", false,-1, 63,0);
    tracep->declQuad(c+56,"Regs_21", false,-1, 63,0);
    tracep->declQuad(c+58,"Regs_22", false,-1, 63,0);
    tracep->declQuad(c+60,"Regs_23", false,-1, 63,0);
    tracep->declQuad(c+62,"Regs_24", false,-1, 63,0);
    tracep->declQuad(c+64,"Regs_25", false,-1, 63,0);
    tracep->declQuad(c+66,"Regs_26", false,-1, 63,0);
    tracep->declQuad(c+68,"Regs_27", false,-1, 63,0);
    tracep->declQuad(c+70,"Regs_28", false,-1, 63,0);
    tracep->declQuad(c+72,"Regs_29", false,-1, 63,0);
    tracep->declQuad(c+74,"Regs_30", false,-1, 63,0);
    tracep->declQuad(c+76,"Regs_31", false,-1, 63,0);
    tracep->declQuad(c+1,"pc", false,-1, 63,0);
    tracep->declQuad(c+78,"DataR1", false,-1, 63,0);
    tracep->declQuad(c+80,"DataR2", false,-1, 63,0);
    tracep->declQuad(c+82,"AluSrc1", false,-1, 63,0);
    tracep->declQuad(c+84,"AluSrc2", false,-1, 63,0);
    tracep->declQuad(c+12,"AluOut", false,-1, 63,0);
    tracep->declBus(c+86,"DataIn_lo", false,-1, 7,0);
    tracep->declQuad(c+87,"DataIn_hi", false,-1, 55,0);
    tracep->declQuad(c+14,"MemOut", false,-1, 63,0);
    tracep->declBus(c+89,"DataIn_lo_1", false,-1, 7,0);
    tracep->declQuad(c+90,"DataIn_hi_1", false,-1, 55,0);
    tracep->declBus(c+92,"DataIn_lo_2", false,-1, 15,0);
    tracep->declQuad(c+93,"DataIn_hi_2", false,-1, 47,0);
    tracep->declBus(c+95,"DataIn_lo_3", false,-1, 15,0);
    tracep->declQuad(c+96,"DataIn_hi_3", false,-1, 47,0);
    tracep->declBus(c+98,"DataIn_lo_4", false,-1, 31,0);
    tracep->declBus(c+99,"DataIn_hi_4", false,-1, 31,0);
    tracep->declBus(c+100,"DataIn_lo_5", false,-1, 31,0);
    tracep->declBus(c+101,"DataIn_hi_5", false,-1, 31,0);
    tracep->declBit(c+102,"SignU_hi", false,-1);
    tracep->declBit(c+103,"SignU_lo", false,-1);
    tracep->declBit(c+104,"SignU", false,-1);
    tracep->declBit(c+105,"SignS", false,-1);
    tracep->declBit(c+106,"Zero", false,-1);
    tracep->declQuad(c+107,"pc_hi", false,-1, 42,0);
    tracep->declBus(c+109,"pc_lo", false,-1, 20,0);
    tracep->declBus(c+110,"pc_lo_1", false,-1, 12,0);
    tracep->declQuad(c+111,"pc_hi_1", false,-1, 50,0);
    tracep->pushNamePrefix("difftest ");
    tracep->declQuad(c+144,"gpr_0", false,-1, 63,0);
    tracep->declQuad(c+16,"gpr_1", false,-1, 63,0);
    tracep->declQuad(c+18,"gpr_2", false,-1, 63,0);
    tracep->declQuad(c+20,"gpr_3", false,-1, 63,0);
    tracep->declQuad(c+22,"gpr_4", false,-1, 63,0);
    tracep->declQuad(c+24,"gpr_5", false,-1, 63,0);
    tracep->declQuad(c+26,"gpr_6", false,-1, 63,0);
    tracep->declQuad(c+28,"gpr_7", false,-1, 63,0);
    tracep->declQuad(c+30,"gpr_8", false,-1, 63,0);
    tracep->declQuad(c+32,"gpr_9", false,-1, 63,0);
    tracep->declQuad(c+34,"gpr_10", false,-1, 63,0);
    tracep->declQuad(c+36,"gpr_11", false,-1, 63,0);
    tracep->declQuad(c+38,"gpr_12", false,-1, 63,0);
    tracep->declQuad(c+40,"gpr_13", false,-1, 63,0);
    tracep->declQuad(c+42,"gpr_14", false,-1, 63,0);
    tracep->declQuad(c+44,"gpr_15", false,-1, 63,0);
    tracep->declQuad(c+46,"gpr_16", false,-1, 63,0);
    tracep->declQuad(c+48,"gpr_17", false,-1, 63,0);
    tracep->declQuad(c+50,"gpr_18", false,-1, 63,0);
    tracep->declQuad(c+52,"gpr_19", false,-1, 63,0);
    tracep->declQuad(c+54,"gpr_20", false,-1, 63,0);
    tracep->declQuad(c+56,"gpr_21", false,-1, 63,0);
    tracep->declQuad(c+58,"gpr_22", false,-1, 63,0);
    tracep->declQuad(c+60,"gpr_23", false,-1, 63,0);
    tracep->declQuad(c+62,"gpr_24", false,-1, 63,0);
    tracep->declQuad(c+64,"gpr_25", false,-1, 63,0);
    tracep->declQuad(c+66,"gpr_26", false,-1, 63,0);
    tracep->declQuad(c+68,"gpr_27", false,-1, 63,0);
    tracep->declQuad(c+70,"gpr_28", false,-1, 63,0);
    tracep->declQuad(c+72,"gpr_29", false,-1, 63,0);
    tracep->declQuad(c+74,"gpr_30", false,-1, 63,0);
    tracep->declQuad(c+76,"gpr_31", false,-1, 63,0);
    tracep->declQuad(c+1,"PcVal", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+12,"Raddr", false,-1, 63,0);
    tracep->declQuad(c+12,"Waddr", false,-1, 63,0);
    tracep->declQuad(c+135,"Wdata", false,-1, 63,0);
    tracep->declBus(c+131,"Wmask", false,-1, 7,0);
    tracep->declBit(c+130,"MemWrite", false,-1);
    tracep->declQuad(c+14,"Rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+129,"io_Inst", false,-1, 31,0);
    tracep->declBit(c+4,"io_RegWrite", false,-1);
    tracep->declBit(c+130,"io_MemWrite", false,-1);
    tracep->declBus(c+5,"io_AluOp", false,-1, 4,0);
    tracep->declBus(c+6,"io_AluSrc1Op", false,-1, 4,0);
    tracep->declBus(c+7,"io_AluSrc2Op", false,-1, 4,0);
    tracep->declBus(c+8,"io_PcSrc", false,-1, 4,0);
    tracep->declBus(c+9,"io_RinCtl", false,-1, 3,0);
    tracep->declBus(c+131,"io_MemMask", false,-1, 7,0);
    tracep->declBus(c+132,"io_Rdest", false,-1, 4,0);
    tracep->declBus(c+133,"io_R1", false,-1, 4,0);
    tracep->declBus(c+134,"io_R2", false,-1, 4,0);
    tracep->declQuad(c+10,"io_Imm", false,-1, 63,0);
    tracep->declBit(c+137,"ebreak_ebreak_in", false,-1);
    tracep->declBus(c+138,"opcode", false,-1, 6,0);
    tracep->declBus(c+139,"io_Imm_lo", false,-1, 31,0);
    tracep->declBus(c+140,"io_Imm_hi", false,-1, 31,0);
    tracep->declBus(c+141,"io_Imm_lo_1", false,-1, 11,0);
    tracep->declQuad(c+142,"io_Imm_hi_1", false,-1, 51,0);
    tracep->declBus(c+113,"io_Imm_lo_2", false,-1, 11,0);
    tracep->declQuad(c+114,"io_Imm_hi_2", false,-1, 51,0);
    tracep->declBus(c+116,"io_Imm_lo_6", false,-1, 20,0);
    tracep->declQuad(c+117,"io_Imm_hi_6", false,-1, 42,0);
    tracep->declBus(c+119,"io_Imm_lo_8", false,-1, 12,0);
    tracep->declQuad(c+120,"io_Imm_hi_8", false,-1, 50,0);
    tracep->declBus(c+122,"contr_code_2", false,-1, 1,0);
    tracep->declBus(c+123,"contr_code_3", false,-1, 2,0);
    tracep->declBus(c+124,"contr_code_5", false,-1, 3,0);
    tracep->pushNamePrefix("ebreak ");
    tracep->declBit(c+137,"ebreak_in", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declQuad(c+1,"io_Pc", false,-1, 63,0);
    tracep->declBus(c+3,"io_Inst", false,-1, 31,0);
    tracep->declQuad(c+1,"mem_Raddr", false,-1, 63,0);
    tracep->declQuad(c+125,"mem_Rdata", false,-1, 63,0);
    tracep->declQuad(c+144,"mem_Waddr", false,-1, 63,0);
    tracep->declQuad(c+144,"mem_Wdata", false,-1, 63,0);
    tracep->declBus(c+146,"mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+147,"mem_MemWrite", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+1,"Raddr", false,-1, 63,0);
    tracep->declQuad(c+144,"Waddr", false,-1, 63,0);
    tracep->declQuad(c+144,"Wdata", false,-1, 63,0);
    tracep->declBus(c+146,"Wmask", false,-1, 7,0);
    tracep->declBit(c+147,"MemWrite", false,-1);
    tracep->declQuad(c+125,"Rdata", false,-1, 63,0);
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
    tracep->fullBit(oldp+4,(vlSelf->Main__DOT__idu_io_RegWrite));
    tracep->fullCData(oldp+5,(vlSelf->Main__DOT__idu_io_AluOp),5);
    tracep->fullCData(oldp+6,(vlSelf->Main__DOT__idu__DOT__contr_code_2),5);
    tracep->fullCData(oldp+7,(vlSelf->Main__DOT__idu__DOT__contr_code_3),5);
    tracep->fullCData(oldp+8,(vlSelf->Main__DOT__idu__DOT__contr_code_5),5);
    tracep->fullCData(oldp+9,(vlSelf->Main__DOT__idu_io_RinCtl),4);
    tracep->fullQData(oldp+10,(vlSelf->Main__DOT__idu_io_Imm),64);
    tracep->fullQData(oldp+12,((((QData)((IData)(vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U])))),64);
    tracep->fullQData(oldp+14,(vlSelf->Main__DOT__exu__DOT__mem_Rdata),64);
    tracep->fullQData(oldp+16,(vlSelf->Main__DOT__exu__DOT__Regs_1),64);
    tracep->fullQData(oldp+18,(vlSelf->Main__DOT__exu__DOT__Regs_2),64);
    tracep->fullQData(oldp+20,(vlSelf->Main__DOT__exu__DOT__Regs_3),64);
    tracep->fullQData(oldp+22,(vlSelf->Main__DOT__exu__DOT__Regs_4),64);
    tracep->fullQData(oldp+24,(vlSelf->Main__DOT__exu__DOT__Regs_5),64);
    tracep->fullQData(oldp+26,(vlSelf->Main__DOT__exu__DOT__Regs_6),64);
    tracep->fullQData(oldp+28,(vlSelf->Main__DOT__exu__DOT__Regs_7),64);
    tracep->fullQData(oldp+30,(vlSelf->Main__DOT__exu__DOT__Regs_8),64);
    tracep->fullQData(oldp+32,(vlSelf->Main__DOT__exu__DOT__Regs_9),64);
    tracep->fullQData(oldp+34,(vlSelf->Main__DOT__exu__DOT__Regs_10),64);
    tracep->fullQData(oldp+36,(vlSelf->Main__DOT__exu__DOT__Regs_11),64);
    tracep->fullQData(oldp+38,(vlSelf->Main__DOT__exu__DOT__Regs_12),64);
    tracep->fullQData(oldp+40,(vlSelf->Main__DOT__exu__DOT__Regs_13),64);
    tracep->fullQData(oldp+42,(vlSelf->Main__DOT__exu__DOT__Regs_14),64);
    tracep->fullQData(oldp+44,(vlSelf->Main__DOT__exu__DOT__Regs_15),64);
    tracep->fullQData(oldp+46,(vlSelf->Main__DOT__exu__DOT__Regs_16),64);
    tracep->fullQData(oldp+48,(vlSelf->Main__DOT__exu__DOT__Regs_17),64);
    tracep->fullQData(oldp+50,(vlSelf->Main__DOT__exu__DOT__Regs_18),64);
    tracep->fullQData(oldp+52,(vlSelf->Main__DOT__exu__DOT__Regs_19),64);
    tracep->fullQData(oldp+54,(vlSelf->Main__DOT__exu__DOT__Regs_20),64);
    tracep->fullQData(oldp+56,(vlSelf->Main__DOT__exu__DOT__Regs_21),64);
    tracep->fullQData(oldp+58,(vlSelf->Main__DOT__exu__DOT__Regs_22),64);
    tracep->fullQData(oldp+60,(vlSelf->Main__DOT__exu__DOT__Regs_23),64);
    tracep->fullQData(oldp+62,(vlSelf->Main__DOT__exu__DOT__Regs_24),64);
    tracep->fullQData(oldp+64,(vlSelf->Main__DOT__exu__DOT__Regs_25),64);
    tracep->fullQData(oldp+66,(vlSelf->Main__DOT__exu__DOT__Regs_26),64);
    tracep->fullQData(oldp+68,(vlSelf->Main__DOT__exu__DOT__Regs_27),64);
    tracep->fullQData(oldp+70,(vlSelf->Main__DOT__exu__DOT__Regs_28),64);
    tracep->fullQData(oldp+72,(vlSelf->Main__DOT__exu__DOT__Regs_29),64);
    tracep->fullQData(oldp+74,(vlSelf->Main__DOT__exu__DOT__Regs_30),64);
    tracep->fullQData(oldp+76,(vlSelf->Main__DOT__exu__DOT__Regs_31),64);
    tracep->fullQData(oldp+78,(vlSelf->Main__DOT__exu__DOT__DataR1),64);
    tracep->fullQData(oldp+80,(vlSelf->Main__DOT__exu__DOT__DataR2),64);
    tracep->fullQData(oldp+82,(vlSelf->Main__DOT__exu__DOT___AluOut_T_19),64);
    tracep->fullQData(oldp+84,(vlSelf->Main__DOT__exu__DOT__AluSrc2),64);
    tracep->fullCData(oldp+86,((0xffU & vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U])),8);
    tracep->fullQData(oldp+87,(((0x80U & vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U])
                                 ? 0xffffffffffffffULL
                                 : 0ULL)),56);
    tracep->fullCData(oldp+89,((0xffU & (IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata))),8);
    tracep->fullQData(oldp+90,(((1U & (IData)((vlSelf->Main__DOT__exu__DOT__mem_Rdata 
                                               >> 7U)))
                                 ? 0xffffffffffffffULL
                                 : 0ULL)),56);
    tracep->fullSData(oldp+92,((0xffffU & vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U])),16);
    tracep->fullQData(oldp+93,(((0x8000U & vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U])
                                 ? 0xffffffffffffULL
                                 : 0ULL)),48);
    tracep->fullSData(oldp+95,((0xffffU & (IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata))),16);
    tracep->fullQData(oldp+96,(((1U & (IData)((vlSelf->Main__DOT__exu__DOT__mem_Rdata 
                                               >> 0xfU)))
                                 ? 0xffffffffffffULL
                                 : 0ULL)),48);
    tracep->fullIData(oldp+98,(vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U]),32);
    tracep->fullIData(oldp+99,(((vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U] 
                                 >> 0x1fU) ? 0xffffffffU
                                 : 0U)),32);
    tracep->fullIData(oldp+100,((IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata)),32);
    tracep->fullIData(oldp+101,(((1U & (IData)((vlSelf->Main__DOT__exu__DOT__mem_Rdata 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U)),32);
    tracep->fullBit(oldp+102,((1U & (IData)((vlSelf->Main__DOT__exu__DOT___AluOut_T_19 
                                             >> 0x3fU)))));
    tracep->fullBit(oldp+103,((1U & (IData)((vlSelf->Main__DOT__exu__DOT__AluSrc2 
                                             >> 0x3fU)))));
    tracep->fullBit(oldp+104,(vlSelf->Main__DOT__exu__DOT__SignU));
    tracep->fullBit(oldp+105,(vlSelf->Main__DOT__exu__DOT__SignS));
    tracep->fullBit(oldp+106,((0ULL == (((QData)((IData)(
                                                         vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U]))))));
    tracep->fullQData(oldp+107,(((1U & (IData)((vlSelf->Main__DOT__idu_io_Imm 
                                                >> 0x14U)))
                                  ? 0x7ffffffffffULL
                                  : 0ULL)),43);
    tracep->fullIData(oldp+109,((0x1fffffU & (IData)(vlSelf->Main__DOT__idu_io_Imm))),21);
    tracep->fullSData(oldp+110,((0x1fffU & (IData)(vlSelf->Main__DOT__idu_io_Imm))),13);
    tracep->fullQData(oldp+111,(((1U & (IData)((vlSelf->Main__DOT__idu_io_Imm 
                                                >> 0xcU)))
                                  ? 0x7ffffffffffffULL
                                  : 0ULL)),51);
    tracep->fullSData(oldp+113,(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_2),12);
    tracep->fullQData(oldp+114,(((0x800U & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_2))
                                  ? 0xfffffffffffffULL
                                  : 0ULL)),52);
    tracep->fullIData(oldp+116,(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_6),21);
    tracep->fullQData(oldp+117,(((0x100000U & vlSelf->Main__DOT__idu__DOT__io_Imm_lo_6)
                                  ? 0x7ffffffffffULL
                                  : 0ULL)),43);
    tracep->fullSData(oldp+119,(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8),13);
    tracep->fullQData(oldp+120,(((0x1000U & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8))
                                  ? 0x7ffffffffffffULL
                                  : 0ULL)),51);
    tracep->fullCData(oldp+122,(vlSelf->Main__DOT__idu__DOT__contr_code_2),2);
    tracep->fullCData(oldp+123,(vlSelf->Main__DOT__idu__DOT__contr_code_3),3);
    tracep->fullCData(oldp+124,(vlSelf->Main__DOT__idu__DOT__contr_code_5),4);
    tracep->fullQData(oldp+125,(vlSelf->Main__DOT__ifu__DOT__mem_Rdata),64);
    tracep->fullBit(oldp+127,(vlSelf->clock));
    tracep->fullBit(oldp+128,(vlSelf->reset));
    tracep->fullIData(oldp+129,(vlSelf->io_Inst),32);
    tracep->fullBit(oldp+130,(((0x17U != (0x7fU & vlSelf->io_Inst)) 
                               & ((0x3003U != (0x707fU 
                                               & vlSelf->io_Inst)) 
                                  & ((0x3023U == (0x707fU 
                                                  & vlSelf->io_Inst)) 
                                     | ((0x13U != (0x707fU 
                                                   & vlSelf->io_Inst)) 
                                        & ((0x33U != 
                                            (0xfe00707fU 
                                             & vlSelf->io_Inst)) 
                                           & ((0x1bU 
                                               != (0x707fU 
                                                   & vlSelf->io_Inst)) 
                                              & ((0x3bU 
                                                  != 
                                                  (0xfe00707fU 
                                                   & vlSelf->io_Inst)) 
                                                 & ((0x1033U 
                                                     != 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_Inst)) 
                                                    & (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_218)))))))))));
    tracep->fullCData(oldp+131,(((0x17U == (0x7fU & vlSelf->io_Inst))
                                  ? 0U : ((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->io_Inst))
                                           ? 0U : (
                                                   (0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0xffU
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x3bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x1033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x1013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x5033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x40005033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 0U
                                                             : 
                                                            ((0x40005013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 0U
                                                              : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_549))))))))))))))),8);
    tracep->fullCData(oldp+132,((0x1fU & (vlSelf->io_Inst 
                                          >> 7U))),5);
    tracep->fullCData(oldp+133,((0x1fU & (vlSelf->io_Inst 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+134,((0x1fU & (vlSelf->io_Inst 
                                          >> 0x14U))),5);
    tracep->fullQData(oldp+135,(((0x1fU == (0x1fU & 
                                            (vlSelf->io_Inst 
                                             >> 0x14U)))
                                  ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                  : vlSelf->Main__DOT__exu__DOT___GEN_62)),64);
    tracep->fullBit(oldp+137,((0x100073U == vlSelf->io_Inst)));
    tracep->fullCData(oldp+138,((0x7fU & vlSelf->io_Inst)),7);
    tracep->fullIData(oldp+139,((0xfffff000U & vlSelf->io_Inst)),32);
    tracep->fullIData(oldp+140,(((vlSelf->io_Inst >> 0x1fU)
                                  ? 0xffffffffU : 0U)),32);
    tracep->fullSData(oldp+141,((vlSelf->io_Inst >> 0x14U)),12);
    tracep->fullQData(oldp+142,(((vlSelf->io_Inst >> 0x1fU)
                                  ? 0xfffffffffffffULL
                                  : 0ULL)),52);
    tracep->fullQData(oldp+144,(0ULL),64);
    tracep->fullCData(oldp+146,(0U),8);
    tracep->fullBit(oldp+147,(0U));
}
