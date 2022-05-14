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
        CData/*0:0*/ Main__DOT__ifu_io_IDUWait;
        CData/*0:0*/ Main__DOT__exu_io_IDUFlag;
        CData/*0:0*/ Main__DOT__exu_io_EXUClear;
        CData/*0:0*/ Main__DOT__wbu_io_RegWriteOut;
        CData/*1:0*/ Main__DOT___pc_T;
        CData/*0:0*/ Main__DOT__ifu__DOT__IFUFlagReg;
        CData/*0:0*/ Main__DOT__idu__DOT__RegWriteReg;
        CData/*0:0*/ Main__DOT__idu__DOT__MemWriteReg;
        CData/*4:0*/ Main__DOT__idu__DOT__AluOpReg;
        CData/*4:0*/ Main__DOT__idu__DOT__AluSrc1OpReg;
        CData/*4:0*/ Main__DOT__idu__DOT__AluSrc2OpReg;
        CData/*4:0*/ Main__DOT__idu__DOT__PcSrcReg;
        CData/*3:0*/ Main__DOT__idu__DOT__RinCtlReg;
        CData/*7:0*/ Main__DOT__idu__DOT__MemMaskReg;
        CData/*4:0*/ Main__DOT__idu__DOT__RdestReg;
        CData/*4:0*/ Main__DOT__idu__DOT__R1Reg;
        CData/*4:0*/ Main__DOT__idu__DOT__R2Reg;
        CData/*0:0*/ Main__DOT__idu__DOT__IDUFlagReg;
        CData/*0:0*/ Main__DOT__idu__DOT__EbreakInReg;
        CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_168;
        CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_218;
        CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_271;
        CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_326;
        CData/*4:0*/ Main__DOT__idu__DOT___contr_code_T_381;
        CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_446;
        CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_494;
        CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_549;
        CData/*7:0*/ Main__DOT__exu__DOT__MemMaskOutReg;
        CData/*4:0*/ Main__DOT__exu__DOT__RdestOutReg;
        CData/*0:0*/ Main__DOT__exu__DOT__MemWriteOutReg;
        CData/*0:0*/ Main__DOT__exu__DOT__ZeroReg;
        CData/*0:0*/ Main__DOT__exu__DOT__SignUReg;
        CData/*0:0*/ Main__DOT__exu__DOT__SignSReg;
        CData/*0:0*/ Main__DOT__exu__DOT__RegWriteOutReg;
        CData/*3:0*/ Main__DOT__exu__DOT__RinCtlOutReg;
        CData/*0:0*/ Main__DOT__exu__DOT__EXUFlagReg;
        CData/*0:0*/ Main__DOT__exu__DOT__EbreakInOutReg;
        CData/*1:0*/ Main__DOT__exu__DOT___SignSTmp_T;
        CData/*0:0*/ Main__DOT__exu__DOT__SignSTmp;
        CData/*0:0*/ Main__DOT__exu__DOT__SignUTmp;
        CData/*0:0*/ Main__DOT__memu__DOT__MEMUFlagReg;
        CData/*0:0*/ Main__DOT__memu__DOT__ZeroOutReg;
        CData/*0:0*/ Main__DOT__memu__DOT__SignUOutReg;
        CData/*0:0*/ Main__DOT__memu__DOT__SignSOutReg;
        CData/*0:0*/ Main__DOT__memu__DOT__RegWriteOutReg;
        CData/*3:0*/ Main__DOT__memu__DOT__RinCtlOutReg;
        CData/*0:0*/ Main__DOT__memu__DOT__EbreakInOutReg;
        CData/*4:0*/ Main__DOT__memu__DOT__RdestOutReg;
        CData/*0:0*/ __Vclklast__TOP__clock;
        SData/*11:0*/ Main__DOT__idu__DOT__ImmReg_lo_2;
        SData/*12:0*/ Main__DOT__idu__DOT__ImmReg_lo_8;
        VL_OUT(io_Inst,31,0);
        IData/*31:0*/ Main__DOT__ifu__DOT__InstReg;
        IData/*31:0*/ Main__DOT__ifu__DOT___GEN_3;
        IData/*20:0*/ Main__DOT__idu__DOT__ImmReg_lo_6;
        VlWide<4>/*127:0*/ Main__DOT__exu__DOT___AluOutTmp_T_76;
        QData/*63:0*/ Main__DOT__exu_io_EXUPc;
        QData/*63:0*/ Main__DOT__wbu_io_DataIn;
        QData/*63:0*/ Main__DOT__regs_io_DataR1;
        QData/*63:0*/ Main__DOT__regs_io_DataR2;
        QData/*63:0*/ Main__DOT__pc;
        QData/*63:0*/ Main__DOT___pc_T_2;
    };
    struct {
        QData/*63:0*/ Main__DOT__ifu__DOT__mem_Rdata;
        QData/*63:0*/ Main__DOT__ifu__DOT__PcValReg;
        QData/*63:0*/ Main__DOT__idu__DOT__ImmReg;
        QData/*63:0*/ Main__DOT__idu__DOT__PcValReg;
        QData/*63:0*/ Main__DOT__idu__DOT___ImmReg_T_4;
        QData/*63:0*/ Main__DOT__idu__DOT___ImmReg_T_9;
        QData/*63:0*/ Main__DOT__exu__DOT__DataR2OutReg;
        QData/*63:0*/ Main__DOT__exu__DOT__AluOutReg;
        QData/*63:0*/ Main__DOT__exu__DOT__PcValReg;
        QData/*63:0*/ Main__DOT__exu__DOT__AluSrc1;
        QData/*63:0*/ Main__DOT__exu__DOT__AluSrc2;
        QData/*63:0*/ Main__DOT__memu__DOT__mem_Rdata;
        QData/*63:0*/ Main__DOT__memu__DOT__MemOutReg;
        QData/*63:0*/ Main__DOT__memu__DOT__AluOutOutReg;
        QData/*63:0*/ Main__DOT__memu__DOT__PcValReg;
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
