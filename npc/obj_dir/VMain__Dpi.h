// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VMAIN__DPI_H_
#define VERILATED_VMAIN__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/Ebreak.v:2:31
    extern void ebreak();
    // DPI import at vsrc/Mem.v:2:30
    extern void pmem_read(long long Raddr, long long* Rdata);
    // DPI import at vsrc/Mem.v:4:30
    extern void pmem_write(long long Waddr, long long Wdata, char Wmask);
    // DPI import at vsrc/Difftest.v:2:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
