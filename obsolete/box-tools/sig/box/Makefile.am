include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

docdata_DATA = Box.str Box-Atoms.str Box-Base.str \
               Box-Disambiguation.str Box-Layout.str \
               Box-Lists.str Box-Literal.str Box-Operators.str

pkgdata_DATA = Box.rtree Box-Atoms.rtree Box-Base.rtree \
               Box-Disambiguation.rtree Box-Layout.rtree \
               Box-Lists.rtree Box-Literal.rtree Box-Operators.rtree

libexec_PROGRAMS = abox-format

EXTRA_DIST     = abox-format.str $(docdata_DATA) $(pkgdata_DATA) 
CLEANFILES     = Box.def $(wildcard *.dep) $(wildcard *.atree)
BOOTCLEANFILES = $(wildcard *.c) $(docdata_DATA) $(pkgdata_DATA) 

Box.def : 
	ln -s $(top_srcdir)/syn/box/Box.def $@

SCFLAGS        = --main io-$*
abox-format.c: Box.str

