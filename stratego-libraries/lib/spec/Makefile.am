include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt

pkgdatadir = $(datadir)/stratego-lib

nobase_pkgdata_DATA = stratego-lib.str $(strategolib:.str=.rtree) $(all_rtree) libstratego-lib.ctree
data_DATA = libstratego-lib.rtree
lib_LTLIBRARIES = libstratego-lib.la

EXTRA_DIST	    = $(nobase_pkgdata_DATA)
CLEANFILES      = $(wildcard *.dep) libstratego-lib.rtree stratego-lib.str
BOOTCLEANFILES 	= $(strategolib:.str=.rtree) $(all_c) $(all_rtree)

all_rtree = libstratego-lib-c99.rtree libstratego-lib-posix.rtree libstratego-lib-posix-xsi.rtree
all_c     = libstratego-lib-c99.c libstratego-lib-posix.c libstratego-lib-posix-xsi.c

alllibs : $(all_c) $(all_rtree)

libstratego_lib_la_CPPFLAGS = \
  $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS) \
  $(ATERM_CFLAGS) \
  -I$(top_srcdir)/lib/native

libstratego_lib_la_CFLAGS   = $(STR_CFLAGS)
libstratego_lib_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_lib_la_LIBADD   = \
  $(STRATEGO_RUNTIME_UNINSTALLED_LIBS) \
  $(STRATEGO_LIB_NATIVE_UNINSTALLED_LIBS) \
  $(ATERM_LIBS)

if XT_STD_C99
libstratego_lib_la_SOURCES  = libstratego-lib-c99.c
stratego_lib_module         = stratego-lib-c99
endif

if XT_STD_POSIX
libstratego_lib_la_SOURCES  = libstratego-lib-posix.c
stratego_lib_module         = stratego-lib-posix
endif

if XT_STD_POSIX_XSI
libstratego_lib_la_SOURCES  = libstratego-lib-posix-xsi.c
stratego_lib_module         = stratego-lib-posix-xsi
endif

if XT_STD_NONE
libstratego_lib_la_SOURCES  = libstratego-lib-posix-xsi.c
stratego_lib_module         = stratego-lib-posix-xsi
endif

libstratego-lib.rtree : lib$(stratego_lib_module).rtree
	cp $< $@

STRC_UNINSTALLED_CALLGRIND = XTC_REPOSITORY=$(BUILD_REPOSITORY) callgrind $(prefix)/bin/strc

STRCFLAGS = --verbose 2 -I $(srcdir)

stratego-lib.str : Makefile
	echo "module stratego-lib imports $(stratego_lib_module)" > $@

libstratego-lib-c99.rtree : stratego-lib-c99.str $(strategolib:.str=.rtree)
	$(STRC_UNINSTALLED) $(STRCFLAGS) -c --library -i $< -o libstratego-lib-c99.rtree

libstratego-lib-posix.rtree : stratego-lib-posix.str $(strategolib:.str=.rtree)
	$(STRC_UNINSTALLED) $(STRCFLAGS) -c --library -i $< -o libstratego-lib-posix.rtree

libstratego-lib-posix-xsi.rtree : stratego-lib-posix-xsi.str $(strategolib:.str=.rtree)
	$(STRC_UNINSTALLED) $(STRCFLAGS) -c --library -i $< -o libstratego-lib-posix-xsi.rtree

libstratego-lib.ctree: stratego-lib-posix-xsi.rtree
	$(STRC_UNINSTALLED) $(STRCFLAGS) -F -c --library -i $< -o $@

fullstrategolib = \
  libstrategolib.str \
  stratego-lib-generic.str \
  stratego-lib-c99.str \
  stratego-lib-posix.str \
  stratego-lib-posix-xsi.str \
  $(strategolib)

strategolib = \
  $(call srcwildcard,collection/*.str) \
  $(call srcwildcard,collection/hash-table/*.str) \
  $(call srcwildcard,collection/list/*.str) \
  $(call srcwildcard,collection/set/*.str) \
  $(call srcwildcard,collection/tuple/*.str) \
  $(call srcwildcard,lang/*.str) \
  $(call srcwildcard,strategy/*.str) \
  $(call srcwildcard,strategy/general/*.str) \
  $(call srcwildcard,strategy/pack/*.str) \
  $(call srcwildcard,strategy/traversal/*.str) \
  $(call srcwildcard,strategy/general*.str) \
  $(call srcwildcard,system/*.str) \
  $(call srcwildcard,system/io/*.str) \
  $(call srcwildcard,system/c99/*.str) \
  $(call srcwildcard,system/posix/*.str) \
  $(call srcwildcard,system/posix-xsi/*.str) \
  $(call srcwildcard,term/*.str) \
  $(call srcwildcard,strategy/general*.str) \
  $(call srcwildcard,util/*.str) \
  $(call srcwildcard,util/config/*.str)
