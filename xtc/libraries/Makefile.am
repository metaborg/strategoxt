pkglib_LTLIBRARIES = \
  libstratego-xtc.la \
  libstratego-xtc-dbg.la \
  libstratego-xtc-prof.la

libstratego_xtc_la_SOURCES      = libxtclib.c
libstratego_xtc_dbg_la_SOURCES  = libxtclib.c
libstratego_xtc_prof_la_SOURCES = libxtclib.c

libstratego_xtc_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
libstratego_xtc_prof_la_CFLAGS = -pg  $(AM_CFLAGS)

AM_CPPFLAGS = $(STRATEGO_LIB_CFLAGS) $(STRATEGO_RUNTIME_CFLAGS) $(ATERM_CFLAGS)
AM_LDFLAGS  = -avoid-version 

pkgdata_DATA = libxtclib.rtree liblib.rtree

EXTRA_DIST      = xtclib.str libxtclib.rtree liblib.rtree liblib.str
CLEANFILES      = $(wildcard *.dep)
BOOTCLEANFILES  = libxtclib.str libxtclib.rtree libxtclib.c liblib.rtree

bootclean :
	rm -f $(BOOTCLEANFILES)

libxtclib.c : 
	$(STRC)/bin/strc -c --library --verbose 2 --dr old \
        -I $(XTC)/share/xtc \
        -i ./xtclib.str -o libxtclib.rtree && \
        rm libxtclib.str

PARSESTRATEGO = $(STRATEGO_FRONT)/bin/parse-stratego
.str.rtree :
	$(PARSESTRATEGO) $(STRINCLUDES) -i $< -o $@ --verbose 0
