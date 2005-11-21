include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

nobase_pkgdata_DATA = libstratego-sglr.rtree
lib_LTLIBRARIES     = libstratego-sglr.la

nodist_libstratego_sglr_la_SOURCES  = libstratego-sglr.c
dist_libstratego_sglr_la_SOURCES = \
  native/stratego_sglr_filter.c \
  native/stratego_sglr_parse_table.c \
  native/stratego_sglr_parse.c

sglrlib = \
  stratego-sglr.str \
  $(wildcard stratego/asfix/*.str) \
  $(wildcard stratego/asfix/implode/*.str) \
  $(wildcard stratego/concrete-syntax/*.str) \
  $(wildcard stratego/error-support/*.str) \
  $(wildcard stratego/sdf/*.str) \
  $(wildcard stratego/sglr/*.str)

EXTRA_DIST = $(sglrlib) $(wildcard native/*.h) $(wildcard native/*.c)
CLEANFILES = $(wildcard *.dep) libstratego-sglr.rtree libstratego-sglr.c $(sglrlib:.str=.rtree)

libstratego_sglr_la_CPPFLAGS = $(SGLR_CFLAGS) $(STRATEGO_LIB_CFLAGS) $(STRATEGO_RUNTIME_CFLAGS) $(ATERM_CFLAGS) -I native
libstratego_sglr_la_CFLAGS   = -Wall
libstratego_sglr_la_LDFLAGS  = -avoid-version -no-undefined
libstratego_sglr_la_LIBADD   = \
  $(STRATEGO_LIB)/lib/libstratego-lib.la \
  $(STRATEGO_RUNTIME_LIBS) \
  $(SGLR_LIBS) \
  $(ATERM_LIBS)

libstratego-sglr.rtree libstratego-sglr.c : $(sglrlib:.str=.rtree)
	@$(STRC)/bin/strc -c --library -i $< -o libstratego-sglr.rtree \
          --C-include "\"stratego_sglr.h\"" -O 2 --verbose 1
	rm libstratego-sglr.str
