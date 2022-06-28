// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN___024ROOT_H_
#define VERILATED_VMAIN___024ROOT_H_  // guard

#include "verilated.h"

class VMain__Syms;
class VMain___024unit;

VL_MODULE(VMain___024root) {
  public:
    // CELLS
    VMain___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ Main__DOT__ifu_io_ifu_data_in_IDUWait;
        CData/*0:0*/ Main__DOT__exu_io_exu_ctrl_out_EXUClear;
        CData/*0:0*/ Main__DOT__wbu_io_wbu_data_out_RegWriteOut;
        CData/*1:0*/ Main__DOT___pc_T;
        CData/*0:0*/ Main__DOT__ifu__DOT__ifu_data_reg_IFUFlag;
        CData/*4:0*/ Main__DOT__idu__DOT__idu_data_reg_Rdest;
        CData/*4:0*/ Main__DOT__idu__DOT__idu_data_reg_R1;
        CData/*4:0*/ Main__DOT__idu__DOT__idu_data_reg_R2;
        CData/*0:0*/ Main__DOT__idu__DOT__idu_ctrl_reg_RegWrite;
        CData/*0:0*/ Main__DOT__idu__DOT__idu_ctrl_reg_MemWrite;
        CData/*4:0*/ Main__DOT__idu__DOT__idu_ctrl_reg_AluOp;
        CData/*4:0*/ Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc1Op;
        CData/*4:0*/ Main__DOT__idu__DOT__idu_ctrl_reg_AluSrc2Op;
        CData/*4:0*/ Main__DOT__idu__DOT__idu_ctrl_reg_PcSrc;
        CData/*3:0*/ Main__DOT__idu__DOT__idu_ctrl_reg_RinCtl;
        CData/*7:0*/ Main__DOT__idu__DOT__idu_ctrl_reg_MemMask;
        CData/*0:0*/ Main__DOT__idu__DOT__idu_ctrl_reg_EbreakIn;
        CData/*0:0*/ Main__DOT__idu__DOT__idu_ctrl_reg_IDUFlag;
        CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_174;
        CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_226;
        CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_279;
        CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_336;
        CData/*4:0*/ Main__DOT__idu__DOT___contr_code_T_393;
        CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_462;
        CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_510;
        CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_569;
        CData/*4:0*/ Main__DOT__exu__DOT__idu_data_reg_Rdest;
        CData/*0:0*/ Main__DOT__exu__DOT__idu_ctrl_reg_RegWrite;
        CData/*0:0*/ Main__DOT__exu__DOT__idu_ctrl_reg_MemWrite;
        CData/*3:0*/ Main__DOT__exu__DOT__idu_ctrl_reg_RinCtl;
        CData/*7:0*/ Main__DOT__exu__DOT__idu_ctrl_reg_MemMask;
        CData/*0:0*/ Main__DOT__exu__DOT__idu_ctrl_reg_EbreakIn;
        CData/*0:0*/ Main__DOT__exu__DOT__exu_data_reg_Zero;
        CData/*0:0*/ Main__DOT__exu__DOT__exu_data_reg_SignU;
        CData/*0:0*/ Main__DOT__exu__DOT__exu_data_reg_SignS;
        CData/*0:0*/ Main__DOT__exu__DOT__exu_data_reg_EXUFlag;
        CData/*1:0*/ Main__DOT__exu__DOT___SignSTmp_T;
        CData/*0:0*/ Main__DOT__exu__DOT__SignSTmp;
        CData/*0:0*/ Main__DOT__exu__DOT__SignUTmp;
        CData/*4:0*/ Main__DOT__memu__DOT__idu_data_reg_Rdest;
        CData/*0:0*/ Main__DOT__memu__DOT__idu_ctrl_reg_RegWrite;
        CData/*3:0*/ Main__DOT__memu__DOT__idu_ctrl_reg_RinCtl;
        CData/*0:0*/ Main__DOT__memu__DOT__idu_ctrl_reg_EbreakIn;
        CData/*0:0*/ Main__DOT__memu__DOT__exu_data_reg_Zero;
        CData/*0:0*/ Main__DOT__memu__DOT__exu_data_reg_SignU;
        CData/*0:0*/ Main__DOT__memu__DOT__exu_data_reg_SignS;
        CData/*0:0*/ Main__DOT__memu__DOT__memu_data_reg_MEMUFlag;
        CData/*0:0*/ __Vclklast__TOP__clock;
        SData/*11:0*/ Main__DOT__idu__DOT__idu_data_reg_Imm_lo_2;
        SData/*12:0*/ Main__DOT__idu__DOT__idu_data_reg_Imm_lo_8;
        VL_OUT(io_Inst,31,0);
        IData/*31:0*/ Main__DOT__ifu__DOT__ifu_data_reg_Inst;
        IData/*31:0*/ Main__DOT__ifu__DOT___GEN_3;
        IData/*20:0*/ Main__DOT__idu__DOT__idu_data_reg_Imm_lo_6;
        VlWide<4>/*127:0*/ Main__DOT__exu__DOT___AluOutTmp_T_76;
        QData/*63:0*/ Main__DOT__exu_io_exu_ctrl_out_EXUPc;
        QData/*63:0*/ Main__DOT__wbu_io_wbu_data_out_DataIn;
        QData/*63:0*/ Main__DOT__regs_io_DataR1;
        QData/*63:0*/ Main__DOT__regs_io_DataR2;
        QData/*63:0*/ Main__DOT__pc;
        QData/*63:0*/ Main__DOT___pc_T_2;
        QData/*63:0*/ Main__DOT__ifu__DOT__mem_Rdata;
    };
    struct {
        QData/*63:0*/ Main__DOT__ifu__DOT__ifu_data_reg_PcVal;
        QData/*63:0*/ Main__DOT__idu__DOT__ifu_data_reg_PcVal;
        QData/*63:0*/ Main__DOT__idu__DOT__idu_data_reg_Imm;
        QData/*63:0*/ Main__DOT__idu__DOT___idu_data_reg_Imm_T_4;
        QData/*63:0*/ Main__DOT__idu__DOT___idu_data_reg_Imm_T_9;
        QData/*63:0*/ Main__DOT__exu__DOT__ifu_data_reg_PcVal;
        QData/*63:0*/ Main__DOT__exu__DOT__exu_data_reg_DataR2;
        QData/*63:0*/ Main__DOT__exu__DOT__exu_data_reg_AluOut;
        QData/*63:0*/ Main__DOT__exu__DOT__AluSrc2;
        QData/*63:0*/ Main__DOT__exu__DOT___AluOutTmp_T_5;
        QData/*63:0*/ Main__DOT__memu__DOT__mem_Rdata;
        QData/*63:0*/ Main__DOT__memu__DOT__ifu_data_reg_PcVal;
        QData/*63:0*/ Main__DOT__memu__DOT__exu_data_reg_AluOut;
        QData/*63:0*/ Main__DOT__memu__DOT__memu_data_reg_MemOut;
        QData/*63:0*/ Main__DOT__wbu__DOT__PcValReg;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_1;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_2;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_3;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_4;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_5;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_6;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_7;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_8;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_9;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_10;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_11;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_12;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_13;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_14;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_15;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_16;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_17;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_18;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_19;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_20;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_21;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_22;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_23;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_24;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_25;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_26;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_27;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_28;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_29;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_30;
        QData/*63:0*/ Main__DOT__regs__DOT__Regs_31;
        QData/*63:0*/ __Vtask_pmem_read__0__Rdata;
        QData/*63:0*/ __Vtask_pmem_read__1__Rdata;
        VlUnpacked<QData/*63:0*/, 33> Main__DOT__regs__DOT__difftest__DOT__rf;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VMain__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMain___024root(const char* name);
    ~VMain___024root();
    VL_UNCOPYABLE(VMain___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMain__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
