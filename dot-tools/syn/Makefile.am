include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS = Dot.tbl StrategoDot.tbl
DEFS = Dot.def StrategoDot.def 

sdfdata_DATA   = $(TBLS) $(DEFS) $(wildcard *.sdf) 
EXTRA_DIST     = $(DEFS) $(wildcard *.sdf) 
CLEANFILES     = $(TBLS)
BOOTCLEANFILES = $(DEFS)

SDFINCLUDES    = -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS     = -m $*

Dot.def		: $(wildcard *.sdf)
StrategoDot.def	: $(wildcard *.sdf)

