include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS      = pp-table.tbl pp-table.def 
sdfdata_DATA   = $(TBLS_DEFS) $(wildcard *.sdf)
pkgdata_DATA   = pp-table.pp pp-table.pp.af

EXTRA_DIST     = $(sdfdata_DATA) $(pkgdata_DATA)
BOOTCLEANFILES = $(TBLS_DEFS)  pp-table.pp.af

SDFINCLUDES    = -I $(top_srcdir)/syn/box
PGEN_FLAGS     = -m $*

pp-table.def : pp-table.sdf pp-table-IntCon.sdf pp-table-PlaceHolder.sdf $(top_srcdir)/syn/box/Box.def 

