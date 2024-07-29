// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VEncrypt__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VEncrypt::VEncrypt(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VEncrypt__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , enable{vlSymsp->TOP.enable}
    , message{vlSymsp->TOP.message}
    , combined_output{vlSymsp->TOP.combined_output}
    , ciphertext{vlSymsp->TOP.ciphertext}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VEncrypt::VEncrypt(const char* _vcname__)
    : VEncrypt(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VEncrypt::~VEncrypt() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VEncrypt___024root___eval_debug_assertions(VEncrypt___024root* vlSelf);
#endif  // VL_DEBUG
void VEncrypt___024root___eval_static(VEncrypt___024root* vlSelf);
void VEncrypt___024root___eval_initial(VEncrypt___024root* vlSelf);
void VEncrypt___024root___eval_settle(VEncrypt___024root* vlSelf);
void VEncrypt___024root___eval(VEncrypt___024root* vlSelf);

void VEncrypt::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VEncrypt::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VEncrypt___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VEncrypt___024root___eval_static(&(vlSymsp->TOP));
        VEncrypt___024root___eval_initial(&(vlSymsp->TOP));
        VEncrypt___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VEncrypt___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VEncrypt::eventsPending() { return false; }

uint64_t VEncrypt::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VEncrypt::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VEncrypt___024root___eval_final(VEncrypt___024root* vlSelf);

VL_ATTR_COLD void VEncrypt::final() {
    VEncrypt___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VEncrypt::hierName() const { return vlSymsp->name(); }
const char* VEncrypt::modelName() const { return "VEncrypt"; }
unsigned VEncrypt::threads() const { return 1; }
void VEncrypt::prepareClone() const { contextp()->prepareClone(); }
void VEncrypt::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VEncrypt::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VEncrypt___024root__trace_decl_types(VerilatedVcd* tracep);

void VEncrypt___024root__trace_init_top(VEncrypt___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VEncrypt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEncrypt___024root*>(voidSelf);
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VEncrypt___024root__trace_decl_types(tracep);
    VEncrypt___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VEncrypt___024root__trace_register(VEncrypt___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VEncrypt::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VEncrypt::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VEncrypt___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
