include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = Dot.tbl Dot.def StrategoDot.tbl StrategoDot.def 

sdfdata_DATA   = $(TBLS_DEFS) $(wildcard *.sdf) 
EXTRA_DIST     = $(sdfdata_DATA)
BOOTCLEANFILES = $(TBLS_DEFS)

PGEN_FLAGS     = -m $*

Dot.def		: $(wildcard *.sdf)
StrategoDot.def	: $(wildcard *.sdf)

