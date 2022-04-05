// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain.h for the primary calling header

#ifndef VERILATED_VMAIN___024ROOT_H_
#define VERILATED_VMAIN___024ROOT_H_  // guard

#include "verilated.h"

class Vmain__Syms;
VL_MODULE(Vmain___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_RegWrite,0,0);
    VL_OUT8(io_AluOp,4,0);
    VL_OUT8(io_AluSrc,0,0);
    VL_OUT8(io_R1,4,0);
    VL_OUT8(io_R2,4,0);
    VL_OUT8(io_Rdest,4,0);
    CData/*0:0*/ __Vclklast__TOP__clock;
    VL_IN(io_Inst,31,0);
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
    VL_OUT64(io_PcVal,63,0);
    VL_OUT64(io_AluOut,63,0);
    VL_OUT64(io_DataR1,63,0);
    VL_OUT64(io_DataR2,63,0);
    VL_OUT64(io_DataImmI,63,0);
    QData/*63:0*/ Main__DOT__pc__DOT__pc;
    QData/*63:0*/ Main__DOT__pc__DOT___pc_T_1;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vmain__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vmain___024root(const char* name);
    ~Vmain___024root();
    VL_UNCOPYABLE(Vmain___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vmain__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
