include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS = pp-table.tbl 
DEFS = pp-table.def 

sdfdata_DATA   = $(TBLS) $(DEFS) $(wildcard *.sdf)
pkgdata_DATA   = pp-table.pp pp-table.pp.af

EXTRA_DIST     = $(DEFS) $(wildcard *.sdf)
BOOTCLEANFILES = $(TBLS)
BOOTCLEANFILES = $(DEFS) pp-table.pp.af

SDFINCLUDES    = -I $(top_srcdir)/syn/box
PGEN_FLAGS     = -m $*

pp-table.def : pp-table.sdf pp-table-IntCon.sdf pp-table-PlaceHolder.sdf $(top_srcdir)/syn/box/Box.def 

