include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = Box.def Stratego-Box.def Box.tbl Stratego-Box.tbl

sdfdata_DATA   = $(TBLS_DEFS) $(wildcard *.sdf) 
EXTRA_DIST     = $(sdfdata_DATA)
BOOTCLEANFILES = $(TBLS_DEFS)

SDFINCLUDES    = -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS     = -m $*

