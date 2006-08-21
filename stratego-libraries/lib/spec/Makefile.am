include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt

pkgdatadir = $(datadir)/stratego-lib

nobase_pkgdata_DATA = stratego-lib.str $(fullstrategolib:.str=.rtree)
data_DATA = libstratego-lib.rtree
lib_LTLIBRARIES = libstratego-lib.la

EXTRA_DIST	= $(all_rtree) $(fullstrategolib) $(nobase_pkgdata_DATA)
CLEANFILES      = $(wildcard *.dep) libstratego-lib.rtree stratego-lib.str
BOOTCLEANFILES 	= $(fullstrategolib:.str=.rtree) $(all_c) $(all_rtree)

all_rtree = libstratego-lib-c99.rtree libstratego-lib-posix.rtree libstratego-lib-posix-xsi.rtree
all_c     = libstratego-lib-c99.c libstratego-lib-posix.c libstratego-lib-posix-xsi.c

alllibs : $(all_c) $(all_rtree)

libstratego_lib_la_CPPFLAGS = $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS) $(STRATEGO_LIB_NATIVE_UNINSTALLED_CFLAGS) $(ATERM_CFLAGS)
libstratego_lib_la_CFLAGS   = $(STR_CFLAGS)
libstratego_lib_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_lib_la_LIBADD   = $(STRATEGO_RUNTIME_UNINSTALLED_LIBS) $(STRATEGO_LIB_NATIVE_UNINSTALLED_LIBS) $(ATERM_LIBS)

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

stratego-lib.str : Makefile
	echo "module stratego-lib imports $(stratego_lib_module)" > $@

libstratego-lib-c99.c libstratego-lib-c99.rtree : $(fullstrategolib:.str=.rtree)
	$(STRC_UNINSTALLED) --verbose 2 -c --library -i ./stratego-lib-c99.str -o libstratego-lib-c99.rtree
	rm libstratego-lib-c99.str

libstratego-lib-posix.c libstratego-lib-posix.rtree : $(fullstrategolib:.str=.rtree)
	$(STRC_UNINSTALLED) --verbose 2 -c --library -i ./stratego-lib-posix.str -o libstratego-lib-posix.rtree
	rm libstratego-lib-posix.str

libstratego-lib-posix-xsi.c libstratego-lib-posix-xsi.rtree : $(fullstrategolib:.str=.rtree)
	$(STRC_UNINSTALLED) --verbose 2 -c --library -i ./stratego-lib-posix-xsi.str -o libstratego-lib-posix-xsi.rtree
	rm libstratego-lib-posix-xsi.str

fullstrategolib = \
  libstrategolib.str \
  stratego-lib-generic.str \
  stratego-lib-c99.str \
  stratego-lib-posix.str \
  stratego-lib-posix-xsi.str \
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
  $(wildcard system/*.str) \
  $(wildcard system/io/*.str) \
  $(wildcard system/c99/*.str) \
  $(wildcard system/posix/*.str) \
  $(wildcard system/posix-xsi/*.str) \
  $(wildcard term/*.str) \
  $(wildcard strategy/general*.str) \
  $(wildcard util/*.str) \
  $(wildcard util/config/*.str)
