pkglib_LTLIBRARIES = \
  liblibstrategolib.la \
  liblibstrategolib_dbg.la \
  liblibstrategolib_prof.la 

# lib

liblibstrategolib_la_SOURCES      = libstrategolib.c
liblibstrategolib_dbg_la_SOURCES  = libstrategolib.c
liblibstrategolib_prof_la_SOURCES = libstrategolib.c

liblibstrategolib_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
liblibstrategolib_prof_la_CFLAGS = -pg  $(AM_CFLAGS)

AM_CPPFLAGS = -I$(top_srcdir)/src -I$(top_srcdir)/ssl -I$(ATERM)/include -I$(srcdir)
AM_LDFLAGS  = -avoid-version 

pkgdocdatadir 	= $(pkgdatadir)/doc

pkgdata_DATA   	= libstrategolib.rtree 
pkgdocdata_DATA = libstrategolib.str 

EXTRA_DIST	= $(wildcard *.str) $(wildcard *.rtree)
BOOTCLEANFILES 	= libstrategolib.str libstrategolib.rtree libstrategolib.c 
bootclean :
	rm -f $(BOOTCLEANFILES)

libstrategolib.c : 
	$(STRC)/bin/strc -c --library --verbose 2 \
        -I $(SSL)/share/ssl \
        -i ./strategolib.str -o libstrategolib.rtree
