include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = \
  Dot.str \
  Layout.str \
  QuotedLiterals.str 

pkgdata_DATA     = $(subst .str,.rtree,$(SIGS))

EXTRA_DIST       = $(SIGS) $(pkgdata_DATA) 
CLEANFILES       = Dot.def $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c) $(SIGS) $(pkgdata_DATA)

Dot.def :
	ln -s $(top_srcdir)/syn/Dot.def $@

$(SIGS) : Dot.def
