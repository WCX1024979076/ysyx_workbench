// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMAIN__SYMS_H_
#define VERILATED_VMAIN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMain.h"

// INCLUDE MODULE CLASSES
#include "VMain___024root.h"
#include "VMain___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VMain__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMain* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMain___024root                TOP;
    VMain___024unit                TOP____024unit;

    // CONSTRUCTORS
    VMain__Syms(VerilatedContext* contextp, const char* namep, VMain* modelp);
    ~VMain__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
