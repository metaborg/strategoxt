include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = parse-testsuite.def parse-testsuite.tbl

sdfdata_DATA   = $(TBLS_DEFS)
EXTRA_DIST     = $(TBLS_DEFS) parse-testsuite.sdf
BOOTCLEANFILES = $(TBLS_DEFS) parse-testsuite.dep

# FIXME SDF: bootstrap problem: remove the asf-library include
SDFINCLUDES    = -I $(SDF_LIBRARY)/share/sdf-library/library -I $(ASF_LIBRARY)/share/asf-library/library
PGEN_FLAGS     = -m $*
