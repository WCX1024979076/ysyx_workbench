// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

void VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 33> &a);

VL_ATTR_COLD void VMain___024root___settle__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___settle__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vtask_pmem_read__2__Rdata;
    // Body
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(0ULL, __Vtask_pmem_read__2__Rdata);
    vlSelf->Main__DOT__exu__DOT__mem_Rdata = __Vtask_pmem_read__2__Rdata;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[1U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[2U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[3U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[4U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[5U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[6U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[7U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[8U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[9U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xaU] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xbU] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xcU] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xdU] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xeU] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xfU] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x10U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x11U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x12U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x13U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x14U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x15U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x16U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x17U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x18U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x19U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1aU] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1bU] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1cU] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1dU] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1eU] = 0ULL;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1fU] = 0ULL;
    vlSelf->Main__DOT__exu__DOT___AluOut_T_13 = (4ULL 
                                                 + vlSelf->Main__DOT__exu__DOT__pc);
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Main__DOT__exu__DOT__pc, vlSelf->__Vtask_pmem_read__0__Rdata);
    vlSelf->Main__DOT__ifu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__0__Rdata;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x20U] 
        = vlSelf->Main__DOT__exu__DOT__pc;
    if ((0x100073U == (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) {
        VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf);
}
