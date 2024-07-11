// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMatrixTranspose__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMatrixTranspose::VMatrixTranspose(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMatrixTranspose__Syms(contextp(), _vcname__, this)}
    , matrix_in{vlSymsp->TOP.matrix_in}
    , matrix_out{vlSymsp->TOP.matrix_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VMatrixTranspose::VMatrixTranspose(const char* _vcname__)
    : VMatrixTranspose(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMatrixTranspose::~VMatrixTranspose() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMatrixTranspose___024root___eval_debug_assertions(VMatrixTranspose___024root* vlSelf);
#endif  // VL_DEBUG
void VMatrixTranspose___024root___eval_static(VMatrixTranspose___024root* vlSelf);
void VMatrixTranspose___024root___eval_initial(VMatrixTranspose___024root* vlSelf);
void VMatrixTranspose___024root___eval_settle(VMatrixTranspose___024root* vlSelf);
void VMatrixTranspose___024root___eval(VMatrixTranspose___024root* vlSelf);

void VMatrixTranspose::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMatrixTranspose::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMatrixTranspose___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMatrixTranspose___024root___eval_static(&(vlSymsp->TOP));
        VMatrixTranspose___024root___eval_initial(&(vlSymsp->TOP));
        VMatrixTranspose___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMatrixTranspose___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMatrixTranspose::eventsPending() { return false; }

uint64_t VMatrixTranspose::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMatrixTranspose::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMatrixTranspose___024root___eval_final(VMatrixTranspose___024root* vlSelf);

VL_ATTR_COLD void VMatrixTranspose::final() {
    VMatrixTranspose___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMatrixTranspose::hierName() const { return vlSymsp->name(); }
const char* VMatrixTranspose::modelName() const { return "VMatrixTranspose"; }
unsigned VMatrixTranspose::threads() const { return 1; }
void VMatrixTranspose::prepareClone() const { contextp()->prepareClone(); }
void VMatrixTranspose::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VMatrixTranspose::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VMatrixTranspose___024root__trace_decl_types(VerilatedVcd* tracep);

void VMatrixTranspose___024root__trace_init_top(VMatrixTranspose___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMatrixTranspose___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMatrixTranspose___024root*>(voidSelf);
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VMatrixTranspose___024root__trace_decl_types(tracep);
    VMatrixTranspose___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VMatrixTranspose___024root__trace_register(VMatrixTranspose___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMatrixTranspose::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VMatrixTranspose::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMatrixTranspose___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
