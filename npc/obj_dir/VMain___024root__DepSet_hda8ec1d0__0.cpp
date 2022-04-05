// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

void VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ &ebreak__Vfuncrtn);

VL_INLINE_OPT void VMain___024root___combo__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___combo__TOP__0\n"); );
    // Body
    VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->__Vfunc_ebreak__0__Vfuncout);
    vlSelf->Main__DOT__contr__DOT__ebreakbox__DOT__tmp 
        = ((0x100073U == vlSelf->io_Inst) ? vlSelf->__Vfunc_ebreak__0__Vfuncout
            : 0U);
    vlSelf->io_AluOp = ((0x13U == (0x7fU & vlSelf->io_Inst))
                         ? 1U : 0U);
    vlSelf->io_DataImmI = (QData)((IData)((vlSelf->io_Inst 
                                           >> 0x14U)));
    vlSelf->io_R2 = (0x1fU & (vlSelf->io_Inst >> 0x14U));
    vlSelf->io_R1 = (0x1fU & (vlSelf->io_Inst >> 0xfU));
}
