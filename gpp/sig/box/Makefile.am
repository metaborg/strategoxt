include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = Box.str Box-Atoms.str Box-Base.str \
       Box-Disambiguation.str Box-Layout.str \
       Box-Lists.str Box-Literal.str Box-Operators.str

pkgdata_DATA     = abox-ext.rtree $(subst .str,.rtree,$(SIGS))
libexec_PROGRAMS = abox-format
SCFLAGS          = --main io-$*

EXTRA_DIST       = abox-ext.str abox-format.str $(SIGS) $(pkgdata_DATA) 
CLEANFILES       = Box.def $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c) $(SIGS) $(pkgdata_DATA)

Box.def :
	ln -s $(top_srcdir)/syn/box/Box.def $@

abox-format.c: Box.str

$(SIGS) : Box.def