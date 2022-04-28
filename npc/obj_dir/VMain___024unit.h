// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMain.h for the primary calling header

#ifndef VERILATED_VMAIN___024UNIT_H_
#define VERILATED_VMAIN___024UNIT_H_  // guard

#include "/home/wcx/Desktop/ysyx-workbench/nemu/include/"
#include "/home/wcx/Desktop/ysyx-workbench/npc/obj_dir/"
#include "verilated.h"

class VMain__Syms;
VL_MODULE(VMain___024unit) {
  public:

    // INTERNAL VARIABLES
    VMain__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMain___024unit(const char* name);
    ~VMain___024unit();
    VL_UNCOPYABLE(VMain___024unit);

    // INTERNAL METHODS
    void __Vconfigure(VMain__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
