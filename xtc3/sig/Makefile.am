include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS            = $(wildcard *.str) Xtd.str
pkgdata_DATA    = $(subst .str,.rtree,$(SIGS)) Xtd.rtree

EXTRA_DIST	 = $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)
CLEANFILES       = $(pkgdata_DATA) Xtd.str 
BOOTCLEANFILES   = $(pkgdata_DATA) $(wildcard *.rtg) $(wildcard *.rtree)

Xtd.rtg :
	$(LN_S) $(top_srcdir)/syn/Xtd.rtg $@
