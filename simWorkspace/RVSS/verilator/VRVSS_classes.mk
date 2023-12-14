# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VRVSS.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VRVSS \
	VRVSS___024root__DepSet_h3afdf02d__0 \
	VRVSS___024root__DepSet_hb8caaa54__0 \
	VRVSS_Datapath__DepSet_h2456afcf__0 \
	VRVSS_Control__DepSet_h3ab65a4a__0 \
	VRVSS_Memory__DepSet_h87b883c8__0 \
	VRVSS_Memory__DepSet_h57ee0938__0 \
	VRVSS_Execute__DepSet_h9871053a__0 \
	VRVSS_DatapathDecode__DepSet_h622c467f__0 \
	VRVSS_Fetch__DepSet_h97f818b1__0 \
	VRVSS_Fetch__DepSet_h73b3b2db__0 \
	VRVSS_Decode__DepSet_h3c1bcf0a__0 \
	VRVSS_ALU__DepSet_h9765ca42__0 \
	VRVSS_RegFile__DepSet_hf1df1881__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VRVSS__ConstPool_0 \
	VRVSS___024root__Slow \
	VRVSS___024root__DepSet_h3afdf02d__0__Slow \
	VRVSS___024root__DepSet_hb8caaa54__0__Slow \
	VRVSS_RVSS__Slow \
	VRVSS_RVSS__DepSet_h15dfbba7__0__Slow \
	VRVSS_Datapath__Slow \
	VRVSS_Datapath__DepSet_h350f3941__0__Slow \
	VRVSS_Control__Slow \
	VRVSS_Control__DepSet_h75c6dd5f__0__Slow \
	VRVSS_Memory__Slow \
	VRVSS_Memory__DepSet_h87b883c8__0__Slow \
	VRVSS_Execute__Slow \
	VRVSS_Execute__DepSet_h4c04b430__0__Slow \
	VRVSS_DatapathDecode__Slow \
	VRVSS_DatapathDecode__DepSet_hbba94d01__0__Slow \
	VRVSS_Fetch__Slow \
	VRVSS_Fetch__DepSet_h97f818b1__0__Slow \
	VRVSS_Decode__Slow \
	VRVSS_Decode__DepSet_h9eebb845__0__Slow \
	VRVSS_ALU__Slow \
	VRVSS_ALU__DepSet_h0b6397ff__0__Slow \
	VRVSS_RegFile__Slow \
	VRVSS_RegFile__DepSet_h729962a6__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VRVSS__Dpi \
	VRVSS__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VRVSS__Syms \
	VRVSS__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
