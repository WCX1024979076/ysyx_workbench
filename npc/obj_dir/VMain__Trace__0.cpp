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
                                   & ((0x3023U == (0x707fU 
                                                   & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                      | ((0x13U != 
                                          (0x707fU 
                                           & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                         & ((0x33U 
                                             != (0xfe00707fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                            & ((0x1bU 
                                                != 
                                                (0x707fU 
                                                 & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                               & ((0x3bU 
                                                   != 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))) 
                                                  & (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_199))))))))));
        tracep->chgCData(oldp+5,(vlSelf->Main__DOT__idu_io_AluOp),5);
        tracep->chgCData(oldp+6,(vlSelf->Main__DOT__idu__DOT__contr_code_2),5);
        tracep->chgCData(oldp+7,(vlSelf->Main__DOT__idu__DOT__contr_code_3),5);
        tracep->chgCData(oldp+8,(((0x17U == (0x7fU 
                                             & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                   ? 0U : ((0x3003U 
                                            == (0x707fU 
                                                & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                            ? 0U : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_408)))),5);
        tracep->chgCData(oldp+9,(vlSelf->Main__DOT__idu_io_RinCtl),4);
        tracep->chgCData(oldp+10,(((0x17U == (0x7fU 
                                              & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                    ? 0U : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_511))),8);
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
        tracep->chgCData(oldp+16,((7U & (IData)(vlSelf->Main__DOT__idu_io_RinCtl))),3);
        tracep->chgQData(oldp+17,((((QData)((IData)(
                                                    vlSelf->Main__DOT__exu__DOT___AluOut_T_73[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U])))),64);
        tracep->chgQData(oldp+19,(vlSelf->Main__DOT__exu__DOT__mem_Rdata),64);
        tracep->chgQData(oldp+21,(((0x1fU == (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                         >> 0x14U))))
                                    ? vlSelf->Main__DOT__exu__DOT__Regs_31
                                    : vlSelf->Main__DOT__exu__DOT___GEN_62)),64);
        tracep->chgQData(oldp+23,(vlSelf->Main__DOT__exu__DOT__Regs_1),64);
        tracep->chgQData(oldp+25,(vlSelf->Main__DOT__exu__DOT__Regs_2),64);
        tracep->chgQData(oldp+27,(vlSelf->Main__DOT__exu__DOT__Regs_3),64);
        tracep->chgQData(oldp+29,(vlSelf->Main__DOT__exu__DOT__Regs_4),64);
        tracep->chgQData(oldp+31,(vlSelf->Main__DOT__exu__DOT__Regs_5),64);
        tracep->chgQData(oldp+33,(vlSelf->Main__DOT__exu__DOT__Regs_6),64);
        tracep->chgQData(oldp+35,(vlSelf->Main__DOT__exu__DOT__Regs_7),64);
        tracep->chgQData(oldp+37,(vlSelf->Main__DOT__exu__DOT__Regs_8),64);
        tracep->chgQData(oldp+39,(vlSelf->Main__DOT__exu__DOT__Regs_9),64);
        tracep->chgQData(oldp+41,(vlSelf->Main__DOT__exu__DOT__Regs_10),64);
        tracep->chgQData(oldp+43,(vlSelf->Main__DOT__exu__DOT__Regs_11),64);
        tracep->chgQData(oldp+45,(vlSelf->Main__DOT__exu__DOT__Regs_12),64);
        tracep->chgQData(oldp+47,(vlSelf->Main__DOT__exu__DOT__Regs_13),64);
        tracep->chgQData(oldp+49,(vlSelf->Main__DOT__exu__DOT__Regs_14),64);
        tracep->chgQData(oldp+51,(vlSelf->Main__DOT__exu__DOT__Regs_15),64);
        tracep->chgQData(oldp+53,(vlSelf->Main__DOT__exu__DOT__Regs_16),64);
        tracep->chgQData(oldp+55,(vlSelf->Main__DOT__exu__DOT__Regs_17),64);
        tracep->chgQData(oldp+57,(vlSelf->Main__DOT__exu__DOT__Regs_18),64);
        tracep->chgQData(oldp+59,(vlSelf->Main__DOT__exu__DOT__Regs_19),64);
        tracep->chgQData(oldp+61,(vlSelf->Main__DOT__exu__DOT__Regs_20),64);
        tracep->chgQData(oldp+63,(vlSelf->Main__DOT__exu__DOT__Regs_21),64);
        tracep->chgQData(oldp+65,(vlSelf->Main__DOT__exu__DOT__Regs_22),64);
        tracep->chgQData(oldp+67,(vlSelf->Main__DOT__exu__DOT__Regs_23),64);
        tracep->chgQData(oldp+69,(vlSelf->Main__DOT__exu__DOT__Regs_24),64);
        tracep->chgQData(oldp+71,(vlSelf->Main__DOT__exu__DOT__Regs_25),64);
        tracep->chgQData(oldp+73,(vlSelf->Main__DOT__exu__DOT__Regs_26),64);
        tracep->chgQData(oldp+75,(vlSelf->Main__DOT__exu__DOT__Regs_27),64);
        tracep->chgQData(oldp+77,(vlSelf->Main__DOT__exu__DOT__Regs_28),64);
        tracep->chgQData(oldp+79,(vlSelf->Main__DOT__exu__DOT__Regs_29),64);
        tracep->chgQData(oldp+81,(vlSelf->Main__DOT__exu__DOT__Regs_30),64);
        tracep->chgQData(oldp+83,(vlSelf->Main__DOT__exu__DOT__Regs_31),64);
        tracep->chgQData(oldp+85,(vlSelf->Main__DOT__exu__DOT__DataR1),64);
        tracep->chgQData(oldp+87,(vlSelf->Main__DOT__exu__DOT__DataR2),64);
        tracep->chgIData(oldp+89,((IData)(vlSelf->Main__DOT__exu__DOT__DataR1)),32);
        tracep->chgIData(oldp+90,(((1U & (IData)((vlSelf->Main__DOT__exu__DOT__DataR1 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U)),32);
        tracep->chgQData(oldp+91,(vlSelf->Main__DOT__exu__DOT__AluSrc1),64);
        tracep->chgQData(oldp+93,(vlSelf->Main__DOT__exu__DOT__AluSrc2),64);
        tracep->chgCData(oldp+95,((0xffU & vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U])),8);
        tracep->chgQData(oldp+96,(((0x80U & vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U])
                                    ? 0xffffffffffffffULL
                                    : 0ULL)),56);
        tracep->chgCData(oldp+98,((0xffU & (IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata))),8);
        tracep->chgQData(oldp+99,(((1U & (IData)((vlSelf->Main__DOT__exu__DOT__mem_Rdata 
                                                  >> 7U)))
                                    ? 0xffffffffffffffULL
                                    : 0ULL)),56);
        tracep->chgQData(oldp+101,(((0x4000U & vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U])
                                     ? 0x1ffffffffffffULL
                                     : 0ULL)),49);
        tracep->chgSData(oldp+103,((0x7fffU & vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U])),15);
        tracep->chgQData(oldp+104,(((1U & (IData)((vlSelf->Main__DOT__exu__DOT__mem_Rdata 
                                                   >> 0xeU)))
                                     ? 0x1ffffffffffffULL
                                     : 0ULL)),49);
        tracep->chgSData(oldp+106,((0x7fffU & (IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata))),15);
        tracep->chgIData(oldp+107,(vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U]),32);
        tracep->chgIData(oldp+108,(((vlSelf->Main__DOT__exu__DOT___AluOut_T_73[0U] 
                                     >> 0x1fU) ? 0xffffffffU
                                     : 0U)),32);
        tracep->chgIData(oldp+109,((IData)(vlSelf->Main__DOT__exu__DOT__mem_Rdata)),32);
        tracep->chgIData(oldp+110,(((1U & (IData)((vlSelf->Main__DOT__exu__DOT__mem_Rdata 
                                                   >> 0x1fU)))
                                     ? 0xffffffffU : 0U)),32);
        tracep->chgQData(oldp+111,(((1U & (IData)((vlSelf->Main__DOT__idu_io_Imm 
                                                   >> 0x14U)))
                                     ? 0x7ffffffffffULL
                                     : 0ULL)),43);
        tracep->chgIData(oldp+113,((0x1fffffU & (IData)(vlSelf->Main__DOT__idu_io_Imm))),21);
        tracep->chgQData(oldp+114,(((1U & (IData)((vlSelf->Main__DOT__idu_io_Imm 
                                                   >> 0xcU)))
                                     ? 0x7ffffffffffffULL
                                     : 0ULL)),51);
        tracep->chgSData(oldp+116,((0x1fffU & (IData)(vlSelf->Main__DOT__idu_io_Imm))),13);
        tracep->chgBit(oldp+117,((0x100073U == (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))));
        tracep->chgCData(oldp+118,((0x7fU & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata))),7);
        tracep->chgIData(oldp+119,(((IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                             >> 0xcU)) 
                                    << 0xcU)),32);
        tracep->chgIData(oldp+120,(((1U & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                   >> 0x1fU)))
                                     ? 0xffffffffU : 0U)),32);
        tracep->chgSData(oldp+121,((0xfffU & (IData)(
                                                     (vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                      >> 0x14U)))),12);
        tracep->chgQData(oldp+122,(((1U & (IData)((vlSelf->Main__DOT__ifu__DOT__mem_Rdata 
                                                   >> 0x1fU)))
                                     ? 0xfffffffffffffULL
                                     : 0ULL)),52);
        tracep->chgSData(oldp+124,(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_2),12);
        tracep->chgQData(oldp+125,(((0x800U & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_2))
                                     ? 0xfffffffffffffULL
                                     : 0ULL)),52);
        tracep->chgIData(oldp+127,(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_6),21);
        tracep->chgQData(oldp+128,(((0x100000U & vlSelf->Main__DOT__idu__DOT__io_Imm_lo_6)
                                     ? 0x7ffffffffffULL
                                     : 0ULL)),43);
        tracep->chgSData(oldp+130,(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8),13);
        tracep->chgQData(oldp+131,(((0x1000U & (IData)(vlSelf->Main__DOT__idu__DOT__io_Imm_lo_8))
                                     ? 0x7ffffffffffffULL
                                     : 0ULL)),51);
        tracep->chgCData(oldp+133,(vlSelf->Main__DOT__idu__DOT__contr_code_2),2);
        tracep->chgCData(oldp+134,(vlSelf->Main__DOT__idu__DOT__contr_code_3),3);
        tracep->chgCData(oldp+135,(((0x17U == (0x7fU 
                                               & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                     ? 0U : ((0x3003U 
                                              == (0x707fU 
                                                  & (IData)(vlSelf->Main__DOT__ifu__DOT__mem_Rdata)))
                                              ? 0U : (IData)(vlSelf->Main__DOT__idu__DOT___contr_code_T_408)))),2);
        tracep->chgQData(oldp+136,(vlSelf->Main__DOT__ifu__DOT__mem_Rdata),64);
    }
    tracep->chgBit(oldp+138,(vlSelf->clock));
    tracep->chgBit(oldp+139,(vlSelf->reset));
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
