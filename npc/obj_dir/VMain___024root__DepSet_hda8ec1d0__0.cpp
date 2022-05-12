// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

void VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ Raddr, QData/*63:0*/ &Rdata);
void VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 33> &a);
void VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ Waddr, QData/*63:0*/ Wdata, CData/*7:0*/ Wmask);

VL_INLINE_OPT void VMain___024root___sequent__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ Main__DOT__idu__DOT___io_Imm_T_4;
    QData/*63:0*/ Main__DOT__idu__DOT___io_Imm_T_9;
    CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_139;
    CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_168;
    CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_201;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_241;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_256;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_271;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_296;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_311;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_326;
    CData/*4:0*/ Main__DOT__idu__DOT___contr_code_T_351;
    CData/*4:0*/ Main__DOT__idu__DOT___contr_code_T_366;
    CData/*4:0*/ Main__DOT__idu__DOT___contr_code_T_381;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_431;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_446;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_464;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_479;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_494;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_534;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_13;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_26;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_45;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_58;
    QData/*63:0*/ Main__DOT__exu__DOT___AluSrc1_T_7;
    QData/*63:0*/ Main__DOT__exu__DOT___AluSrc2_T_14;
    VlWide<4>/*127:0*/ Main__DOT__exu__DOT___AluOut_T_64;
    CData/*1:0*/ Main__DOT__exu__DOT___SignU_T;
    QData/*63:0*/ Main__DOT__exu__DOT___DataIn_T_48;
    VlWide<4>/*127:0*/ __Vtemp_hcd6c249d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc3a4bf54__0;
    VlWide<4>/*127:0*/ __Vtemp_hc3a1df31__0;
    VlWide<4>/*127:0*/ __Vtemp_h1441d85a__0;
    VlWide<4>/*127:0*/ __Vtemp_h0d4ec2fb__0;
    VlWide<4>/*127:0*/ __Vtemp_h4116cc37__0;
    VlWide<4>/*127:0*/ __Vtemp_hfdece22f__0;
    VlWide<4>/*127:0*/ __Vtemp_hcc882be3__0;
    VlWide<4>/*127:0*/ __Vtemp_hcdac0be8__0;
    VlWide<4>/*127:0*/ __Vtemp_hccf1bdce__0;
    VlWide<3>/*95:0*/ __Vtemp_h14b37127__0;
    VlWide<3>/*95:0*/ __Vtemp_h4971a736__0;
    VlWide<3>/*95:0*/ __Vtemp_h104f9c54__0;
    VlWide<3>/*95:0*/ __Vtemp_h8a625cc0__0;
    VlWide<3>/*95:0*/ __Vtemp_hf202c522__0;
    VlWide<3>/*95:0*/ __Vtemp_h3709ddb9__0;
    VlWide<4>/*127:0*/ __Vtemp_h5acd1880__0;
    VlWide<4>/*127:0*/ __Vtemp_h1441d85a__1;
    VlWide<4>/*127:0*/ __Vtemp_h105d8525__0;
    VlWide<4>/*127:0*/ __Vtemp_h0203aee7__0;
    VlWide<4>/*127:0*/ __Vtemp_h11e9e093__0;
    VlWide<4>/*127:0*/ __Vtemp_h2a8357fb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd1505630__0;
    VlWide<4>/*127:0*/ __Vtemp_h49fd3415__0;
    VlWide<3>/*95:0*/ __Vtemp_hd5a5b391__0;
    VlWide<3>/*95:0*/ __Vtemp_hb4073e0d__0;
    VlWide<3>/*95:0*/ __Vtemp_hd0535286__0;
    VlWide<4>/*127:0*/ __Vtemp_hc2c4fa96__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd148733__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd04d438__0;
    // Body
    if (vlSelf->reset) {
        vlSelf->Main__DOT__exu__DOT__Regs_31 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_30 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_29 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_28 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_27 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_26 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_25 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_14 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_15 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_16 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_17 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_18 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_19 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_20 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_21 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_22 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_23 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_24 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_12 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_11 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_10 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_9 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_8 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_3 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_2 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_4 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_7 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_1 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_5 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_6 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__Regs_13 = 0ULL;
        vlSelf->Main__DOT__exu__DOT__pc = 0x80000000ULL;
    } else {
        if (vlSelf->Main__DOT__idu_io_RegWrite) {
            if ((0x1fU == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_31 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x1eU == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_30 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x1dU == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_29 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x1cU == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_28 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x1bU == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_27 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x1aU == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_26 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x19U == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_25 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0xeU == (0x1fU & (vlSelf->io_Inst 
                                   >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_14 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0xfU == (0x1fU & (vlSelf->io_Inst 
                                   >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_15 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x10U == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_16 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x11U == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_17 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x12U == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_18 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x13U == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_19 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x14U == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_20 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x15U == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_21 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x16U == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_22 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x17U == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_23 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0x18U == (0x1fU & (vlSelf->io_Inst 
                                    >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_24 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0xcU == (0x1fU & (vlSelf->io_Inst 
                                   >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_12 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0xbU == (0x1fU & (vlSelf->io_Inst 
                                   >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_11 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0xaU == (0x1fU & (vlSelf->io_Inst 
                                   >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_10 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((9U == (0x1fU & (vlSelf->io_Inst >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_9 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((8U == (0x1fU & (vlSelf->io_Inst >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_8 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((3U == (0x1fU & (vlSelf->io_Inst >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_3 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((2U == (0x1fU & (vlSelf->io_Inst >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_2 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((4U == (0x1fU & (vlSelf->io_Inst >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_4 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((7U == (0x1fU & (vlSelf->io_Inst >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_7 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((1U == (0x1fU & (vlSelf->io_Inst >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_1 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((5U == (0x1fU & (vlSelf->io_Inst >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_5 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((6U == (0x1fU & (vlSelf->io_Inst >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_6 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
            if ((0xdU == (0x1fU & (vlSelf->io_Inst 
                                   >> 7U)))) {
                vlSelf->Main__DOT__exu__DOT__Regs_13 
                    = ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                        ? (QData)((IData)((1U & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignS)))))
                        : vlSelf->Main__DOT__exu__DOT___DataIn_T_62);
            }
        }
        vlSelf->Main__DOT__exu__DOT__pc = ((8U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_5))
                                            ? ((IData)(vlSelf->Main__DOT__exu__DOT__SignU)
                                                ? vlSelf->Main__DOT__exu__DOT___pc_T_22
                                                : vlSelf->Main__DOT__exu__DOT___pc_T_1)
                                            : ((7U 
                                                == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_5))
                                                ? ((IData)(vlSelf->Main__DOT__exu__DOT__SignU)
                                                    ? vlSelf->Main__DOT__exu__DOT___pc_T_1
                                                    : vlSelf->Main__DOT__exu__DOT___pc_T_22)
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_5))
                                                    ? vlSelf->Main__DOT__exu__DOT___pc_T_58
                                                    : vlSelf->Main__DOT__exu__DOT___pc_T_93)));
    }
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1fU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_31;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1eU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_30;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1dU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_29;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1cU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_28;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1bU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_27;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1aU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_26;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x19U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_25;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xeU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_14;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xfU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_15;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x10U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_16;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x11U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_17;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x12U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_18;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x13U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_19;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x14U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_20;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x15U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_21;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x16U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_22;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x17U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_23;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x18U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_24;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xcU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_12;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xbU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_11;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xaU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_10;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[9U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_9;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[8U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_8;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[3U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_3;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[2U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_2;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[4U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_4;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[7U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_7;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[1U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_1;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[5U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_5;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[6U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_6;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xdU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_13;
    vlSelf->Main__DOT__exu__DOT___pc_T_1 = (4ULL + vlSelf->Main__DOT__exu__DOT__pc);
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x20U] 
        = vlSelf->Main__DOT__exu__DOT__pc;
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Main__DOT__exu__DOT__pc, vlSelf->__Vtask_pmem_read__0__Rdata);
    vlSelf->Main__DOT__ifu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__0__Rdata;
    VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf);
    vlSelf->io_Inst = (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata);
    if ((0x100073U == vlSelf->io_Inst)) {
        VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    Main__DOT__idu__DOT___contr_code_T_139 = ((0x7063U 
                                               != (0x707fU 
                                                   & vlSelf->io_Inst)) 
                                              & ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_Inst)) 
                                                 | ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_Inst)) 
                                                    | ((0x501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->io_Inst)) 
                                                       | ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_Inst)) 
                                                          | ((0x1003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_Inst)) 
                                                             | ((0x4003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->io_Inst)) 
                                                                | ((0x5003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->io_Inst)) 
                                                                   | ((0x2003U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->io_Inst)) 
                                                                      | ((0x23U 
                                                                          != 
                                                                          (0x707fU 
                                                                           & vlSelf->io_Inst)) 
                                                                         & ((0x1023U 
                                                                             != 
                                                                             (0x707fU 
                                                                              & vlSelf->io_Inst)) 
                                                                            & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                               & ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x200603bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x200003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x4000503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x503bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x101bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x4000501bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x200403bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x103bU 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | (0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst))))))))))))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_431 = ((0x6013U 
                                               == (0x707fU 
                                                   & vlSelf->io_Inst))
                                               ? 0U
                                               : ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 4U
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 3U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 6U
                                                            : 
                                                           ((0x6063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 7U
                                                             : 
                                                            ((0x7063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 8U
                                                              : 
                                                             ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->io_Inst))
                                                               ? 1U
                                                               : 
                                                              ((0x67U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 2U
                                                                : 0U)))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_201 = ((0x3013U 
                                               != (0x707fU 
                                                   & vlSelf->io_Inst)) 
                                              & ((0x63U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->io_Inst)) 
                                                 & ((0x1063U 
                                                     != 
                                                     (0x707fU 
                                                      & vlSelf->io_Inst)) 
                                                    & ((0x4063U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->io_Inst)) 
                                                       & ((0x5063U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->io_Inst)) 
                                                          & ((0x6063U 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->io_Inst)) 
                                                             & ((0x7063U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & vlSelf->io_Inst)) 
                                                                & ((0x6fU 
                                                                    != 
                                                                    (0x7fU 
                                                                     & vlSelf->io_Inst)) 
                                                                   & ((0x67U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & vlSelf->io_Inst)) 
                                                                      & ((0x501bU 
                                                                          != 
                                                                          (0xfc00707fU 
                                                                           & vlSelf->io_Inst)) 
                                                                         & ((3U 
                                                                             != 
                                                                             (0x707fU 
                                                                              & vlSelf->io_Inst)) 
                                                                            & ((0x1003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                               & ((0x4003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                & ((0x5003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                & ((0x2003U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                & ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)))))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_534 = ((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->io_Inst))
                                               ? 0U
                                               : ((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 0U
                                                             : 
                                                            ((0x23U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 1U
                                                              : 
                                                             ((0x1023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 3U
                                                               : 
                                                              ((0x2023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 0xfU
                                                                : 0U)))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_464 = ((0x2023U 
                                               == (0x707fU 
                                                   & vlSelf->io_Inst))
                                               ? 0U
                                               : ((0x2000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x200603bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 6U
                                                     : 
                                                    ((0x200603bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x200003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 6U
                                                       : 
                                                      ((0x2004033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 6U
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 6U
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 6U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 6U
                                                             : 
                                                            ((0x200403bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 6U
                                                              : 
                                                             ((0x103bU 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 6U
                                                               : 
                                                              ((0x3013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 0xeU
                                                                : 0U)))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_351 = ((0x2000033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_Inst))
                                               ? 3U
                                               : ((0x2006033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 6U
                                                   : 
                                                  ((0x200603bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 6U
                                                    : 
                                                   ((0x200603bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 7U
                                                     : 
                                                    ((0x200003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 3U
                                                      : 
                                                     ((0x2004033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 4U
                                                       : 
                                                      ((0x2005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 0x10U
                                                         : 
                                                        ((0x503bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 0xfU
                                                          : 
                                                         ((0x101bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 0xeU
                                                           : 
                                                          ((0x4000501bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 0x10U
                                                            : 
                                                           ((0x200403bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 0x11U
                                                             : 
                                                            ((0x103bU 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 0xeU
                                                              : 
                                                             ((0x3013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 2U
                                                               : 0U))))))))))))));
    Main__DOT__idu__DOT___io_Imm_T_4 = (((QData)((IData)(
                                                         ((vlSelf->io_Inst 
                                                           >> 0x1fU)
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->io_Inst))));
    Main__DOT__idu__DOT___io_Imm_T_9 = ((((vlSelf->io_Inst 
                                           >> 0x1fU)
                                           ? 0xfffffffffffffULL
                                           : 0ULL) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->io_Inst 
                                                                     >> 0x14U))));
    vlSelf->Main__DOT__idu__DOT__io_Imm_lo_2 = ((0xfe0U 
                                                 & (vlSelf->io_Inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->io_Inst 
                                                      >> 7U)));
    vlSelf->Main__DOT__idu__DOT__io_Imm_lo_6 = ((((0x100000U 
                                                   & (vlSelf->io_Inst 
                                                      >> 0xbU)) 
                                                  | (0x7feU 
                                                     & (vlSelf->io_Inst 
                                                        >> 0x14U))) 
                                                 | (0x800U 
                                                    & (vlSelf->io_Inst 
                                                       >> 9U))) 
                                                | (0xff000U 
                                                   & vlSelf->io_Inst));
    vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8 = ((((0x1000U 
                                                   & (vlSelf->io_Inst 
                                                      >> 0x13U)) 
                                                  | (0x7e0U 
                                                     & (vlSelf->io_Inst 
                                                        >> 0x14U))) 
                                                 | (0x1eU 
                                                    & (vlSelf->io_Inst 
                                                       >> 7U))) 
                                                | (0x800U 
                                                   & (vlSelf->io_Inst 
                                                      << 4U)));
    Main__DOT__exu__DOT___GEN_13 = ((0xdU == (0x1fU 
                                              & (vlSelf->io_Inst 
                                                 >> 0xfU)))
                                     ? vlSelf->Main__DOT__exu__DOT__Regs_13
                                     : ((0xcU == (0x1fU 
                                                  & (vlSelf->io_Inst 
                                                     >> 0xfU)))
                                         ? vlSelf->Main__DOT__exu__DOT__Regs_12
                                         : ((0xbU == 
                                             (0x1fU 
                                              & (vlSelf->io_Inst 
                                                 >> 0xfU)))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_11
                                             : ((0xaU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->io_Inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_10
                                                 : 
                                                ((9U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_Inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_9
                                                  : 
                                                 ((8U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_Inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_8
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_Inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_7
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_Inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_6
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_Inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_5
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->io_Inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->Main__DOT__exu__DOT__Regs_4
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->io_Inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->Main__DOT__exu__DOT__Regs_3
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_Inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->Main__DOT__exu__DOT__Regs_2
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->io_Inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->Main__DOT__exu__DOT__Regs_1
                                                          : 0ULL)))))))))))));
    Main__DOT__idu__DOT___contr_code_T_296 = ((0x2023U 
                                               == (0x707fU 
                                                   & vlSelf->io_Inst))
                                               ? 4U
                                               : ((0x2000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x200603bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x200603bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x200003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2004033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 2U
                                                             : 
                                                            ((0x200403bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 6U
                                                              : 
                                                             ((0x103bU 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 0U
                                                               : 
                                                              ((0x3013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 4U
                                                                : 0U)))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_241 = ((0x1023U 
                                               == (0x707fU 
                                                   & vlSelf->io_Inst))
                                               ? 0U
                                               : ((0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x2006033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x200603bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x200603bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x200003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2004033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x2005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 3U
                                                           : 
                                                          ((0x503bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 3U
                                                            : 
                                                           ((0x101bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 3U
                                                             : 
                                                            ((0x4000501bU 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 3U
                                                              : 
                                                             ((0x200403bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 3U
                                                               : 
                                                              ((0x103bU 
                                                                == 
                                                                (0xfc00707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 3U
                                                                : 0U)))))))))))))));
    Main__DOT__exu__DOT___GEN_45 = ((0xdU == (0x1fU 
                                              & (vlSelf->io_Inst 
                                                 >> 0x14U)))
                                     ? vlSelf->Main__DOT__exu__DOT__Regs_13
                                     : ((0xcU == (0x1fU 
                                                  & (vlSelf->io_Inst 
                                                     >> 0x14U)))
                                         ? vlSelf->Main__DOT__exu__DOT__Regs_12
                                         : ((0xbU == 
                                             (0x1fU 
                                              & (vlSelf->io_Inst 
                                                 >> 0x14U)))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_11
                                             : ((0xaU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->io_Inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_10
                                                 : 
                                                ((9U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_Inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_9
                                                  : 
                                                 ((8U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_Inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_8
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_Inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_7
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_Inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_6
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_Inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_5
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->io_Inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->Main__DOT__exu__DOT__Regs_4
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->io_Inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->Main__DOT__exu__DOT__Regs_3
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_Inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->Main__DOT__exu__DOT__Regs_2
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->io_Inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->Main__DOT__exu__DOT__Regs_1
                                                          : 0ULL)))))))))))));
    Main__DOT__idu__DOT___contr_code_T_168 = ((0x3023U 
                                               != (0x707fU 
                                                   & vlSelf->io_Inst)) 
                                              & ((0x13U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_Inst)) 
                                                 | ((0x33U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_Inst)) 
                                                    | ((0x1bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_Inst)) 
                                                       | ((0x3bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_Inst)) 
                                                          | ((0x1033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_Inst)) 
                                                             | ((0x1013U 
                                                                 == 
                                                                 (0xfc00707fU 
                                                                  & vlSelf->io_Inst)) 
                                                                | ((0x5033U 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->io_Inst)) 
                                                                   | ((0x5013U 
                                                                       == 
                                                                       (0xfc00707fU 
                                                                        & vlSelf->io_Inst)) 
                                                                      | ((0x40005033U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->io_Inst)) 
                                                                         | ((0x40005013U 
                                                                             == 
                                                                             (0xfc00707fU 
                                                                              & vlSelf->io_Inst)) 
                                                                            | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                               | ((0x4000003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x4013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x2013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                | ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_Inst)) 
                                                                                & (IData)(Main__DOT__idu__DOT___contr_code_T_139))))))))))))))))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_446 = ((0x33U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_Inst))
                                               ? 0U
                                               : ((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x40005013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x40000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x4000003bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x37U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->io_Inst))
                                                             ? 0U
                                                             : 
                                                            ((0x4033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 0U
                                                              : 
                                                             ((0x4013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 0U
                                                               : 
                                                              ((0x6033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 0U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_431))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_218 
        = ((0x1013U != (0xfc00707fU & vlSelf->io_Inst)) 
           & ((0x5033U != (0xfe00707fU & vlSelf->io_Inst)) 
              & ((0x5013U != (0xfc00707fU & vlSelf->io_Inst)) 
                 & ((0x40005033U != (0xfe00707fU & vlSelf->io_Inst)) 
                    & ((0x40005013U != (0xfc00707fU 
                                        & vlSelf->io_Inst)) 
                       & ((0x40000033U != (0xfe00707fU 
                                           & vlSelf->io_Inst)) 
                          & ((0x4000003bU != (0xfe00707fU 
                                              & vlSelf->io_Inst)) 
                             & ((0x37U != (0x7fU & vlSelf->io_Inst)) 
                                & ((0x4033U != (0xfe00707fU 
                                                & vlSelf->io_Inst)) 
                                   & ((0x4013U != (0x707fU 
                                                   & vlSelf->io_Inst)) 
                                      & ((0x6033U != 
                                          (0xfe00707fU 
                                           & vlSelf->io_Inst)) 
                                         & ((0x6013U 
                                             != (0x707fU 
                                                 & vlSelf->io_Inst)) 
                                            & ((0x7033U 
                                                != 
                                                (0xfe00707fU 
                                                 & vlSelf->io_Inst)) 
                                               & ((0x7013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->io_Inst)) 
                                                  & ((0x2033U 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_Inst)) 
                                                     & ((0x2013U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->io_Inst)) 
                                                        & ((0x3033U 
                                                            != 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_Inst)) 
                                                           & (IData)(Main__DOT__idu__DOT___contr_code_T_201))))))))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_549 
        = ((0x40000033U == (0xfe00707fU & vlSelf->io_Inst))
            ? 0U : ((0x4000003bU == (0xfe00707fU & vlSelf->io_Inst))
                     ? 0U : ((0x37U == (0x7fU & vlSelf->io_Inst))
                              ? 0U : ((0x4033U == (0xfe00707fU 
                                                   & vlSelf->io_Inst))
                                       ? 0U : ((0x4013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_Inst))
                                                ? 0U
                                                : (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x3033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x1063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 0U
                                                             : (IData)(Main__DOT__idu__DOT___contr_code_T_534))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_479 = ((0x1063U 
                                               == (0x707fU 
                                                   & vlSelf->io_Inst))
                                               ? 0U
                                               : ((0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->io_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x501bU 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 6U
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 3U
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 8U
                                                            : 
                                                           ((0x5003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 9U
                                                             : 
                                                            ((0x2003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 7U
                                                              : 
                                                             ((0x23U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 0U
                                                               : 
                                                              ((0x1023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 0U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_464))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_366 = ((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->io_Inst))
                                               ? 2U
                                               : ((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 2U
                                                   : 
                                                  ((0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 2U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 2U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->io_Inst))
                                                      ? 1U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 1U
                                                       : 
                                                      ((0x501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0xfU
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 1U
                                                          : 
                                                         ((0x4003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 1U
                                                           : 
                                                          ((0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 1U
                                                            : 
                                                           ((0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 1U
                                                             : 
                                                            ((0x23U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 1U
                                                              : 
                                                             ((0x1023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 1U
                                                               : 
                                                              ((0x2023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 1U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_351))))))))))))))));
    vlSelf->Main__DOT__idu_io_Imm = ((0x63U == (0x7fU 
                                                & vlSelf->io_Inst))
                                      ? ((((0x1000U 
                                            & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8))
                                            ? 0x7ffffffffffffULL
                                            : 0ULL) 
                                          << 0xdU) 
                                         | (QData)((IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8)))
                                      : ((0x67U == 
                                          (0x7fU & vlSelf->io_Inst))
                                          ? Main__DOT__idu__DOT___io_Imm_T_9
                                          : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->io_Inst))
                                              ? (((
                                                   (0x100000U 
                                                    & vlSelf->Main__DOT__idu__DOT__io_Imm_lo_6)
                                                    ? 0x7ffffffffffULL
                                                    : 0ULL) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_6)))
                                              : ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_Inst))
                                                  ? Main__DOT__idu__DOT___io_Imm_T_4
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0ULL
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_Inst))
                                                    ? Main__DOT__idu__DOT___io_Imm_T_9
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->io_Inst))
                                                     ? 0ULL
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->io_Inst))
                                                      ? Main__DOT__idu__DOT___io_Imm_T_9
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->io_Inst))
                                                       ? 
                                                      ((((0x800U 
                                                          & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_2))
                                                          ? 0xfffffffffffffULL
                                                          : 0ULL) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_2)))
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->io_Inst))
                                                        ? Main__DOT__idu__DOT___io_Imm_T_9
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->io_Inst))
                                                         ? Main__DOT__idu__DOT___io_Imm_T_4
                                                         : 0ULL)))))))))));
    Main__DOT__exu__DOT___GEN_26 = ((0x1aU == (0x1fU 
                                               & (vlSelf->io_Inst 
                                                  >> 0xfU)))
                                     ? vlSelf->Main__DOT__exu__DOT__Regs_26
                                     : ((0x19U == (0x1fU 
                                                   & (vlSelf->io_Inst 
                                                      >> 0xfU)))
                                         ? vlSelf->Main__DOT__exu__DOT__Regs_25
                                         : ((0x18U 
                                             == (0x1fU 
                                                 & (vlSelf->io_Inst 
                                                    >> 0xfU)))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_24
                                             : ((0x17U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->io_Inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_23
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_Inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_22
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_Inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_21
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_Inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_20
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_Inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_19
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_Inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_18
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->io_Inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->Main__DOT__exu__DOT__Regs_17
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->io_Inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->Main__DOT__exu__DOT__Regs_16
                                                        : 
                                                       ((0xfU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_Inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->Main__DOT__exu__DOT__Regs_15
                                                         : 
                                                        ((0xeU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->io_Inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->Main__DOT__exu__DOT__Regs_14
                                                          : Main__DOT__exu__DOT___GEN_13)))))))))))));
    Main__DOT__idu__DOT___contr_code_T_311 = ((0x1063U 
                                               == (0x707fU 
                                                   & vlSelf->io_Inst))
                                               ? 0U
                                               : ((0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->io_Inst))
                                                       ? 5U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x501bU 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 2U
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 4U
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 4U
                                                           : 
                                                          ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 4U
                                                            : 
                                                           ((0x5003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 4U
                                                             : 
                                                            ((0x2003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 4U
                                                              : 
                                                             ((0x23U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 4U
                                                               : 
                                                              ((0x1023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 4U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_296))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_256 = ((0x63U 
                                               == (0x707fU 
                                                   & vlSelf->io_Inst))
                                               ? 0U
                                               : ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->io_Inst))
                                                        ? 1U
                                                        : 
                                                       ((0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 3U
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 0U
                                                             : 
                                                            ((0x5003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 0U
                                                              : 
                                                             ((0x2003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 0U
                                                               : 
                                                              ((0x23U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 0U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_241))))))))))))))));
    Main__DOT__exu__DOT___GEN_58 = ((0x1aU == (0x1fU 
                                               & (vlSelf->io_Inst 
                                                  >> 0x14U)))
                                     ? vlSelf->Main__DOT__exu__DOT__Regs_26
                                     : ((0x19U == (0x1fU 
                                                   & (vlSelf->io_Inst 
                                                      >> 0x14U)))
                                         ? vlSelf->Main__DOT__exu__DOT__Regs_25
                                         : ((0x18U 
                                             == (0x1fU 
                                                 & (vlSelf->io_Inst 
                                                    >> 0x14U)))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_24
                                             : ((0x17U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->io_Inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_23
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_Inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_22
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_Inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_21
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_Inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_20
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_Inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_19
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_Inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_18
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->io_Inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->Main__DOT__exu__DOT__Regs_17
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->io_Inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->Main__DOT__exu__DOT__Regs_16
                                                        : 
                                                       ((0xfU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_Inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->Main__DOT__exu__DOT__Regs_15
                                                         : 
                                                        ((0xeU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->io_Inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->Main__DOT__exu__DOT__Regs_14
                                                          : Main__DOT__exu__DOT___GEN_45)))))))))))));
    vlSelf->Main__DOT__idu_io_RegWrite = ((0x17U == 
                                           (0x7fU & vlSelf->io_Inst)) 
                                          | ((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->io_Inst)) 
                                             | (IData)(Main__DOT__idu__DOT___contr_code_T_168)));
    vlSelf->Main__DOT__idu__DOT__contr_code_5 = ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_Inst))
                                                  ? 0U
                                                  : 
                                                 ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 0U
                                                     : (IData)(Main__DOT__idu__DOT___contr_code_T_446)))));
    Main__DOT__idu__DOT___contr_code_T_494 = ((0x40005013U 
                                               == (0xfc00707fU 
                                                   & vlSelf->io_Inst))
                                               ? 0U
                                               : ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4000003bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 6U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->io_Inst))
                                                     ? 6U
                                                     : 
                                                    ((0x4033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x7013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 0xfU
                                                            : 
                                                           ((0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 0xfU
                                                             : 
                                                            ((0x3033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 0xeU
                                                              : 
                                                             ((0x3013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 0xeU
                                                               : 
                                                              ((0x63U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 0U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_479))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_381 = ((0x40000033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_Inst))
                                               ? 2U
                                               : ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 2U
                                                   : 
                                                  ((0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_Inst))
                                                    ? 8U
                                                    : 
                                                   ((0x4033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 0xbU
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0xbU
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 0xcU
                                                       : 
                                                      ((0x6013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0xcU
                                                        : 
                                                       ((0x7033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 0xdU
                                                         : 
                                                        ((0x7013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 0xdU
                                                          : 
                                                         ((0x2033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 2U
                                                           : 
                                                          ((0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 2U
                                                             : 
                                                            ((0x3013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 2U
                                                              : 
                                                             ((0x63U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 2U
                                                               : 
                                                              ((0x1063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 2U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_366))))))))))))))));
    vlSelf->Main__DOT__exu__DOT___pc_T_22 = (vlSelf->Main__DOT__exu__DOT__pc 
                                             + ((((1U 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__idu_io_Imm 
                                                              >> 0xcU)))
                                                   ? 0x7ffffffffffffULL
                                                   : 0ULL) 
                                                 << 0xdU) 
                                                | (QData)((IData)(
                                                                  (0x1fffU 
                                                                   & (IData)(vlSelf->Main__DOT__idu_io_Imm))))));
    vlSelf->Main__DOT__exu__DOT__DataR1 = ((0x1fU == 
                                            (0x1fU 
                                             & (vlSelf->io_Inst 
                                                >> 0xfU)))
                                            ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                            : ((0x1eU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->io_Inst 
                                                    >> 0xfU)))
                                                ? vlSelf->Main__DOT__exu__DOT__Regs_30
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_Inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_Inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_Inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_27
                                                      : Main__DOT__exu__DOT___GEN_26)))));
    Main__DOT__idu__DOT___contr_code_T_326 = ((0x40005013U 
                                               == (0xfc00707fU 
                                                   & vlSelf->io_Inst))
                                               ? 2U
                                               : ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4000003bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->io_Inst))
                                                     ? 3U
                                                     : 
                                                    ((0x4033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 4U
                                                       : 
                                                      ((0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 4U
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x7013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 4U
                                                           : 
                                                          ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 4U
                                                             : 
                                                            ((0x3033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 0U
                                                              : 
                                                             ((0x3013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 4U
                                                               : 
                                                              ((0x63U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 0U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_311))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_271 = ((0x40005033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_Inst))
                                               ? 0U
                                               : ((0x40005013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->io_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4000003bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_Inst))
                                                     ? 3U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->io_Inst))
                                                      ? 2U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x6013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_Inst))
                                                             ? 0U
                                                             : 
                                                            ((0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_Inst))
                                                              ? 0U
                                                              : 
                                                             ((0x3033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_Inst))
                                                               ? 0U
                                                               : 
                                                              ((0x3013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_Inst))
                                                                ? 0U
                                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_256))))))))))))))));
    vlSelf->Main__DOT__exu__DOT___GEN_62 = ((0x1eU 
                                             == (0x1fU 
                                                 & (vlSelf->io_Inst 
                                                    >> 0x14U)))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_30
                                             : ((0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->io_Inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_29
                                                 : 
                                                ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_Inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_28
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_Inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_27
                                                   : Main__DOT__exu__DOT___GEN_58))));
    if ((0x17U == (0x7fU & vlSelf->io_Inst))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 0U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
        vlSelf->Main__DOT__idu__DOT__contr_code_3 = 4U;
        vlSelf->Main__DOT__idu__DOT__contr_code_2 = 1U;
    } else if ((0x3003U == (0x707fU & vlSelf->io_Inst))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 1U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
        vlSelf->Main__DOT__idu__DOT__contr_code_3 = 4U;
        vlSelf->Main__DOT__idu__DOT__contr_code_2 = 0U;
    } else if ((0x3023U == (0x707fU & vlSelf->io_Inst))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 0U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
        vlSelf->Main__DOT__idu__DOT__contr_code_3 = 4U;
        vlSelf->Main__DOT__idu__DOT__contr_code_2 = 0U;
    } else if ((0x13U == (0x707fU & vlSelf->io_Inst))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 0U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
        vlSelf->Main__DOT__idu__DOT__contr_code_3 = 4U;
        vlSelf->Main__DOT__idu__DOT__contr_code_2 = 0U;
    } else if ((0x33U == (0xfe00707fU & vlSelf->io_Inst))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 0U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
        vlSelf->Main__DOT__idu__DOT__contr_code_3 = 0U;
        vlSelf->Main__DOT__idu__DOT__contr_code_2 = 0U;
    } else if ((0x1bU == (0x707fU & vlSelf->io_Inst))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 6U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
        vlSelf->Main__DOT__idu__DOT__contr_code_3 = 4U;
        vlSelf->Main__DOT__idu__DOT__contr_code_2 = 0U;
    } else if ((0x3bU == (0xfe00707fU & vlSelf->io_Inst))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 6U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
        vlSelf->Main__DOT__idu__DOT__contr_code_3 = 0U;
        vlSelf->Main__DOT__idu__DOT__contr_code_2 = 3U;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->io_Inst))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 0U;
        vlSelf->Main__DOT__idu_io_AluOp = 8U;
        vlSelf->Main__DOT__idu__DOT__contr_code_3 = 1U;
        vlSelf->Main__DOT__idu__DOT__contr_code_2 = 0U;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->io_Inst))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 0U;
        vlSelf->Main__DOT__idu_io_AluOp = 8U;
        vlSelf->Main__DOT__idu__DOT__contr_code_3 = 2U;
        vlSelf->Main__DOT__idu__DOT__contr_code_2 = 0U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->io_Inst))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 0U;
        vlSelf->Main__DOT__idu_io_AluOp = 9U;
        vlSelf->Main__DOT__idu__DOT__contr_code_3 = 1U;
        vlSelf->Main__DOT__idu__DOT__contr_code_2 = 0U;
    } else if ((0x5013U == (0xfc00707fU & vlSelf->io_Inst))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 0U;
        vlSelf->Main__DOT__idu_io_AluOp = 9U;
        vlSelf->Main__DOT__idu__DOT__contr_code_3 = 2U;
        vlSelf->Main__DOT__idu__DOT__contr_code_2 = 0U;
    } else {
        if ((0x40005033U == (0xfe00707fU & vlSelf->io_Inst))) {
            vlSelf->Main__DOT__idu_io_RinCtl = 0U;
            vlSelf->Main__DOT__idu_io_AluOp = 0xaU;
            vlSelf->Main__DOT__idu__DOT__contr_code_3 = 1U;
        } else {
            vlSelf->Main__DOT__idu_io_RinCtl = Main__DOT__idu__DOT___contr_code_T_494;
            vlSelf->Main__DOT__idu_io_AluOp = ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_Inst))
                                                ? 0xaU
                                                : (IData)(Main__DOT__idu__DOT___contr_code_T_381));
            vlSelf->Main__DOT__idu__DOT__contr_code_3 
                = Main__DOT__idu__DOT___contr_code_T_326;
        }
        vlSelf->Main__DOT__idu__DOT__contr_code_2 = Main__DOT__idu__DOT___contr_code_T_271;
    }
    vlSelf->Main__DOT__exu__DOT__DataR2 = ((0x1fU == 
                                            (0x1fU 
                                             & (vlSelf->io_Inst 
                                                >> 0x14U)))
                                            ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                            : vlSelf->Main__DOT__exu__DOT___GEN_62);
    Main__DOT__exu__DOT___AluSrc1_T_7 = ((2U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_2))
                                          ? (QData)((IData)(
                                                            (0xfffffU 
                                                             & (IData)(
                                                                       (vlSelf->Main__DOT__idu_io_Imm 
                                                                        >> 0xcU)))))
                                          : ((1U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_2))
                                              ? vlSelf->Main__DOT__exu__DOT__pc
                                              : vlSelf->Main__DOT__exu__DOT__DataR1));
    Main__DOT__exu__DOT___AluSrc2_T_14 = ((5U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))
                                           ? 4ULL : 
                                          ((4U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))
                                            ? vlSelf->Main__DOT__idu_io_Imm
                                            : ((3U 
                                                == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))
                                                ? 0xcULL
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))
                                                    ? (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (IData)(vlSelf->Main__DOT__idu_io_Imm))))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))
                                                     ? (QData)((IData)(
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->Main__DOT__exu__DOT__DataR2))))
                                                     : vlSelf->Main__DOT__exu__DOT__DataR2)))));
    vlSelf->Main__DOT__exu__DOT___AluOut_T_19 = ((3U 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_2))
                                                  ? (QData)((IData)(vlSelf->Main__DOT__exu__DOT__DataR1))
                                                  : Main__DOT__exu__DOT___AluSrc1_T_7);
    vlSelf->Main__DOT__exu__DOT__AluSrc2 = ((6U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))
                                             ? (QData)((IData)(vlSelf->Main__DOT__exu__DOT__DataR2))
                                             : Main__DOT__exu__DOT___AluSrc2_T_14);
    Main__DOT__exu__DOT___SignU_T = ((2U & ((IData)(
                                                    (vlSelf->Main__DOT__exu__DOT___AluOut_T_19 
                                                     >> 0x3fU)) 
                                            << 1U)) 
                                     | (1U & (IData)(
                                                     (vlSelf->Main__DOT__exu__DOT__AluSrc2 
                                                      >> 0x3fU))));
    VL_EXTEND_WQ(128,64, __Vtemp_hcd6c249d__0, (vlSelf->Main__DOT__exu__DOT___AluOut_T_19 
                                                ^ vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_hc3a4bf54__0, VL_SHIFTRS_QQI(64,64,6, vlSelf->Main__DOT__exu__DOT___AluOut_T_19, 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2))));
    VL_EXTEND_WQ(128,64, __Vtemp_hc3a1df31__0, (vlSelf->Main__DOT__exu__DOT___AluOut_T_19 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2))));
    VL_EXTEND_WQ(127,64, __Vtemp_h1441d85a__0, vlSelf->Main__DOT__exu__DOT___AluOut_T_19);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h0d4ec2fb__0, __Vtemp_h1441d85a__0, 
                  (0x3fU & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)));
    __Vtemp_h4116cc37__0[0U] = __Vtemp_h0d4ec2fb__0[0U];
    __Vtemp_h4116cc37__0[1U] = __Vtemp_h0d4ec2fb__0[1U];
    __Vtemp_h4116cc37__0[2U] = __Vtemp_h0d4ec2fb__0[2U];
    __Vtemp_h4116cc37__0[3U] = (0x7fffffffU & __Vtemp_h0d4ec2fb__0[3U]);
    VL_EXTEND_WW(128,127, __Vtemp_hfdece22f__0, __Vtemp_h4116cc37__0);
    VL_EXTEND_WQ(128,64, __Vtemp_hcc882be3__0, VL_MODDIV_QQQ(64, vlSelf->Main__DOT__exu__DOT___AluOut_T_19, vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_hcdac0be8__0, VL_MODDIVS_QQQ(64, vlSelf->Main__DOT__exu__DOT___AluOut_T_19, vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_hccf1bdce__0, VL_DIV_QQQ(64, vlSelf->Main__DOT__exu__DOT___AluOut_T_19, vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTENDS_WQ(65,64, __Vtemp_h14b37127__0, vlSelf->Main__DOT__exu__DOT___AluOut_T_19);
    __Vtemp_h4971a736__0[0U] = __Vtemp_h14b37127__0[0U];
    __Vtemp_h4971a736__0[1U] = __Vtemp_h14b37127__0[1U];
    __Vtemp_h4971a736__0[2U] = (1U & __Vtemp_h14b37127__0[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp_h104f9c54__0, vlSelf->Main__DOT__exu__DOT__AluSrc2);
    __Vtemp_h8a625cc0__0[0U] = __Vtemp_h104f9c54__0[0U];
    __Vtemp_h8a625cc0__0[1U] = __Vtemp_h104f9c54__0[1U];
    __Vtemp_h8a625cc0__0[2U] = (1U & __Vtemp_h104f9c54__0[2U]);
    VL_DIVS_WWW(65, __Vtemp_hf202c522__0, __Vtemp_h4971a736__0, __Vtemp_h8a625cc0__0);
    __Vtemp_h3709ddb9__0[0U] = __Vtemp_hf202c522__0[0U];
    __Vtemp_h3709ddb9__0[1U] = __Vtemp_hf202c522__0[1U];
    __Vtemp_h3709ddb9__0[2U] = (1U & __Vtemp_hf202c522__0[2U]);
    VL_EXTEND_WW(128,65, __Vtemp_h5acd1880__0, __Vtemp_h3709ddb9__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h1441d85a__1, vlSelf->Main__DOT__exu__DOT___AluOut_T_19);
    VL_EXTEND_WQ(128,64, __Vtemp_h105d8525__0, vlSelf->Main__DOT__exu__DOT__AluSrc2);
    VL_MUL_W(4, __Vtemp_h0203aee7__0, __Vtemp_h1441d85a__1, __Vtemp_h105d8525__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h11e9e093__0, ((2U 
                                                 == (IData)(vlSelf->Main__DOT__idu_io_AluOp))
                                                 ? 
                                                (vlSelf->Main__DOT__exu__DOT___AluOut_T_19 
                                                 - vlSelf->Main__DOT__exu__DOT__AluSrc2)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->Main__DOT__idu_io_AluOp))
                                                  ? 
                                                 (vlSelf->Main__DOT__exu__DOT___AluOut_T_19 
                                                  + vlSelf->Main__DOT__exu__DOT__AluSrc2)
                                                  : 0ULL)));
    if ((0xbU == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_64[0U] = __Vtemp_hcd6c249d__0[0U];
        Main__DOT__exu__DOT___AluOut_T_64[1U] = __Vtemp_hcd6c249d__0[1U];
        Main__DOT__exu__DOT___AluOut_T_64[2U] = __Vtemp_hcd6c249d__0[2U];
        Main__DOT__exu__DOT___AluOut_T_64[3U] = __Vtemp_hcd6c249d__0[3U];
    } else if ((0xaU == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_64[0U] = __Vtemp_hc3a4bf54__0[0U];
        Main__DOT__exu__DOT___AluOut_T_64[1U] = __Vtemp_hc3a4bf54__0[1U];
        Main__DOT__exu__DOT___AluOut_T_64[2U] = __Vtemp_hc3a4bf54__0[2U];
        Main__DOT__exu__DOT___AluOut_T_64[3U] = __Vtemp_hc3a4bf54__0[3U];
    } else if ((9U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_64[0U] = __Vtemp_hc3a1df31__0[0U];
        Main__DOT__exu__DOT___AluOut_T_64[1U] = __Vtemp_hc3a1df31__0[1U];
        Main__DOT__exu__DOT___AluOut_T_64[2U] = __Vtemp_hc3a1df31__0[2U];
        Main__DOT__exu__DOT___AluOut_T_64[3U] = __Vtemp_hc3a1df31__0[3U];
    } else if ((8U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_64[0U] = __Vtemp_hfdece22f__0[0U];
        Main__DOT__exu__DOT___AluOut_T_64[1U] = __Vtemp_hfdece22f__0[1U];
        Main__DOT__exu__DOT___AluOut_T_64[2U] = __Vtemp_hfdece22f__0[2U];
        Main__DOT__exu__DOT___AluOut_T_64[3U] = __Vtemp_hfdece22f__0[3U];
    } else if ((7U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_64[0U] = __Vtemp_hcc882be3__0[0U];
        Main__DOT__exu__DOT___AluOut_T_64[1U] = __Vtemp_hcc882be3__0[1U];
        Main__DOT__exu__DOT___AluOut_T_64[2U] = __Vtemp_hcc882be3__0[2U];
        Main__DOT__exu__DOT___AluOut_T_64[3U] = __Vtemp_hcc882be3__0[3U];
    } else if ((6U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_64[0U] = __Vtemp_hcdac0be8__0[0U];
        Main__DOT__exu__DOT___AluOut_T_64[1U] = __Vtemp_hcdac0be8__0[1U];
        Main__DOT__exu__DOT___AluOut_T_64[2U] = __Vtemp_hcdac0be8__0[2U];
        Main__DOT__exu__DOT___AluOut_T_64[3U] = __Vtemp_hcdac0be8__0[3U];
    } else if ((5U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_64[0U] = __Vtemp_hccf1bdce__0[0U];
        Main__DOT__exu__DOT___AluOut_T_64[1U] = __Vtemp_hccf1bdce__0[1U];
        Main__DOT__exu__DOT___AluOut_T_64[2U] = __Vtemp_hccf1bdce__0[2U];
        Main__DOT__exu__DOT___AluOut_T_64[3U] = __Vtemp_hccf1bdce__0[3U];
    } else if ((4U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_64[0U] = __Vtemp_h5acd1880__0[0U];
        Main__DOT__exu__DOT___AluOut_T_64[1U] = __Vtemp_h5acd1880__0[1U];
        Main__DOT__exu__DOT___AluOut_T_64[2U] = __Vtemp_h5acd1880__0[2U];
        Main__DOT__exu__DOT___AluOut_T_64[3U] = __Vtemp_h5acd1880__0[3U];
    } else if ((3U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_64[0U] = __Vtemp_h0203aee7__0[0U];
        Main__DOT__exu__DOT___AluOut_T_64[1U] = __Vtemp_h0203aee7__0[1U];
        Main__DOT__exu__DOT___AluOut_T_64[2U] = __Vtemp_h0203aee7__0[2U];
        Main__DOT__exu__DOT___AluOut_T_64[3U] = __Vtemp_h0203aee7__0[3U];
    } else {
        Main__DOT__exu__DOT___AluOut_T_64[0U] = __Vtemp_h11e9e093__0[0U];
        Main__DOT__exu__DOT___AluOut_T_64[1U] = __Vtemp_h11e9e093__0[1U];
        Main__DOT__exu__DOT___AluOut_T_64[2U] = __Vtemp_h11e9e093__0[2U];
        Main__DOT__exu__DOT___AluOut_T_64[3U] = __Vtemp_h11e9e093__0[3U];
    }
    VL_EXTEND_WQ(128,33, __Vtemp_h2a8357fb__0, (0x1ffffffffULL 
                                                & VL_DIVS_QQQ(33, 
                                                              (0x1ffffffffULL 
                                                               & VL_EXTENDS_QI(33,32, (IData)(vlSelf->Main__DOT__exu__DOT___AluOut_T_19))), 
                                                              (0x1ffffffffULL 
                                                               & VL_EXTENDS_QI(33,32, (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2))))));
    VL_EXTEND_WI(128,32, __Vtemp_hd1505630__0, ((0x1fU 
                                                 >= 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)))
                                                 ? 
                                                VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->Main__DOT__exu__DOT___AluOut_T_19), 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)))
                                                 : 
                                                (- 
                                                 ((IData)(vlSelf->Main__DOT__exu__DOT___AluOut_T_19) 
                                                  >> 0x1fU))));
    VL_EXTEND_WI(128,32, __Vtemp_h49fd3415__0, ((0x1fU 
                                                 >= 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)))
                                                 ? 
                                                ((IData)(vlSelf->Main__DOT__exu__DOT___AluOut_T_19) 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)))
                                                 : 0U));
    VL_EXTEND_WI(95,32, __Vtemp_hd5a5b391__0, (IData)(vlSelf->Main__DOT__exu__DOT___AluOut_T_19));
    VL_SHIFTL_WWI(95,95,6, __Vtemp_hb4073e0d__0, __Vtemp_hd5a5b391__0, 
                  (0x3fU & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)));
    __Vtemp_hd0535286__0[0U] = __Vtemp_hb4073e0d__0[0U];
    __Vtemp_hd0535286__0[1U] = __Vtemp_hb4073e0d__0[1U];
    __Vtemp_hd0535286__0[2U] = (0x7fffffffU & __Vtemp_hb4073e0d__0[2U]);
    VL_EXTEND_WW(128,95, __Vtemp_hc2c4fa96__0, __Vtemp_hd0535286__0);
    VL_EXTEND_WQ(128,64, __Vtemp_hcd148733__0, (vlSelf->Main__DOT__exu__DOT___AluOut_T_19 
                                                & vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_hcd04d438__0, (vlSelf->Main__DOT__exu__DOT___AluOut_T_19 
                                                | vlSelf->Main__DOT__exu__DOT__AluSrc2));
    if ((0x11U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U] 
            = __Vtemp_h2a8357fb__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U] 
            = __Vtemp_h2a8357fb__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[2U] 
            = __Vtemp_h2a8357fb__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[3U] 
            = __Vtemp_h2a8357fb__0[3U];
    } else if ((0x10U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U] 
            = __Vtemp_hd1505630__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U] 
            = __Vtemp_hd1505630__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[2U] 
            = __Vtemp_hd1505630__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[3U] 
            = __Vtemp_hd1505630__0[3U];
    } else if ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U] 
            = __Vtemp_h49fd3415__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U] 
            = __Vtemp_h49fd3415__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[2U] 
            = __Vtemp_h49fd3415__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[3U] 
            = __Vtemp_h49fd3415__0[3U];
    } else if ((0xeU == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U] 
            = __Vtemp_hc2c4fa96__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U] 
            = __Vtemp_hc2c4fa96__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[2U] 
            = __Vtemp_hc2c4fa96__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[3U] 
            = __Vtemp_hc2c4fa96__0[3U];
    } else if ((0xdU == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U] 
            = __Vtemp_hcd148733__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U] 
            = __Vtemp_hcd148733__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[2U] 
            = __Vtemp_hcd148733__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[3U] 
            = __Vtemp_hcd148733__0[3U];
    } else if ((0xcU == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U] 
            = __Vtemp_hcd04d438__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U] 
            = __Vtemp_hcd04d438__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[2U] 
            = __Vtemp_hcd04d438__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[3U] 
            = __Vtemp_hcd04d438__0[3U];
    } else {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U] 
            = Main__DOT__exu__DOT___AluOut_T_64[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U] 
            = Main__DOT__exu__DOT___AluOut_T_64[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[2U] 
            = Main__DOT__exu__DOT___AluOut_T_64[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[3U] 
            = Main__DOT__exu__DOT___AluOut_T_64[3U];
    }
    if ((3U == (IData)(Main__DOT__exu__DOT___SignU_T))) {
        vlSelf->Main__DOT__exu__DOT__SignU = (1U & 
                                              (~ (vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U] 
                                                  >> 0x1fU)));
        vlSelf->Main__DOT__exu__DOT__SignS = (1U & 
                                              (~ (vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U] 
                                                  >> 0x1fU)));
    } else if ((0U == (IData)(Main__DOT__exu__DOT___SignU_T))) {
        vlSelf->Main__DOT__exu__DOT__SignU = (1U & 
                                              (~ (vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U] 
                                                  >> 0x1fU)));
        vlSelf->Main__DOT__exu__DOT__SignS = (1U & 
                                              (~ (vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U] 
                                                  >> 0x1fU)));
    } else {
        vlSelf->Main__DOT__exu__DOT__SignU = (1U & 
                                              (1U != (IData)(Main__DOT__exu__DOT___SignU_T)));
        vlSelf->Main__DOT__exu__DOT__SignS = (1U & 
                                              (1U == (IData)(Main__DOT__exu__DOT___SignU_T)));
    }
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                           (((QData)((IData)(
                                                                             vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U]))), vlSelf->__Vtask_pmem_read__2__Rdata);
    vlSelf->Main__DOT__exu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__2__Rdata;
    if (((0x17U != (0x7fU & vlSelf->io_Inst)) & ((0x3003U 
                                                  != 
                                                  (0x707fU 
                                                   & vlSelf->io_Inst)) 
                                                 & ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_Inst)) 
                                                    | ((0x13U 
                                                        != 
                                                        (0x707fU 
                                                         & vlSelf->io_Inst)) 
                                                       & ((0x33U 
                                                           != 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_Inst)) 
                                                          & ((0x1bU 
                                                              != 
                                                              (0x707fU 
                                                               & vlSelf->io_Inst)) 
                                                             & ((0x3bU 
                                                                 != 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->io_Inst)) 
                                                                & ((0x1033U 
                                                                    != 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->io_Inst)) 
                                                                   & (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_218)))))))))) {
        VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                (((QData)((IData)(
                                                                                vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U]))), 
                                                                ((0x1fU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->io_Inst 
                                                                      >> 0x14U)))
                                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                                                  : vlSelf->Main__DOT__exu__DOT___GEN_62), 
                                                                ((0x17U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->io_Inst))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x3003U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->io_Inst))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x3023U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->io_Inst))
                                                                    ? 0xffU
                                                                    : 
                                                                   ((0x13U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->io_Inst))
                                                                     ? 0U
                                                                     : 
                                                                    ((0x33U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->io_Inst))
                                                                      ? 0U
                                                                      : 
                                                                     ((0x1bU 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->io_Inst))
                                                                       ? 0U
                                                                       : 
                                                                      ((0x3bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->io_Inst))
                                                                        ? 0U
                                                                        : 
                                                                       ((0x1033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->io_Inst))
                                                                         ? 0U
                                                                         : 
                                                                        ((0x1013U 
                                                                          == 
                                                                          (0xfc00707fU 
                                                                           & vlSelf->io_Inst))
                                                                          ? 0U
                                                                          : 
                                                                         ((0x5033U 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->io_Inst))
                                                                           ? 0U
                                                                           : 
                                                                          ((0x5013U 
                                                                            == 
                                                                            (0xfc00707fU 
                                                                             & vlSelf->io_Inst))
                                                                            ? 0U
                                                                            : 
                                                                           ((0x40005033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->io_Inst))
                                                                             ? 0U
                                                                             : 
                                                                            ((0x40005013U 
                                                                              == 
                                                                              (0xfc00707fU 
                                                                               & vlSelf->io_Inst))
                                                                              ? 0U
                                                                              : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_549)))))))))))))));
    }
    vlSelf->Main__DOT__exu__DOT___pc_T_58 = ((IData)(vlSelf->Main__DOT__exu__DOT__SignS)
                                              ? vlSelf->Main__DOT__exu__DOT___pc_T_22
                                              : (4ULL 
                                                 + vlSelf->Main__DOT__exu__DOT__pc));
    vlSelf->Main__DOT__exu__DOT___pc_T_93 = ((5U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_5))
                                              ? ((IData)(vlSelf->Main__DOT__exu__DOT__SignS)
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->Main__DOT__exu__DOT__pc)
                                                  : vlSelf->Main__DOT__exu__DOT___pc_T_22)
                                              : ((4U 
                                                  == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_5))
                                                  ? 
                                                 ((0ULL 
                                                   == 
                                                   (((QData)((IData)(
                                                                     vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U]))))
                                                   ? vlSelf->Main__DOT__exu__DOT___pc_T_22
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->Main__DOT__exu__DOT__pc))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_5))
                                                   ? 
                                                  ((0ULL 
                                                    != 
                                                    (((QData)((IData)(
                                                                      vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U]))))
                                                    ? vlSelf->Main__DOT__exu__DOT___pc_T_22
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->Main__DOT__exu__DOT__pc))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_5))
                                                    ? 
                                                   (0xfffffffffffffffeULL 
                                                    & (vlSelf->Main__DOT__exu__DOT__DataR1 
                                                       + vlSelf->Main__DOT__idu_io_Imm))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_5))
                                                     ? 
                                                    (vlSelf->Main__DOT__exu__DOT__pc 
                                                     + 
                                                     ((((1U 
                                                         & (IData)(
                                                                   (vlSelf->Main__DOT__idu_io_Imm 
                                                                    >> 0x14U)))
                                                         ? 0x7ffffffffffULL
                                                         : 0ULL) 
                                                       << 0x15U) 
                                                      | (QData)((IData)(
                                                                        (0x1fffffU 
                                                                         & (IData)(vlSelf->Main__DOT__idu_io_Imm))))))
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->Main__DOT__exu__DOT__pc))))));
    Main__DOT__exu__DOT___DataIn_T_48 = ((7U == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                          ? (((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->Main__DOT__exu__DOT__mem_Rdata 
                                                                           >> 0x1fU)))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata)))
                                          : ((6U == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                              ? (((QData)((IData)(
                                                                  ((vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U] 
                                                                    >> 0x1fU)
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U])))
                                              : ((5U 
                                                  == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                                  ? 
                                                 ((((1U 
                                                     & (IData)(
                                                               (vlSelf->Main__DOT__exu__DOT__mem_Rdata 
                                                                >> 0xfU)))
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata)))))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                                   ? 
                                                  ((((0x8000U 
                                                      & vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U])
                                                      ? 0xffffffffffffULL
                                                      : 0ULL) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U]))))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__exu__DOT__mem_Rdata 
                                                                  >> 7U)))
                                                       ? 0xffffffffffffffULL
                                                       : 0ULL) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata)))))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                                     ? 
                                                    ((((0x80U 
                                                        & vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U])
                                                        ? 0xffffffffffffffULL
                                                        : 0ULL) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U]))))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                                      ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U]))))))))));
    vlSelf->Main__DOT__exu__DOT___DataIn_T_62 = ((0xeU 
                                                  == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                                  ? (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->Main__DOT__exu__DOT__SignU)))))
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                                   ? (QData)((IData)(vlSelf->Main__DOT__exu__DOT__SignS))
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                                    ? (QData)((IData)(vlSelf->Main__DOT__exu__DOT__SignU))
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                                     ? (QData)((IData)(
                                                                       (0ULL 
                                                                        == 
                                                                        (((QData)((IData)(
                                                                                vlSelf->Main__DOT__exu__DOT___AluOut_T_76[1U])) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                vlSelf->Main__DOT__exu__DOT___AluOut_T_76[0U]))))))
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                                      ? (QData)((IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata))
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                                       ? (QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata))))
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->Main__DOT__idu_io_RinCtl))
                                                        ? (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata))))
                                                        : Main__DOT__exu__DOT___DataIn_T_48)))))));
}
