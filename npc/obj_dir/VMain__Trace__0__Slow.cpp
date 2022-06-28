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
    tracep->declBit(c+189,"clock", false,-1);
    tracep->declBit(c+190,"reset", false,-1);
    tracep->declBus(c+191,"io_Inst", false,-1, 31,0);
    tracep->pushNamePrefix("Main ");
    tracep->declBit(c+189,"clock", false,-1);
    tracep->declBit(c+190,"reset", false,-1);
    tracep->declBus(c+191,"io_Inst", false,-1, 31,0);
    tracep->declBit(c+189,"ifu_clock", false,-1);
    tracep->declBit(c+190,"ifu_reset", false,-1);
    tracep->declQuad(c+1,"ifu_io_ifu_data_in_Pc", false,-1, 63,0);
    tracep->declBus(c+3,"ifu_io_ifu_data_in_EXUClear", false,-1, 31,0);
    tracep->declBit(c+4,"ifu_io_ifu_data_in_IDUWait", false,-1);
    tracep->declBus(c+5,"ifu_io_ifu_data_out_Inst", false,-1, 31,0);
    tracep->declQuad(c+6,"ifu_io_ifu_data_out_PcVal", false,-1, 63,0);
    tracep->declBit(c+8,"ifu_io_ifu_data_out_IFUFlag", false,-1);
    tracep->declBit(c+189,"idu_clock", false,-1);
    tracep->declBit(c+190,"idu_reset", false,-1);
    tracep->declBit(c+9,"idu_io_idu_data_in_EXUClear", false,-1);
    tracep->declBit(c+4,"idu_io_idu_data_in_IDUWait", false,-1);
    tracep->declBus(c+5,"idu_io_ifu_data_in_Inst", false,-1, 31,0);
    tracep->declQuad(c+6,"idu_io_ifu_data_in_PcVal", false,-1, 63,0);
    tracep->declBit(c+8,"idu_io_ifu_data_in_IFUFlag", false,-1);
    tracep->declQuad(c+10,"idu_io_ifu_data_out_PcVal", false,-1, 63,0);
    tracep->declBus(c+12,"idu_io_idu_data_out_Rdest", false,-1, 4,0);
    tracep->declBus(c+13,"idu_io_idu_data_out_R1", false,-1, 4,0);
    tracep->declBus(c+14,"idu_io_idu_data_out_R2", false,-1, 4,0);
    tracep->declQuad(c+15,"idu_io_idu_data_out_Imm", false,-1, 63,0);
    tracep->declBit(c+17,"idu_io_idu_ctrl_out_RegWrite", false,-1);
    tracep->declBit(c+18,"idu_io_idu_ctrl_out_MemWrite", false,-1);
    tracep->declBus(c+19,"idu_io_idu_ctrl_out_AluOp", false,-1, 4,0);
    tracep->declBus(c+20,"idu_io_idu_ctrl_out_AluSrc1Op", false,-1, 4,0);
    tracep->declBus(c+21,"idu_io_idu_ctrl_out_AluSrc2Op", false,-1, 4,0);
    tracep->declBus(c+22,"idu_io_idu_ctrl_out_PcSrc", false,-1, 4,0);
    tracep->declBus(c+23,"idu_io_idu_ctrl_out_RinCtl", false,-1, 3,0);
    tracep->declBus(c+24,"idu_io_idu_ctrl_out_MemMask", false,-1, 7,0);
    tracep->declBit(c+25,"idu_io_idu_ctrl_out_EbreakIn", false,-1);
    tracep->declBit(c+26,"idu_io_idu_ctrl_out_IDUFlag", false,-1);
    tracep->declBit(c+189,"exu_clock", false,-1);
    tracep->declBit(c+190,"exu_reset", false,-1);
    tracep->declQuad(c+10,"exu_io_ifu_data_in_PcVal", false,-1, 63,0);
    tracep->declBus(c+12,"exu_io_idu_data_in_Rdest", false,-1, 4,0);
    tracep->declQuad(c+15,"exu_io_idu_data_in_Imm", false,-1, 63,0);
    tracep->declBit(c+17,"exu_io_idu_ctrl_in_RegWrite", false,-1);
    tracep->declBit(c+18,"exu_io_idu_ctrl_in_MemWrite", false,-1);
    tracep->declBus(c+19,"exu_io_idu_ctrl_in_AluOp", false,-1, 4,0);
    tracep->declBus(c+20,"exu_io_idu_ctrl_in_AluSrc1Op", false,-1, 4,0);
    tracep->declBus(c+21,"exu_io_idu_ctrl_in_AluSrc2Op", false,-1, 4,0);
    tracep->declBus(c+22,"exu_io_idu_ctrl_in_PcSrc", false,-1, 4,0);
    tracep->declBus(c+23,"exu_io_idu_ctrl_in_RinCtl", false,-1, 3,0);
    tracep->declBus(c+24,"exu_io_idu_ctrl_in_MemMask", false,-1, 7,0);
    tracep->declBit(c+25,"exu_io_idu_ctrl_in_EbreakIn", false,-1);
    tracep->declBit(c+26,"exu_io_idu_ctrl_in_IDUFlag", false,-1);
    tracep->declQuad(c+27,"exu_io_exu_data_in_DataR1", false,-1, 63,0);
    tracep->declQuad(c+29,"exu_io_exu_data_in_DataR2", false,-1, 63,0);
    tracep->declBit(c+4,"exu_io_exu_data_in_IDUWait", false,-1);
    tracep->declQuad(c+31,"exu_io_ifu_data_out_PcVal", false,-1, 63,0);
    tracep->declBus(c+33,"exu_io_idu_data_out_Rdest", false,-1, 4,0);
    tracep->declBit(c+34,"exu_io_idu_ctrl_out_RegWrite", false,-1);
    tracep->declBit(c+35,"exu_io_idu_ctrl_out_MemWrite", false,-1);
    tracep->declBus(c+36,"exu_io_idu_ctrl_out_RinCtl", false,-1, 3,0);
    tracep->declBus(c+37,"exu_io_idu_ctrl_out_MemMask", false,-1, 7,0);
    tracep->declBit(c+38,"exu_io_idu_ctrl_out_EbreakIn", false,-1);
    tracep->declQuad(c+39,"exu_io_exu_data_out_DataR2", false,-1, 63,0);
    tracep->declBit(c+41,"exu_io_exu_data_out_Zero", false,-1);
    tracep->declBit(c+42,"exu_io_exu_data_out_SignU", false,-1);
    tracep->declBit(c+43,"exu_io_exu_data_out_SignS", false,-1);
    tracep->declQuad(c+44,"exu_io_exu_data_out_AluOut", false,-1, 63,0);
    tracep->declBit(c+46,"exu_io_exu_data_out_EXUFlag", false,-1);
    tracep->declBit(c+9,"exu_io_exu_ctrl_out_EXUClear", false,-1);
    tracep->declQuad(c+47,"exu_io_exu_ctrl_out_EXUPc", false,-1, 63,0);
    tracep->declBit(c+189,"memu_clock", false,-1);
    tracep->declBit(c+190,"memu_reset", false,-1);
    tracep->declQuad(c+31,"memu_io_ifu_data_in_PcVal", false,-1, 63,0);
    tracep->declBus(c+33,"memu_io_idu_data_in_Rdest", false,-1, 4,0);
    tracep->declBit(c+34,"memu_io_idu_ctrl_in_RegWrite", false,-1);
    tracep->declBit(c+35,"memu_io_idu_ctrl_in_MemWrite", false,-1);
    tracep->declBus(c+36,"memu_io_idu_ctrl_in_RinCtl", false,-1, 3,0);
    tracep->declBus(c+37,"memu_io_idu_ctrl_in_MemMask", false,-1, 7,0);
    tracep->declBit(c+38,"memu_io_idu_ctrl_in_EbreakIn", false,-1);
    tracep->declQuad(c+39,"memu_io_exu_data_in_DataR2", false,-1, 63,0);
    tracep->declBit(c+41,"memu_io_exu_data_in_Zero", false,-1);
    tracep->declBit(c+42,"memu_io_exu_data_in_SignU", false,-1);
    tracep->declBit(c+43,"memu_io_exu_data_in_SignS", false,-1);
    tracep->declQuad(c+44,"memu_io_exu_data_in_AluOut", false,-1, 63,0);
    tracep->declBit(c+46,"memu_io_exu_data_in_EXUFlag", false,-1);
    tracep->declQuad(c+49,"memu_io_ifu_data_out_PcVal", false,-1, 63,0);
    tracep->declBus(c+51,"memu_io_idu_data_out_Rdest", false,-1, 4,0);
    tracep->declBit(c+52,"memu_io_idu_ctrl_out_RegWrite", false,-1);
    tracep->declBus(c+53,"memu_io_idu_ctrl_out_RinCtl", false,-1, 3,0);
    tracep->declBit(c+54,"memu_io_idu_ctrl_out_EbreakIn", false,-1);
    tracep->declBit(c+55,"memu_io_exu_data_out_Zero", false,-1);
    tracep->declBit(c+56,"memu_io_exu_data_out_SignU", false,-1);
    tracep->declBit(c+57,"memu_io_exu_data_out_SignS", false,-1);
    tracep->declQuad(c+58,"memu_io_exu_data_out_AluOut", false,-1, 63,0);
    tracep->declBit(c+60,"memu_io_memu_data_out_MEMUFlag", false,-1);
    tracep->declQuad(c+61,"memu_io_memu_data_out_MemOut", false,-1, 63,0);
    tracep->declBit(c+189,"wbu_clock", false,-1);
    tracep->declBit(c+190,"wbu_reset", false,-1);
    tracep->declQuad(c+49,"wbu_io_ifu_data_in_PcVal", false,-1, 63,0);
    tracep->declBus(c+51,"wbu_io_idu_data_in_Rdest", false,-1, 4,0);
    tracep->declBit(c+52,"wbu_io_idu_ctrl_in_RegWrite", false,-1);
    tracep->declBus(c+53,"wbu_io_idu_ctrl_in_RinCtl", false,-1, 3,0);
    tracep->declBit(c+54,"wbu_io_idu_ctrl_in_EbreakIn", false,-1);
    tracep->declBit(c+55,"wbu_io_exu_data_in_Zero", false,-1);
    tracep->declBit(c+56,"wbu_io_exu_data_in_SignU", false,-1);
    tracep->declBit(c+57,"wbu_io_exu_data_in_SignS", false,-1);
    tracep->declQuad(c+58,"wbu_io_exu_data_in_AluOut", false,-1, 63,0);
    tracep->declBit(c+60,"wbu_io_memu_data_in_MEMUFlag", false,-1);
    tracep->declQuad(c+61,"wbu_io_memu_data_in_MemOut", false,-1, 63,0);
    tracep->declBit(c+63,"wbu_io_wbu_data_out_RegWriteOut", false,-1);
    tracep->declQuad(c+64,"wbu_io_wbu_data_out_DataIn", false,-1, 63,0);
    tracep->declBus(c+51,"wbu_io_wbu_data_out_RdestOut", false,-1, 4,0);
    tracep->declQuad(c+66,"wbu_io_wbu_data_out_PcVal", false,-1, 63,0);
    tracep->declBit(c+189,"regs_clock", false,-1);
    tracep->declBit(c+190,"regs_reset", false,-1);
    tracep->declQuad(c+66,"regs_io_Pc", false,-1, 63,0);
    tracep->declBus(c+13,"regs_io_R1", false,-1, 4,0);
    tracep->declBus(c+14,"regs_io_R2", false,-1, 4,0);
    tracep->declBus(c+51,"regs_io_Rdest", false,-1, 4,0);
    tracep->declQuad(c+64,"regs_io_DataIn", false,-1, 63,0);
    tracep->declBit(c+63,"regs_io_RegWrite", false,-1);
    tracep->declQuad(c+27,"regs_io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+29,"regs_io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+1,"pc", false,-1, 63,0);
    tracep->declBit(c+68,"IDUWait", false,-1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+189,"clock", false,-1);
    tracep->declBit(c+190,"reset", false,-1);
    tracep->declQuad(c+10,"io_ifu_data_in_PcVal", false,-1, 63,0);
    tracep->declBus(c+12,"io_idu_data_in_Rdest", false,-1, 4,0);
    tracep->declQuad(c+15,"io_idu_data_in_Imm", false,-1, 63,0);
    tracep->declBit(c+17,"io_idu_ctrl_in_RegWrite", false,-1);
    tracep->declBit(c+18,"io_idu_ctrl_in_MemWrite", false,-1);
    tracep->declBus(c+19,"io_idu_ctrl_in_AluOp", false,-1, 4,0);
    tracep->declBus(c+20,"io_idu_ctrl_in_AluSrc1Op", false,-1, 4,0);
    tracep->declBus(c+21,"io_idu_ctrl_in_AluSrc2Op", false,-1, 4,0);
    tracep->declBus(c+22,"io_idu_ctrl_in_PcSrc", false,-1, 4,0);
    tracep->declBus(c+23,"io_idu_ctrl_in_RinCtl", false,-1, 3,0);
    tracep->declBus(c+24,"io_idu_ctrl_in_MemMask", false,-1, 7,0);
    tracep->declBit(c+25,"io_idu_ctrl_in_EbreakIn", false,-1);
    tracep->declBit(c+26,"io_idu_ctrl_in_IDUFlag", false,-1);
    tracep->declQuad(c+27,"io_exu_data_in_DataR1", false,-1, 63,0);
    tracep->declQuad(c+29,"io_exu_data_in_DataR2", false,-1, 63,0);
    tracep->declBit(c+4,"io_exu_data_in_IDUWait", false,-1);
    tracep->declQuad(c+31,"io_ifu_data_out_PcVal", false,-1, 63,0);
    tracep->declBus(c+33,"io_idu_data_out_Rdest", false,-1, 4,0);
    tracep->declBit(c+34,"io_idu_ctrl_out_RegWrite", false,-1);
    tracep->declBit(c+35,"io_idu_ctrl_out_MemWrite", false,-1);
    tracep->declBus(c+36,"io_idu_ctrl_out_RinCtl", false,-1, 3,0);
    tracep->declBus(c+37,"io_idu_ctrl_out_MemMask", false,-1, 7,0);
    tracep->declBit(c+38,"io_idu_ctrl_out_EbreakIn", false,-1);
    tracep->declQuad(c+39,"io_exu_data_out_DataR2", false,-1, 63,0);
    tracep->declBit(c+41,"io_exu_data_out_Zero", false,-1);
    tracep->declBit(c+42,"io_exu_data_out_SignU", false,-1);
    tracep->declBit(c+43,"io_exu_data_out_SignS", false,-1);
    tracep->declQuad(c+44,"io_exu_data_out_AluOut", false,-1, 63,0);
    tracep->declBit(c+46,"io_exu_data_out_EXUFlag", false,-1);
    tracep->declBit(c+9,"io_exu_ctrl_out_EXUClear", false,-1);
    tracep->declQuad(c+47,"io_exu_ctrl_out_EXUPc", false,-1, 63,0);
    tracep->declQuad(c+31,"ifu_data_reg_PcVal", false,-1, 63,0);
    tracep->declBus(c+33,"idu_data_reg_Rdest", false,-1, 4,0);
    tracep->declBit(c+34,"idu_ctrl_reg_RegWrite", false,-1);
    tracep->declBit(c+35,"idu_ctrl_reg_MemWrite", false,-1);
    tracep->declBus(c+36,"idu_ctrl_reg_RinCtl", false,-1, 3,0);
    tracep->declBus(c+37,"idu_ctrl_reg_MemMask", false,-1, 7,0);
    tracep->declBit(c+38,"idu_ctrl_reg_EbreakIn", false,-1);
    tracep->declQuad(c+39,"exu_data_reg_DataR2", false,-1, 63,0);
    tracep->declBit(c+41,"exu_data_reg_Zero", false,-1);
    tracep->declBit(c+42,"exu_data_reg_SignU", false,-1);
    tracep->declBit(c+43,"exu_data_reg_SignS", false,-1);
    tracep->declQuad(c+44,"exu_data_reg_AluOut", false,-1, 63,0);
    tracep->declBit(c+46,"exu_data_reg_EXUFlag", false,-1);
    tracep->declQuad(c+69,"AluSrc1", false,-1, 63,0);
    tracep->declQuad(c+71,"AluSrc2", false,-1, 63,0);
    tracep->declQuad(c+73,"AluOutTmp", false,-1, 63,0);
    tracep->declBit(c+75,"ZeroTmp", false,-1);
    tracep->declBit(c+76,"SignSTmp_hi", false,-1);
    tracep->declBit(c+77,"SignSTmp_lo", false,-1);
    tracep->declBit(c+78,"SignSTmp", false,-1);
    tracep->declBit(c+79,"SignUTmp", false,-1);
    tracep->declBus(c+80,"io_exu_ctrl_out_EXUPc_lo", false,-1, 20,0);
    tracep->declQuad(c+81,"io_exu_ctrl_out_EXUPc_hi", false,-1, 42,0);
    tracep->declBus(c+83,"io_exu_ctrl_out_EXUPc_lo_1", false,-1, 12,0);
    tracep->declQuad(c+84,"io_exu_ctrl_out_EXUPc_hi_1", false,-1, 50,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+189,"clock", false,-1);
    tracep->declBit(c+190,"reset", false,-1);
    tracep->declBit(c+9,"io_idu_data_in_EXUClear", false,-1);
    tracep->declBit(c+4,"io_idu_data_in_IDUWait", false,-1);
    tracep->declBus(c+5,"io_ifu_data_in_Inst", false,-1, 31,0);
    tracep->declQuad(c+6,"io_ifu_data_in_PcVal", false,-1, 63,0);
    tracep->declBit(c+8,"io_ifu_data_in_IFUFlag", false,-1);
    tracep->declQuad(c+10,"io_ifu_data_out_PcVal", false,-1, 63,0);
    tracep->declBus(c+12,"io_idu_data_out_Rdest", false,-1, 4,0);
    tracep->declBus(c+13,"io_idu_data_out_R1", false,-1, 4,0);
    tracep->declBus(c+14,"io_idu_data_out_R2", false,-1, 4,0);
    tracep->declQuad(c+15,"io_idu_data_out_Imm", false,-1, 63,0);
    tracep->declBit(c+17,"io_idu_ctrl_out_RegWrite", false,-1);
    tracep->declBit(c+18,"io_idu_ctrl_out_MemWrite", false,-1);
    tracep->declBus(c+19,"io_idu_ctrl_out_AluOp", false,-1, 4,0);
    tracep->declBus(c+20,"io_idu_ctrl_out_AluSrc1Op", false,-1, 4,0);
    tracep->declBus(c+21,"io_idu_ctrl_out_AluSrc2Op", false,-1, 4,0);
    tracep->declBus(c+22,"io_idu_ctrl_out_PcSrc", false,-1, 4,0);
    tracep->declBus(c+23,"io_idu_ctrl_out_RinCtl", false,-1, 3,0);
    tracep->declBus(c+24,"io_idu_ctrl_out_MemMask", false,-1, 7,0);
    tracep->declBit(c+25,"io_idu_ctrl_out_EbreakIn", false,-1);
    tracep->declBit(c+26,"io_idu_ctrl_out_IDUFlag", false,-1);
    tracep->declQuad(c+10,"ifu_data_reg_PcVal", false,-1, 63,0);
    tracep->declBus(c+12,"idu_data_reg_Rdest", false,-1, 4,0);
    tracep->declBus(c+13,"idu_data_reg_R1", false,-1, 4,0);
    tracep->declBus(c+14,"idu_data_reg_R2", false,-1, 4,0);
    tracep->declQuad(c+15,"idu_data_reg_Imm", false,-1, 63,0);
    tracep->declBit(c+17,"idu_ctrl_reg_RegWrite", false,-1);
    tracep->declBit(c+18,"idu_ctrl_reg_MemWrite", false,-1);
    tracep->declBus(c+19,"idu_ctrl_reg_AluOp", false,-1, 4,0);
    tracep->declBus(c+20,"idu_ctrl_reg_AluSrc1Op", false,-1, 4,0);
    tracep->declBus(c+21,"idu_ctrl_reg_AluSrc2Op", false,-1, 4,0);
    tracep->declBus(c+22,"idu_ctrl_reg_PcSrc", false,-1, 4,0);
    tracep->declBus(c+23,"idu_ctrl_reg_RinCtl", false,-1, 3,0);
    tracep->declBus(c+24,"idu_ctrl_reg_MemMask", false,-1, 7,0);
    tracep->declBit(c+25,"idu_ctrl_reg_EbreakIn", false,-1);
    tracep->declBit(c+26,"idu_ctrl_reg_IDUFlag", false,-1);
    tracep->declBus(c+86,"opcode", false,-1, 6,0);
    tracep->declBus(c+87,"idu_data_reg_Imm_lo", false,-1, 31,0);
    tracep->declBus(c+88,"idu_data_reg_Imm_hi", false,-1, 31,0);
    tracep->declBus(c+89,"idu_data_reg_Imm_lo_1", false,-1, 11,0);
    tracep->declQuad(c+90,"idu_data_reg_Imm_hi_1", false,-1, 51,0);
    tracep->declBus(c+92,"idu_data_reg_Imm_lo_2", false,-1, 11,0);
    tracep->declQuad(c+93,"idu_data_reg_Imm_hi_2", false,-1, 51,0);
    tracep->declBus(c+95,"idu_data_reg_Imm_lo_6", false,-1, 20,0);
    tracep->declQuad(c+96,"idu_data_reg_Imm_hi_6", false,-1, 42,0);
    tracep->declBus(c+98,"idu_data_reg_Imm_lo_8", false,-1, 12,0);
    tracep->declQuad(c+99,"idu_data_reg_Imm_hi_8", false,-1, 50,0);
    tracep->declBit(c+101,"contr_code_0", false,-1);
    tracep->declBus(c+102,"contr_code_2", false,-1, 1,0);
    tracep->declBus(c+103,"contr_code_3", false,-1, 2,0);
    tracep->declBus(c+104,"contr_code_5", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+189,"clock", false,-1);
    tracep->declBit(c+190,"reset", false,-1);
    tracep->declQuad(c+1,"io_ifu_data_in_Pc", false,-1, 63,0);
    tracep->declBus(c+3,"io_ifu_data_in_EXUClear", false,-1, 31,0);
    tracep->declBit(c+4,"io_ifu_data_in_IDUWait", false,-1);
    tracep->declBus(c+5,"io_ifu_data_out_Inst", false,-1, 31,0);
    tracep->declQuad(c+6,"io_ifu_data_out_PcVal", false,-1, 63,0);
    tracep->declBit(c+8,"io_ifu_data_out_IFUFlag", false,-1);
    tracep->declQuad(c+1,"mem_Raddr", false,-1, 63,0);
    tracep->declQuad(c+105,"mem_Rdata", false,-1, 63,0);
    tracep->declQuad(c+192,"mem_Waddr", false,-1, 63,0);
    tracep->declQuad(c+192,"mem_Wdata", false,-1, 63,0);
    tracep->declBus(c+194,"mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+195,"mem_MemWrite", false,-1);
    tracep->declBus(c+5,"ifu_data_reg_Inst", false,-1, 31,0);
    tracep->declQuad(c+6,"ifu_data_reg_PcVal", false,-1, 63,0);
    tracep->declBit(c+8,"ifu_data_reg_IFUFlag", false,-1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+1,"Raddr", false,-1, 63,0);
    tracep->declQuad(c+192,"Waddr", false,-1, 63,0);
    tracep->declQuad(c+192,"Wdata", false,-1, 63,0);
    tracep->declBus(c+194,"Wmask", false,-1, 7,0);
    tracep->declBit(c+195,"MemWrite", false,-1);
    tracep->declQuad(c+105,"Rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memu ");
    tracep->declBit(c+189,"clock", false,-1);
    tracep->declBit(c+190,"reset", false,-1);
    tracep->declQuad(c+31,"io_ifu_data_in_PcVal", false,-1, 63,0);
    tracep->declBus(c+33,"io_idu_data_in_Rdest", false,-1, 4,0);
    tracep->declBit(c+34,"io_idu_ctrl_in_RegWrite", false,-1);
    tracep->declBit(c+35,"io_idu_ctrl_in_MemWrite", false,-1);
    tracep->declBus(c+36,"io_idu_ctrl_in_RinCtl", false,-1, 3,0);
    tracep->declBus(c+37,"io_idu_ctrl_in_MemMask", false,-1, 7,0);
    tracep->declBit(c+38,"io_idu_ctrl_in_EbreakIn", false,-1);
    tracep->declQuad(c+39,"io_exu_data_in_DataR2", false,-1, 63,0);
    tracep->declBit(c+41,"io_exu_data_in_Zero", false,-1);
    tracep->declBit(c+42,"io_exu_data_in_SignU", false,-1);
    tracep->declBit(c+43,"io_exu_data_in_SignS", false,-1);
    tracep->declQuad(c+44,"io_exu_data_in_AluOut", false,-1, 63,0);
    tracep->declBit(c+46,"io_exu_data_in_EXUFlag", false,-1);
    tracep->declQuad(c+49,"io_ifu_data_out_PcVal", false,-1, 63,0);
    tracep->declBus(c+51,"io_idu_data_out_Rdest", false,-1, 4,0);
    tracep->declBit(c+52,"io_idu_ctrl_out_RegWrite", false,-1);
    tracep->declBus(c+53,"io_idu_ctrl_out_RinCtl", false,-1, 3,0);
    tracep->declBit(c+54,"io_idu_ctrl_out_EbreakIn", false,-1);
    tracep->declBit(c+55,"io_exu_data_out_Zero", false,-1);
    tracep->declBit(c+56,"io_exu_data_out_SignU", false,-1);
    tracep->declBit(c+57,"io_exu_data_out_SignS", false,-1);
    tracep->declQuad(c+58,"io_exu_data_out_AluOut", false,-1, 63,0);
    tracep->declBit(c+60,"io_memu_data_out_MEMUFlag", false,-1);
    tracep->declQuad(c+61,"io_memu_data_out_MemOut", false,-1, 63,0);
    tracep->declQuad(c+44,"mem_Raddr", false,-1, 63,0);
    tracep->declQuad(c+107,"mem_Rdata", false,-1, 63,0);
    tracep->declQuad(c+44,"mem_Waddr", false,-1, 63,0);
    tracep->declQuad(c+39,"mem_Wdata", false,-1, 63,0);
    tracep->declBus(c+37,"mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+109,"mem_MemWrite", false,-1);
    tracep->declQuad(c+49,"ifu_data_reg_PcVal", false,-1, 63,0);
    tracep->declBus(c+51,"idu_data_reg_Rdest", false,-1, 4,0);
    tracep->declBit(c+52,"idu_ctrl_reg_RegWrite", false,-1);
    tracep->declBus(c+53,"idu_ctrl_reg_RinCtl", false,-1, 3,0);
    tracep->declBit(c+54,"idu_ctrl_reg_EbreakIn", false,-1);
    tracep->declBit(c+55,"exu_data_reg_Zero", false,-1);
    tracep->declBit(c+56,"exu_data_reg_SignU", false,-1);
    tracep->declBit(c+57,"exu_data_reg_SignS", false,-1);
    tracep->declQuad(c+58,"exu_data_reg_AluOut", false,-1, 63,0);
    tracep->declBit(c+60,"memu_data_reg_MEMUFlag", false,-1);
    tracep->declQuad(c+61,"memu_data_reg_MemOut", false,-1, 63,0);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+44,"Raddr", false,-1, 63,0);
    tracep->declQuad(c+44,"Waddr", false,-1, 63,0);
    tracep->declQuad(c+39,"Wdata", false,-1, 63,0);
    tracep->declBus(c+37,"Wmask", false,-1, 7,0);
    tracep->declBit(c+109,"MemWrite", false,-1);
    tracep->declQuad(c+107,"Rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regs ");
    tracep->declBit(c+189,"clock", false,-1);
    tracep->declBit(c+190,"reset", false,-1);
    tracep->declQuad(c+66,"io_Pc", false,-1, 63,0);
    tracep->declBus(c+13,"io_R1", false,-1, 4,0);
    tracep->declBus(c+14,"io_R2", false,-1, 4,0);
    tracep->declBus(c+51,"io_Rdest", false,-1, 4,0);
    tracep->declQuad(c+64,"io_DataIn", false,-1, 63,0);
    tracep->declBit(c+63,"io_RegWrite", false,-1);
    tracep->declQuad(c+27,"io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+29,"io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+192,"difftest_gpr_0", false,-1, 63,0);
    tracep->declQuad(c+110,"difftest_gpr_1", false,-1, 63,0);
    tracep->declQuad(c+112,"difftest_gpr_2", false,-1, 63,0);
    tracep->declQuad(c+114,"difftest_gpr_3", false,-1, 63,0);
    tracep->declQuad(c+116,"difftest_gpr_4", false,-1, 63,0);
    tracep->declQuad(c+118,"difftest_gpr_5", false,-1, 63,0);
    tracep->declQuad(c+120,"difftest_gpr_6", false,-1, 63,0);
    tracep->declQuad(c+122,"difftest_gpr_7", false,-1, 63,0);
    tracep->declQuad(c+124,"difftest_gpr_8", false,-1, 63,0);
    tracep->declQuad(c+126,"difftest_gpr_9", false,-1, 63,0);
    tracep->declQuad(c+128,"difftest_gpr_10", false,-1, 63,0);
    tracep->declQuad(c+130,"difftest_gpr_11", false,-1, 63,0);
    tracep->declQuad(c+132,"difftest_gpr_12", false,-1, 63,0);
    tracep->declQuad(c+134,"difftest_gpr_13", false,-1, 63,0);
    tracep->declQuad(c+136,"difftest_gpr_14", false,-1, 63,0);
    tracep->declQuad(c+138,"difftest_gpr_15", false,-1, 63,0);
    tracep->declQuad(c+140,"difftest_gpr_16", false,-1, 63,0);
    tracep->declQuad(c+142,"difftest_gpr_17", false,-1, 63,0);
    tracep->declQuad(c+144,"difftest_gpr_18", false,-1, 63,0);
    tracep->declQuad(c+146,"difftest_gpr_19", false,-1, 63,0);
    tracep->declQuad(c+148,"difftest_gpr_20", false,-1, 63,0);
    tracep->declQuad(c+150,"difftest_gpr_21", false,-1, 63,0);
    tracep->declQuad(c+152,"difftest_gpr_22", false,-1, 63,0);
    tracep->declQuad(c+154,"difftest_gpr_23", false,-1, 63,0);
    tracep->declQuad(c+156,"difftest_gpr_24", false,-1, 63,0);
    tracep->declQuad(c+158,"difftest_gpr_25", false,-1, 63,0);
    tracep->declQuad(c+160,"difftest_gpr_26", false,-1, 63,0);
    tracep->declQuad(c+162,"difftest_gpr_27", false,-1, 63,0);
    tracep->declQuad(c+164,"difftest_gpr_28", false,-1, 63,0);
    tracep->declQuad(c+166,"difftest_gpr_29", false,-1, 63,0);
    tracep->declQuad(c+168,"difftest_gpr_30", false,-1, 63,0);
    tracep->declQuad(c+170,"difftest_gpr_31", false,-1, 63,0);
    tracep->declQuad(c+66,"difftest_PcVal", false,-1, 63,0);
    tracep->declQuad(c+110,"Regs_1", false,-1, 63,0);
    tracep->declQuad(c+112,"Regs_2", false,-1, 63,0);
    tracep->declQuad(c+114,"Regs_3", false,-1, 63,0);
    tracep->declQuad(c+116,"Regs_4", false,-1, 63,0);
    tracep->declQuad(c+118,"Regs_5", false,-1, 63,0);
    tracep->declQuad(c+120,"Regs_6", false,-1, 63,0);
    tracep->declQuad(c+122,"Regs_7", false,-1, 63,0);
    tracep->declQuad(c+124,"Regs_8", false,-1, 63,0);
    tracep->declQuad(c+126,"Regs_9", false,-1, 63,0);
    tracep->declQuad(c+128,"Regs_10", false,-1, 63,0);
    tracep->declQuad(c+130,"Regs_11", false,-1, 63,0);
    tracep->declQuad(c+132,"Regs_12", false,-1, 63,0);
    tracep->declQuad(c+134,"Regs_13", false,-1, 63,0);
    tracep->declQuad(c+136,"Regs_14", false,-1, 63,0);
    tracep->declQuad(c+138,"Regs_15", false,-1, 63,0);
    tracep->declQuad(c+140,"Regs_16", false,-1, 63,0);
    tracep->declQuad(c+142,"Regs_17", false,-1, 63,0);
    tracep->declQuad(c+144,"Regs_18", false,-1, 63,0);
    tracep->declQuad(c+146,"Regs_19", false,-1, 63,0);
    tracep->declQuad(c+148,"Regs_20", false,-1, 63,0);
    tracep->declQuad(c+150,"Regs_21", false,-1, 63,0);
    tracep->declQuad(c+152,"Regs_22", false,-1, 63,0);
    tracep->declQuad(c+154,"Regs_23", false,-1, 63,0);
    tracep->declQuad(c+156,"Regs_24", false,-1, 63,0);
    tracep->declQuad(c+158,"Regs_25", false,-1, 63,0);
    tracep->declQuad(c+160,"Regs_26", false,-1, 63,0);
    tracep->declQuad(c+162,"Regs_27", false,-1, 63,0);
    tracep->declQuad(c+164,"Regs_28", false,-1, 63,0);
    tracep->declQuad(c+166,"Regs_29", false,-1, 63,0);
    tracep->declQuad(c+168,"Regs_30", false,-1, 63,0);
    tracep->declQuad(c+170,"Regs_31", false,-1, 63,0);
    tracep->pushNamePrefix("difftest ");
    tracep->declQuad(c+192,"gpr_0", false,-1, 63,0);
    tracep->declQuad(c+110,"gpr_1", false,-1, 63,0);
    tracep->declQuad(c+112,"gpr_2", false,-1, 63,0);
    tracep->declQuad(c+114,"gpr_3", false,-1, 63,0);
    tracep->declQuad(c+116,"gpr_4", false,-1, 63,0);
    tracep->declQuad(c+118,"gpr_5", false,-1, 63,0);
    tracep->declQuad(c+120,"gpr_6", false,-1, 63,0);
    tracep->declQuad(c+122,"gpr_7", false,-1, 63,0);
    tracep->declQuad(c+124,"gpr_8", false,-1, 63,0);
    tracep->declQuad(c+126,"gpr_9", false,-1, 63,0);
    tracep->declQuad(c+128,"gpr_10", false,-1, 63,0);
    tracep->declQuad(c+130,"gpr_11", false,-1, 63,0);
    tracep->declQuad(c+132,"gpr_12", false,-1, 63,0);
    tracep->declQuad(c+134,"gpr_13", false,-1, 63,0);
    tracep->declQuad(c+136,"gpr_14", false,-1, 63,0);
    tracep->declQuad(c+138,"gpr_15", false,-1, 63,0);
    tracep->declQuad(c+140,"gpr_16", false,-1, 63,0);
    tracep->declQuad(c+142,"gpr_17", false,-1, 63,0);
    tracep->declQuad(c+144,"gpr_18", false,-1, 63,0);
    tracep->declQuad(c+146,"gpr_19", false,-1, 63,0);
    tracep->declQuad(c+148,"gpr_20", false,-1, 63,0);
    tracep->declQuad(c+150,"gpr_21", false,-1, 63,0);
    tracep->declQuad(c+152,"gpr_22", false,-1, 63,0);
    tracep->declQuad(c+154,"gpr_23", false,-1, 63,0);
    tracep->declQuad(c+156,"gpr_24", false,-1, 63,0);
    tracep->declQuad(c+158,"gpr_25", false,-1, 63,0);
    tracep->declQuad(c+160,"gpr_26", false,-1, 63,0);
    tracep->declQuad(c+162,"gpr_27", false,-1, 63,0);
    tracep->declQuad(c+164,"gpr_28", false,-1, 63,0);
    tracep->declQuad(c+166,"gpr_29", false,-1, 63,0);
    tracep->declQuad(c+168,"gpr_30", false,-1, 63,0);
    tracep->declQuad(c+170,"gpr_31", false,-1, 63,0);
    tracep->declQuad(c+66,"PcVal", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+189,"clock", false,-1);
    tracep->declBit(c+190,"reset", false,-1);
    tracep->declQuad(c+49,"io_ifu_data_in_PcVal", false,-1, 63,0);
    tracep->declBus(c+51,"io_idu_data_in_Rdest", false,-1, 4,0);
    tracep->declBit(c+52,"io_idu_ctrl_in_RegWrite", false,-1);
    tracep->declBus(c+53,"io_idu_ctrl_in_RinCtl", false,-1, 3,0);
    tracep->declBit(c+54,"io_idu_ctrl_in_EbreakIn", false,-1);
    tracep->declBit(c+55,"io_exu_data_in_Zero", false,-1);
    tracep->declBit(c+56,"io_exu_data_in_SignU", false,-1);
    tracep->declBit(c+57,"io_exu_data_in_SignS", false,-1);
    tracep->declQuad(c+58,"io_exu_data_in_AluOut", false,-1, 63,0);
    tracep->declBit(c+60,"io_memu_data_in_MEMUFlag", false,-1);
    tracep->declQuad(c+61,"io_memu_data_in_MemOut", false,-1, 63,0);
    tracep->declBit(c+63,"io_wbu_data_out_RegWriteOut", false,-1);
    tracep->declQuad(c+64,"io_wbu_data_out_DataIn", false,-1, 63,0);
    tracep->declBus(c+51,"io_wbu_data_out_RdestOut", false,-1, 4,0);
    tracep->declQuad(c+66,"io_wbu_data_out_PcVal", false,-1, 63,0);
    tracep->declBit(c+172,"ebreak_ebreak_in", false,-1);
    tracep->declQuad(c+66,"PcValReg", false,-1, 63,0);
    tracep->declBus(c+173,"io_wbu_data_out_DataIn_lo", false,-1, 7,0);
    tracep->declQuad(c+174,"io_wbu_data_out_DataIn_hi", false,-1, 55,0);
    tracep->declBus(c+176,"io_wbu_data_out_DataIn_lo_1", false,-1, 7,0);
    tracep->declQuad(c+177,"io_wbu_data_out_DataIn_hi_1", false,-1, 55,0);
    tracep->declBus(c+179,"io_wbu_data_out_DataIn_lo_2", false,-1, 15,0);
    tracep->declQuad(c+180,"io_wbu_data_out_DataIn_hi_2", false,-1, 47,0);
    tracep->declBus(c+182,"io_wbu_data_out_DataIn_lo_3", false,-1, 15,0);
    tracep->declQuad(c+183,"io_wbu_data_out_DataIn_hi_3", false,-1, 47,0);
    tracep->declBus(c+185,"io_wbu_data_out_DataIn_lo_4", false,-1, 31,0);
    tracep->declBus(c+186,"io_wbu_data_out_DataIn_hi_4", false,-1, 31,0);
    tracep->declBus(c+187,"io_wbu_data_out_DataIn_lo_5", false,-1, 31,0);
    tracep->declBus(c+188,"io_wbu_data_out_DataIn_hi_5", false,-1, 31,0);
    tracep->pushNamePrefix("ebreak ");
    tracep->declBit(c+172,"ebreak_in", false,-1);
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
    tracep->fullQData(oldp+1,(vlSelf->Main__DOT__pc),64);
    tracep->fullIData(oldp+3,(vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUClear),32);
    tracep->fullBit(oldp+4,(vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait));
    tracep->fullIData(oldp+5,(vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst),32);
    tracep->fullQData(oldp+6,(vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_PcVal),64);
    tracep->fullBit(oldp+8,(vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_IFUFlag));
    tracep->fullBit(oldp+9,(vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUClear));
    tracep->fullQData(oldp+10,(vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal),64);
    tracep->fullCData(oldp+12,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Rdest),5);
    tracep->fullCData(oldp+13,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1),5);
    tracep->fullCData(oldp+14,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2),5);
    tracep->fullQData(oldp+15,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm),64);
    tracep->fullBit(oldp+17,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_RegWrite));
    tracep->fullBit(oldp+18,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_MemWrite));
    tracep->fullCData(oldp+19,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp),5);
    tracep->fullCData(oldp+20,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op),5);
    tracep->fullCData(oldp+21,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op),5);
    tracep->fullCData(oldp+22,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc),5);
    tracep->fullCData(oldp+23,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_RinCtl),4);
    tracep->fullCData(oldp+24,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_MemMask),8);
    tracep->fullBit(oldp+25,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_EbreakIn));
    tracep->fullBit(oldp+26,(vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_IDUFlag));
    tracep->fullQData(oldp+27,(vlSelf->Main__DOT__regs_io_DataR1),64);
    tracep->fullQData(oldp+29,(vlSelf->Main__DOT__regs_io_DataR2),64);
    tracep->fullQData(oldp+31,(vlSelf->Main__DOT__exu__DOT__ifu_data_reg_PcVal),64);
    tracep->fullCData(oldp+33,(vlSelf->Main__DOT__exu__DOT__idu_data_reg_Rdest),5);
    tracep->fullBit(oldp+34,(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_RegWrite));
    tracep->fullBit(oldp+35,(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_MemWrite));
    tracep->fullCData(oldp+36,(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_RinCtl),4);
    tracep->fullCData(oldp+37,(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_MemMask),8);
    tracep->fullBit(oldp+38,(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_EbreakIn));
    tracep->fullQData(oldp+39,(vlSelf->Main__DOT__exu__DOT__exu_data_reg_DataR2),64);
    tracep->fullBit(oldp+41,(vlSelf->Main__DOT__exu__DOT__exu_data_reg_Zero));
    tracep->fullBit(oldp+42,(vlSelf->Main__DOT__exu__DOT__exu_data_reg_SignU));
    tracep->fullBit(oldp+43,(vlSelf->Main__DOT__exu__DOT__exu_data_reg_SignS));
    tracep->fullQData(oldp+44,(vlSelf->Main__DOT__exu__DOT__exu_data_reg_AluOut),64);
    tracep->fullBit(oldp+46,(vlSelf->Main__DOT__exu__DOT__exu_data_reg_EXUFlag));
    tracep->fullQData(oldp+47,(vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUPc),64);
    tracep->fullQData(oldp+49,(vlSelf->Main__DOT__memu__DOT__ifu_data_reg_PcVal),64);
    tracep->fullCData(oldp+51,(vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest),5);
    tracep->fullBit(oldp+52,(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RegWrite));
    tracep->fullCData(oldp+53,(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl),4);
    tracep->fullBit(oldp+54,(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_EbreakIn));
    tracep->fullBit(oldp+55,(vlSelf->Main__DOT__memu__DOT__exu_data_reg_Zero));
    tracep->fullBit(oldp+56,(vlSelf->Main__DOT__memu__DOT__exu_data_reg_SignU));
    tracep->fullBit(oldp+57,(vlSelf->Main__DOT__memu__DOT__exu_data_reg_SignS));
    tracep->fullQData(oldp+58,(vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut),64);
    tracep->fullBit(oldp+60,(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MEMUFlag));
    tracep->fullQData(oldp+61,(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut),64);
    tracep->fullBit(oldp+63,(vlSelf->Main__DOT__wbu_io_wbu_data_out_RegWriteOut));
    tracep->fullQData(oldp+64,(vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn),64);
    tracep->fullQData(oldp+66,(vlSelf->Main__DOT__wbu__DOT__PcValReg),64);
    tracep->fullBit(oldp+68,((((((((IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1) 
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
    tracep->fullQData(oldp+69,(vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5),64);
    tracep->fullQData(oldp+71,(vlSelf->Main__DOT__exu__DOT__AluSrc2),64);
    tracep->fullQData(oldp+73,((((QData)((IData)(vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U])))),64);
    tracep->fullBit(oldp+75,((0ULL == (((QData)((IData)(
                                                        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U]))))));
    tracep->fullBit(oldp+76,((1U & (IData)((vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5 
                                            >> 0x3fU)))));
    tracep->fullBit(oldp+77,((1U & (IData)((vlSelf->Main__DOT__exu__DOT__AluSrc2 
                                            >> 0x3fU)))));
    tracep->fullBit(oldp+78,(vlSelf->Main__DOT__exu__DOT__SignSTmp));
    tracep->fullBit(oldp+79,(vlSelf->Main__DOT__exu__DOT__SignUTmp));
    tracep->fullIData(oldp+80,((0x1fffffU & (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm))),21);
    tracep->fullQData(oldp+81,(((1U & (IData)((vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm 
                                               >> 0x14U)))
                                 ? 0x7ffffffffffULL
                                 : 0ULL)),43);
    tracep->fullSData(oldp+83,((0x1fffU & (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm))),13);
    tracep->fullQData(oldp+84,(((1U & (IData)((vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm 
                                               >> 0xcU)))
                                 ? 0x7ffffffffffffULL
                                 : 0ULL)),51);
    tracep->fullCData(oldp+86,((0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)),7);
    tracep->fullIData(oldp+87,((0xfffff000U & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)),32);
    tracep->fullIData(oldp+88,(((vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                                 >> 0x1fU) ? 0xffffffffU
                                 : 0U)),32);
    tracep->fullSData(oldp+89,((vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                                >> 0x14U)),12);
    tracep->fullQData(oldp+90,(((vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst 
                                 >> 0x1fU) ? 0xfffffffffffffULL
                                 : 0ULL)),52);
    tracep->fullSData(oldp+92,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_2),12);
    tracep->fullQData(oldp+93,(((0x800U & (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_2))
                                 ? 0xfffffffffffffULL
                                 : 0ULL)),52);
    tracep->fullIData(oldp+95,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_6),21);
    tracep->fullQData(oldp+96,(((0x100000U & vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_6)
                                 ? 0x7ffffffffffULL
                                 : 0ULL)),43);
    tracep->fullSData(oldp+98,(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_8),13);
    tracep->fullQData(oldp+99,(((0x1000U & (IData)(vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_8))
                                 ? 0x7ffffffffffffULL
                                 : 0ULL)),51);
    tracep->fullBit(oldp+101,(((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                               | ((0x3003U == (0x707fU 
                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst)) 
                                  | (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_174)))));
    tracep->fullCData(oldp+102,(((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                  ? 1U : ((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                           ? 0U : (
                                                   (0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
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
    tracep->fullCData(oldp+103,(((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                  ? 4U : ((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                           ? 4U : (
                                                   (0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 4U
                                                    : 
                                                   ((0x13U 
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
    tracep->fullCData(oldp+104,(((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                  ? 0U : ((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                           ? 0U : (
                                                   (0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst))
                                                     ? 0U
                                                     : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_462)))))),4);
    tracep->fullQData(oldp+105,(vlSelf->Main__DOT__ifu__DOT__mem_Rdata),64);
    tracep->fullQData(oldp+107,(vlSelf->Main__DOT__memu__DOT__mem_Rdata),64);
    tracep->fullBit(oldp+109,(((IData)(vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_MemWrite) 
                               & (IData)(vlSelf->Main__DOT__exu__DOT__exu_data_reg_EXUFlag))));
    tracep->fullQData(oldp+110,(vlSelf->Main__DOT__regs__DOT__Regs_1),64);
    tracep->fullQData(oldp+112,(vlSelf->Main__DOT__regs__DOT__Regs_2),64);
    tracep->fullQData(oldp+114,(vlSelf->Main__DOT__regs__DOT__Regs_3),64);
    tracep->fullQData(oldp+116,(vlSelf->Main__DOT__regs__DOT__Regs_4),64);
    tracep->fullQData(oldp+118,(vlSelf->Main__DOT__regs__DOT__Regs_5),64);
    tracep->fullQData(oldp+120,(vlSelf->Main__DOT__regs__DOT__Regs_6),64);
    tracep->fullQData(oldp+122,(vlSelf->Main__DOT__regs__DOT__Regs_7),64);
    tracep->fullQData(oldp+124,(vlSelf->Main__DOT__regs__DOT__Regs_8),64);
    tracep->fullQData(oldp+126,(vlSelf->Main__DOT__regs__DOT__Regs_9),64);
    tracep->fullQData(oldp+128,(vlSelf->Main__DOT__regs__DOT__Regs_10),64);
    tracep->fullQData(oldp+130,(vlSelf->Main__DOT__regs__DOT__Regs_11),64);
    tracep->fullQData(oldp+132,(vlSelf->Main__DOT__regs__DOT__Regs_12),64);
    tracep->fullQData(oldp+134,(vlSelf->Main__DOT__regs__DOT__Regs_13),64);
    tracep->fullQData(oldp+136,(vlSelf->Main__DOT__regs__DOT__Regs_14),64);
    tracep->fullQData(oldp+138,(vlSelf->Main__DOT__regs__DOT__Regs_15),64);
    tracep->fullQData(oldp+140,(vlSelf->Main__DOT__regs__DOT__Regs_16),64);
    tracep->fullQData(oldp+142,(vlSelf->Main__DOT__regs__DOT__Regs_17),64);
    tracep->fullQData(oldp+144,(vlSelf->Main__DOT__regs__DOT__Regs_18),64);
    tracep->fullQData(oldp+146,(vlSelf->Main__DOT__regs__DOT__Regs_19),64);
    tracep->fullQData(oldp+148,(vlSelf->Main__DOT__regs__DOT__Regs_20),64);
    tracep->fullQData(oldp+150,(vlSelf->Main__DOT__regs__DOT__Regs_21),64);
    tracep->fullQData(oldp+152,(vlSelf->Main__DOT__regs__DOT__Regs_22),64);
    tracep->fullQData(oldp+154,(vlSelf->Main__DOT__regs__DOT__Regs_23),64);
    tracep->fullQData(oldp+156,(vlSelf->Main__DOT__regs__DOT__Regs_24),64);
    tracep->fullQData(oldp+158,(vlSelf->Main__DOT__regs__DOT__Regs_25),64);
    tracep->fullQData(oldp+160,(vlSelf->Main__DOT__regs__DOT__Regs_26),64);
    tracep->fullQData(oldp+162,(vlSelf->Main__DOT__regs__DOT__Regs_27),64);
    tracep->fullQData(oldp+164,(vlSelf->Main__DOT__regs__DOT__Regs_28),64);
    tracep->fullQData(oldp+166,(vlSelf->Main__DOT__regs__DOT__Regs_29),64);
    tracep->fullQData(oldp+168,(vlSelf->Main__DOT__regs__DOT__Regs_30),64);
    tracep->fullQData(oldp+170,(vlSelf->Main__DOT__regs__DOT__Regs_31),64);
    tracep->fullBit(oldp+172,(((IData)(vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_EbreakIn) 
                               & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MEMUFlag))));
    tracep->fullCData(oldp+173,((0xffU & (IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut))),8);
    tracep->fullQData(oldp+174,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut 
                                                >> 7U)))
                                  ? 0xffffffffffffffULL
                                  : 0ULL)),56);
    tracep->fullCData(oldp+176,((0xffU & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut))),8);
    tracep->fullQData(oldp+177,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut 
                                                >> 7U)))
                                  ? 0xffffffffffffffULL
                                  : 0ULL)),56);
    tracep->fullSData(oldp+179,((0xffffU & (IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut))),16);
    tracep->fullQData(oldp+180,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut 
                                                >> 0xfU)))
                                  ? 0xffffffffffffULL
                                  : 0ULL)),48);
    tracep->fullSData(oldp+182,((0xffffU & (IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut))),16);
    tracep->fullQData(oldp+183,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut 
                                                >> 0xfU)))
                                  ? 0xffffffffffffULL
                                  : 0ULL)),48);
    tracep->fullIData(oldp+185,((IData)(vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut)),32);
    tracep->fullIData(oldp+186,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U)),32);
    tracep->fullIData(oldp+187,((IData)(vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut)),32);
    tracep->fullIData(oldp+188,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U)),32);
    tracep->fullBit(oldp+189,(vlSelf->clock));
    tracep->fullBit(oldp+190,(vlSelf->reset));
    tracep->fullIData(oldp+191,(vlSelf->io_Inst),32);
    tracep->fullQData(oldp+192,(0ULL),64);
    tracep->fullCData(oldp+194,(0U),8);
    tracep->fullBit(oldp+195,(0U));
}
