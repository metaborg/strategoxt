pkglib_LTLIBRARIES = \
  liblibstrategolib.la \
  liblibstrategolib_dbg.la \
  liblibstrategolib_prof.la \
  liblibxtclib.la \
  liblibxtclib_dbg.la \
  liblibxtclib_prof.la

# lib

liblibstrategolib_la_SOURCES      = libstrategolib.c
liblibstrategolib_dbg_la_SOURCES  = libstrategolib.c
liblibstrategolib_prof_la_SOURCES = libstrategolib.c

liblibstrategolib_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
liblibstrategolib_prof_la_CFLAGS = -pg  $(AM_CFLAGS)

# xtclib

liblibxtclib_la_SOURCES      = libxtclib.c
liblibxtclib_dbg_la_SOURCES  = libxtclib.c
liblibxtclib_prof_la_SOURCES = libxtclib.c

liblibxtclib_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
liblibxtclib_prof_la_CFLAGS = -pg  $(AM_CFLAGS)


AM_CPPFLAGS = -I$(top_srcdir)/src -I$(top_srcdir)/ssl -I$(ATERM)/include -I$(srcdir)
AM_LDFLAGS  = -avoid-version 

pkgdocdatadir 	= $(pkgdatadir)/doc

pkgdata_DATA   	= libstrategolib.rtree libxtclib.rtree liblib.str
pkgdocdata_DATA = libstrategolib.str libxtclib.str liblib.str

EXTRA_DIST	= $(wildcard *.str) $(wildcard *.rtree)
BOOTCLEANFILES 	= libstrategolib.str libstrategolib.rtree libstrategolib.c \
		  libxtclib.str libxtclib.rtree libxtclib.c

bootclean :
	rm -f $(BOOTCLEANFILES)

libstrategolib.c : 
	$(STRC)/bin/strc -c --library --verbose 2 \
        -I $(SSL)/share/ssl \
        -i ./strategolib.str -o libstrategolib.rtree

libxtclib.c : 
	$(STRC)/bin/strc -c --library --verbose 2 \
        -I $(XTC)/share/xtc \
        -i ./xtclib.str -o libxtclib.rtree

