#include $(top_srcdir)/Makefile.xt

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

AM_CPPFLAGS = -I$(SRTS)/include -I$(ATERM)/include #-I$(srcdir)
AM_LDFLAGS  = -avoid-version 

pkgdocdatadir 	= $(pkgdatadir)/doc

pkgdata_DATA   	= libxtclib.rtree liblib.rtree
pkgdocdata_DATA = libxtclib.str   liblib.str

EXTRA_DIST	= $(wildcard *.str) $(wildcard *.rtree) \
		  libxtclib.rtree libxtclib.str
BOOTCLEANFILES 	= libxtclib.str libxtclib.rtree libxtclib.c

STRINCLUDES    = -I $(top_srcdir)/syn \
		 -I $(top_srcdir)/sig \
		 -I $(top_srcdir)/lib \
		 -I $(top_srcdir)/lib/contract \
		 -I $(top_srcdir)/lib/core \
		 -I $(top_srcdir)/lib/dispatch \
		 -I $(top_srcdir)/lib/trans \
		 -I $(top_srcdir)/lib/io \
	 	 -I $(SRTS)/share/srts

bootclean :
	rm -f $(BOOTCLEANFILES)

libxtclib.c : xtclib.str
	$(STRC)/bin/strc -c --library --verbose 2 \
	$(STRINCLUDES) \
        -i ./xtclib.str -o libxtclib.rtree 
