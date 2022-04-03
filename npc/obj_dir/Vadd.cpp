// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vadd.h"
#include "Vadd__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vadd::Vadd(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vadd__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_value1{vlSymsp->TOP.io_value1}
    , io_value2{vlSymsp->TOP.io_value2}
    , io_output{vlSymsp->TOP.io_output}
    , rootp{&(vlSymsp->TOP)}
{
}

Vadd::Vadd(const char* _vcname__)
    : Vadd(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vadd::~Vadd() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vadd___024root___eval_initial(Vadd___024root* vlSelf);
void Vadd___024root___eval_settle(Vadd___024root* vlSelf);
void Vadd___024root___eval(Vadd___024root* vlSelf);
#ifdef VL_DEBUG
void Vadd___024root___eval_debug_assertions(Vadd___024root* vlSelf);
#endif  // VL_DEBUG
void Vadd___024root___final(Vadd___024root* vlSelf);

static void _eval_initial_loop(Vadd__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vadd___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vadd___024root___eval_settle(&(vlSymsp->TOP));
        Vadd___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vadd::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vadd::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vadd___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vadd___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vadd::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vadd::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vadd::final() {
    Vadd___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vadd___024root__trace_init_top(Vadd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vadd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd___024root*>(voidSelf);
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vadd___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vadd___024root__trace_register(Vadd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vadd::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vadd___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
