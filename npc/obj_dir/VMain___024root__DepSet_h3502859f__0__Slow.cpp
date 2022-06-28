// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain___024root.h"

VL_ATTR_COLD void VMain___024root___eval_initial(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VMain___024root___settle__TOP__0(VMain___024root* vlSelf);

VL_ATTR_COLD void VMain___024root___eval_settle(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_settle\n"); );
    // Body
    VMain___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VMain___024root___final(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___final\n"); );
}

VL_ATTR_COLD void VMain___024root___ctor_var_reset(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_Inst = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__ifu_io_ifu_data_in_IDUWait = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUClear = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__exu_io_exu_ctrl_out_EXUPc = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__wbu_io_wbu_data_out_RegWriteOut = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__wbu_io_wbu_data_out_DataIn = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs_io_DataR1 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs_io_DataR2 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT___pc_T = VL_RAND_RESET_I(2);
    vlSelf->Main__DOT___pc_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__ifu__DOT__mem_Rdata = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_Inst = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_PcVal = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__ifu__DOT__ifu_data_reg_IFUFlag = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__ifu__DOT___GEN_3 = VL_RAND_RESET_I(32);
    vlSelf->Main__DOT__idu__DOT__ifu_data_reg_PcVal = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__idu__DOT__idu_data_reg_Rdest = VL_RAND_RESET_I(5);
    vlSelf->Main__DOT__idu__DOT__idu_data_reg_R1 = VL_RAND_RESET_I(5);
    vlSelf->Main__DOT__idu__DOT__idu_data_reg_R2 = VL_RAND_RESET_I(5);
    vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluOp = VL_RAND_RESET_I(5);
    vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op = VL_RAND_RESET_I(5);
    vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op = VL_RAND_RESET_I(5);
    vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc = VL_RAND_RESET_I(5);
    vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_RinCtl = VL_RAND_RESET_I(4);
    vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_MemMask = VL_RAND_RESET_I(8);
    vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_EbreakIn = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__idu__DOT__idu_ctrl_reg_IDUFlag = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__idu__DOT___idu_data_reg_Imm_T_4 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__idu__DOT___idu_data_reg_Imm_T_9 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_2 = VL_RAND_RESET_I(12);
    vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_6 = VL_RAND_RESET_I(21);
    vlSelf->Main__DOT__idu__DOT__idu_data_reg_Imm_lo_8 = VL_RAND_RESET_I(13);
    vlSelf->Main__DOT__idu__DOT___contr_code_T_174 = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__idu__DOT___contr_code_T_226 = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__idu__DOT___contr_code_T_279 = VL_RAND_RESET_I(2);
    vlSelf->Main__DOT__idu__DOT___contr_code_T_336 = VL_RAND_RESET_I(3);
    vlSelf->Main__DOT__idu__DOT___contr_code_T_393 = VL_RAND_RESET_I(5);
    vlSelf->Main__DOT__idu__DOT___contr_code_T_462 = VL_RAND_RESET_I(4);
    vlSelf->Main__DOT__idu__DOT___contr_code_T_510 = VL_RAND_RESET_I(4);
    vlSelf->Main__DOT__idu__DOT___contr_code_T_569 = VL_RAND_RESET_I(4);
    vlSelf->Main__DOT__exu__DOT__ifu_data_reg_PcVal = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__exu__DOT__idu_data_reg_Rdest = VL_RAND_RESET_I(5);
    vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_RinCtl = VL_RAND_RESET_I(4);
    vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_MemMask = VL_RAND_RESET_I(8);
    vlSelf->Main__DOT__exu__DOT__idu_ctrl_reg_EbreakIn = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__exu__DOT__exu_data_reg_DataR2 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__exu__DOT__exu_data_reg_Zero = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__exu__DOT__exu_data_reg_SignU = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__exu__DOT__exu_data_reg_SignS = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__exu__DOT__exu_data_reg_AluOut = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__exu__DOT__exu_data_reg_EXUFlag = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__exu__DOT__AluSrc2 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_5 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->Main__DOT__exu__DOT___AluOutTmp_T_76);
    vlSelf->Main__DOT__exu__DOT___SignSTmp_T = VL_RAND_RESET_I(2);
    vlSelf->Main__DOT__exu__DOT__SignSTmp = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__exu__DOT__SignUTmp = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__memu__DOT__mem_Rdata = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__memu__DOT__ifu_data_reg_PcVal = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__memu__DOT__idu_data_reg_Rdest = VL_RAND_RESET_I(5);
    vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl = VL_RAND_RESET_I(4);
    vlSelf->Main__DOT__memu__DOT__idu_ctrl_reg_EbreakIn = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__memu__DOT__exu_data_reg_Zero = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__memu__DOT__exu_data_reg_SignU = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__memu__DOT__exu_data_reg_SignS = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__memu__DOT__exu_data_reg_AluOut = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__memu__DOT__memu_data_reg_MEMUFlag = VL_RAND_RESET_I(1);
    vlSelf->Main__DOT__memu__DOT__memu_data_reg_MemOut = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__wbu__DOT__PcValReg = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_1 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_2 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_3 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_4 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_5 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_6 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_7 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_8 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_9 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_10 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_11 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_12 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_13 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_14 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_15 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_16 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_17 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_18 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_19 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_20 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_21 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_22 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_23 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_24 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_25 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_26 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_27 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_28 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_29 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_30 = VL_RAND_RESET_Q(64);
    vlSelf->Main__DOT__regs__DOT__Regs_31 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<33; ++__Vi0) {
        vlSelf->Main__DOT__regs__DOT__difftest__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vtask_pmem_read__0__Rdata = 0;
    vlSelf->__Vtask_pmem_read__1__Rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
