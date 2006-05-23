include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt

pkgdatadir = $(datadir)/stratego-lib
nobase_pkgdata_DATA = libstrategolib.rtree $(strategolib:.str=.rtree)

data_DATA = libstratego-lib.rtree

EXTRA_DIST	= libstratego-lib.rtree  $(strategolib) $(nobase_pkgdata_DATA)
CLEANFILES      = $(wildcard *.dep)
BOOTCLEANFILES 	= \
  $(strategolib:.str=.rtree) \
  libstratego-lib.rtree \
  libstrategolib.rtree \
  libstrategolib.c

strategolib = \
  stratego-lib.str \
  $(wildcard collection/*.str) \
  $(wildcard collection/hash-table/*.str) \
  $(wildcard collection/list/*.str) \
  $(wildcard collection/set/*.str) \
  $(wildcard collection/tuple/*.str) \
  $(wildcard lang/*.str) \
  $(wildcard strategy/*.str) \
  $(wildcard strategy/general/*.str) \
  $(wildcard strategy/pack/*.str) \
  $(wildcard strategy/traversal/*.str) \
  $(wildcard strategy/general*.str) \
  $(wildcard system/io/*.str) \
  $(wildcard system/posix/*.str) \
  $(wildcard term/*.str) \
  $(wildcard strategy/general*.str) \
  $(wildcard util/*.str) \
  $(wildcard util/config/*.str)

lib_LTLIBRARIES = libstratego-lib.la

libstratego_lib_la_SOURCES  = libstratego-lib.c
libstratego_lib_la_CPPFLAGS = $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS) $(STRATEGO_LIB_NATIVE_UNINSTALLED_CFLAGS) $(ATERM_CFLAGS)
libstratego_lib_la_CFLAGS   = -Wall
libstratego_lib_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_lib_la_LIBADD   = \
  $(STRATEGO_RUNTIME_UNINSTALLED_LIBS) \
  $(STRATEGO_LIB_NATIVE_UNINSTALLED_LIBS) \
  $(ATERM_LIBS)

libstratego-lib.c libstratego-lib.rtree : $(strategolib:.str=.rtree)
	$(STRC_UNINSTALLED) -c --library -i ./stratego-lib.str -o libstratego-lib.rtree
	rm libstratego-lib.str
