include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

docdata_DATA = pp-table.str pp-table-IntCon.str pp-table-PlaceHolder.str \
               Box.str Box-Atoms.str Box-Base.str \
               Box-Disambiguation.str Box-Layout.str \
               Box-Lists.str Box-Literal.str Box-Operators.str

pkgdata_DATA = pp-table.rtree pp-table-IntCon.rtree pp-table-PlaceHolder.rtree \
               Box.rtree Box-Atoms.rtree Box-Base.rtree \
               Box-Disambiguation.rtree Box-Layout.rtree \
               Box-Lists.rtree Box-Literal.rtree Box-Operators.rtree

EXTRA_DIST     = $(docdata_DATA) $(pkgdata_DATA) 
CLEANFILES     = pp-table.def $(wildcard *.dep) $(wildcard *.atree)
BOOTCLEANFILES = $(docdata_DATA) $(pkgdata_DATA)

pp-table.def : 
	ln -s $(top_srcdir)/syn/pp-table/pp-table.def $@

