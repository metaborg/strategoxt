include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt

pkgdatadir = $(datadir)/stratego-lib
pkgdata_DATA   = $(subst .str,.rtree,$(wildcard *.str))
EXTRA_DIST     = $(wildcard *.str) $(pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA)
