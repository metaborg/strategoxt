include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

nobase_data_DATA = libstratego-sglr.rtree
lib_LTLIBRARIES  = libstratego-sglr.la

libstratego_sglr_la_SOURCES = \
  libstratego-sglr.c \
  native/stratego_sglr_filter.c \
  native/stratego_sglr_config.c \
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

EXTRA_DIST = \
  $(sglrlib:.str=.rtree) $(sglrlib) libstratego-sglr.rtree \
  $(wildcard native/*.h) $(wildcard native/*.c)

CLEANFILES = $(wildcard *.dep) libstratego-sglr.rtree libstratego-sglr.c $(sglrlib:.str=.rtree)

libstratego_sglr_la_CFLAGS   = -Wall
libstratego_sglr_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_sglr_la_CPPFLAGS = \
  $(STRATEGO_LIB_UNINSTALLED_CFLAGS) \
  $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS) \
  $(ATERM_CFLAGS) \
  -I native -I ../justsglr

libstratego_sglr_la_LIBADD = \
  $(XTC_UNINSTALLED_LIBS) \
  $(STRATEGO_LIB_UNINSTALLED_LIBS) \
  $(STRATEGO_RUNTIME_UNINSTALLED_LIBS) \
  $(top_builddir)/sglr/justsglr/libjustsglr.la \
  $(ATERM_LIBS)

STRCFLAGS = \
  $(XTC_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_LIB_UNINSTALLED_STRCFLAGS)

libstratego-sglr.rtree libstratego-sglr.c :
	@$(STRC_UNINSTALLED) -c --library -i stratego-sglr.str -o libstratego-sglr.rtree \
          --C-include "\"stratego_sglr.h\"" -O 2 --verbose 1 $(STRCFLAGS)
	rm libstratego-sglr.str
