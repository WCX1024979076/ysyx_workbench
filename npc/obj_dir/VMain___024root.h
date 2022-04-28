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
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*2:0*/ Main__DOT__idu__DOT__inst_type;
    CData/*0:0*/ Main__DOT__exu__DOT___AluOut_T_17;
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*16:0*/ Main__DOT__idu__DOT__inst_flag;
    IData/*22:0*/ Main__DOT__idu__DOT__contr_code;
    QData/*63:0*/ Main__DOT__idu_io_Imm;
    QData/*63:0*/ Main__DOT__ifu__DOT__mem_Rdata;
    QData/*63:0*/ Main__DOT__exu__DOT__mem_Rdata;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_0;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_1;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_2;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_3;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_4;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_5;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_6;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_7;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_8;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_9;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_10;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_11;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_12;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_13;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_14;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_15;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_16;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_17;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_18;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_19;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_20;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_21;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_22;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_23;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_24;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_25;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_26;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_27;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_28;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_29;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_30;
    QData/*63:0*/ Main__DOT__exu__DOT__Regs_31;
    QData/*63:0*/ Main__DOT__exu__DOT__pc;
    QData/*63:0*/ Main__DOT__exu__DOT__DataR1;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_62;
    QData/*63:0*/ Main__DOT__exu__DOT___AluOut_T_16;
    QData/*63:0*/ Main__DOT__exu__DOT___AluOut_T_25;
    QData/*63:0*/ Main__DOT__exu__DOT__AluOut;
    QData/*63:0*/ Main__DOT__exu__DOT___DataIn_T_11;
    QData/*63:0*/ Main__DOT__exu__DOT___pc_T_10;
    QData/*63:0*/ Main__DOT__exu__DOT___pc_T_23;
    QData/*63:0*/ Main__DOT__exu__DOT___pc_T_27;
    QData/*63:0*/ __Vtask_pmem_read__0__Rdata;
    QData/*63:0*/ __Vtask_pmem_read__2__Rdata;
    VlUnpacked<QData/*63:0*/, 33> Main__DOT__exu__DOT__difftest__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

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
