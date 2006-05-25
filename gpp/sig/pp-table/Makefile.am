include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = pp-table.str

pkgdata_DATA   = $(SIGS)
EXTRA_DIST     = $(SIGS) $(pkgdata_DATA) 
CLEANFILES     = pp-table.def
BOOTCLEANFILES = $(SIGS) 

SDF2RTG_FLAGS    = -m $*

pp-table.def : 
	ln -s $(top_srcdir)/syn/pp-table/pp-table.def $@
