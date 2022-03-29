// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vm_mux21.h for the primary calling header

#ifndef VERILATED_VM_MUX21___024ROOT_H_
#define VERILATED_VM_MUX21___024ROOT_H_  // guard

#include "verilated.h"

class Vm_mux21__Syms;
VL_MODULE(Vm_mux21___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(s,0,0);
    VL_OUT8(y,0,0);

    // INTERNAL VARIABLES
    Vm_mux21__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vm_mux21___024root(const char* name);
    ~Vm_mux21___024root();
    VL_UNCOPYABLE(Vm_mux21___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vm_mux21__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
