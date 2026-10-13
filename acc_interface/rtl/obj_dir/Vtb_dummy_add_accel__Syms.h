// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_DUMMY_ADD_ACCEL__SYMS_H_
#define VERILATED_VTB_DUMMY_ADD_ACCEL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_dummy_add_accel.h"

// INCLUDE MODULE CLASSES
#include "Vtb_dummy_add_accel___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_dummy_add_accel__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_dummy_add_accel* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtb_dummy_add_accel___024root  TOP;

    // CONSTRUCTORS
    Vtb_dummy_add_accel__Syms(VerilatedContext* contextp, const char* namep, Vtb_dummy_add_accel* modelp);
    ~Vtb_dummy_add_accel__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
