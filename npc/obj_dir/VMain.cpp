// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMain.h"
#include "VMain__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VMain::VMain(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMain__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_RegWrite{vlSymsp->TOP.io_RegWrite}
    , io_AluOp{vlSymsp->TOP.io_AluOp}
    , io_AluSrc{vlSymsp->TOP.io_AluSrc}
    , io_R1{vlSymsp->TOP.io_R1}
    , io_R2{vlSymsp->TOP.io_R2}
    , io_Rdest{vlSymsp->TOP.io_Rdest}
    , io_Inst{vlSymsp->TOP.io_Inst}
    , io_PcVal{vlSymsp->TOP.io_PcVal}
    , io_AluOut{vlSymsp->TOP.io_AluOut}
    , io_DataR1{vlSymsp->TOP.io_DataR1}
    , io_DataR2{vlSymsp->TOP.io_DataR2}
    , io_DataImmI{vlSymsp->TOP.io_DataImmI}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
}

VMain::VMain(const char* _vcname__)
    : VMain(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMain::~VMain() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMain___024root___eval_initial(VMain___024root* vlSelf);
void VMain___024root___eval_settle(VMain___024root* vlSelf);
void VMain___024root___eval(VMain___024root* vlSelf);
#ifdef VL_DEBUG
void VMain___024root___eval_debug_assertions(VMain___024root* vlSelf);
#endif  // VL_DEBUG
void VMain___024root___final(VMain___024root* vlSelf);

static void _eval_initial_loop(VMain__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMain___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMain___024root___eval_settle(&(vlSymsp->TOP));
        VMain___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMain::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMain::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMain___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMain___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMain::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMain::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMain::final() {
    VMain___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMain___024root__trace_init_top(VMain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMain___024root*>(voidSelf);
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMain___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMain___024root__trace_register(VMain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMain::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMain___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
