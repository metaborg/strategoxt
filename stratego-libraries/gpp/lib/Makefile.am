include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

nobase_data_DATA = libstratego-gpp.rtree
lib_LTLIBRARIES  = libstratego-gpp.la
EXTRA_DIST = $(gpplib:.str=.rtree) $(gpplib) libstratego-gpp.rtree
CLEANFILES = $(wildcard *.dep) libstratego-gpp.rtree libstratego-gpp.c $(gpplib:.str=.rtree)

gpplib = stratego-gpp.str $(wildcard stratego/gpp/*.str)

libstratego_gpp_la_SOURCES = libstratego-gpp.c pp-table.c
libstratego_gpp_la_CFLAGS   = -Wall
libstratego_gpp_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_gpp_la_CPPFLAGS = \
  $(STRATEGO_LIB_UNINSTALLED_CFLAGS) \
  $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS) \
  $(ATERM_CFLAGS)

libstratego_gpp_la_LIBADD = \
  $(XTC_UNINSTALLED_LIBS) \
  $(STRATEGO_LIB_UNINSTALLED_LIBS) \
  $(STRATEGO_RUNTIME_UNINSTALLED_LIBS) \
  $(ATERM_LIBS)

STRCLAGS = \
  $(XTC_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_LIB_UNINSTALLED_STRCFLAGS)

libstratego-gpp.rtree libstratego-gpp.c :
	$(STRC)/bin/strc -c --library -i stratego-gpp.str -o libstratego-gpp.rtree -O 2 --verbose 1 $(STRCFLAGS)
	rm libstratego-gpp.str
