// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

void VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ &ebreak__Vfuncrtn);

VL_ATTR_COLD void VMain___024root___initial__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_ebreak__0__Vfuncout;
    // Body
    vlSelf->io_AluSrc = 0U;
    VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit(__Vtask_ebreak__0__Vfuncout);
}
