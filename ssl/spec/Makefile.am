include $(top_srcdir)/Makefile.xt

pkgdocdatadir  = $(pkgdatadir)/doc

pkglib_LIBRARIES = libliblib.a 
libliblib_a_SOURCES = liblib.c

SUBDIRS        = data
pkgdata_DATA   = $(subst .str,.rtree,$(wildcard *.str)) liblib.rtree
pkgdocdata_DATA= $(wildcard *.str)
EXTRA_DIST     = $(wildcard *.str) $(pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA) liblib.str liblib.rtree liblib.c

lib%.str, lib%.c, lib%.rtree : %.rtree
	$(STRC)/bin/strc -i $< -o lib$*.rtree -c --library --verbose 2 


include $(wildcard *.dep)
