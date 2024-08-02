// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDecrypt__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VDecrypt::VDecrypt(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VDecrypt__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , enable{vlSymsp->TOP.enable}
    , m_b{vlSymsp->TOP.m_b}
    , decimal_value{vlSymsp->TOP.decimal_value}
    , secret_key{vlSymsp->TOP.secret_key}
    , ciphertext{vlSymsp->TOP.ciphertext}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VDecrypt::VDecrypt(const char* _vcname__)
    : VDecrypt(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VDecrypt::~VDecrypt() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VDecrypt___024root___eval_debug_assertions(VDecrypt___024root* vlSelf);
#endif  // VL_DEBUG
void VDecrypt___024root___eval_static(VDecrypt___024root* vlSelf);
void VDecrypt___024root___eval_initial(VDecrypt___024root* vlSelf);
void VDecrypt___024root___eval_settle(VDecrypt___024root* vlSelf);
void VDecrypt___024root___eval(VDecrypt___024root* vlSelf);

void VDecrypt::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDecrypt::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDecrypt___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VDecrypt___024root___eval_static(&(vlSymsp->TOP));
        VDecrypt___024root___eval_initial(&(vlSymsp->TOP));
        VDecrypt___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VDecrypt___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VDecrypt::eventsPending() { return false; }

uint64_t VDecrypt::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VDecrypt::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VDecrypt___024root___eval_final(VDecrypt___024root* vlSelf);

VL_ATTR_COLD void VDecrypt::final() {
    VDecrypt___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VDecrypt::hierName() const { return vlSymsp->name(); }
const char* VDecrypt::modelName() const { return "VDecrypt"; }
unsigned VDecrypt::threads() const { return 1; }
void VDecrypt::prepareClone() const { contextp()->prepareClone(); }
void VDecrypt::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VDecrypt::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VDecrypt___024root__trace_decl_types(VerilatedVcd* tracep);

void VDecrypt___024root__trace_init_top(VDecrypt___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDecrypt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDecrypt___024root*>(voidSelf);
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VDecrypt___024root__trace_decl_types(tracep);
    VDecrypt___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VDecrypt___024root__trace_register(VDecrypt___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDecrypt::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VDecrypt::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VDecrypt___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
