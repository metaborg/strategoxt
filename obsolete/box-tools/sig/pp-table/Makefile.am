include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = pp-table.str pp-table-IntCon.str pp-table-PlaceHolder.str \
       Box.str Box-Atoms.str Box-Base.str \
       Box-Disambiguation.str Box-Layout.str \
       Box-Lists.str Box-Literal.str Box-Operators.str

pkgdata_DATA   = $(subst .str,.rtree,$(SIGS))
EXTRA_DIST     = $(SIGS) $(pkgdata_DATA) 
CLEANFILES     = pp-table.def
BOOTCLEANFILES = $(SIGS) $(pkgdata_DATA)

pp-table.def : 
	ln -s $(top_srcdir)/syn/pp-table/pp-table.def $@

