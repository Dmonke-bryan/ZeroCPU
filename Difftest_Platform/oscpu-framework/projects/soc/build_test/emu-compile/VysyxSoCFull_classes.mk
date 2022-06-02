# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VysyxSoCFull.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VysyxSoCFull \
	VysyxSoCFull__1 \
	VysyxSoCFull__2 \
	VysyxSoCFull__3 \
	VysyxSoCFull__4 \
	VysyxSoCFull__5 \
	VysyxSoCFull__6 \
	VysyxSoCFull__7 \
	VysyxSoCFull__8 \
	VysyxSoCFull__9 \
	VysyxSoCFull__10 \
	VysyxSoCFull__11 \
	VysyxSoCFull__12 \
	VysyxSoCFull__13 \
	VysyxSoCFull__14 \
	VysyxSoCFull__15 \
	VysyxSoCFull__16 \
	VysyxSoCFull__17 \
	VysyxSoCFull__18 \
	VysyxSoCFull__19 \
	VysyxSoCFull__20 \
	VysyxSoCFull__21 \
	VysyxSoCFull___024unit \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VysyxSoCFull__Slow \
	VysyxSoCFull__1__Slow \
	VysyxSoCFull__2__Slow \
	VysyxSoCFull__3__Slow \
	VysyxSoCFull__4__Slow \
	VysyxSoCFull___024unit__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VysyxSoCFull__Dpi \
	VysyxSoCFull__Trace \
	VysyxSoCFull__Trace__1 \
	VysyxSoCFull__Trace__2 \
	VysyxSoCFull__Trace__3 \
	VysyxSoCFull__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VysyxSoCFull__Syms \
	VysyxSoCFull__Trace__Slow \
	VysyxSoCFull__Trace__1__Slow \
	VysyxSoCFull__Trace__2__Slow \
	VysyxSoCFull__Trace__3__Slow \
	VysyxSoCFull__Trace__4__Slow \
	VysyxSoCFull__Trace__5__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
