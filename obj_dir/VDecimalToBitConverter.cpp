// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDecimalToBitConverter__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VDecimalToBitConverter::VDecimalToBitConverter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VDecimalToBitConverter__Syms(contextp(), _vcname__, this)}
    , coefficients{vlSymsp->TOP.coefficients}
    , input_value{vlSymsp->TOP.input_value}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VDecimalToBitConverter::VDecimalToBitConverter(const char* _vcname__)
    : VDecimalToBitConverter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VDecimalToBitConverter::~VDecimalToBitConverter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VDecimalToBitConverter___024root___eval_debug_assertions(VDecimalToBitConverter___024root* vlSelf);
#endif  // VL_DEBUG
void VDecimalToBitConverter___024root___eval_static(VDecimalToBitConverter___024root* vlSelf);
void VDecimalToBitConverter___024root___eval_initial(VDecimalToBitConverter___024root* vlSelf);
void VDecimalToBitConverter___024root___eval_settle(VDecimalToBitConverter___024root* vlSelf);
void VDecimalToBitConverter___024root___eval(VDecimalToBitConverter___024root* vlSelf);

void VDecimalToBitConverter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDecimalToBitConverter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDecimalToBitConverter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VDecimalToBitConverter___024root___eval_static(&(vlSymsp->TOP));
        VDecimalToBitConverter___024root___eval_initial(&(vlSymsp->TOP));
        VDecimalToBitConverter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VDecimalToBitConverter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VDecimalToBitConverter::eventsPending() { return false; }

uint64_t VDecimalToBitConverter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VDecimalToBitConverter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VDecimalToBitConverter___024root___eval_final(VDecimalToBitConverter___024root* vlSelf);

VL_ATTR_COLD void VDecimalToBitConverter::final() {
    VDecimalToBitConverter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VDecimalToBitConverter::hierName() const { return vlSymsp->name(); }
const char* VDecimalToBitConverter::modelName() const { return "VDecimalToBitConverter"; }
unsigned VDecimalToBitConverter::threads() const { return 1; }
void VDecimalToBitConverter::prepareClone() const { contextp()->prepareClone(); }
void VDecimalToBitConverter::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VDecimalToBitConverter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VDecimalToBitConverter___024root__trace_decl_types(VerilatedVcd* tracep);

void VDecimalToBitConverter___024root__trace_init_top(VDecimalToBitConverter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDecimalToBitConverter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDecimalToBitConverter___024root*>(voidSelf);
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VDecimalToBitConverter___024root__trace_decl_types(tracep);
    VDecimalToBitConverter___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VDecimalToBitConverter___024root__trace_register(VDecimalToBitConverter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDecimalToBitConverter::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VDecimalToBitConverter::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VDecimalToBitConverter___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
