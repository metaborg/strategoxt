include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = ATerm.def ATerm.tbl

sdfdata_DATA   = $(TBLS_DEFS) $(wildcard *.sdf) 
EXTRA_DIST     = $(sdfdata_DATA)
BOOTCLEANFILES = $(TBLS_DEFS)

PGEN_FLAGS     = -m $*

ATerm.def : \
  ATerm.sdf \
  ATerm-Layout.sdf \
  ATerm-Literals.sdf
