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
        tracep->chgQData(oldp+0,(vlSelf->Main__DOT__exu__DOT__Regs_32),64);
        tracep->chgIData(oldp+2,((IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)),32);
        tracep->chgBit(oldp+3,((1U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                      >> 0x16U))));
        tracep->chgBit(oldp+4,((1U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                      >> 0x15U))));
        tracep->chgCData(oldp+5,((0x1fU & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                           >> 0x10U))),5);
        tracep->chgCData(oldp+6,((0x1fU & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                           >> 0xbU))),5);
        tracep->chgCData(oldp+7,((7U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                        >> 8U))),3);
        tracep->chgCData(oldp+8,((0xffU & vlSelf->Main__DOT__idu__DOT__contr_code)),8);
        tracep->chgCData(oldp+9,((0x1fU & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                   >> 7U)))),5);
        tracep->chgCData(oldp+10,((0x1fU & (IData)(
                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                    >> 0xfU)))),5);
        tracep->chgCData(oldp+11,((0x1fU & (IData)(
                                                   (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                    >> 0x14U)))),5);
        tracep->chgQData(oldp+12,(vlSelf->Main__DOT__idu_io_Imm),64);
        tracep->chgQData(oldp+14,(vlSelf->Main__DOT__exu__DOT__Regs_10),64);
        tracep->chgQData(oldp+16,(((5U == (0x1fU & 
                                           (vlSelf->Main__DOT__idu__DOT__contr_code 
                                            >> 0x10U)))
                                    ? (QData)((IData)(vlSelf->Main__DOT__exu__DOT___AluOut_T_22))
                                    : vlSelf->Main__DOT__exu__DOT___AluOut_T_30)),64);
        tracep->chgQData(oldp+18,(vlSelf->Main__DOT__exu__DOT__mem_Rdata),64);
        tracep->chgQData(oldp+20,(vlSelf->Main__DOT__exu__DOT___GEN_64),64);
        tracep->chgQData(oldp+22,(vlSelf->Main__DOT__exu__DOT__Regs_0),64);
        tracep->chgQData(oldp+24,(vlSelf->Main__DOT__exu__DOT__Regs_1),64);
        tracep->chgQData(oldp+26,(vlSelf->Main__DOT__exu__DOT__Regs_2),64);
        tracep->chgQData(oldp+28,(vlSelf->Main__DOT__exu__DOT__Regs_3),64);
        tracep->chgQData(oldp+30,(vlSelf->Main__DOT__exu__DOT__Regs_4),64);
        tracep->chgQData(oldp+32,(vlSelf->Main__DOT__exu__DOT__Regs_5),64);
        tracep->chgQData(oldp+34,(vlSelf->Main__DOT__exu__DOT__Regs_6),64);
        tracep->chgQData(oldp+36,(vlSelf->Main__DOT__exu__DOT__Regs_7),64);
        tracep->chgQData(oldp+38,(vlSelf->Main__DOT__exu__DOT__Regs_8),64);
        tracep->chgQData(oldp+40,(vlSelf->Main__DOT__exu__DOT__Regs_9),64);
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
        tracep->chgQData(oldp+84,(vlSelf->Main__DOT__exu__DOT___GEN_31),64);
        tracep->chgQData(oldp+86,(vlSelf->Main__DOT__exu__DOT__AluOut),64);
        tracep->chgBit(oldp+88,((0x100073U == (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))));
        tracep->chgCData(oldp+89,((0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))),7);
        tracep->chgCData(oldp+90,(vlSelf->Main__DOT__idu__DOT__inst_type),3);
        tracep->chgQData(oldp+91,((QData)((IData)((0xfffU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0x14U)))))),64);
        tracep->chgQData(oldp+93,((QData)((IData)((
                                                   (0xfe0U 
                                                    & ((IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0x19U)) 
                                                       << 5U)) 
                                                   | (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 7U))))))),64);
        tracep->chgQData(oldp+95,((QData)((IData)((
                                                   (((0x1000U 
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
                                                         << 0xbU)))))),64);
        tracep->chgQData(oldp+97,((QData)((IData)(((IData)(
                                                           (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                            >> 0xcU)) 
                                                   << 0xcU)))),64);
        tracep->chgQData(oldp+99,((QData)((IData)((
                                                   (((0x100000U 
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
                                                         << 0xcU)))))),64);
        tracep->chgIData(oldp+101,(vlSelf->Main__DOT__idu__DOT__inst_flag),17);
        tracep->chgIData(oldp+102,(vlSelf->Main__DOT__idu__DOT__contr_code),23);
        tracep->chgQData(oldp+103,(vlSelf->Main__DOT__ifu__DOT__mem_Rdata),64);
    }
    tracep->chgBit(oldp+105,(vlSelf->clock));
    tracep->chgBit(oldp+106,(vlSelf->reset));
    tracep->chgQData(oldp+107,(vlSelf->io_A0Val),64);
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
