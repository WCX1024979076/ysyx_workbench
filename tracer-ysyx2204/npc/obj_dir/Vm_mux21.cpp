// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vm_mux21.h"
#include "Vm_mux21__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vm_mux21::Vm_mux21(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vm_mux21__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , s{vlSymsp->TOP.s}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
}

Vm_mux21::Vm_mux21(const char* _vcname__)
    : Vm_mux21(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vm_mux21::~Vm_mux21() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vm_mux21___024root___eval_initial(Vm_mux21___024root* vlSelf);
void Vm_mux21___024root___eval_settle(Vm_mux21___024root* vlSelf);
void Vm_mux21___024root___eval(Vm_mux21___024root* vlSelf);
#ifdef VL_DEBUG
void Vm_mux21___024root___eval_debug_assertions(Vm_mux21___024root* vlSelf);
#endif  // VL_DEBUG
void Vm_mux21___024root___final(Vm_mux21___024root* vlSelf);

static void _eval_initial_loop(Vm_mux21__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vm_mux21___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vm_mux21___024root___eval_settle(&(vlSymsp->TOP));
        Vm_mux21___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vm_mux21::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vm_mux21::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vm_mux21___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vm_mux21___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vm_mux21::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vm_mux21::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vm_mux21::final() {
    Vm_mux21___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vm_mux21___024root__trace_init_top(Vm_mux21___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vm_mux21___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vm_mux21___024root*>(voidSelf);
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vm_mux21___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vm_mux21___024root__trace_register(Vm_mux21___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vm_mux21::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vm_mux21___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
