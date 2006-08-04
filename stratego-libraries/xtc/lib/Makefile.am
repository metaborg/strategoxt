include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

xtcdatadir = $(datadir)/xtc

data_DATA    = libstratego-xtc.rtree
xtcdata_DATA = libxtclib.rtree liblib.rtree

lib_LTLIBRARIES = libstratego-xtc.la
EXTRA_DIST      = $(xtclib:.str=.rtree) $(xtclib) libstratego-xtc.rtree libxtclib.rtree liblib.rtree libxtclib.str liblib.str
CLEANFILES      = $(wildcard *.dep)
BOOTCLEANFILES  = libstratego-xtc.str libstratego-xtc.rtree libxtclib.rtree liblib.rtree libstratego-xtc.c $(xtclib:.str=.rtree)

xtclib = stratego-xtc.str $(wildcard stratego/xtc/*.str)

libstratego_xtc_la_SOURCES = libstratego-xtc.c
libstratego_xtc_la_CFLAGS  = $(AM_CFLAGS)
libstratego_xtc_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_xtc_la_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)
libstratego_xtc_la_LIBADD   = $(STRATEGO_UNINSTALLED_LIBS)

STRCFLAGS = $(STRATEGO_UNINSTALLED_STRCFLAGS)

libstratego-xtc.c libstratego-xtc.rtree : $(xtclib:.str=.rtree)
	$(STRC_UNINSTALLED) -c --library -i stratego-xtc.str -o libstratego-xtc.rtree $(STRCFLAGS)
	rm libstratego-xtc.str
