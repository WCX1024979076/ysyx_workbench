// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMain__Syms.h"


void VMain___024root__trace_chg_sub_0(VMain___024root* vlSelf, VerilatedVcd* tracep);

void VMain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_chg_top_0\n"); );
    // Init
    VMain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMain___024root*>(voidSelf);
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMain___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VMain___024root__trace_chg_sub_0(VMain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgQData(oldp+0,(vlSelf->Main__DOT__exu__DOT__pc),64);
        tracep->chgIData(oldp+2,((IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)),32);
        tracep->chgBit(oldp+3,(vlSelf->Main__DOT__idu_io_RegWrite));
        tracep->chgBit(oldp+4,(((0x17U != (0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                & ((0x3003U != (0x707fU 
                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                   & (0x3023U == (0x707fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))))));
        tracep->chgCData(oldp+5,(vlSelf->Main__DOT__idu_io_AluOp),5);
        tracep->chgCData(oldp+6,(vlSelf->Main__DOT__idu__DOT__contr_code_2),5);
        tracep->chgCData(oldp+7,(vlSelf->Main__DOT__idu__DOT__contr_code_3),5);
        tracep->chgCData(oldp+8,(((0x17U == (0x7fU 
                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                   ? 0U : ((0x3003U 
                                            == (0x707fU 
                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                            ? 0U : 
                                           ((0x3023U 
                                             == (0x707fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                             ? 0U : 
                                            ((0x13U 
                                              == (0x707fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                              ? 0U : 
                                             ((0x33U 
                                               == (0xfe00707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
                                                   : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_228)))))))),5);
        tracep->chgCData(oldp+9,(vlSelf->Main__DOT__idu__DOT__contr_code_6),3);
        tracep->chgCData(oldp+10,(((0x17U == (0x7fU 
                                              & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                    ? 0U : ((0x3003U 
                                             == (0x707fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                             ? 0U : 
                                            ((0x3023U 
                                              == (0x707fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                              ? 0xffU
                                              : 0U)))),8);
        tracep->chgCData(oldp+11,((0x1fU & (IData)(
                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                    >> 7U)))),5);
        tracep->chgCData(oldp+12,((0x1fU & (IData)(
                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                    >> 0xfU)))),5);
        tracep->chgCData(oldp+13,((0x1fU & (IData)(
                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                    >> 0x14U)))),5);
        tracep->chgQData(oldp+14,(vlSelf->Main__DOT__idu_io_Imm),64);
        tracep->chgQData(oldp+16,((((QData)((IData)(
                                                    vlSelf->Main__DOT__exu__DOT___AluOut_T_64[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Main__DOT__exu__DOT___AluOut_T_64[0U])))),64);
        tracep->chgQData(oldp+18,(vlSelf->Main__DOT__exu__DOT__mem_Rdata),64);
        tracep->chgQData(oldp+20,(((0x1fU == (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0x14U))))
                                    ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                    : vlSelf->Main__DOT__exu__DOT___GEN_62)),64);
        tracep->chgQData(oldp+22,(vlSelf->Main__DOT__exu__DOT__Regs_1),64);
        tracep->chgQData(oldp+24,(vlSelf->Main__DOT__exu__DOT__Regs_2),64);
        tracep->chgQData(oldp+26,(vlSelf->Main__DOT__exu__DOT__Regs_3),64);
        tracep->chgQData(oldp+28,(vlSelf->Main__DOT__exu__DOT__Regs_4),64);
        tracep->chgQData(oldp+30,(vlSelf->Main__DOT__exu__DOT__Regs_5),64);
        tracep->chgQData(oldp+32,(vlSelf->Main__DOT__exu__DOT__Regs_6),64);
        tracep->chgQData(oldp+34,(vlSelf->Main__DOT__exu__DOT__Regs_7),64);
        tracep->chgQData(oldp+36,(vlSelf->Main__DOT__exu__DOT__Regs_8),64);
        tracep->chgQData(oldp+38,(vlSelf->Main__DOT__exu__DOT__Regs_9),64);
        tracep->chgQData(oldp+40,(vlSelf->Main__DOT__exu__DOT__Regs_10),64);
        tracep->chgQData(oldp+42,(vlSelf->Main__DOT__exu__DOT__Regs_11),64);
        tracep->chgQData(oldp+44,(vlSelf->Main__DOT__exu__DOT__Regs_12),64);
        tracep->chgQData(oldp+46,(vlSelf->Main__DOT__exu__DOT__Regs_13),64);
        tracep->chgQData(oldp+48,(vlSelf->Main__DOT__exu__DOT__Regs_14),64);
        tracep->chgQData(oldp+50,(vlSelf->Main__DOT__exu__DOT__Regs_15),64);
        tracep->chgQData(oldp+52,(vlSelf->Main__DOT__exu__DOT__Regs_16),64);
        tracep->chgQData(oldp+54,(vlSelf->Main__DOT__exu__DOT__Regs_17),64);
        tracep->chgQData(oldp+56,(vlSelf->Main__DOT__exu__DOT__Regs_18),64);
        tracep->chgQData(oldp+58,(vlSelf->Main__DOT__exu__DOT__Regs_19),64);
        tracep->chgQData(oldp+60,(vlSelf->Main__DOT__exu__DOT__Regs_20),64);
        tracep->chgQData(oldp+62,(vlSelf->Main__DOT__exu__DOT__Regs_21),64);
        tracep->chgQData(oldp+64,(vlSelf->Main__DOT__exu__DOT__Regs_22),64);
        tracep->chgQData(oldp+66,(vlSelf->Main__DOT__exu__DOT__Regs_23),64);
        tracep->chgQData(oldp+68,(vlSelf->Main__DOT__exu__DOT__Regs_24),64);
        tracep->chgQData(oldp+70,(vlSelf->Main__DOT__exu__DOT__Regs_25),64);
        tracep->chgQData(oldp+72,(vlSelf->Main__DOT__exu__DOT__Regs_26),64);
        tracep->chgQData(oldp+74,(vlSelf->Main__DOT__exu__DOT__Regs_27),64);
        tracep->chgQData(oldp+76,(vlSelf->Main__DOT__exu__DOT__Regs_28),64);
        tracep->chgQData(oldp+78,(vlSelf->Main__DOT__exu__DOT__Regs_29),64);
        tracep->chgQData(oldp+80,(vlSelf->Main__DOT__exu__DOT__Regs_30),64);
        tracep->chgQData(oldp+82,(vlSelf->Main__DOT__exu__DOT__Regs_31),64);
        tracep->chgQData(oldp+84,(vlSelf->Main__DOT__exu__DOT__DataR1),64);
        tracep->chgQData(oldp+86,(vlSelf->Main__DOT__exu__DOT__DataR2),64);
        tracep->chgQData(oldp+88,(vlSelf->Main__DOT__exu__DOT__AluSrc1),64);
        tracep->chgQData(oldp+90,(vlSelf->Main__DOT__exu__DOT__AluSrc2),64);
        tracep->chgIData(oldp+92,(vlSelf->Main__DOT__exu__DOT___AluOut_T_64[0U]),32);
        tracep->chgQData(oldp+93,(((vlSelf->Main__DOT__exu__DOT___AluOut_T_64[0U] 
                                    >> 0x1fU) ? 0xffffffffffffffffULL
                                    : 0ULL)),64);
        tracep->chgIData(oldp+95,((IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata)),32);
        tracep->chgQData(oldp+96,(((1U & (IData)((vlSelf->Main__DOT__exu__DOT__mem_Rdata 
                                                  >> 0x1fU)))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL)),64);
        tracep->chgQData(oldp+98,(((1U & (IData)((vlSelf->Main__DOT__idu_io_Imm 
                                                  >> 0x14U)))
                                    ? 0x7ffffffffffULL
                                    : 0ULL)),43);
        tracep->chgIData(oldp+100,((0x1fffffU & (IData)(vlSelf->Main__DOT__idu_io_Imm))),21);
        tracep->chgQData(oldp+101,(((1U & (IData)((vlSelf->Main__DOT__idu_io_Imm 
                                                   >> 0xcU)))
                                     ? 0x7ffffffffffffULL
                                     : 0ULL)),51);
        tracep->chgSData(oldp+103,((0x1fffU & (IData)(vlSelf->Main__DOT__idu_io_Imm))),13);
        tracep->chgBit(oldp+104,((0x100073U == (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))));
        tracep->chgCData(oldp+105,((0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))),7);
        tracep->chgIData(oldp+106,(((IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                             >> 0xcU)) 
                                    << 0xcU)),32);
        tracep->chgQData(oldp+107,(((1U & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                   >> 0x1fU)))
                                     ? 0xffffffffffffffffULL
                                     : 0ULL)),64);
        tracep->chgSData(oldp+109,((0xfffU & (IData)(
                                                     (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                      >> 0x14U)))),12);
        tracep->chgSData(oldp+110,(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_2),12);
        tracep->chgQData(oldp+111,(((0x800U & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_2))
                                     ? 0xffffffffffffffffULL
                                     : 0ULL)),64);
        tracep->chgIData(oldp+113,(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_6),21);
        tracep->chgQData(oldp+114,(((0x100000U & vlSelf->Main__DOT__idu__DOT__io_Imm_lo_6)
                                     ? 0xffffffffffffffffULL
                                     : 0ULL)),64);
        tracep->chgSData(oldp+116,(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8),13);
        tracep->chgQData(oldp+117,(((0x1000U & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8))
                                     ? 0xffffffffffffffffULL
                                     : 0ULL)),64);
        tracep->chgCData(oldp+119,(vlSelf->Main__DOT__idu__DOT__contr_code_2),2);
        tracep->chgCData(oldp+120,(vlSelf->Main__DOT__idu__DOT__contr_code_3),3);
        tracep->chgCData(oldp+121,(((0x17U == (0x7fU 
                                               & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                     ? 0U : ((0x3003U 
                                              == (0x707fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                              ? 0U : 
                                             ((0x3023U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                               ? 0U
                                               : ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                                   ? 0U
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
                                                     ? 0U
                                                     : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_228)))))))),2);
        tracep->chgCData(oldp+122,(vlSelf->Main__DOT__idu__DOT__contr_code_6),2);
        tracep->chgQData(oldp+123,(vlSelf->Main__DOT__ifu__DOT__mem_Rdata),64);
    }
    tracep->chgBit(oldp+125,(vlSelf->clock));
    tracep->chgBit(oldp+126,(vlSelf->reset));
}

void VMain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root__trace_cleanup\n"); );
    // Init
    VMain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMain___024root*>(voidSelf);
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
