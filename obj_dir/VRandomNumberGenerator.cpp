// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRandomNumberGenerator.h"
#include "VRandomNumberGenerator__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRandomNumberGenerator::VRandomNumberGenerator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRandomNumberGenerator__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , enable{vlSymsp->TOP.enable}
    , random_number{vlSymsp->TOP.random_number}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRandomNumberGenerator::VRandomNumberGenerator(const char* _vcname__)
    : VRandomNumberGenerator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRandomNumberGenerator::~VRandomNumberGenerator() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRandomNumberGenerator___024root___eval_initial(VRandomNumberGenerator___024root* vlSelf);
void VRandomNumberGenerator___024root___eval_settle(VRandomNumberGenerator___024root* vlSelf);
void VRandomNumberGenerator___024root___eval(VRandomNumberGenerator___024root* vlSelf);
#ifdef VL_DEBUG
void VRandomNumberGenerator___024root___eval_debug_assertions(VRandomNumberGenerator___024root* vlSelf);
#endif  // VL_DEBUG
void VRandomNumberGenerator___024root___final(VRandomNumberGenerator___024root* vlSelf);

static void _eval_initial_loop(VRandomNumberGenerator__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRandomNumberGenerator___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRandomNumberGenerator___024root___eval_settle(&(vlSymsp->TOP));
        VRandomNumberGenerator___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRandomNumberGenerator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRandomNumberGenerator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRandomNumberGenerator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRandomNumberGenerator___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VRandomNumberGenerator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRandomNumberGenerator::final() {
    VRandomNumberGenerator___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRandomNumberGenerator::hierName() const { return vlSymsp->name(); }
const char* VRandomNumberGenerator::modelName() const { return "VRandomNumberGenerator"; }
unsigned VRandomNumberGenerator::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VRandomNumberGenerator::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRandomNumberGenerator___024root__trace_init_top(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRandomNumberGenerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRandomNumberGenerator___024root*>(voidSelf);
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRandomNumberGenerator___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_register(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRandomNumberGenerator::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRandomNumberGenerator::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRandomNumberGenerator___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
