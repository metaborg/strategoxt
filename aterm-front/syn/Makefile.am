include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = ATerms.def ATerms.tbl

PGEN_FLAGS     = -m $*
SDFINCLUDES    = -I $(ASF_LIBRARY)/share/asf-library/library

sdfdata_DATA   = $(TBLS_DEFS)
EXTRA_DIST     = $(sdfdata_DATA)
BOOTCLEANFILES = $(TBLS_DEFS)
