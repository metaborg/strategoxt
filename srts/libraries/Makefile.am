pkglib_LTLIBRARIES = \
  libliblib.la \
  libliblib_dbg.la \
  libliblib_prof.la \
  liblibxtc-lib.la \
  liblibxtc-lib_dbg.la \
  liblibxtc-lib_prof.la

# lib

libliblib_la_SOURCES      = liblib.c
libliblib_dbg_la_SOURCES  = liblib.c
libliblib_prof_la_SOURCES = liblib.c

libliblib_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
libliblib_prof_la_CFLAGS = -pg  $(AM_CFLAGS)

# xtc-lib

liblibxtc_lib_la_SOURCES      = libxtc-lib.c
liblibxtc_lib_dbg_la_SOURCES  = libxtc-lib.c
liblibxtc_lib_prof_la_SOURCES = libxtc-lib.c

liblibxtc_lib_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
liblibxtc_lib_prof_la_CFLAGS = -pg  $(AM_CFLAGS)


AM_CPPFLAGS = -I$(top_srcdir)/src -I$(top_srcdir)/ssl -I$(ATERM)/include -I$(srcdir)
AM_LDFLAGS  = -avoid-version 

pkgdocdatadir 	= $(pkgdatadir)/doc

pkgdata_DATA   	= liblib.rtree libxtc-lib.rtree
pkgdocdata_DATA = liblib.str libxtc-lib.str

EXTRA_DIST	= $(wildcard *.str) $(wildcard *.rtree)
BOOTCLEANFILES 	= liblib.str liblib.rtree liblib.c libxtc-lib.str libxtc-lib.rtree libxtc-lib.c

bootclean :
	rm -f $(BOOTCLEANFILES)

liblib.c : 
	$(STRC)/bin/strc -c --library --verbose 2 \
        -I $(SSL)/share/ssl \
        -i ./lib.str -o liblib.rtree

libxtc-lib.c : 
	$(STRC)/bin/strc -c --library --verbose 2 \
        -I $(XTC)/share/xtc \
        -i ./xtc-library.str -o libxtc-lib.rtree

