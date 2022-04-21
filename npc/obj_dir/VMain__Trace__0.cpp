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
        tracep->chgBit(oldp+3,((1U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                      >> 0x14U))));
        tracep->chgBit(oldp+4,((1U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                      >> 0x13U))));
        tracep->chgCData(oldp+5,((0x1fU & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                           >> 0xeU))),5);
        tracep->chgCData(oldp+6,((0x1fU & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                           >> 9U))),5);
        tracep->chgBit(oldp+7,((1U & (vlSelf->Main__DOT__idu__DOT__contr_code 
                                      >> 8U))));
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
        tracep->chgQData(oldp+14,(vlSelf->Main__DOT__exu__DOT__registers_io_DataIn),64);
        tracep->chgQData(oldp+16,((QData)((IData)(vlSelf->Main__DOT__exu__DOT__registers__DOT___GEN_31))),64);
        tracep->chgQData(oldp+18,((QData)((IData)(vlSelf->Main__DOT__exu__DOT__registers__DOT___GEN_63))),64);
        tracep->chgQData(oldp+20,(((5U == (0x1fU & 
                                           (vlSelf->Main__DOT__idu__DOT__contr_code 
                                            >> 0xeU)))
                                    ? vlSelf->Main__DOT__exu__DOT___AluOut_T_18
                                    : vlSelf->Main__DOT__exu__DOT___AluOut_T_26)),64);
        tracep->chgQData(oldp+22,(vlSelf->Main__DOT__exu__DOT__mem_Rdata),64);
        tracep->chgIData(oldp+24,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_0),32);
        tracep->chgIData(oldp+25,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_1),32);
        tracep->chgIData(oldp+26,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_2),32);
        tracep->chgIData(oldp+27,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_3),32);
        tracep->chgIData(oldp+28,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_4),32);
        tracep->chgIData(oldp+29,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_5),32);
        tracep->chgIData(oldp+30,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_6),32);
        tracep->chgIData(oldp+31,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_7),32);
        tracep->chgIData(oldp+32,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_8),32);
        tracep->chgIData(oldp+33,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_9),32);
        tracep->chgIData(oldp+34,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_10),32);
        tracep->chgIData(oldp+35,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_11),32);
        tracep->chgIData(oldp+36,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_12),32);
        tracep->chgIData(oldp+37,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_13),32);
        tracep->chgIData(oldp+38,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_14),32);
        tracep->chgIData(oldp+39,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_15),32);
        tracep->chgIData(oldp+40,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_16),32);
        tracep->chgIData(oldp+41,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_17),32);
        tracep->chgIData(oldp+42,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_18),32);
        tracep->chgIData(oldp+43,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_19),32);
        tracep->chgIData(oldp+44,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_20),32);
        tracep->chgIData(oldp+45,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_21),32);
        tracep->chgIData(oldp+46,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_22),32);
        tracep->chgIData(oldp+47,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_23),32);
        tracep->chgIData(oldp+48,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_24),32);
        tracep->chgIData(oldp+49,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_25),32);
        tracep->chgIData(oldp+50,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_26),32);
        tracep->chgIData(oldp+51,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_27),32);
        tracep->chgIData(oldp+52,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_28),32);
        tracep->chgIData(oldp+53,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_29),32);
        tracep->chgIData(oldp+54,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_30),32);
        tracep->chgIData(oldp+55,(vlSelf->Main__DOT__exu__DOT__registers__DOT__Regs_31),32);
        tracep->chgBit(oldp+56,((0x100073U == (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))));
        tracep->chgCData(oldp+57,((0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))),7);
        tracep->chgCData(oldp+58,(vlSelf->Main__DOT__idu__DOT__inst_type),3);
        tracep->chgQData(oldp+59,((QData)((IData)((0xfffU 
                                                   & (IData)(
                                                             (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                              >> 0x14U)))))),64);
        tracep->chgQData(oldp+61,((QData)((IData)((
                                                   (0xfe0U 
                                                    & ((IData)(
                                                               (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                >> 0x19U)) 
                                                       << 5U)) 
                                                   | (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                                 >> 7U))))))),64);
        tracep->chgQData(oldp+63,((QData)((IData)((
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
        tracep->chgQData(oldp+65,((QData)((IData)(((IData)(
                                                           (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                            >> 0xcU)) 
                                                   << 0xcU)))),64);
        tracep->chgQData(oldp+67,((QData)((IData)((
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
        tracep->chgIData(oldp+69,(vlSelf->Main__DOT__idu__DOT__inst_flag),17);
        tracep->chgIData(oldp+70,(vlSelf->Main__DOT__idu__DOT__contr_code),21);
        tracep->chgQData(oldp+71,(vlSelf->Main__DOT__ifu__DOT__mem_Rdata),64);
    }
    tracep->chgBit(oldp+73,(vlSelf->clock));
    tracep->chgBit(oldp+74,(vlSelf->reset));
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
