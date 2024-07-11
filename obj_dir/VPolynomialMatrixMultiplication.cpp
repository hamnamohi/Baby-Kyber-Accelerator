// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPolynomialMatrixMultiplication__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPolynomialMatrixMultiplication::VPolynomialMatrixMultiplication(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPolynomialMatrixMultiplication__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , enable{vlSymsp->TOP.enable}
    , polynomial1{vlSymsp->TOP.polynomial1}
    , polynomial2{vlSymsp->TOP.polynomial2}
    , polynomial_out{vlSymsp->TOP.polynomial_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VPolynomialMatrixMultiplication::VPolynomialMatrixMultiplication(const char* _vcname__)
    : VPolynomialMatrixMultiplication(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPolynomialMatrixMultiplication::~VPolynomialMatrixMultiplication() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPolynomialMatrixMultiplication___024root___eval_debug_assertions(VPolynomialMatrixMultiplication___024root* vlSelf);
#endif  // VL_DEBUG
void VPolynomialMatrixMultiplication___024root___eval_static(VPolynomialMatrixMultiplication___024root* vlSelf);
void VPolynomialMatrixMultiplication___024root___eval_initial(VPolynomialMatrixMultiplication___024root* vlSelf);
void VPolynomialMatrixMultiplication___024root___eval_settle(VPolynomialMatrixMultiplication___024root* vlSelf);
void VPolynomialMatrixMultiplication___024root___eval(VPolynomialMatrixMultiplication___024root* vlSelf);

void VPolynomialMatrixMultiplication::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPolynomialMatrixMultiplication::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPolynomialMatrixMultiplication___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VPolynomialMatrixMultiplication___024root___eval_static(&(vlSymsp->TOP));
        VPolynomialMatrixMultiplication___024root___eval_initial(&(vlSymsp->TOP));
        VPolynomialMatrixMultiplication___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VPolynomialMatrixMultiplication___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VPolynomialMatrixMultiplication::eventsPending() { return false; }

uint64_t VPolynomialMatrixMultiplication::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VPolynomialMatrixMultiplication::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VPolynomialMatrixMultiplication___024root___eval_final(VPolynomialMatrixMultiplication___024root* vlSelf);

VL_ATTR_COLD void VPolynomialMatrixMultiplication::final() {
    VPolynomialMatrixMultiplication___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPolynomialMatrixMultiplication::hierName() const { return vlSymsp->name(); }
const char* VPolynomialMatrixMultiplication::modelName() const { return "VPolynomialMatrixMultiplication"; }
unsigned VPolynomialMatrixMultiplication::threads() const { return 1; }
void VPolynomialMatrixMultiplication::prepareClone() const { contextp()->prepareClone(); }
void VPolynomialMatrixMultiplication::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VPolynomialMatrixMultiplication::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VPolynomialMatrixMultiplication___024root__trace_decl_types(VerilatedVcd* tracep);

void VPolynomialMatrixMultiplication___024root__trace_init_top(VPolynomialMatrixMultiplication___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPolynomialMatrixMultiplication___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPolynomialMatrixMultiplication___024root*>(voidSelf);
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VPolynomialMatrixMultiplication___024root__trace_decl_types(tracep);
    VPolynomialMatrixMultiplication___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root__trace_register(VPolynomialMatrixMultiplication___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPolynomialMatrixMultiplication::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VPolynomialMatrixMultiplication::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPolynomialMatrixMultiplication___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
