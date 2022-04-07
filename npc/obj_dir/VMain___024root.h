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
    VL_IN8(Wmask,7,0);
    VL_IN8(MemWrite,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_RegWrite,0,0);
    VL_OUT8(io_AluOp,4,0);
    VL_OUT8(io_AluSrc,0,0);
    VL_OUT8(io_R1,4,0);
    VL_OUT8(io_R2,4,0);
    VL_OUT8(io_Rdest,4,0);
    CData/*0:0*/ __Vclklast__TOP__clock;
    VL_OUT(io_Inst,31,0);
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_0;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_1;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_2;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_3;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_4;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_5;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_6;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_7;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_8;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_9;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_10;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_11;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_12;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_13;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_14;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_15;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_16;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_17;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_18;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_19;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_20;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_21;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_22;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_23;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_24;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_25;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_26;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_27;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_28;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_29;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_30;
    IData/*31:0*/ Main__DOT__registers__DOT__Regs_31;
    IData/*31:0*/ Main__DOT__registers__DOT___GEN_21;
    IData/*31:0*/ Main__DOT__registers__DOT___GEN_53;
    VL_IN64(Raddr,63,0);
    VL_IN64(Waddr,63,0);
    VL_IN64(Wdata,63,0);
    VL_OUT64(Rdata,63,0);
    VL_OUT64(io_PcVal,63,0);
    VL_OUT64(io_AluOut,63,0);
    VL_OUT64(io_DataR1,63,0);
    VL_OUT64(io_DataR2,63,0);
    VL_OUT64(io_DataImmI,63,0);
    QData/*63:0*/ Main__DOT__pc__DOT__pc;
    QData/*63:0*/ Main__DOT__pc__DOT___pc_T_1;
    QData/*63:0*/ __Vtask_pmem_read__0__Rdata;
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
