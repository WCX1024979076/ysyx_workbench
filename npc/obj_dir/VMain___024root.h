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
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*16:0*/ Main__DOT__idu__DOT__inst_flag;
    IData/*20:0*/ Main__DOT__idu__DOT__contr_code;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_0;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_1;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_2;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_3;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_4;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_5;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_6;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_7;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_8;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_9;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_10;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_11;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_12;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_13;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_14;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_15;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_16;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_17;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_18;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_19;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_20;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_21;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_22;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_23;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_24;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_25;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_26;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_27;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_28;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_29;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_30;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT__Regs_31;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT___GEN_31;
    IData/*31:0*/ Main__DOT__exu__DOT__registers__DOT___GEN_63;
    QData/*63:0*/ Main__DOT__idu_io_Imm;
    QData/*63:0*/ Main__DOT__ifu__DOT__mem_Rdata;
    QData/*63:0*/ Main__DOT__exu__DOT__registers_io_DataIn;
    QData/*63:0*/ Main__DOT__exu__DOT__mem_Rdata;
    QData/*63:0*/ Main__DOT__exu__DOT___AluOut_T_18;
    QData/*63:0*/ Main__DOT__exu__DOT__pc;
    QData/*63:0*/ Main__DOT__exu__DOT___AluOut_T_16;
    QData/*63:0*/ Main__DOT__exu__DOT___AluOut_T_26;
    QData/*63:0*/ Main__DOT__exu__DOT___pc_T_10;
    QData/*63:0*/ __Vtask_pmem_read__0__Rdata;
    QData/*63:0*/ __Vtask_pmem_read__2__Rdata;
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
