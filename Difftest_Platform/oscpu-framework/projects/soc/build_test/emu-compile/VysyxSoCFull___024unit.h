// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL___024UNIT_H_
#define VERILATED_VYSYXSOCFULL___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "VysyxSoCFull__Dpi.h"

//==========

class VysyxSoCFull__Syms;
class VysyxSoCFull_VerilatedVcd;


//----------

VL_MODULE(VysyxSoCFull___024unit) {
  public:

    // INTERNAL VARIABLES
  private:
    VysyxSoCFull__Syms* __VlSymsp;  // Symbol table
  public:

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VysyxSoCFull___024unit);  ///< Copying not allowed
  public:
    VysyxSoCFull___024unit(const char* name = "TOP");
    ~VysyxSoCFull___024unit();

    // INTERNAL METHODS
    void __Vconfigure(VysyxSoCFull__Syms* symsp, bool first);
    void __Vdpiimwrap_flash_read_TOP____024unit(QData/*63:0*/ addr, QData/*63:0*/ (&data));
  private:
    static void _ctor_var_reset(VysyxSoCFull___024unit* self) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
