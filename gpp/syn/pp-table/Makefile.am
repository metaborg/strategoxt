include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS      = pp-table.tbl pp-table.def pp-table.pp
sdfdata_DATA   = $(TBLS_DEFS) $(wildcard *.sdf)


EXTRA_DIST     = $(sdfdata_DATA)
BOOTCLEANFILES = $(TBLS_DEFS)

SDFINCLUDES    = -I $(top_srcdir)/syn/box
PGEN_FLAGS     = -m $*

pp-table.def : pp-table.sdf pp-table-IntCon.sdf pp-table-PlaceHolder.sdf $(top_srcdir)/syn/box/Box.def 

