include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS      = dtd.tbl dtd.def
sdfdata_DATA   = $(TBLS_DEFS) $(wildcard *.sdf)
EXTRA_DIST     = $(sdfdata_DATA)
BOOTCLEANFILES = $(TBLS_DEFS)

SDFINCLUDES    = -I $(top_srcdir)/syn/xml
PGEN_FLAGS     = -m $*

dtd.def: dtd.sdf dtd-content.sdf dtd-attribute.sdf dtd-entity.sdf
