include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

pkgdatadir = $(datadir)/xtc

nobase_pkgdata_DATA = $(strategoxtc:.str=.rtree) $(all_rtree)
data_DATA = libstratego-xtc.rtree
lib_LTLIBRARIES = libstratego-xtc.la

EXTRA_DIST	    = $(nobase_pkgdata_DATA) $(fullstrategoxtc) $(all_c) $(all_rtree)
CLEANFILES      = $(wildcard *.dep) libstratego-xtc.rtree stratego-xtc.str
BOOTCLEANFILES 	= $(strategoxtc:.str=.rtree) $(all_c) $(all_rtree)

all_rtree = libstratego-xtc-c99.rtree libstratego-xtc-posix.rtree libstratego-xtc-posix-xsi.rtree
all_c     = libstratego-xtc-c99.c libstratego-xtc-posix.c libstratego-xtc-posix-xsi.c

alllibs : $(all_c) $(all_rtree)

libstratego_xtc_la_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS) -I $(top_srcdir)/lib/native/ $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS)
libstratego_xtc_la_CFLAGS   = $(STR_CFLAGS)
libstratego_xtc_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_xtc_la_LIBADD   = $(STRATEGO_UNINSTALLED_LIBS)

if XT_STD_C99
libstratego_xtc_la_SOURCES  = libstratego-xtc-c99.c
stratego_xtc_module         = stratego-xtc-c99
endif

if XT_STD_POSIX
libstratego_xtc_la_SOURCES  = libstratego-xtc-posix.c
stratego_xtc_module         = stratego-xtc-posix
endif

if XT_STD_POSIX_XSI
libstratego_xtc_la_SOURCES  = libstratego-xtc-posix-xsi.c
stratego_xtc_module         = stratego-xtc-posix-xsi
endif

if XT_STD_NONE
libstratego_xtc_la_SOURCES  = libstratego-xtc-posix-xsi.c
stratego_xtc_module         = stratego-xtc-posix-xsi
endif

libstratego-xtc.rtree : lib$(stratego_xtc_module).rtree
	cp $< $@

stratego-xtc.str : Makefile
	echo "module stratego-xtc imports $(stratego_xtc_module)" > $@

STRCFLAGS = $(STRATEGO_UNINSTALLED_STRCFLAGS) -I $(srcdir)

# double targets: -c --library
libstratego-xtc-c99.c: libstratego-xtc-c99.rtree; true
libstratego-xtc-c99.rtree : stratego-xtc-c99.str $(strategoxtc:.str=.rtree)
	$(STRC_UNINSTALLED) --verbose 2 -c --library -i $< -o libstratego-xtc-c99.rtree $(STRCFLAGS)
	rm libstratego-xtc-c99.str

libstratego-xtc-posix.c: libstratego-xtc-posix.rtree; true
libstratego-xtc-posix.rtree : stratego-xtc-posix.str $(strategoxtc:.str=.rtree)
	$(STRC_UNINSTALLED) -c --library -i $< -o libstratego-xtc-posix.rtree $(STRCFLAGS)
	rm libstratego-xtc-posix.str

libstratego-xtc-posix-xsi.c: libstratego-xtc-posix-xsi.rtree; true
libstratego-xtc-posix-xsi.rtree : stratego-xtc-posix-xsi.str $(strategoxtc:.str=.rtree)
	$(STRC_UNINSTALLED) -c --library -i $< -o libstratego-xtc-posix-xsi.rtree $(STRCFLAGS)
	rm libstratego-xtc-posix-xsi.str

fullstrategoxtc = \
  libxtclib.str \
  liblib.str \
  stratego-xtc-c99.str \
  stratego-xtc-posix.str \
  stratego-xtc-posix-xsi.str \
  $(strategoxtc)

strategoxtc = \
  $(call srcwildcard,stratego/xtc/*.str) \
  $(call srcwildcard,stratego/xtc/c99/*.str) \
  $(call srcwildcard,stratego/xtc/posix/*.str) \
  $(call srcwildcard,stratego/xtc/posix-xsi/*.str)
