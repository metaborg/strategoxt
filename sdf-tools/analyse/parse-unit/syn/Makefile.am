include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = parse-testsuite.def parse-testsuite.tbl

sdfdata_DATA   = $(TBLS_DEFS)
EXTRA_DIST     = $(sdfdata_DATA)
BOOTCLEANFILES = $(TBLS_DEFS)

SDFINCLUDES    = -I $(ATERM_FRONT)/share/sdf/aterm-front
PGEN_FLAGS     = -m $*
