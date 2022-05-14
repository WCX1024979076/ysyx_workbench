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
    tracep->declBit(c+190,"clock", false,-1);
    tracep->declBit(c+191,"reset", false,-1);
    tracep->declBus(c+192,"io_Inst", false,-1, 31,0);
    tracep->pushNamePrefix("Main ");
    tracep->declBit(c+190,"clock", false,-1);
    tracep->declBit(c+191,"reset", false,-1);
    tracep->declBus(c+192,"io_Inst", false,-1, 31,0);
    tracep->declBit(c+190,"ifu_clock", false,-1);
    tracep->declBit(c+191,"ifu_reset", false,-1);
    tracep->declQuad(c+1,"ifu_io_Pc", false,-1, 63,0);
    tracep->declBus(c+3,"ifu_io_EXUClear", false,-1, 31,0);
    tracep->declBit(c+4,"ifu_io_IDUWait", false,-1);
    tracep->declBus(c+5,"ifu_io_Inst", false,-1, 31,0);
    tracep->declBus(c+6,"ifu_io_IFUFlag", false,-1, 31,0);
    tracep->declQuad(c+7,"ifu_io_PcVal", false,-1, 63,0);
    tracep->declBit(c+190,"idu_clock", false,-1);
    tracep->declBit(c+191,"idu_reset", false,-1);
    tracep->declQuad(c+7,"idu_io_Pc", false,-1, 63,0);
    tracep->declBus(c+5,"idu_io_Inst", false,-1, 31,0);
    tracep->declBit(c+9,"idu_io_IFUFlag", false,-1);
    tracep->declBit(c+10,"idu_io_EXUClear", false,-1);
    tracep->declBit(c+4,"idu_io_IDUWait", false,-1);
    tracep->declBit(c+11,"idu_io_RegWrite", false,-1);
    tracep->declBit(c+12,"idu_io_MemWrite", false,-1);
    tracep->declBus(c+13,"idu_io_AluOp", false,-1, 4,0);
    tracep->declBus(c+14,"idu_io_AluSrc1Op", false,-1, 4,0);
    tracep->declBus(c+15,"idu_io_AluSrc2Op", false,-1, 4,0);
    tracep->declBus(c+16,"idu_io_PcSrc", false,-1, 4,0);
    tracep->declBus(c+17,"idu_io_RinCtl", false,-1, 3,0);
    tracep->declBus(c+18,"idu_io_MemMask", false,-1, 7,0);
    tracep->declBus(c+19,"idu_io_Rdest", false,-1, 4,0);
    tracep->declBus(c+20,"idu_io_R1", false,-1, 4,0);
    tracep->declBus(c+21,"idu_io_R2", false,-1, 4,0);
    tracep->declQuad(c+22,"idu_io_Imm", false,-1, 63,0);
    tracep->declBit(c+24,"idu_io_EbreakIn", false,-1);
    tracep->declQuad(c+25,"idu_io_PcVal", false,-1, 63,0);
    tracep->declBit(c+27,"idu_io_IDUFlag", false,-1);
    tracep->declBit(c+190,"exu_clock", false,-1);
    tracep->declBit(c+191,"exu_reset", false,-1);
    tracep->declQuad(c+25,"exu_io_Pc", false,-1, 63,0);
    tracep->declBit(c+11,"exu_io_RegWrite", false,-1);
    tracep->declBit(c+12,"exu_io_MemWrite", false,-1);
    tracep->declBus(c+13,"exu_io_AluOp", false,-1, 4,0);
    tracep->declBus(c+14,"exu_io_AluSrc1Op", false,-1, 4,0);
    tracep->declBus(c+15,"exu_io_AluSrc2Op", false,-1, 4,0);
    tracep->declBus(c+16,"exu_io_PcSrc", false,-1, 4,0);
    tracep->declBus(c+17,"exu_io_RinCtl", false,-1, 3,0);
    tracep->declQuad(c+28,"exu_io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+30,"exu_io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+22,"exu_io_Imm", false,-1, 63,0);
    tracep->declBit(c+24,"exu_io_EbreakIn", false,-1);
    tracep->declBus(c+19,"exu_io_Rdest", false,-1, 4,0);
    tracep->declBus(c+18,"exu_io_MemMask", false,-1, 7,0);
    tracep->declBit(c+32,"exu_io_IDUFlag", false,-1);
    tracep->declBus(c+33,"exu_io_MemMaskOut", false,-1, 7,0);
    tracep->declBus(c+34,"exu_io_RdestOut", false,-1, 4,0);
    tracep->declQuad(c+35,"exu_io_DataR2Out", false,-1, 63,0);
    tracep->declBit(c+37,"exu_io_MemWriteOut", false,-1);
    tracep->declBit(c+38,"exu_io_Zero", false,-1);
    tracep->declBit(c+39,"exu_io_SignU", false,-1);
    tracep->declBit(c+40,"exu_io_SignS", false,-1);
    tracep->declQuad(c+41,"exu_io_AluOut", false,-1, 63,0);
    tracep->declBit(c+43,"exu_io_RegWriteOut", false,-1);
    tracep->declBus(c+44,"exu_io_RinCtlOut", false,-1, 3,0);
    tracep->declBit(c+45,"exu_io_EXUFlag", false,-1);
    tracep->declBit(c+46,"exu_io_EbreakInOut", false,-1);
    tracep->declQuad(c+47,"exu_io_PcVal", false,-1, 63,0);
    tracep->declBit(c+10,"exu_io_EXUClear", false,-1);
    tracep->declQuad(c+49,"exu_io_EXUPc", false,-1, 63,0);
    tracep->declBit(c+190,"memu_clock", false,-1);
    tracep->declBit(c+191,"memu_reset", false,-1);
    tracep->declQuad(c+47,"memu_io_Pc", false,-1, 63,0);
    tracep->declBus(c+33,"memu_io_MemMask", false,-1, 7,0);
    tracep->declBus(c+34,"memu_io_Rdest", false,-1, 4,0);
    tracep->declQuad(c+35,"memu_io_DataR2", false,-1, 63,0);
    tracep->declBit(c+37,"memu_io_MemWrite", false,-1);
    tracep->declBit(c+38,"memu_io_Zero", false,-1);
    tracep->declBit(c+39,"memu_io_SignU", false,-1);
    tracep->declBit(c+40,"memu_io_SignS", false,-1);
    tracep->declQuad(c+41,"memu_io_AluOut", false,-1, 63,0);
    tracep->declBit(c+43,"memu_io_RegWrite", false,-1);
    tracep->declBus(c+44,"memu_io_RinCtl", false,-1, 3,0);
    tracep->declBit(c+45,"memu_io_EXUFlag", false,-1);
    tracep->declBit(c+46,"memu_io_EbreakIn", false,-1);
    tracep->declBit(c+51,"memu_io_MEMUFlag", false,-1);
    tracep->declQuad(c+52,"memu_io_MemOut", false,-1, 63,0);
    tracep->declBit(c+54,"memu_io_ZeroOut", false,-1);
    tracep->declBit(c+55,"memu_io_SignUOut", false,-1);
    tracep->declBit(c+56,"memu_io_SignSOut", false,-1);
    tracep->declQuad(c+57,"memu_io_AluOutOut", false,-1, 63,0);
    tracep->declBit(c+59,"memu_io_RegWriteOut", false,-1);
    tracep->declBus(c+60,"memu_io_RinCtlOut", false,-1, 3,0);
    tracep->declBit(c+61,"memu_io_EbreakInOut", false,-1);
    tracep->declBus(c+62,"memu_io_RdestOut", false,-1, 4,0);
    tracep->declQuad(c+63,"memu_io_PcVal", false,-1, 63,0);
    tracep->declBit(c+190,"wbu_clock", false,-1);
    tracep->declBit(c+191,"wbu_reset", false,-1);
    tracep->declQuad(c+63,"wbu_io_Pc", false,-1, 63,0);
    tracep->declQuad(c+52,"wbu_io_MemOut", false,-1, 63,0);
    tracep->declBit(c+54,"wbu_io_Zero", false,-1);
    tracep->declBit(c+55,"wbu_io_SignU", false,-1);
    tracep->declBit(c+56,"wbu_io_SignS", false,-1);
    tracep->declQuad(c+57,"wbu_io_AluOut", false,-1, 63,0);
    tracep->declBit(c+59,"wbu_io_RegWrite", false,-1);
    tracep->declBus(c+60,"wbu_io_RinCtl", false,-1, 3,0);
    tracep->declBit(c+51,"wbu_io_MEMUFlag", false,-1);
    tracep->declBit(c+61,"wbu_io_EbreakIn", false,-1);
    tracep->declBus(c+62,"wbu_io_Rdest", false,-1, 4,0);
    tracep->declBit(c+65,"wbu_io_RegWriteOut", false,-1);
    tracep->declQuad(c+66,"wbu_io_DataIn", false,-1, 63,0);
    tracep->declBus(c+62,"wbu_io_RdestOut", false,-1, 4,0);
    tracep->declQuad(c+68,"wbu_io_PcVal", false,-1, 63,0);
    tracep->declBit(c+190,"regs_clock", false,-1);
    tracep->declBit(c+191,"regs_reset", false,-1);
    tracep->declQuad(c+68,"regs_io_Pc", false,-1, 63,0);
    tracep->declBus(c+20,"regs_io_R1", false,-1, 4,0);
    tracep->declBus(c+21,"regs_io_R2", false,-1, 4,0);
    tracep->declBus(c+62,"regs_io_Rdest", false,-1, 4,0);
    tracep->declQuad(c+66,"regs_io_DataIn", false,-1, 63,0);
    tracep->declBit(c+65,"regs_io_RegWrite", false,-1);
    tracep->declQuad(c+28,"regs_io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+30,"regs_io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+1,"pc", false,-1, 63,0);
    tracep->declBit(c+4,"IDUWait", false,-1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+190,"clock", false,-1);
    tracep->declBit(c+191,"reset", false,-1);
    tracep->declQuad(c+25,"io_Pc", false,-1, 63,0);
    tracep->declBit(c+11,"io_RegWrite", false,-1);
    tracep->declBit(c+12,"io_MemWrite", false,-1);
    tracep->declBus(c+13,"io_AluOp", false,-1, 4,0);
    tracep->declBus(c+14,"io_AluSrc1Op", false,-1, 4,0);
    tracep->declBus(c+15,"io_AluSrc2Op", false,-1, 4,0);
    tracep->declBus(c+16,"io_PcSrc", false,-1, 4,0);
    tracep->declBus(c+17,"io_RinCtl", false,-1, 3,0);
    tracep->declQuad(c+28,"io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+30,"io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+22,"io_Imm", false,-1, 63,0);
    tracep->declBit(c+24,"io_EbreakIn", false,-1);
    tracep->declBus(c+19,"io_Rdest", false,-1, 4,0);
    tracep->declBus(c+18,"io_MemMask", false,-1, 7,0);
    tracep->declBit(c+32,"io_IDUFlag", false,-1);
    tracep->declBus(c+33,"io_MemMaskOut", false,-1, 7,0);
    tracep->declBus(c+34,"io_RdestOut", false,-1, 4,0);
    tracep->declQuad(c+35,"io_DataR2Out", false,-1, 63,0);
    tracep->declBit(c+37,"io_MemWriteOut", false,-1);
    tracep->declBit(c+38,"io_Zero", false,-1);
    tracep->declBit(c+39,"io_SignU", false,-1);
    tracep->declBit(c+40,"io_SignS", false,-1);
    tracep->declQuad(c+41,"io_AluOut", false,-1, 63,0);
    tracep->declBit(c+43,"io_RegWriteOut", false,-1);
    tracep->declBus(c+44,"io_RinCtlOut", false,-1, 3,0);
    tracep->declBit(c+45,"io_EXUFlag", false,-1);
    tracep->declBit(c+46,"io_EbreakInOut", false,-1);
    tracep->declQuad(c+47,"io_PcVal", false,-1, 63,0);
    tracep->declBit(c+10,"io_EXUClear", false,-1);
    tracep->declQuad(c+49,"io_EXUPc", false,-1, 63,0);
    tracep->declBus(c+33,"MemMaskOutReg", false,-1, 7,0);
    tracep->declBus(c+34,"RdestOutReg", false,-1, 4,0);
    tracep->declQuad(c+35,"DataR2OutReg", false,-1, 63,0);
    tracep->declBit(c+37,"MemWriteOutReg", false,-1);
    tracep->declBit(c+38,"ZeroReg", false,-1);
    tracep->declBit(c+39,"SignUReg", false,-1);
    tracep->declBit(c+40,"SignSReg", false,-1);
    tracep->declQuad(c+41,"AluOutReg", false,-1, 63,0);
    tracep->declBit(c+43,"RegWriteOutReg", false,-1);
    tracep->declBus(c+44,"RinCtlOutReg", false,-1, 3,0);
    tracep->declBit(c+45,"EXUFlagReg", false,-1);
    tracep->declBit(c+46,"EbreakInOutReg", false,-1);
    tracep->declQuad(c+47,"PcValReg", false,-1, 63,0);
    tracep->declQuad(c+70,"AluSrc1", false,-1, 63,0);
    tracep->declQuad(c+72,"AluSrc2", false,-1, 63,0);
    tracep->declQuad(c+74,"AluOutTmp", false,-1, 63,0);
    tracep->declBit(c+76,"ZeroTmp", false,-1);
    tracep->declBit(c+77,"SignSTmp_hi", false,-1);
    tracep->declBit(c+78,"SignSTmp_lo", false,-1);
    tracep->declBit(c+79,"SignSTmp", false,-1);
    tracep->declBit(c+80,"SignUTmp", false,-1);
    tracep->declBus(c+81,"io_EXUPc_lo", false,-1, 20,0);
    tracep->declQuad(c+82,"io_EXUPc_hi", false,-1, 42,0);
    tracep->declBus(c+84,"io_EXUPc_lo_1", false,-1, 12,0);
    tracep->declQuad(c+85,"io_EXUPc_hi_1", false,-1, 50,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+190,"clock", false,-1);
    tracep->declBit(c+191,"reset", false,-1);
    tracep->declQuad(c+7,"io_Pc", false,-1, 63,0);
    tracep->declBus(c+5,"io_Inst", false,-1, 31,0);
    tracep->declBit(c+9,"io_IFUFlag", false,-1);
    tracep->declBit(c+10,"io_EXUClear", false,-1);
    tracep->declBit(c+4,"io_IDUWait", false,-1);
    tracep->declBit(c+11,"io_RegWrite", false,-1);
    tracep->declBit(c+12,"io_MemWrite", false,-1);
    tracep->declBus(c+13,"io_AluOp", false,-1, 4,0);
    tracep->declBus(c+14,"io_AluSrc1Op", false,-1, 4,0);
    tracep->declBus(c+15,"io_AluSrc2Op", false,-1, 4,0);
    tracep->declBus(c+16,"io_PcSrc", false,-1, 4,0);
    tracep->declBus(c+17,"io_RinCtl", false,-1, 3,0);
    tracep->declBus(c+18,"io_MemMask", false,-1, 7,0);
    tracep->declBus(c+19,"io_Rdest", false,-1, 4,0);
    tracep->declBus(c+20,"io_R1", false,-1, 4,0);
    tracep->declBus(c+21,"io_R2", false,-1, 4,0);
    tracep->declQuad(c+22,"io_Imm", false,-1, 63,0);
    tracep->declBit(c+24,"io_EbreakIn", false,-1);
    tracep->declQuad(c+25,"io_PcVal", false,-1, 63,0);
    tracep->declBit(c+27,"io_IDUFlag", false,-1);
    tracep->declBit(c+11,"RegWriteReg", false,-1);
    tracep->declBit(c+12,"MemWriteReg", false,-1);
    tracep->declBus(c+13,"AluOpReg", false,-1, 4,0);
    tracep->declBus(c+14,"AluSrc1OpReg", false,-1, 4,0);
    tracep->declBus(c+15,"AluSrc2OpReg", false,-1, 4,0);
    tracep->declBus(c+16,"PcSrcReg", false,-1, 4,0);
    tracep->declBus(c+17,"RinCtlReg", false,-1, 3,0);
    tracep->declBus(c+18,"MemMaskReg", false,-1, 7,0);
    tracep->declBus(c+19,"RdestReg", false,-1, 4,0);
    tracep->declBus(c+20,"R1Reg", false,-1, 4,0);
    tracep->declBus(c+21,"R2Reg", false,-1, 4,0);
    tracep->declQuad(c+22,"ImmReg", false,-1, 63,0);
    tracep->declBit(c+27,"IDUFlagReg", false,-1);
    tracep->declBit(c+24,"EbreakInReg", false,-1);
    tracep->declQuad(c+25,"PcValReg", false,-1, 63,0);
    tracep->declBus(c+87,"opcode", false,-1, 6,0);
    tracep->declBus(c+88,"ImmReg_lo", false,-1, 31,0);
    tracep->declBus(c+89,"ImmReg_hi", false,-1, 31,0);
    tracep->declBus(c+90,"ImmReg_lo_1", false,-1, 11,0);
    tracep->declQuad(c+91,"ImmReg_hi_1", false,-1, 51,0);
    tracep->declBus(c+93,"ImmReg_lo_2", false,-1, 11,0);
    tracep->declQuad(c+94,"ImmReg_hi_2", false,-1, 51,0);
    tracep->declBus(c+96,"ImmReg_lo_6", false,-1, 20,0);
    tracep->declQuad(c+97,"ImmReg_hi_6", false,-1, 42,0);
    tracep->declBus(c+99,"ImmReg_lo_8", false,-1, 12,0);
    tracep->declQuad(c+100,"ImmReg_hi_8", false,-1, 50,0);
    tracep->declBit(c+102,"contr_code_0", false,-1);
    tracep->declBus(c+103,"contr_code_2", false,-1, 1,0);
    tracep->declBus(c+104,"contr_code_3", false,-1, 2,0);
    tracep->declBus(c+105,"contr_code_5", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+190,"clock", false,-1);
    tracep->declBit(c+191,"reset", false,-1);
    tracep->declQuad(c+1,"io_Pc", false,-1, 63,0);
    tracep->declBus(c+3,"io_EXUClear", false,-1, 31,0);
    tracep->declBit(c+4,"io_IDUWait", false,-1);
    tracep->declBus(c+5,"io_Inst", false,-1, 31,0);
    tracep->declBus(c+6,"io_IFUFlag", false,-1, 31,0);
    tracep->declQuad(c+7,"io_PcVal", false,-1, 63,0);
    tracep->declQuad(c+1,"mem_Raddr", false,-1, 63,0);
    tracep->declQuad(c+106,"mem_Rdata", false,-1, 63,0);
    tracep->declQuad(c+193,"mem_Waddr", false,-1, 63,0);
    tracep->declQuad(c+193,"mem_Wdata", false,-1, 63,0);
    tracep->declBus(c+195,"mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+196,"mem_MemWrite", false,-1);
    tracep->declBus(c+5,"InstReg", false,-1, 31,0);
    tracep->declBit(c+9,"IFUFlagReg", false,-1);
    tracep->declQuad(c+7,"PcValReg", false,-1, 63,0);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+1,"Raddr", false,-1, 63,0);
    tracep->declQuad(c+193,"Waddr", false,-1, 63,0);
    tracep->declQuad(c+193,"Wdata", false,-1, 63,0);
    tracep->declBus(c+195,"Wmask", false,-1, 7,0);
    tracep->declBit(c+196,"MemWrite", false,-1);
    tracep->declQuad(c+106,"Rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memu ");
    tracep->declBit(c+190,"clock", false,-1);
    tracep->declBit(c+191,"reset", false,-1);
    tracep->declQuad(c+47,"io_Pc", false,-1, 63,0);
    tracep->declBus(c+33,"io_MemMask", false,-1, 7,0);
    tracep->declBus(c+34,"io_Rdest", false,-1, 4,0);
    tracep->declQuad(c+35,"io_DataR2", false,-1, 63,0);
    tracep->declBit(c+37,"io_MemWrite", false,-1);
    tracep->declBit(c+38,"io_Zero", false,-1);
    tracep->declBit(c+39,"io_SignU", false,-1);
    tracep->declBit(c+40,"io_SignS", false,-1);
    tracep->declQuad(c+41,"io_AluOut", false,-1, 63,0);
    tracep->declBit(c+43,"io_RegWrite", false,-1);
    tracep->declBus(c+44,"io_RinCtl", false,-1, 3,0);
    tracep->declBit(c+45,"io_EXUFlag", false,-1);
    tracep->declBit(c+46,"io_EbreakIn", false,-1);
    tracep->declBit(c+51,"io_MEMUFlag", false,-1);
    tracep->declQuad(c+52,"io_MemOut", false,-1, 63,0);
    tracep->declBit(c+54,"io_ZeroOut", false,-1);
    tracep->declBit(c+55,"io_SignUOut", false,-1);
    tracep->declBit(c+56,"io_SignSOut", false,-1);
    tracep->declQuad(c+57,"io_AluOutOut", false,-1, 63,0);
    tracep->declBit(c+59,"io_RegWriteOut", false,-1);
    tracep->declBus(c+60,"io_RinCtlOut", false,-1, 3,0);
    tracep->declBit(c+61,"io_EbreakInOut", false,-1);
    tracep->declBus(c+62,"io_RdestOut", false,-1, 4,0);
    tracep->declQuad(c+63,"io_PcVal", false,-1, 63,0);
    tracep->declQuad(c+41,"mem_Raddr", false,-1, 63,0);
    tracep->declQuad(c+108,"mem_Rdata", false,-1, 63,0);
    tracep->declQuad(c+41,"mem_Waddr", false,-1, 63,0);
    tracep->declQuad(c+35,"mem_Wdata", false,-1, 63,0);
    tracep->declBus(c+33,"mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+110,"mem_MemWrite", false,-1);
    tracep->declBit(c+51,"MEMUFlagReg", false,-1);
    tracep->declQuad(c+52,"MemOutReg", false,-1, 63,0);
    tracep->declBit(c+54,"ZeroOutReg", false,-1);
    tracep->declBit(c+55,"SignUOutReg", false,-1);
    tracep->declBit(c+56,"SignSOutReg", false,-1);
    tracep->declQuad(c+57,"AluOutOutReg", false,-1, 63,0);
    tracep->declBit(c+59,"RegWriteOutReg", false,-1);
    tracep->declBus(c+60,"RinCtlOutReg", false,-1, 3,0);
    tracep->declBit(c+61,"EbreakInOutReg", false,-1);
    tracep->declBus(c+62,"RdestOutReg", false,-1, 4,0);
    tracep->declQuad(c+63,"PcValReg", false,-1, 63,0);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+41,"Raddr", false,-1, 63,0);
    tracep->declQuad(c+41,"Waddr", false,-1, 63,0);
    tracep->declQuad(c+35,"Wdata", false,-1, 63,0);
    tracep->declBus(c+33,"Wmask", false,-1, 7,0);
    tracep->declBit(c+110,"MemWrite", false,-1);
    tracep->declQuad(c+108,"Rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regs ");
    tracep->declBit(c+190,"clock", false,-1);
    tracep->declBit(c+191,"reset", false,-1);
    tracep->declQuad(c+68,"io_Pc", false,-1, 63,0);
    tracep->declBus(c+20,"io_R1", false,-1, 4,0);
    tracep->declBus(c+21,"io_R2", false,-1, 4,0);
    tracep->declBus(c+62,"io_Rdest", false,-1, 4,0);
    tracep->declQuad(c+66,"io_DataIn", false,-1, 63,0);
    tracep->declBit(c+65,"io_RegWrite", false,-1);
    tracep->declQuad(c+28,"io_DataR1", false,-1, 63,0);
    tracep->declQuad(c+30,"io_DataR2", false,-1, 63,0);
    tracep->declQuad(c+193,"difftest_gpr_0", false,-1, 63,0);
    tracep->declQuad(c+111,"difftest_gpr_1", false,-1, 63,0);
    tracep->declQuad(c+113,"difftest_gpr_2", false,-1, 63,0);
    tracep->declQuad(c+115,"difftest_gpr_3", false,-1, 63,0);
    tracep->declQuad(c+117,"difftest_gpr_4", false,-1, 63,0);
    tracep->declQuad(c+119,"difftest_gpr_5", false,-1, 63,0);
    tracep->declQuad(c+121,"difftest_gpr_6", false,-1, 63,0);
    tracep->declQuad(c+123,"difftest_gpr_7", false,-1, 63,0);
    tracep->declQuad(c+125,"difftest_gpr_8", false,-1, 63,0);
    tracep->declQuad(c+127,"difftest_gpr_9", false,-1, 63,0);
    tracep->declQuad(c+129,"difftest_gpr_10", false,-1, 63,0);
    tracep->declQuad(c+131,"difftest_gpr_11", false,-1, 63,0);
    tracep->declQuad(c+133,"difftest_gpr_12", false,-1, 63,0);
    tracep->declQuad(c+135,"difftest_gpr_13", false,-1, 63,0);
    tracep->declQuad(c+137,"difftest_gpr_14", false,-1, 63,0);
    tracep->declQuad(c+139,"difftest_gpr_15", false,-1, 63,0);
    tracep->declQuad(c+141,"difftest_gpr_16", false,-1, 63,0);
    tracep->declQuad(c+143,"difftest_gpr_17", false,-1, 63,0);
    tracep->declQuad(c+145,"difftest_gpr_18", false,-1, 63,0);
    tracep->declQuad(c+147,"difftest_gpr_19", false,-1, 63,0);
    tracep->declQuad(c+149,"difftest_gpr_20", false,-1, 63,0);
    tracep->declQuad(c+151,"difftest_gpr_21", false,-1, 63,0);
    tracep->declQuad(c+153,"difftest_gpr_22", false,-1, 63,0);
    tracep->declQuad(c+155,"difftest_gpr_23", false,-1, 63,0);
    tracep->declQuad(c+157,"difftest_gpr_24", false,-1, 63,0);
    tracep->declQuad(c+159,"difftest_gpr_25", false,-1, 63,0);
    tracep->declQuad(c+161,"difftest_gpr_26", false,-1, 63,0);
    tracep->declQuad(c+163,"difftest_gpr_27", false,-1, 63,0);
    tracep->declQuad(c+165,"difftest_gpr_28", false,-1, 63,0);
    tracep->declQuad(c+167,"difftest_gpr_29", false,-1, 63,0);
    tracep->declQuad(c+169,"difftest_gpr_30", false,-1, 63,0);
    tracep->declQuad(c+171,"difftest_gpr_31", false,-1, 63,0);
    tracep->declQuad(c+68,"difftest_PcVal", false,-1, 63,0);
    tracep->declQuad(c+111,"Regs_1", false,-1, 63,0);
    tracep->declQuad(c+113,"Regs_2", false,-1, 63,0);
    tracep->declQuad(c+115,"Regs_3", false,-1, 63,0);
    tracep->declQuad(c+117,"Regs_4", false,-1, 63,0);
    tracep->declQuad(c+119,"Regs_5", false,-1, 63,0);
    tracep->declQuad(c+121,"Regs_6", false,-1, 63,0);
    tracep->declQuad(c+123,"Regs_7", false,-1, 63,0);
    tracep->declQuad(c+125,"Regs_8", false,-1, 63,0);
    tracep->declQuad(c+127,"Regs_9", false,-1, 63,0);
    tracep->declQuad(c+129,"Regs_10", false,-1, 63,0);
    tracep->declQuad(c+131,"Regs_11", false,-1, 63,0);
    tracep->declQuad(c+133,"Regs_12", false,-1, 63,0);
    tracep->declQuad(c+135,"Regs_13", false,-1, 63,0);
    tracep->declQuad(c+137,"Regs_14", false,-1, 63,0);
    tracep->declQuad(c+139,"Regs_15", false,-1, 63,0);
    tracep->declQuad(c+141,"Regs_16", false,-1, 63,0);
    tracep->declQuad(c+143,"Regs_17", false,-1, 63,0);
    tracep->declQuad(c+145,"Regs_18", false,-1, 63,0);
    tracep->declQuad(c+147,"Regs_19", false,-1, 63,0);
    tracep->declQuad(c+149,"Regs_20", false,-1, 63,0);
    tracep->declQuad(c+151,"Regs_21", false,-1, 63,0);
    tracep->declQuad(c+153,"Regs_22", false,-1, 63,0);
    tracep->declQuad(c+155,"Regs_23", false,-1, 63,0);
    tracep->declQuad(c+157,"Regs_24", false,-1, 63,0);
    tracep->declQuad(c+159,"Regs_25", false,-1, 63,0);
    tracep->declQuad(c+161,"Regs_26", false,-1, 63,0);
    tracep->declQuad(c+163,"Regs_27", false,-1, 63,0);
    tracep->declQuad(c+165,"Regs_28", false,-1, 63,0);
    tracep->declQuad(c+167,"Regs_29", false,-1, 63,0);
    tracep->declQuad(c+169,"Regs_30", false,-1, 63,0);
    tracep->declQuad(c+171,"Regs_31", false,-1, 63,0);
    tracep->pushNamePrefix("difftest ");
    tracep->declQuad(c+193,"gpr_0", false,-1, 63,0);
    tracep->declQuad(c+111,"gpr_1", false,-1, 63,0);
    tracep->declQuad(c+113,"gpr_2", false,-1, 63,0);
    tracep->declQuad(c+115,"gpr_3", false,-1, 63,0);
    tracep->declQuad(c+117,"gpr_4", false,-1, 63,0);
    tracep->declQuad(c+119,"gpr_5", false,-1, 63,0);
    tracep->declQuad(c+121,"gpr_6", false,-1, 63,0);
    tracep->declQuad(c+123,"gpr_7", false,-1, 63,0);
    tracep->declQuad(c+125,"gpr_8", false,-1, 63,0);
    tracep->declQuad(c+127,"gpr_9", false,-1, 63,0);
    tracep->declQuad(c+129,"gpr_10", false,-1, 63,0);
    tracep->declQuad(c+131,"gpr_11", false,-1, 63,0);
    tracep->declQuad(c+133,"gpr_12", false,-1, 63,0);
    tracep->declQuad(c+135,"gpr_13", false,-1, 63,0);
    tracep->declQuad(c+137,"gpr_14", false,-1, 63,0);
    tracep->declQuad(c+139,"gpr_15", false,-1, 63,0);
    tracep->declQuad(c+141,"gpr_16", false,-1, 63,0);
    tracep->declQuad(c+143,"gpr_17", false,-1, 63,0);
    tracep->declQuad(c+145,"gpr_18", false,-1, 63,0);
    tracep->declQuad(c+147,"gpr_19", false,-1, 63,0);
    tracep->declQuad(c+149,"gpr_20", false,-1, 63,0);
    tracep->declQuad(c+151,"gpr_21", false,-1, 63,0);
    tracep->declQuad(c+153,"gpr_22", false,-1, 63,0);
    tracep->declQuad(c+155,"gpr_23", false,-1, 63,0);
    tracep->declQuad(c+157,"gpr_24", false,-1, 63,0);
    tracep->declQuad(c+159,"gpr_25", false,-1, 63,0);
    tracep->declQuad(c+161,"gpr_26", false,-1, 63,0);
    tracep->declQuad(c+163,"gpr_27", false,-1, 63,0);
    tracep->declQuad(c+165,"gpr_28", false,-1, 63,0);
    tracep->declQuad(c+167,"gpr_29", false,-1, 63,0);
    tracep->declQuad(c+169,"gpr_30", false,-1, 63,0);
    tracep->declQuad(c+171,"gpr_31", false,-1, 63,0);
    tracep->declQuad(c+68,"PcVal", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+190,"clock", false,-1);
    tracep->declBit(c+191,"reset", false,-1);
    tracep->declQuad(c+63,"io_Pc", false,-1, 63,0);
    tracep->declQuad(c+52,"io_MemOut", false,-1, 63,0);
    tracep->declBit(c+54,"io_Zero", false,-1);
    tracep->declBit(c+55,"io_SignU", false,-1);
    tracep->declBit(c+56,"io_SignS", false,-1);
    tracep->declQuad(c+57,"io_AluOut", false,-1, 63,0);
    tracep->declBit(c+59,"io_RegWrite", false,-1);
    tracep->declBus(c+60,"io_RinCtl", false,-1, 3,0);
    tracep->declBit(c+51,"io_MEMUFlag", false,-1);
    tracep->declBit(c+61,"io_EbreakIn", false,-1);
    tracep->declBus(c+62,"io_Rdest", false,-1, 4,0);
    tracep->declBit(c+65,"io_RegWriteOut", false,-1);
    tracep->declQuad(c+66,"io_DataIn", false,-1, 63,0);
    tracep->declBus(c+62,"io_RdestOut", false,-1, 4,0);
    tracep->declQuad(c+68,"io_PcVal", false,-1, 63,0);
    tracep->declBit(c+173,"ebreak_ebreak_in", false,-1);
    tracep->declQuad(c+68,"PcValReg", false,-1, 63,0);
    tracep->declBus(c+174,"io_DataIn_lo", false,-1, 7,0);
    tracep->declQuad(c+175,"io_DataIn_hi", false,-1, 55,0);
    tracep->declBus(c+177,"io_DataIn_lo_1", false,-1, 7,0);
    tracep->declQuad(c+178,"io_DataIn_hi_1", false,-1, 55,0);
    tracep->declBus(c+180,"io_DataIn_lo_2", false,-1, 15,0);
    tracep->declQuad(c+181,"io_DataIn_hi_2", false,-1, 47,0);
    tracep->declBus(c+183,"io_DataIn_lo_3", false,-1, 15,0);
    tracep->declQuad(c+184,"io_DataIn_hi_3", false,-1, 47,0);
    tracep->declBus(c+186,"io_DataIn_lo_4", false,-1, 31,0);
    tracep->declBus(c+187,"io_DataIn_hi_4", false,-1, 31,0);
    tracep->declBus(c+188,"io_DataIn_lo_5", false,-1, 31,0);
    tracep->declBus(c+189,"io_DataIn_hi_5", false,-1, 31,0);
    tracep->pushNamePrefix("ebreak ");
    tracep->declBit(c+173,"ebreak_in", false,-1);
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
    tracep->fullIData(oldp+3,(vlSelf->Main__DOT__exu_io_EXUClear),32);
    tracep->fullBit(oldp+4,(vlSelf->Main__DOT__ifu_io_IDUWait));
    tracep->fullIData(oldp+5,(vlSelf->Main__DOT__ifu__DOT__InstReg),32);
    tracep->fullIData(oldp+6,(vlSelf->Main__DOT__ifu__DOT__IFUFlagReg),32);
    tracep->fullQData(oldp+7,(vlSelf->Main__DOT__ifu__DOT__PcValReg),64);
    tracep->fullBit(oldp+9,(vlSelf->Main__DOT__ifu__DOT__IFUFlagReg));
    tracep->fullBit(oldp+10,(vlSelf->Main__DOT__exu_io_EXUClear));
    tracep->fullBit(oldp+11,(vlSelf->Main__DOT__idu__DOT__RegWriteReg));
    tracep->fullBit(oldp+12,(vlSelf->Main__DOT__idu__DOT__MemWriteReg));
    tracep->fullCData(oldp+13,(vlSelf->Main__DOT__idu__DOT__AluOpReg),5);
    tracep->fullCData(oldp+14,(vlSelf->Main__DOT__idu__DOT__AluSrc1OpReg),5);
    tracep->fullCData(oldp+15,(vlSelf->Main__DOT__idu__DOT__AluSrc2OpReg),5);
    tracep->fullCData(oldp+16,(vlSelf->Main__DOT__idu__DOT__PcSrcReg),5);
    tracep->fullCData(oldp+17,(vlSelf->Main__DOT__idu__DOT__RinCtlReg),4);
    tracep->fullCData(oldp+18,(vlSelf->Main__DOT__idu__DOT__MemMaskReg),8);
    tracep->fullCData(oldp+19,(vlSelf->Main__DOT__idu__DOT__RdestReg),5);
    tracep->fullCData(oldp+20,(vlSelf->Main__DOT__idu__DOT__R1Reg),5);
    tracep->fullCData(oldp+21,(vlSelf->Main__DOT__idu__DOT__R2Reg),5);
    tracep->fullQData(oldp+22,(vlSelf->Main__DOT__idu__DOT__ImmReg),64);
    tracep->fullBit(oldp+24,(vlSelf->Main__DOT__idu__DOT__EbreakInReg));
    tracep->fullQData(oldp+25,(vlSelf->Main__DOT__idu__DOT__PcValReg),64);
    tracep->fullBit(oldp+27,(vlSelf->Main__DOT__idu__DOT__IDUFlagReg));
    tracep->fullQData(oldp+28,(vlSelf->Main__DOT__regs_io_DataR1),64);
    tracep->fullQData(oldp+30,(vlSelf->Main__DOT__regs_io_DataR2),64);
    tracep->fullBit(oldp+32,(vlSelf->Main__DOT__exu_io_IDUFlag));
    tracep->fullCData(oldp+33,(vlSelf->Main__DOT__exu__DOT__MemMaskOutReg),8);
    tracep->fullCData(oldp+34,(vlSelf->Main__DOT__exu__DOT__RdestOutReg),5);
    tracep->fullQData(oldp+35,(vlSelf->Main__DOT__exu__DOT__DataR2OutReg),64);
    tracep->fullBit(oldp+37,(vlSelf->Main__DOT__exu__DOT__MemWriteOutReg));
    tracep->fullBit(oldp+38,(vlSelf->Main__DOT__exu__DOT__ZeroReg));
    tracep->fullBit(oldp+39,(vlSelf->Main__DOT__exu__DOT__SignUReg));
    tracep->fullBit(oldp+40,(vlSelf->Main__DOT__exu__DOT__SignSReg));
    tracep->fullQData(oldp+41,(vlSelf->Main__DOT__exu__DOT__AluOutReg),64);
    tracep->fullBit(oldp+43,(vlSelf->Main__DOT__exu__DOT__RegWriteOutReg));
    tracep->fullCData(oldp+44,(vlSelf->Main__DOT__exu__DOT__RinCtlOutReg),4);
    tracep->fullBit(oldp+45,(vlSelf->Main__DOT__exu__DOT__EXUFlagReg));
    tracep->fullBit(oldp+46,(vlSelf->Main__DOT__exu__DOT__EbreakInOutReg));
    tracep->fullQData(oldp+47,(vlSelf->Main__DOT__exu__DOT__PcValReg),64);
    tracep->fullQData(oldp+49,(vlSelf->Main__DOT__exu_io_EXUPc),64);
    tracep->fullBit(oldp+51,(vlSelf->Main__DOT__memu__DOT__MEMUFlagReg));
    tracep->fullQData(oldp+52,(vlSelf->Main__DOT__memu__DOT__MemOutReg),64);
    tracep->fullBit(oldp+54,(vlSelf->Main__DOT__memu__DOT__ZeroOutReg));
    tracep->fullBit(oldp+55,(vlSelf->Main__DOT__memu__DOT__SignUOutReg));
    tracep->fullBit(oldp+56,(vlSelf->Main__DOT__memu__DOT__SignSOutReg));
    tracep->fullQData(oldp+57,(vlSelf->Main__DOT__memu__DOT__AluOutOutReg),64);
    tracep->fullBit(oldp+59,(vlSelf->Main__DOT__memu__DOT__RegWriteOutReg));
    tracep->fullCData(oldp+60,(vlSelf->Main__DOT__memu__DOT__RinCtlOutReg),4);
    tracep->fullBit(oldp+61,(vlSelf->Main__DOT__memu__DOT__EbreakInOutReg));
    tracep->fullCData(oldp+62,(vlSelf->Main__DOT__memu__DOT__RdestOutReg),5);
    tracep->fullQData(oldp+63,(vlSelf->Main__DOT__memu__DOT__PcValReg),64);
    tracep->fullBit(oldp+65,(vlSelf->Main__DOT__wbu_io_RegWriteOut));
    tracep->fullQData(oldp+66,(vlSelf->Main__DOT__wbu_io_DataIn),64);
    tracep->fullQData(oldp+68,(vlSelf->Main__DOT__wbu__DOT__PcValReg),64);
    tracep->fullQData(oldp+70,(vlSelf->Main__DOT__exu__DOT__AluSrc1),64);
    tracep->fullQData(oldp+72,(vlSelf->Main__DOT__exu__DOT__AluSrc2),64);
    tracep->fullQData(oldp+74,((((QData)((IData)(vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U])))),64);
    tracep->fullBit(oldp+76,((0ULL == (((QData)((IData)(
                                                        vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76[0U]))))));
    tracep->fullBit(oldp+77,((1U & (IData)((vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                            >> 0x3fU)))));
    tracep->fullBit(oldp+78,((1U & (IData)((vlSelf->Main__DOT__exu__DOT__AluSrc2 
                                            >> 0x3fU)))));
    tracep->fullBit(oldp+79,(vlSelf->Main__DOT__exu__DOT__SignSTmp));
    tracep->fullBit(oldp+80,(vlSelf->Main__DOT__exu__DOT__SignUTmp));
    tracep->fullIData(oldp+81,((0x1fffffU & (IData)(vlSelf->Main__DOT__idu__DOT__ImmReg))),21);
    tracep->fullQData(oldp+82,(((1U & (IData)((vlSelf->Main__DOT__idu__DOT__ImmReg 
                                               >> 0x14U)))
                                 ? 0x7ffffffffffULL
                                 : 0ULL)),43);
    tracep->fullSData(oldp+84,((0x1fffU & (IData)(vlSelf->Main__DOT__idu__DOT__ImmReg))),13);
    tracep->fullQData(oldp+85,(((1U & (IData)((vlSelf->Main__DOT__idu__DOT__ImmReg 
                                               >> 0xcU)))
                                 ? 0x7ffffffffffffULL
                                 : 0ULL)),51);
    tracep->fullCData(oldp+87,((0x7fU & vlSelf->Main__DOT__ifu__DOT__InstReg)),7);
    tracep->fullIData(oldp+88,((0xfffff000U & vlSelf->Main__DOT__ifu__DOT__InstReg)),32);
    tracep->fullIData(oldp+89,(((vlSelf->Main__DOT__ifu__DOT__InstReg 
                                 >> 0x1fU) ? 0xffffffffU
                                 : 0U)),32);
    tracep->fullSData(oldp+90,((vlSelf->Main__DOT__ifu__DOT__InstReg 
                                >> 0x14U)),12);
    tracep->fullQData(oldp+91,(((vlSelf->Main__DOT__ifu__DOT__InstReg 
                                 >> 0x1fU) ? 0xfffffffffffffULL
                                 : 0ULL)),52);
    tracep->fullSData(oldp+93,(vlSelf->Main__DOT__idu__DOT__ImmReg_lo_2),12);
    tracep->fullQData(oldp+94,(((0x800U & (IData)(vlSelf->Main__DOT__idu__DOT__ImmReg_lo_2))
                                 ? 0xfffffffffffffULL
                                 : 0ULL)),52);
    tracep->fullIData(oldp+96,(vlSelf->Main__DOT__idu__DOT__ImmReg_lo_6),21);
    tracep->fullQData(oldp+97,(((0x100000U & vlSelf->Main__DOT__idu__DOT__ImmReg_lo_6)
                                 ? 0x7ffffffffffULL
                                 : 0ULL)),43);
    tracep->fullSData(oldp+99,(vlSelf->Main__DOT__idu__DOT__ImmReg_lo_8),13);
    tracep->fullQData(oldp+100,(((0x1000U & (IData)(vlSelf->Main__DOT__idu__DOT__ImmReg_lo_8))
                                  ? 0x7ffffffffffffULL
                                  : 0ULL)),51);
    tracep->fullBit(oldp+102,(((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                               | ((0x3003U == (0x707fU 
                                               & vlSelf->Main__DOT__ifu__DOT__InstReg)) 
                                  | (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_168)))));
    tracep->fullCData(oldp+103,(((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                  ? 1U : ((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                           ? 0U : (
                                                   (0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
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
    tracep->fullCData(oldp+104,(((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                  ? 4U : ((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                           ? 4U : (
                                                   (0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 4U
                                                    : 
                                                   ((0x13U 
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
    tracep->fullCData(oldp+105,(((0x17U == (0x7fU & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                  ? 0U : ((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                           ? 0U : (
                                                   (0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Main__DOT__ifu__DOT__InstReg))
                                                     ? 0U
                                                     : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_446)))))),4);
    tracep->fullQData(oldp+106,(vlSelf->Main__DOT__ifu__DOT__mem_Rdata),64);
    tracep->fullQData(oldp+108,(vlSelf->Main__DOT__memu__DOT__mem_Rdata),64);
    tracep->fullBit(oldp+110,(((IData)(vlSelf->Main__DOT__exu__DOT__MemWriteOutReg) 
                               & (IData)(vlSelf->Main__DOT__exu__DOT__EXUFlagReg))));
    tracep->fullQData(oldp+111,(vlSelf->Main__DOT__regs__DOT__Regs_1),64);
    tracep->fullQData(oldp+113,(vlSelf->Main__DOT__regs__DOT__Regs_2),64);
    tracep->fullQData(oldp+115,(vlSelf->Main__DOT__regs__DOT__Regs_3),64);
    tracep->fullQData(oldp+117,(vlSelf->Main__DOT__regs__DOT__Regs_4),64);
    tracep->fullQData(oldp+119,(vlSelf->Main__DOT__regs__DOT__Regs_5),64);
    tracep->fullQData(oldp+121,(vlSelf->Main__DOT__regs__DOT__Regs_6),64);
    tracep->fullQData(oldp+123,(vlSelf->Main__DOT__regs__DOT__Regs_7),64);
    tracep->fullQData(oldp+125,(vlSelf->Main__DOT__regs__DOT__Regs_8),64);
    tracep->fullQData(oldp+127,(vlSelf->Main__DOT__regs__DOT__Regs_9),64);
    tracep->fullQData(oldp+129,(vlSelf->Main__DOT__regs__DOT__Regs_10),64);
    tracep->fullQData(oldp+131,(vlSelf->Main__DOT__regs__DOT__Regs_11),64);
    tracep->fullQData(oldp+133,(vlSelf->Main__DOT__regs__DOT__Regs_12),64);
    tracep->fullQData(oldp+135,(vlSelf->Main__DOT__regs__DOT__Regs_13),64);
    tracep->fullQData(oldp+137,(vlSelf->Main__DOT__regs__DOT__Regs_14),64);
    tracep->fullQData(oldp+139,(vlSelf->Main__DOT__regs__DOT__Regs_15),64);
    tracep->fullQData(oldp+141,(vlSelf->Main__DOT__regs__DOT__Regs_16),64);
    tracep->fullQData(oldp+143,(vlSelf->Main__DOT__regs__DOT__Regs_17),64);
    tracep->fullQData(oldp+145,(vlSelf->Main__DOT__regs__DOT__Regs_18),64);
    tracep->fullQData(oldp+147,(vlSelf->Main__DOT__regs__DOT__Regs_19),64);
    tracep->fullQData(oldp+149,(vlSelf->Main__DOT__regs__DOT__Regs_20),64);
    tracep->fullQData(oldp+151,(vlSelf->Main__DOT__regs__DOT__Regs_21),64);
    tracep->fullQData(oldp+153,(vlSelf->Main__DOT__regs__DOT__Regs_22),64);
    tracep->fullQData(oldp+155,(vlSelf->Main__DOT__regs__DOT__Regs_23),64);
    tracep->fullQData(oldp+157,(vlSelf->Main__DOT__regs__DOT__Regs_24),64);
    tracep->fullQData(oldp+159,(vlSelf->Main__DOT__regs__DOT__Regs_25),64);
    tracep->fullQData(oldp+161,(vlSelf->Main__DOT__regs__DOT__Regs_26),64);
    tracep->fullQData(oldp+163,(vlSelf->Main__DOT__regs__DOT__Regs_27),64);
    tracep->fullQData(oldp+165,(vlSelf->Main__DOT__regs__DOT__Regs_28),64);
    tracep->fullQData(oldp+167,(vlSelf->Main__DOT__regs__DOT__Regs_29),64);
    tracep->fullQData(oldp+169,(vlSelf->Main__DOT__regs__DOT__Regs_30),64);
    tracep->fullQData(oldp+171,(vlSelf->Main__DOT__regs__DOT__Regs_31),64);
    tracep->fullBit(oldp+173,(((IData)(vlSelf->Main__DOT__memu__DOT__EbreakInOutReg) 
                               & (IData)(vlSelf->Main__DOT__memu__DOT__MEMUFlagReg))));
    tracep->fullCData(oldp+174,((0xffU & (IData)(vlSelf->Main__DOT__memu__DOT__AluOutOutReg))),8);
    tracep->fullQData(oldp+175,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__AluOutOutReg 
                                                >> 7U)))
                                  ? 0xffffffffffffffULL
                                  : 0ULL)),56);
    tracep->fullCData(oldp+177,((0xffU & (IData)(vlSelf->Main__DOT__memu__DOT__MemOutReg))),8);
    tracep->fullQData(oldp+178,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__MemOutReg 
                                                >> 7U)))
                                  ? 0xffffffffffffffULL
                                  : 0ULL)),56);
    tracep->fullSData(oldp+180,((0xffffU & (IData)(vlSelf->Main__DOT__memu__DOT__AluOutOutReg))),16);
    tracep->fullQData(oldp+181,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__AluOutOutReg 
                                                >> 0xfU)))
                                  ? 0xffffffffffffULL
                                  : 0ULL)),48);
    tracep->fullSData(oldp+183,((0xffffU & (IData)(vlSelf->Main__DOT__memu__DOT__MemOutReg))),16);
    tracep->fullQData(oldp+184,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__MemOutReg 
                                                >> 0xfU)))
                                  ? 0xffffffffffffULL
                                  : 0ULL)),48);
    tracep->fullIData(oldp+186,((IData)(vlSelf->Main__DOT__memu__DOT__AluOutOutReg)),32);
    tracep->fullIData(oldp+187,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__AluOutOutReg 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U)),32);
    tracep->fullIData(oldp+188,((IData)(vlSelf->Main__DOT__memu__DOT__MemOutReg)),32);
    tracep->fullIData(oldp+189,(((1U & (IData)((vlSelf->Main__DOT__memu__DOT__MemOutReg 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U)),32);
    tracep->fullBit(oldp+190,(vlSelf->clock));
    tracep->fullBit(oldp+191,(vlSelf->reset));
    tracep->fullIData(oldp+192,(vlSelf->io_Inst),32);
    tracep->fullQData(oldp+193,(0ULL),64);
    tracep->fullCData(oldp+195,(0U),8);
    tracep->fullBit(oldp+196,(0U));
}
