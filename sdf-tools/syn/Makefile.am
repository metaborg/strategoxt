include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = Sdf2-Syntax.def Sdf2-Syntax.tbl

sdfdata_DATA   = $(TBLS_DEFS) $(wildcard *.sdf) 
EXTRA_DIST     = $(sdfdata_DATA)
BOOTCLEANFILES = $(TBLS_DEFS)

PGEN_FLAGS     = -m $*

