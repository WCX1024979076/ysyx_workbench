// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

void VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);

VL_INLINE_OPT void VMain___024root___combo__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___combo__TOP__0\n"); );
    // Body
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Raddr, vlSelf->__Vtask_pmem_read__0__Rdata);
    vlSelf->Rdata = vlSelf->__Vtask_pmem_read__0__Rdata;
    if (vlSelf->MemWrite) {
        VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->Waddr, vlSelf->Wdata, (IData)(vlSelf->Wmask));
    }
}
