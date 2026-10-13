// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dummy_add_accel.h for the primary calling header

#include "Vtb_dummy_add_accel__pch.h"

void Vtb_dummy_add_accel___024root___ctor_var_reset(Vtb_dummy_add_accel___024root* vlSelf);

Vtb_dummy_add_accel___024root::Vtb_dummy_add_accel___024root(Vtb_dummy_add_accel__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_dummy_add_accel___024root___ctor_var_reset(this);
}

void Vtb_dummy_add_accel___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_dummy_add_accel___024root::~Vtb_dummy_add_accel___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
