include $(top_srcdir)/Makefile.xt

pkgdocdatadir  = $(pkgdatadir)/doc

SUBDIRS        = data
pkgdata_DATA   = $(subst .str,.rtree,$(wildcard *.str))
pkgdocdata_DATA= $(wildcard *.str)
EXTRA_DIST     = $(wildcard *.str) $(pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA)

#include $(wildcard *.dep)


