pkglib_LTLIBRARIES = \
  liblibxtclib.la \
  liblibxtclib_dbg.la \
  liblibxtclib_prof.la

# xtclib

liblibxtclib_la_SOURCES      = libxtclib.c
liblibxtclib_dbg_la_SOURCES  = libxtclib.c
liblibxtclib_prof_la_SOURCES = libxtclib.c

liblibxtclib_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
liblibxtclib_prof_la_CFLAGS = -pg  $(AM_CFLAGS)

AM_CPPFLAGS = -I$(SRTS)/include -I$(ATERM)/include
AM_LDFLAGS  = -avoid-version 

pkgdocdatadir 	= $(pkgdatadir)/doc

pkgdata_DATA   	= libxtclib.rtree liblib.rtree
pkgdocdata_DATA = libxtclib.str   liblib.str

EXTRA_DIST	= $(wildcard *.str) $(wildcard *.rtree)
BOOTCLEANFILES 	= libxtclib.str libxtclib.rtree libxtclib.c

bootclean :
	rm -f $(BOOTCLEANFILES)

libxtclib.c : 
	$(STRC)/bin/strc -c --library --verbose 2 \
        -I $(XTC)/share/xtc \
        -i ./xtclib.str -o libxtclib.rtree

