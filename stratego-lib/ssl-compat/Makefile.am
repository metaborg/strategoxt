include $(top_srcdir)/Makefile.xt

pkgdata_DATA   = $(subst .str,.rtree,$(wildcard *.str))
EXTRA_DIST     = $(wildcard *.str) $(pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA)
