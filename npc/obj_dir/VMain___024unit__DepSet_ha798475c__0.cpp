// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024unit.h"

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 33> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {32, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void ebreak();

VL_INLINE_OPT void VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    ebreak();
}

extern "C" void pmem_read(long long Raddr, long long* Rdata);

VL_INLINE_OPT void VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    long long Raddr__Vcvt;
    for (size_t Raddr__Vidx = 0; Raddr__Vidx < 1; ++Raddr__Vidx) Raddr__Vcvt = Raddr;
    long long Rdata__Vcvt;
    pmem_read(Raddr__Vcvt, &Rdata__Vcvt);
    Rdata = Rdata__Vcvt;
}

extern "C" void pmem_write(long long Waddr, long long Wdata, char Wmask);

VL_INLINE_OPT void VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    long long Waddr__Vcvt;
    for (size_t Waddr__Vidx = 0; Waddr__Vidx < 1; ++Waddr__Vidx) Waddr__Vcvt = Waddr;
    long long Wdata__Vcvt;
    for (size_t Wdata__Vidx = 0; Wdata__Vidx < 1; ++Wdata__Vidx) Wdata__Vcvt = Wdata;
    char Wmask__Vcvt;
    for (size_t Wmask__Vidx = 0; Wmask__Vidx < 1; ++Wmask__Vidx) Wmask__Vcvt = Wmask;
    pmem_write(Waddr__Vcvt, Wdata__Vcvt, Wmask__Vcvt);
}
