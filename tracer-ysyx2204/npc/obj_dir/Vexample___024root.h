// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexample.h for the primary calling header

#ifndef VERILATED_VEXAMPLE___024ROOT_H_
#define VERILATED_VEXAMPLE___024ROOT_H_  // guard

#include "verilated.h"

class Vexample__Syms;
VL_MODULE(Vexample___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(f,0,0);

    // INTERNAL VARIABLES
    Vexample__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vexample___024root(const char* name);
    ~Vexample___024root();
    VL_UNCOPYABLE(Vexample___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vexample__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
