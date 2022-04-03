// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadd.h for the primary calling header

#ifndef VERILATED_VADD___024ROOT_H_
#define VERILATED_VADD___024ROOT_H_  // guard

#include "verilated.h"

class Vadd__Syms;
VL_MODULE(Vadd___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN64(io_value1,63,0);
    VL_IN64(io_value2,63,0);
    VL_OUT64(io_output,63,0);

    // INTERNAL VARIABLES
    Vadd__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vadd___024root(const char* name);
    ~Vadd___024root();
    VL_UNCOPYABLE(Vadd___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vadd__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
