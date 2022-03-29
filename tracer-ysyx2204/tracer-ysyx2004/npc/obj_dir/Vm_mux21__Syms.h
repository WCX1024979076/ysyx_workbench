// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VM_MUX21__SYMS_H_
#define VERILATED_VM_MUX21__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vm_mux21.h"

// INCLUDE MODULE CLASSES
#include "Vm_mux21___024root.h"

// SYMS CLASS (contains all model state)
class Vm_mux21__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vm_mux21* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vm_mux21___024root             TOP;

    // CONSTRUCTORS
    Vm_mux21__Syms(VerilatedContext* contextp, const char* namep, Vm_mux21* modelp);
    ~Vm_mux21__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
