pkglib_LTLIBRARIES = \
  libliblib.la \
  libliblib_dbg.la \
  libliblib_prof.la

libliblib_la_SOURCES      = liblib.c
libliblib_dbg_la_SOURCES  = liblib.c
libliblib_prof_la_SOURCES = liblib.c

libliblib_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
libliblib_prof_la_CFLAGS = -pg  $(AM_CFLAGS)


AM_CPPFLAGS = -I$(top_srcdir)/src -I$(top_srcdir)/ssl -I$(ATERM)/include -I$(srcdir)
AM_LDFLAGS  = -avoid-version 

pkgdocdatadir 	= $(pkgdatadir)/doc

pkgdata_DATA   	= liblib.rtree
pkgdocdata_DATA = liblib.str

EXTRA_DIST	= liblib.rtree liblib.str
BOOTCLEANFILES 	= liblib.str liblib.rtree liblib.c

bootclean :
	rm -f $(BOOTCLEANFILES)

liblib.c : 
	$(STRC)/bin/strc -c --library --verbose 2 \
        -I $(XTC)/share/xtc -I $(SSL)/share/ssl \
        -i ./library.str -o liblib.rtree

