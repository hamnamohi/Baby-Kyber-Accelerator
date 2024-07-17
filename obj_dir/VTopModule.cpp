// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTopModule__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTopModule::VTopModule(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTopModule__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , enable{vlSymsp->TOP.enable}
    , temp_secretkey{vlSymsp->TOP.temp_secretkey}
    , temp_result{vlSymsp->TOP.temp_result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VTopModule::VTopModule(const char* _vcname__)
    : VTopModule(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTopModule::~VTopModule() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTopModule___024root___eval_debug_assertions(VTopModule___024root* vlSelf);
#endif  // VL_DEBUG
void VTopModule___024root___eval_static(VTopModule___024root* vlSelf);
void VTopModule___024root___eval_initial(VTopModule___024root* vlSelf);
void VTopModule___024root___eval_settle(VTopModule___024root* vlSelf);
void VTopModule___024root___eval(VTopModule___024root* vlSelf);

void VTopModule::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTopModule::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTopModule___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTopModule___024root___eval_static(&(vlSymsp->TOP));
        VTopModule___024root___eval_initial(&(vlSymsp->TOP));
        VTopModule___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTopModule___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTopModule::eventsPending() { return false; }

uint64_t VTopModule::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTopModule::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTopModule___024root___eval_final(VTopModule___024root* vlSelf);

VL_ATTR_COLD void VTopModule::final() {
    VTopModule___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTopModule::hierName() const { return vlSymsp->name(); }
const char* VTopModule::modelName() const { return "VTopModule"; }
unsigned VTopModule::threads() const { return 1; }
void VTopModule::prepareClone() const { contextp()->prepareClone(); }
void VTopModule::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VTopModule::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTopModule___024root__trace_decl_types(VerilatedVcd* tracep);

void VTopModule___024root__trace_init_top(VTopModule___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTopModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTopModule___024root*>(voidSelf);
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VTopModule___024root__trace_decl_types(tracep);
    VTopModule___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTopModule___024root__trace_register(VTopModule___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTopModule::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTopModule::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTopModule___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
