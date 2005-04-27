pkglib_LTLIBRARIES = \
  libstratego-lib.la \
  libstratego-lib-dbg.la \
  libstratego-lib-prof.la 

libstratego_lib_la_SOURCES      = libstrategolib.c
libstratego_lib_dbg_la_SOURCES  = libstrategolib.c
libstratego_lib_prof_la_SOURCES = libstrategolib.c

libstratego_lib_dbg_la_CFLAGS  = -g $(AM_CFLAGS)
libstratego_lib_prof_la_CFLAGS = -pg $(AM_CFLAGS)

AM_CPPFLAGS = -I$(top_srcdir)/native $(STRATEGO_RUNTIME_CFLAGS) $(ATERM_CFLAGS)
AM_LDFLAGS  = -avoid-version 

pkgdata_DATA   	= libstrategolib.rtree 
EXTRA_DIST	= libstrategolib.rtree strategolib.str
CLEANFILES      = $(wildcard *.dep)
BOOTCLEANFILES 	= libstrategolib.str libstrategolib.rtree libstrategolib.c

bootclean :
	rm -f $(BOOTCLEANFILES)

libstrategolib.c : 
	$(STRC)/bin/strc -c --library --verbose 4 --dr old \
        -I $(top_srcdir)/ssl-compat \
        -I $(top_srcdir)/spec \
        -i ./strategolib.str -o libstrategolib.rtree && \
        rm libstrategolib.str
