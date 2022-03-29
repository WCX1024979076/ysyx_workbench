// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vexample.h"
#include "Vexample__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vexample::Vexample(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vexample__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
}

Vexample::Vexample(const char* _vcname__)
    : Vexample(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vexample::~Vexample() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vexample___024root___eval_initial(Vexample___024root* vlSelf);
void Vexample___024root___eval_settle(Vexample___024root* vlSelf);
void Vexample___024root___eval(Vexample___024root* vlSelf);
#ifdef VL_DEBUG
void Vexample___024root___eval_debug_assertions(Vexample___024root* vlSelf);
#endif  // VL_DEBUG
void Vexample___024root___final(Vexample___024root* vlSelf);

static void _eval_initial_loop(Vexample__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vexample___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vexample___024root___eval_settle(&(vlSymsp->TOP));
        Vexample___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vexample::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vexample::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vexample___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vexample___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vexample::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vexample::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vexample::final() {
    Vexample___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vexample___024root__trace_init_top(Vexample___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vexample___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexample___024root*>(voidSelf);
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vexample___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vexample___024root__trace_register(Vexample___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vexample::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vexample___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
