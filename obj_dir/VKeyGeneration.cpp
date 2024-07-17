// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VKeyGeneration__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VKeyGeneration::VKeyGeneration(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VKeyGeneration__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , enable{vlSymsp->TOP.enable}
    , secretkey{vlSymsp->TOP.secretkey}
    , result{vlSymsp->TOP.result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VKeyGeneration::VKeyGeneration(const char* _vcname__)
    : VKeyGeneration(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VKeyGeneration::~VKeyGeneration() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VKeyGeneration___024root___eval_debug_assertions(VKeyGeneration___024root* vlSelf);
#endif  // VL_DEBUG
void VKeyGeneration___024root___eval_static(VKeyGeneration___024root* vlSelf);
void VKeyGeneration___024root___eval_initial(VKeyGeneration___024root* vlSelf);
void VKeyGeneration___024root___eval_settle(VKeyGeneration___024root* vlSelf);
void VKeyGeneration___024root___eval(VKeyGeneration___024root* vlSelf);

void VKeyGeneration::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VKeyGeneration::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VKeyGeneration___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VKeyGeneration___024root___eval_static(&(vlSymsp->TOP));
        VKeyGeneration___024root___eval_initial(&(vlSymsp->TOP));
        VKeyGeneration___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VKeyGeneration___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VKeyGeneration::eventsPending() { return false; }

uint64_t VKeyGeneration::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VKeyGeneration::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VKeyGeneration___024root___eval_final(VKeyGeneration___024root* vlSelf);

VL_ATTR_COLD void VKeyGeneration::final() {
    VKeyGeneration___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VKeyGeneration::hierName() const { return vlSymsp->name(); }
const char* VKeyGeneration::modelName() const { return "VKeyGeneration"; }
unsigned VKeyGeneration::threads() const { return 1; }
void VKeyGeneration::prepareClone() const { contextp()->prepareClone(); }
void VKeyGeneration::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VKeyGeneration::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VKeyGeneration___024root__trace_decl_types(VerilatedVcd* tracep);

void VKeyGeneration___024root__trace_init_top(VKeyGeneration___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VKeyGeneration___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VKeyGeneration___024root*>(voidSelf);
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VKeyGeneration___024root__trace_decl_types(tracep);
    VKeyGeneration___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VKeyGeneration___024root__trace_register(VKeyGeneration___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VKeyGeneration::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VKeyGeneration::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VKeyGeneration___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
