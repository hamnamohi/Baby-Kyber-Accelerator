// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRandomNumberGenerator__pch.h"
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
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
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
// Evaluation function

#ifdef VL_DEBUG
void VRandomNumberGenerator___024root___eval_debug_assertions(VRandomNumberGenerator___024root* vlSelf);
#endif  // VL_DEBUG
void VRandomNumberGenerator___024root___eval_static(VRandomNumberGenerator___024root* vlSelf);
void VRandomNumberGenerator___024root___eval_initial(VRandomNumberGenerator___024root* vlSelf);
void VRandomNumberGenerator___024root___eval_settle(VRandomNumberGenerator___024root* vlSelf);
void VRandomNumberGenerator___024root___eval(VRandomNumberGenerator___024root* vlSelf);

void VRandomNumberGenerator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRandomNumberGenerator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRandomNumberGenerator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRandomNumberGenerator___024root___eval_static(&(vlSymsp->TOP));
        VRandomNumberGenerator___024root___eval_initial(&(vlSymsp->TOP));
        VRandomNumberGenerator___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRandomNumberGenerator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRandomNumberGenerator::eventsPending() { return false; }

uint64_t VRandomNumberGenerator::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRandomNumberGenerator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRandomNumberGenerator___024root___eval_final(VRandomNumberGenerator___024root* vlSelf);

VL_ATTR_COLD void VRandomNumberGenerator::final() {
    VRandomNumberGenerator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRandomNumberGenerator::hierName() const { return vlSymsp->name(); }
const char* VRandomNumberGenerator::modelName() const { return "VRandomNumberGenerator"; }
unsigned VRandomNumberGenerator::threads() const { return 1; }
void VRandomNumberGenerator::prepareClone() const { contextp()->prepareClone(); }
void VRandomNumberGenerator::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VRandomNumberGenerator::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRandomNumberGenerator___024root__trace_decl_types(VerilatedVcd* tracep);

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
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VRandomNumberGenerator___024root__trace_decl_types(tracep);
    VRandomNumberGenerator___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_register(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRandomNumberGenerator::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRandomNumberGenerator::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRandomNumberGenerator___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
