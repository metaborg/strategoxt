include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = Sdf2.def Sdf2.tbl Stratego-Sdf2.def Stratego-Sdf2.tbl 

PGEN_FLAGS     = -m $*
SDFINCLUDES    = -I $(ASF_LIBRARY)/share/asf-library/library

sdfdata_DATA   = $(TBLS_DEFS)
EXTRA_DIST     = $(sdfdata_DATA) Sdf2.sdf Stratego-Sdf2.sdf

