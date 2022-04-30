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

VL_ATTR_COLD void VMain___024root___settle__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___settle__TOP__0\n"); );
    // Init
    QData/*63:0*/ Main__DOT__idu__DOT___io_Imm_T_4;
    QData/*63:0*/ Main__DOT__idu__DOT___io_Imm_T_9;
    CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_118;
    CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_147;
    CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_167;
    CData/*0:0*/ Main__DOT__idu__DOT___contr_code_T_179;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_222;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_233;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_244;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_256;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_267;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_278;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_289;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_305;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_316;
    CData/*4:0*/ Main__DOT__idu__DOT___contr_code_T_326;
    CData/*4:0*/ Main__DOT__idu__DOT___contr_code_T_337;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_370;
    CData/*1:0*/ Main__DOT__idu__DOT___contr_code_T_381;
    CData/*2:0*/ Main__DOT__idu__DOT___contr_code_T_404;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_414;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_425;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_436;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_459;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_470;
    CData/*3:0*/ Main__DOT__idu__DOT___contr_code_T_481;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_13;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_26;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_45;
    QData/*63:0*/ Main__DOT__exu__DOT___GEN_58;
    QData/*63:0*/ Main__DOT__exu__DOT___AluSrc1_T_7;
    QData/*63:0*/ Main__DOT__exu__DOT___AluSrc2_T_11;
    QData/*63:0*/ Main__DOT__exu__DOT___AluOut_T_29;
    QData/*63:0*/ Main__DOT__exu__DOT___AluOut_T_23;
    VlWide<4>/*127:0*/ Main__DOT__exu__DOT___AluOut_T_59;
    QData/*63:0*/ Main__DOT__exu__DOT___DataIn_T_39;
    VlWide<4>/*127:0*/ __Vtemp_h8c2fe0d2__0;
    VlWide<4>/*127:0*/ __Vtemp_heab21533__0;
    VlWide<4>/*127:0*/ __Vtemp_heacc454d__0;
    VlWide<4>/*127:0*/ __Vtemp_heb67bf0e__0;
    VlWide<4>/*127:0*/ __Vtemp_heae576bd__0;
    VlWide<4>/*127:0*/ __Vtemp_hea7202bd__0;
    VlWide<4>/*127:0*/ __Vtemp_h88e96b83__0;
    VlWide<4>/*127:0*/ __Vtemp_hea730a05__0;
    VlWide<3>/*95:0*/ __Vtemp_hd5d2ddfa__0;
    VlWide<3>/*95:0*/ __Vtemp_h2a5b051b__0;
    VlWide<3>/*95:0*/ __Vtemp_hcd8387be__0;
    VlWide<3>/*95:0*/ __Vtemp_he88d3061__0;
    VlWide<3>/*95:0*/ __Vtemp_he86a26e4__0;
    VlWide<4>/*127:0*/ __Vtemp_h93894338__0;
    VlWide<4>/*127:0*/ __Vtemp_h380fad78__0;
    VlWide<4>/*127:0*/ __Vtemp_h105d8525__0;
    VlWide<4>/*127:0*/ __Vtemp_h608edee7__0;
    VlWide<4>/*127:0*/ __Vtemp_h5998cc6d__0;
    VlWide<4>/*127:0*/ __Vtemp_hecc15f8d__0;
    VlWide<4>/*127:0*/ __Vtemp_hecd1af0b__0;
    VlWide<4>/*127:0*/ __Vtemp_heca35210__0;
    VlWide<4>/*127:0*/ __Vtemp_h6b16cbeb__0;
    VlWide<4>/*127:0*/ __Vtemp_h0963fab0__0;
    VlWide<4>/*127:0*/ __Vtemp_h380fad78__1;
    VlWide<4>/*127:0*/ __Vtemp_hbd873799__0;
    VlWide<4>/*127:0*/ __Vtemp_hf69fbb93__0;
    VlWide<4>/*127:0*/ __Vtemp_h533dc890__0;
    VlWide<4>/*127:0*/ __Vtemp_h86bb3482__0;
    // Body
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0U] = 0ULL;
    vlSelf->Main__DOT__exu__DOT___pc_T_1 = (4ULL + vlSelf->Main__DOT__exu__DOT__pc);
    vlSelf->Main__DOT__exu__DOT___pc_T_23 = (4ULL + vlSelf->Main__DOT__exu__DOT__pc);
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[1U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_1;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[2U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_2;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[3U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_3;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[4U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_4;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[5U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_5;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[6U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_6;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[7U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_7;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[8U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_8;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[9U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_9;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xaU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_10;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xbU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_11;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xcU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_12;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0xdU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_13;
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
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x19U] 
        = vlSelf->Main__DOT__exu__DOT__Regs_25;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1aU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_26;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1bU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_27;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1cU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_28;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1dU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_29;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1eU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_30;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x1fU] 
        = vlSelf->Main__DOT__exu__DOT__Regs_31;
    vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf[0x20U] 
        = vlSelf->Main__DOT__exu__DOT__pc;
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->Main__DOT__exu__DOT__pc, vlSelf->__Vtask_pmem_read__0__Rdata);
    vlSelf->Main__DOT__ifu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__0__Rdata;
    VMain___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Main__DOT__exu__DOT__difftest__DOT__rf);
    if ((0x100073U == (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) {
        VMain___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    Main__DOT__idu__DOT___contr_code_T_118 = ((0x7063U 
                                               != (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                              & ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                 | ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                    | ((0x501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                       | ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                          | ((0x1003U 
                                                              == 
                                                              (0x707fU 
                                                               & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                             | ((0x4003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                | ((0x5003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                   | ((0x2003U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                      | ((0x23U 
                                                                          != 
                                                                          (0x707fU 
                                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                         & ((0x1023U 
                                                                             != 
                                                                             (0x707fU 
                                                                              & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                            & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                               & ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x200603bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x200003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | (0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))))))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_370 = ((0x3033U 
                                               == (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 3U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 3U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 3U
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 3U
                                                       : 
                                                      ((0x6063U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 3U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 3U
                                                         : 
                                                        ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 1U
                                                          : 
                                                         ((0x67U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 2U
                                                           : 0U))))))))));
    Main__DOT__idu__DOT___contr_code_T_167 = ((0x7063U 
                                               != (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                              & ((0x6fU 
                                                  != 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                 & ((0x67U 
                                                     != 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                    & ((0x501bU 
                                                        != 
                                                        (0xfc00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                       & ((3U 
                                                           != 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                          & ((0x1003U 
                                                              != 
                                                              (0x707fU 
                                                               & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                             & ((0x4003U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                & ((0x5003U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                   & ((0x2003U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                      & ((0x23U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                         | ((0x1023U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                            | (0x2023U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_404 = ((0x2003U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 7U
                                               : ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x2000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x2006033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x200603bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 6U
                                                        : 
                                                       ((0x200603bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0U
                                                         : 
                                                        ((0x200003bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 6U
                                                          : 
                                                         ((0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 7U
                                                           : 0U))))))))));
    Main__DOT__idu__DOT___contr_code_T_459 = ((0x67U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x501bU 
                                                   == 
                                                   (0xfc00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x1003U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 1U
                                                         : 
                                                        ((0x1023U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 3U
                                                          : 
                                                         ((0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0xfU
                                                           : 0U))))))))));
    Main__DOT__idu__DOT___contr_code_T_305 = ((0x23U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 1U
                                               : ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 1U
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 1U
                                                    : 
                                                   ((0x2000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 3U
                                                     : 
                                                    ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 6U
                                                      : 
                                                     ((0x200603bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 6U
                                                       : 
                                                      ((0x200603bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 7U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 3U
                                                         : 
                                                        ((0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 1U
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0xaU
                                                           : 0U))))))))));
    Main__DOT__idu__DOT___io_Imm_T_4 = (((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                      >> 0x1fU)))
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(
                                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                    >> 0xcU)) 
                                                           << 0xcU))));
    Main__DOT__idu__DOT___io_Imm_T_9 = ((((1U & (IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0x1fU)))
                                           ? 0xfffffffffffffULL
                                           : 0ULL) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(
                                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                                >> 0x14U))))));
    vlSelf->Main__DOT__idu__DOT__io_Imm_lo_2 = ((0xfe0U 
                                                 & ((IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0x19U)) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 7U))));
    vlSelf->Main__DOT__idu__DOT__io_Imm_lo_6 = ((((0x100000U 
                                                   & ((IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 0x1fU)) 
                                                      << 0x14U)) 
                                                  | (0x7feU 
                                                     & ((IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0x15U)) 
                                                        << 1U))) 
                                                 | (0x800U 
                                                    & ((IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0x14U)) 
                                                       << 0xbU))) 
                                                | (0xff000U 
                                                   & ((IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 0xcU)) 
                                                      << 0xcU)));
    vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8 = ((((0x1000U 
                                                   & ((IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 0x1fU)) 
                                                      << 0xcU)) 
                                                  | (0x7e0U 
                                                     & ((IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0x19U)) 
                                                        << 5U))) 
                                                 | (0x1eU 
                                                    & ((IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 8U)) 
                                                       << 1U))) 
                                                | (0x800U 
                                                   & ((IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 7U)) 
                                                      << 0xbU)));
    Main__DOT__exu__DOT___GEN_13 = ((0xdU == (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0xfU))))
                                     ? vlSelf->Main__DOT__exu__DOT__Regs_13
                                     : ((0xcU == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0xfU))))
                                         ? vlSelf->Main__DOT__exu__DOT__Regs_12
                                         : ((0xbU == 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0xfU))))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_11
                                             : ((0xaU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0xfU))))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_10
                                                 : 
                                                ((9U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0xfU))))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_9
                                                  : 
                                                 ((8U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 0xfU))))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_8
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0xfU))))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_7
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0xfU))))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_6
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0xfU))))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_5
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                   >> 0xfU))))
                                                       ? vlSelf->Main__DOT__exu__DOT__Regs_4
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                    >> 0xfU))))
                                                        ? vlSelf->Main__DOT__exu__DOT__Regs_3
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                     >> 0xfU))))
                                                         ? vlSelf->Main__DOT__exu__DOT__Regs_2
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                      >> 0xfU))))
                                                          ? vlSelf->Main__DOT__exu__DOT__Regs_1
                                                          : 0ULL)))))))))))));
    Main__DOT__exu__DOT___GEN_45 = ((0xdU == (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0x14U))))
                                     ? vlSelf->Main__DOT__exu__DOT__Regs_13
                                     : ((0xcU == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0x14U))))
                                         ? vlSelf->Main__DOT__exu__DOT__Regs_12
                                         : ((0xbU == 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0x14U))))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_11
                                             : ((0xaU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0x14U))))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_10
                                                 : 
                                                ((9U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0x14U))))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_9
                                                  : 
                                                 ((8U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 0x14U))))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_8
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0x14U))))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_7
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0x14U))))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_6
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0x14U))))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_5
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                   >> 0x14U))))
                                                       ? vlSelf->Main__DOT__exu__DOT__Regs_4
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                    >> 0x14U))))
                                                        ? vlSelf->Main__DOT__exu__DOT__Regs_3
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                     >> 0x14U))))
                                                         ? vlSelf->Main__DOT__exu__DOT__Regs_2
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                      >> 0x14U))))
                                                          ? vlSelf->Main__DOT__exu__DOT__Regs_1
                                                          : 0ULL)))))))))))));
    Main__DOT__idu__DOT___contr_code_T_222 = ((0x3013U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 1U
                                                         : 
                                                        ((0x67U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 1U
                                                          : 
                                                         ((0x501bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 3U
                                                           : 0U))))))))));
    Main__DOT__idu__DOT___contr_code_T_256 = ((0x23U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 4U
                                               : ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 4U
                                                   : 
                                                  ((0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 4U
                                                    : 
                                                   ((0x2000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x200603bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x200603bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0U
                                                         : 
                                                        ((0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 4U
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 4U
                                                           : 0U))))))))));
    Main__DOT__idu__DOT___contr_code_T_147 = ((0x3023U 
                                               != (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                              & ((0x13U 
                                                  == 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                 | ((0x33U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                    | ((0x1bU 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                       | ((0x3bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                          | ((0x1033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                             | ((0x1013U 
                                                                 == 
                                                                 (0xfc00707fU 
                                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                | ((0x5033U 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                   | ((0x5013U 
                                                                       == 
                                                                       (0xfc00707fU 
                                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                      | ((0x40005033U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                         | ((0x40005013U 
                                                                             == 
                                                                             (0xfc00707fU 
                                                                              & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                            | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                               | ((0x4000003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x4013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x2013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                | ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                                & (IData)(Main__DOT__idu__DOT___contr_code_T_118))))))))))))))))))))))))))))));
    Main__DOT__idu__DOT___contr_code_T_381 = ((0x40000033U 
                                               == (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x4033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x6013U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x7033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0U
                                                         : 
                                                        ((0x7013U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 0U
                                                          : 
                                                         ((0x2033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0U
                                                           : 
                                                          ((0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 0U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_370))))))))))));
    Main__DOT__idu__DOT___contr_code_T_179 = ((0x6013U 
                                               != (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                              & ((0x7033U 
                                                  != 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                 & ((0x7013U 
                                                     != 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                    & ((0x2033U 
                                                        != 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                       & ((0x2013U 
                                                           != 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                          & ((0x3033U 
                                                              != 
                                                              (0xfe00707fU 
                                                               & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                             & ((0x3013U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                & ((0x63U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                   & ((0x1063U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                      & ((0x4063U 
                                                                          != 
                                                                          (0x707fU 
                                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                         & ((0x5063U 
                                                                             != 
                                                                             (0x707fU 
                                                                              & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                            & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                                               & (IData)(Main__DOT__idu__DOT___contr_code_T_167)))))))))))));
    Main__DOT__idu__DOT___contr_code_T_414 = ((0x5063U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 7U
                                               : ((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 7U
                                                   : 
                                                  ((0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 7U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 6U
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 3U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 5U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 8U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 9U
                                                           : (IData)(Main__DOT__idu__DOT___contr_code_T_404)))))))))));
    Main__DOT__idu__DOT___contr_code_T_470 = ((0x2033U 
                                               == (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0U
                                                         : 
                                                        ((0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 0U
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0U
                                                           : 
                                                          ((0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 0U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_459))))))))))));
    Main__DOT__idu__DOT___contr_code_T_316 = ((0x5063U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0xdU
                                               : ((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0xaU
                                                   : 
                                                  ((0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0xbU
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 1U
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 1U
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0xfU
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 1U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 1U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 1U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 1U
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 1U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_305))))))))))));
    vlSelf->Main__DOT__idu_io_Imm = ((0x63U == (0x7fU 
                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                      ? ((((0x1000U 
                                            & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8))
                                            ? 0x7ffffffffffffULL
                                            : 0ULL) 
                                          << 0xdU) 
                                         | (QData)((IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8)))
                                      : ((0x67U == 
                                          (0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                          ? Main__DOT__idu__DOT___io_Imm_T_9
                                          : ((0x6fU 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
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
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                  ? Main__DOT__idu__DOT___io_Imm_T_4
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0ULL
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? Main__DOT__idu__DOT___io_Imm_T_9
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0ULL
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? Main__DOT__idu__DOT___io_Imm_T_9
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
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
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? Main__DOT__idu__DOT___io_Imm_T_9
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? Main__DOT__idu__DOT___io_Imm_T_4
                                                         : 0ULL)))))))))));
    Main__DOT__exu__DOT___GEN_26 = ((0x1aU == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                          >> 0xfU))))
                                     ? vlSelf->Main__DOT__exu__DOT__Regs_26
                                     : ((0x19U == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0xfU))))
                                         ? vlSelf->Main__DOT__exu__DOT__Regs_25
                                         : ((0x18U 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                            >> 0xfU))))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_24
                                             : ((0x17U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0xfU))))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_23
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0xfU))))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_22
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 0xfU))))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_21
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0xfU))))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_20
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0xfU))))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_19
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0xfU))))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_18
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                   >> 0xfU))))
                                                       ? vlSelf->Main__DOT__exu__DOT__Regs_17
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                    >> 0xfU))))
                                                        ? vlSelf->Main__DOT__exu__DOT__Regs_16
                                                        : 
                                                       ((0xfU 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                     >> 0xfU))))
                                                         ? vlSelf->Main__DOT__exu__DOT__Regs_15
                                                         : 
                                                        ((0xeU 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                      >> 0xfU))))
                                                          ? vlSelf->Main__DOT__exu__DOT__Regs_14
                                                          : Main__DOT__exu__DOT___GEN_13)))))))))))));
    Main__DOT__exu__DOT___GEN_58 = ((0x1aU == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                          >> 0x14U))))
                                     ? vlSelf->Main__DOT__exu__DOT__Regs_26
                                     : ((0x19U == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0x14U))))
                                         ? vlSelf->Main__DOT__exu__DOT__Regs_25
                                         : ((0x18U 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                            >> 0x14U))))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_24
                                             : ((0x17U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0x14U))))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_23
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0x14U))))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_22
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 0x14U))))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_21
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0x14U))))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_20
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0x14U))))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_19
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0x14U))))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_18
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                   >> 0x14U))))
                                                       ? vlSelf->Main__DOT__exu__DOT__Regs_17
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                    >> 0x14U))))
                                                        ? vlSelf->Main__DOT__exu__DOT__Regs_16
                                                        : 
                                                       ((0xfU 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                     >> 0x14U))))
                                                         ? vlSelf->Main__DOT__exu__DOT__Regs_15
                                                         : 
                                                        ((0xeU 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                      >> 0x14U))))
                                                          ? vlSelf->Main__DOT__exu__DOT__Regs_14
                                                          : Main__DOT__exu__DOT___GEN_45)))))))))))));
    Main__DOT__idu__DOT___contr_code_T_233 = ((0x4000003bU 
                                               == (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 3U
                                               : ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 2U
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x6013U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x7013U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0U
                                                         : 
                                                        ((0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 0U
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0U
                                                           : 
                                                          ((0x3033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 0U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_222))))))))))));
    Main__DOT__idu__DOT___contr_code_T_267 = ((0x5063U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 5U
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 5U
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 2U
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 4U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 4U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 4U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 4U
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 4U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_256))))))))))));
    vlSelf->Main__DOT__idu_io_RegWrite = ((0x17U == 
                                           (0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                          | ((0x3003U 
                                              == (0x707fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                             | (IData)(Main__DOT__idu__DOT___contr_code_T_147)));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_392 
        = ((0x3023U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
            ? 0U : ((0x13U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                     ? 0U : ((0x33U == (0xfe00707fU 
                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                              ? 0U : ((0x1bU == (0x707fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                       ? 0U : ((0x3bU 
                                                == 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                ? 0U
                                                : (
                                                   (0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x1013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0U
                                                         : (IData)(Main__DOT__idu__DOT___contr_code_T_381))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_191 
        = ((0x1033U != (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
           & ((0x1013U != (0xfc00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
              & ((0x5033U != (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                 & ((0x5013U != (0xfc00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                    & ((0x40005033U != (0xfe00707fU 
                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                       & ((0x40005013U != (0xfc00707fU 
                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                          & ((0x40000033U != (0xfe00707fU 
                                              & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                             & ((0x4000003bU != (0xfe00707fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                & ((0x37U != (0x7fU 
                                              & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                   & ((0x4033U != (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                      & ((0x4013U != 
                                          (0x707fU 
                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                         & ((0x6033U 
                                             != (0xfe00707fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                            & (IData)(Main__DOT__idu__DOT___contr_code_T_179)))))))))))));
    Main__DOT__idu__DOT___contr_code_T_425 = ((0x6033U 
                                               == (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x3013U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0U
                                                         : 
                                                        ((0x63U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 0U
                                                          : 
                                                         ((0x1063U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 7U
                                                           : 
                                                          ((0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 7U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_414))))))))))));
    Main__DOT__idu__DOT___contr_code_T_481 = ((0x40005033U 
                                               == (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x40005013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x4000003bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x6033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0U
                                                         : 
                                                        ((0x6013U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 0U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0U
                                                           : 
                                                          ((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 0U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_470))))))))))));
    Main__DOT__idu__DOT___contr_code_T_326 = ((0x6013U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0x12U
                                               : ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 1U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0x13U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0xcU
                                                     : 
                                                    ((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0xcU
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0xaU
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0xaU
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 8U
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 9U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0xcU
                                                           : (IData)(Main__DOT__idu__DOT___contr_code_T_316)))))))))));
    vlSelf->Main__DOT__exu__DOT___pc_T_8 = (vlSelf->Main__DOT__exu__DOT__pc 
                                            + ((((1U 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__idu_io_Imm 
                                                             >> 0x14U)))
                                                  ? 0x7ffffffffffULL
                                                  : 0ULL) 
                                                << 0x15U) 
                                               | (QData)((IData)(
                                                                 (0x1fffffU 
                                                                  & (IData)(vlSelf->Main__DOT__idu_io_Imm))))));
    vlSelf->Main__DOT__exu__DOT___pc_T_19 = (vlSelf->Main__DOT__exu__DOT__pc 
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
                                             & (IData)(
                                                       (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                        >> 0xfU))))
                                            ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                            : ((0x1eU 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                            >> 0xfU))))
                                                ? vlSelf->Main__DOT__exu__DOT__Regs_30
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0xfU))))
                                                    ? vlSelf->Main__DOT__exu__DOT__Regs_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 0xfU))))
                                                     ? vlSelf->Main__DOT__exu__DOT__Regs_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                  >> 0xfU))))
                                                      ? vlSelf->Main__DOT__exu__DOT__Regs_27
                                                      : Main__DOT__exu__DOT___GEN_26)))));
    vlSelf->Main__DOT__exu__DOT___GEN_62 = ((0x1eU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                            >> 0x14U))))
                                             ? vlSelf->Main__DOT__exu__DOT__Regs_30
                                             : ((0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                             >> 0x14U))))
                                                 ? vlSelf->Main__DOT__exu__DOT__Regs_29
                                                 : 
                                                ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0x14U))))
                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_28
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                               >> 0x14U))))
                                                   ? vlSelf->Main__DOT__exu__DOT__Regs_27
                                                   : Main__DOT__exu__DOT___GEN_58))));
    Main__DOT__idu__DOT___contr_code_T_244 = ((0x13U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 3U
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 3U
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0U
                                                         : 
                                                        ((0x40005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 0U
                                                          : 
                                                         ((0x40005013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0U
                                                           : 
                                                          ((0x40000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 0U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_233))))))))))));
    Main__DOT__idu__DOT___contr_code_T_278 = ((0x6033U 
                                               == (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 4U
                                                   : 
                                                  ((0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 4U
                                                     : 
                                                    ((0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 4U
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x3013U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 4U
                                                         : 
                                                        ((0x63U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 0U
                                                          : 
                                                         ((0x1063U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0U
                                                           : 
                                                          ((0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 0U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_267))))))))))));
    Main__DOT__idu__DOT___contr_code_T_436 = ((0x1033U 
                                               == (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x1013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x40000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x4000003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 6U
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 6U
                                                          : 
                                                         ((0x4033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0U
                                                           : 
                                                          ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 0U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_425))))))))))));
    vlSelf->Main__DOT__idu__DOT___contr_code_T_491 
        = ((0x3003U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
            ? 0U : ((0x3023U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                     ? 0xffU : ((0x13U == (0x707fU 
                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                 ? 0U : ((0x33U == 
                                          (0xfe00707fU 
                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                          ? 0U : ((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x1013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : (IData)(Main__DOT__idu__DOT___contr_code_T_481)))))))))));
    Main__DOT__idu__DOT___contr_code_T_337 = ((0x1013U 
                                               == (0xfc00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0xeU
                                               : ((0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0xfU
                                                   : 
                                                  ((0x5013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0xfU
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 0x10U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0x10U
                                                      : 
                                                     ((0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 2U
                                                       : 
                                                      ((0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 2U
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0xeU
                                                         : 
                                                        ((0x4033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 0x11U
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0x11U
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 0x12U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_326))))))))))));
    vlSelf->Main__DOT__exu__DOT__DataR2 = ((0x1fU == 
                                            (0x1fU 
                                             & (IData)(
                                                       (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                        >> 0x14U))))
                                            ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                            : vlSelf->Main__DOT__exu__DOT___GEN_62);
    vlSelf->Main__DOT__idu__DOT__contr_code_2 = ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                  ? 1U
                                                  : 
                                                 ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 0U
                                                    : (IData)(Main__DOT__idu__DOT___contr_code_T_244))));
    Main__DOT__idu__DOT___contr_code_T_289 = ((0x1033U 
                                               == (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 1U
                                               : ((0x1013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 2U
                                                   : 
                                                  ((0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 1U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 2U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 1U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 2U
                                                       : 
                                                      ((0x40000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : 
                                                       ((0x4000003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                         ? 0U
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                          ? 3U
                                                          : 
                                                         ((0x4033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                           ? 0U
                                                           : 
                                                          ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                            ? 4U
                                                            : (IData)(Main__DOT__idu__DOT___contr_code_T_278))))))))))));
    if ((0x17U == (0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 0U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
    } else if ((0x3003U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 1U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
    } else if ((0x3023U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 0U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
    } else if ((0x13U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 0U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
    } else if ((0x33U == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 0U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
    } else if ((0x1bU == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 6U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
    } else if ((0x3bU == (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))) {
        vlSelf->Main__DOT__idu_io_RinCtl = 6U;
        vlSelf->Main__DOT__idu_io_AluOp = 1U;
    } else {
        vlSelf->Main__DOT__idu_io_RinCtl = Main__DOT__idu__DOT___contr_code_T_436;
        vlSelf->Main__DOT__idu_io_AluOp = ((0x1033U 
                                            == (0xfe00707fU 
                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                            ? 0xeU : (IData)(Main__DOT__idu__DOT___contr_code_T_337));
    }
    Main__DOT__exu__DOT___AluSrc1_T_7 = ((2U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_2))
                                          ? (QData)((IData)(
                                                            (0xfffffU 
                                                             & (IData)(
                                                                       (vlSelf->Main__DOT__idu_io_Imm 
                                                                        >> 0xcU)))))
                                          : ((1U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_2))
                                              ? vlSelf->Main__DOT__exu__DOT__pc
                                              : vlSelf->Main__DOT__exu__DOT__DataR1));
    vlSelf->Main__DOT__idu__DOT__contr_code_3 = ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                  ? 4U
                                                  : 
                                                 ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 4U
                                                   : 
                                                  ((0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                    ? 4U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                     ? 4U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                       ? 4U
                                                       : 
                                                      ((0x3bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                        ? 0U
                                                        : (IData)(Main__DOT__idu__DOT___contr_code_T_289))))))));
    if ((3U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_2))) {
        vlSelf->Main__DOT__exu__DOT__AluSrc1 = (QData)((IData)(vlSelf->Main__DOT__exu__DOT__DataR1));
        Main__DOT__exu__DOT___AluOut_T_29 = (QData)((IData)(vlSelf->Main__DOT__exu__DOT__DataR1));
    } else {
        vlSelf->Main__DOT__exu__DOT__AluSrc1 = Main__DOT__exu__DOT___AluSrc1_T_7;
        Main__DOT__exu__DOT___AluOut_T_29 = Main__DOT__exu__DOT___AluSrc1_T_7;
    }
    Main__DOT__exu__DOT___AluSrc2_T_11 = ((4U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))
                                           ? vlSelf->Main__DOT__idu_io_Imm
                                           : ((3U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))
                                               ? 0xcULL
                                               : ((2U 
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
                                                    : vlSelf->Main__DOT__exu__DOT__DataR2))));
    if ((5U == (IData)(vlSelf->Main__DOT__idu__DOT__contr_code_3))) {
        vlSelf->Main__DOT__exu__DOT__AluSrc2 = 4ULL;
        Main__DOT__exu__DOT___AluOut_T_23 = 4ULL;
    } else {
        vlSelf->Main__DOT__exu__DOT__AluSrc2 = Main__DOT__exu__DOT___AluSrc2_T_11;
        Main__DOT__exu__DOT___AluOut_T_23 = Main__DOT__exu__DOT___AluSrc2_T_11;
    }
    VL_EXTEND_WI(128,1, __Vtemp_h8c2fe0d2__0, VL_LTS_IQQ(64, Main__DOT__exu__DOT___AluOut_T_29, Main__DOT__exu__DOT___AluOut_T_23));
    VL_EXTEND_WI(128,1, __Vtemp_heab21533__0, (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                               >= vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WI(128,1, __Vtemp_heacc454d__0, (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                               < vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WI(128,1, __Vtemp_heb67bf0e__0, (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                               != vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WI(128,1, __Vtemp_heae576bd__0, (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                               == vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_hea7202bd__0, VL_MODDIV_QQQ(64, vlSelf->Main__DOT__exu__DOT__AluSrc1, vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_h88e96b83__0, VL_MODDIVS_QQQ(64, Main__DOT__exu__DOT___AluOut_T_29, Main__DOT__exu__DOT___AluOut_T_23));
    VL_EXTEND_WQ(128,64, __Vtemp_hea730a05__0, VL_DIV_QQQ(64, vlSelf->Main__DOT__exu__DOT__AluSrc1, vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTENDS_WQ(65,64, __Vtemp_hd5d2ddfa__0, Main__DOT__exu__DOT___AluOut_T_29);
    __Vtemp_h2a5b051b__0[0U] = __Vtemp_hd5d2ddfa__0[0U];
    __Vtemp_h2a5b051b__0[1U] = __Vtemp_hd5d2ddfa__0[1U];
    __Vtemp_h2a5b051b__0[2U] = (1U & __Vtemp_hd5d2ddfa__0[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp_hcd8387be__0, Main__DOT__exu__DOT___AluOut_T_23);
    __Vtemp_he88d3061__0[0U] = __Vtemp_hcd8387be__0[0U];
    __Vtemp_he88d3061__0[1U] = __Vtemp_hcd8387be__0[1U];
    __Vtemp_he88d3061__0[2U] = (1U & __Vtemp_hcd8387be__0[2U]);
    VL_DIVS_WWW(65, __Vtemp_he86a26e4__0, __Vtemp_h2a5b051b__0, __Vtemp_he88d3061__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h93894338__0, (((QData)((IData)(
                                                                 __Vtemp_he86a26e4__0[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  __Vtemp_he86a26e4__0[0U]))));
    VL_EXTEND_WQ(128,64, __Vtemp_h380fad78__0, vlSelf->Main__DOT__exu__DOT__AluSrc1);
    VL_EXTEND_WQ(128,64, __Vtemp_h105d8525__0, vlSelf->Main__DOT__exu__DOT__AluSrc2);
    VL_MUL_W(4, __Vtemp_h608edee7__0, __Vtemp_h380fad78__0, __Vtemp_h105d8525__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h5998cc6d__0, ((2U 
                                                 == (IData)(vlSelf->Main__DOT__idu_io_AluOp))
                                                 ? 
                                                (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                 - vlSelf->Main__DOT__exu__DOT__AluSrc2)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->Main__DOT__idu_io_AluOp))
                                                  ? 
                                                 (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                  + vlSelf->Main__DOT__exu__DOT__AluSrc2)
                                                  : 0ULL)));
    if ((0xcU == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_59[0U] = __Vtemp_h8c2fe0d2__0[0U];
        Main__DOT__exu__DOT___AluOut_T_59[1U] = __Vtemp_h8c2fe0d2__0[1U];
        Main__DOT__exu__DOT___AluOut_T_59[2U] = __Vtemp_h8c2fe0d2__0[2U];
        Main__DOT__exu__DOT___AluOut_T_59[3U] = __Vtemp_h8c2fe0d2__0[3U];
    } else if ((0xbU == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_59[0U] = __Vtemp_heab21533__0[0U];
        Main__DOT__exu__DOT___AluOut_T_59[1U] = __Vtemp_heab21533__0[1U];
        Main__DOT__exu__DOT___AluOut_T_59[2U] = __Vtemp_heab21533__0[2U];
        Main__DOT__exu__DOT___AluOut_T_59[3U] = __Vtemp_heab21533__0[3U];
    } else if ((0xaU == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_59[0U] = __Vtemp_heacc454d__0[0U];
        Main__DOT__exu__DOT___AluOut_T_59[1U] = __Vtemp_heacc454d__0[1U];
        Main__DOT__exu__DOT___AluOut_T_59[2U] = __Vtemp_heacc454d__0[2U];
        Main__DOT__exu__DOT___AluOut_T_59[3U] = __Vtemp_heacc454d__0[3U];
    } else if ((9U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_59[0U] = __Vtemp_heb67bf0e__0[0U];
        Main__DOT__exu__DOT___AluOut_T_59[1U] = __Vtemp_heb67bf0e__0[1U];
        Main__DOT__exu__DOT___AluOut_T_59[2U] = __Vtemp_heb67bf0e__0[2U];
        Main__DOT__exu__DOT___AluOut_T_59[3U] = __Vtemp_heb67bf0e__0[3U];
    } else if ((8U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_59[0U] = __Vtemp_heae576bd__0[0U];
        Main__DOT__exu__DOT___AluOut_T_59[1U] = __Vtemp_heae576bd__0[1U];
        Main__DOT__exu__DOT___AluOut_T_59[2U] = __Vtemp_heae576bd__0[2U];
        Main__DOT__exu__DOT___AluOut_T_59[3U] = __Vtemp_heae576bd__0[3U];
    } else if ((7U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_59[0U] = __Vtemp_hea7202bd__0[0U];
        Main__DOT__exu__DOT___AluOut_T_59[1U] = __Vtemp_hea7202bd__0[1U];
        Main__DOT__exu__DOT___AluOut_T_59[2U] = __Vtemp_hea7202bd__0[2U];
        Main__DOT__exu__DOT___AluOut_T_59[3U] = __Vtemp_hea7202bd__0[3U];
    } else if ((6U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_59[0U] = __Vtemp_h88e96b83__0[0U];
        Main__DOT__exu__DOT___AluOut_T_59[1U] = __Vtemp_h88e96b83__0[1U];
        Main__DOT__exu__DOT___AluOut_T_59[2U] = __Vtemp_h88e96b83__0[2U];
        Main__DOT__exu__DOT___AluOut_T_59[3U] = __Vtemp_h88e96b83__0[3U];
    } else if ((5U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_59[0U] = __Vtemp_hea730a05__0[0U];
        Main__DOT__exu__DOT___AluOut_T_59[1U] = __Vtemp_hea730a05__0[1U];
        Main__DOT__exu__DOT___AluOut_T_59[2U] = __Vtemp_hea730a05__0[2U];
        Main__DOT__exu__DOT___AluOut_T_59[3U] = __Vtemp_hea730a05__0[3U];
    } else if ((4U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_59[0U] = __Vtemp_h93894338__0[0U];
        Main__DOT__exu__DOT___AluOut_T_59[1U] = __Vtemp_h93894338__0[1U];
        Main__DOT__exu__DOT___AluOut_T_59[2U] = __Vtemp_h93894338__0[2U];
        Main__DOT__exu__DOT___AluOut_T_59[3U] = __Vtemp_h93894338__0[3U];
    } else if ((3U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        Main__DOT__exu__DOT___AluOut_T_59[0U] = __Vtemp_h608edee7__0[0U];
        Main__DOT__exu__DOT___AluOut_T_59[1U] = __Vtemp_h608edee7__0[1U];
        Main__DOT__exu__DOT___AluOut_T_59[2U] = __Vtemp_h608edee7__0[2U];
        Main__DOT__exu__DOT___AluOut_T_59[3U] = __Vtemp_h608edee7__0[3U];
    } else {
        Main__DOT__exu__DOT___AluOut_T_59[0U] = __Vtemp_h5998cc6d__0[0U];
        Main__DOT__exu__DOT___AluOut_T_59[1U] = __Vtemp_h5998cc6d__0[1U];
        Main__DOT__exu__DOT___AluOut_T_59[2U] = __Vtemp_h5998cc6d__0[2U];
        Main__DOT__exu__DOT___AluOut_T_59[3U] = __Vtemp_h5998cc6d__0[3U];
    }
    VL_EXTEND_WQ(128,64, __Vtemp_hecc15f8d__0, (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                & vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_hecd1af0b__0, (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                | vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_heca35210__0, (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                ^ vlSelf->Main__DOT__exu__DOT__AluSrc2));
    VL_EXTEND_WQ(128,64, __Vtemp_h6b16cbeb__0, VL_SHIFTRS_QQI(64,64,6, Main__DOT__exu__DOT___AluOut_T_29, 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2))));
    VL_EXTEND_WQ(128,64, __Vtemp_h0963fab0__0, (vlSelf->Main__DOT__exu__DOT__AluSrc1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2))));
    VL_EXTEND_WQ(127,64, __Vtemp_h380fad78__1, vlSelf->Main__DOT__exu__DOT__AluSrc1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_hbd873799__0, __Vtemp_h380fad78__1, 
                  (0x3fU & (IData)(vlSelf->Main__DOT__exu__DOT__AluSrc2)));
    __Vtemp_hf69fbb93__0[0U] = __Vtemp_hbd873799__0[0U];
    __Vtemp_hf69fbb93__0[1U] = __Vtemp_hbd873799__0[1U];
    __Vtemp_hf69fbb93__0[2U] = __Vtemp_hbd873799__0[2U];
    __Vtemp_hf69fbb93__0[3U] = (0x7fffffffU & __Vtemp_hbd873799__0[3U]);
    VL_EXTEND_WW(128,127, __Vtemp_h533dc890__0, __Vtemp_hf69fbb93__0);
    VL_EXTEND_WI(128,1, __Vtemp_h86bb3482__0, VL_GTES_IQQ(64, Main__DOT__exu__DOT___AluOut_T_29, Main__DOT__exu__DOT___AluOut_T_23));
    if ((0x13U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U] 
            = __Vtemp_hecc15f8d__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[1U] 
            = __Vtemp_hecc15f8d__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[2U] 
            = __Vtemp_hecc15f8d__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[3U] 
            = __Vtemp_hecc15f8d__0[3U];
    } else if ((0x12U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U] 
            = __Vtemp_hecd1af0b__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[1U] 
            = __Vtemp_hecd1af0b__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[2U] 
            = __Vtemp_hecd1af0b__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[3U] 
            = __Vtemp_hecd1af0b__0[3U];
    } else if ((0x11U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U] 
            = __Vtemp_heca35210__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[1U] 
            = __Vtemp_heca35210__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[2U] 
            = __Vtemp_heca35210__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[3U] 
            = __Vtemp_heca35210__0[3U];
    } else if ((0x10U == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U] 
            = __Vtemp_h6b16cbeb__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[1U] 
            = __Vtemp_h6b16cbeb__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[2U] 
            = __Vtemp_h6b16cbeb__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[3U] 
            = __Vtemp_h6b16cbeb__0[3U];
    } else if ((0xfU == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U] 
            = __Vtemp_h0963fab0__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[1U] 
            = __Vtemp_h0963fab0__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[2U] 
            = __Vtemp_h0963fab0__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[3U] 
            = __Vtemp_h0963fab0__0[3U];
    } else if ((0xeU == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U] 
            = __Vtemp_h533dc890__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[1U] 
            = __Vtemp_h533dc890__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[2U] 
            = __Vtemp_h533dc890__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[3U] 
            = __Vtemp_h533dc890__0[3U];
    } else if ((0xdU == (IData)(vlSelf->Main__DOT__idu_io_AluOp))) {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U] 
            = __Vtemp_h86bb3482__0[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[1U] 
            = __Vtemp_h86bb3482__0[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[2U] 
            = __Vtemp_h86bb3482__0[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[3U] 
            = __Vtemp_h86bb3482__0[3U];
    } else {
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U] 
            = Main__DOT__exu__DOT___AluOut_T_59[0U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[1U] 
            = Main__DOT__exu__DOT___AluOut_T_59[1U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[2U] 
            = Main__DOT__exu__DOT___AluOut_T_59[2U];
        vlSelf->Main__DOT__exu__DOT___AluOut_T_73[3U] 
            = Main__DOT__exu__DOT___AluOut_T_59[3U];
    }
    VMain___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                           (((QData)((IData)(
                                                                             vlSelf->Main__DOT__exu__DOT___AluOut_T_73[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U]))), vlSelf->__Vtask_pmem_read__2__Rdata);
    vlSelf->Main__DOT__exu__DOT__mem_Rdata = vlSelf->__Vtask_pmem_read__2__Rdata;
    if (((0x17U != (0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
         & ((0x3003U != (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
            & ((0x3023U == (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
               | ((0x13U != (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                  & ((0x33U != (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                     & ((0x1bU != (0x707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                        & ((0x3bU != (0xfe00707fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                           & (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_191))))))))) {
        VMain___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                (((QData)((IData)(
                                                                                vlSelf->Main__DOT__exu__DOT___AluOut_T_73[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U]))), 
                                                                ((0x1fU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(
                                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                              >> 0x14U))))
                                                                  ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                                                  : vlSelf->Main__DOT__exu__DOT___GEN_62), 
                                                                ((0x17U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                                  ? 0U
                                                                  : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_491)));
    }
    Main__DOT__exu__DOT___DataIn_T_39 = ((6U == (7U 
                                                 & (IData)(vlSelf->Main__DOT__idu_io_RinCtl)))
                                          ? (((QData)((IData)(
                                                              ((vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U] 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U])))
                                          : ((5U == 
                                              (7U & (IData)(vlSelf->Main__DOT__idu_io_RinCtl)))
                                              ? (((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->Main__DOT__exu__DOT__mem_Rdata 
                                                               >> 0xeU)))
                                                    ? 0x1ffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xfU) 
                                                 | (QData)((IData)(
                                                                   (0x7fffU 
                                                                    & (IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata)))))
                                              : ((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->Main__DOT__idu_io_RinCtl)))
                                                  ? 
                                                 ((((0x4000U 
                                                     & vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U])
                                                     ? 0x1ffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xfU) 
                                                  | (QData)((IData)(
                                                                    (0x7fffU 
                                                                     & vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U]))))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->Main__DOT__idu_io_RinCtl)))
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
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->Main__DOT__idu_io_RinCtl)))
                                                    ? 
                                                   ((((0x80U 
                                                       & vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U])
                                                       ? 0xffffffffffffffULL
                                                       : 0ULL) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U]))))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->Main__DOT__idu_io_RinCtl)))
                                                     ? vlSelf->Main__DOT__exu__DOT__mem_Rdata
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->Main__DOT__exu__DOT___AluOut_T_73[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U])))))))));
    vlSelf->Main__DOT__exu__DOT___DataIn_T_41 = ((7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->Main__DOT__idu_io_RinCtl)))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata))))
                                                  : Main__DOT__exu__DOT___DataIn_T_39);
}
