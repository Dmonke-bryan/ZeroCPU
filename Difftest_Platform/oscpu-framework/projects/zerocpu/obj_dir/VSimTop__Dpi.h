// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VSIMTOP__DPI_H_
#define VERILATED_VSIMTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/bryan/ZeroCPU/Difftest_Platform/oscpu-framework/libraries/difftest/src/test/vsrc/common/ram.v:25:33
    extern long long ram_read_helper(svBit en, long long rIdx);
    // DPI import at /home/bryan/ZeroCPU/Difftest_Platform/oscpu-framework/libraries/difftest/src/test/vsrc/common/ram.v:17:30
    extern void ram_write_helper(long long wIdx, long long wdata, long long wmask, svBit wen);

#ifdef __cplusplus
}
#endif

#endif  // guard
