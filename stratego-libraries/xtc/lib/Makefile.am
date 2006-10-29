include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

pkgdatadir = $(datadir)/xtc

nobase_pkgdata_DATA =  stratego-xtc.str $(fullstrategoxtc:.str=.rtree)
data_DATA = libstratego-xtc.rtree
lib_LTLIBRARIES = libstratego-xtc.la

EXTRA_DIST	= $(all_rtree) $(fullstrategoxtc) $(nobase_pkgdata_DATA)
CLEANFILES      = $(wildcard *.dep) libstratego-xtc.rtree stratego-xtc.str
BOOTCLEANFILES 	= $(fullstrategoxtc:.str=.rtree) $(all_c) $(all_rtree)

all_rtree = libstratego-xtc-c99.rtree libstratego-xtc-posix.rtree libstratego-xtc-posix-xsi.rtree
all_c     = libstratego-xtc-c99.c libstratego-xtc-posix.c libstratego-xtc-posix-xsi.c

alllibs : $(all_c) $(all_rtree)

libstratego_xtc_la_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS) -I $(top_srcdir)/lib/native/ -I $(top_srcdir)/runtime/lib -I $(top_builddir)/runtime/lib/srts
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

STRCFLAGS = $(STRATEGO_UNINSTALLED_STRCFLAGS)

libstratego-xtc-c99.c libstratego-xtc-c99.rtree : $(fullstrategoxtc:.str=.rtree)
	$(STRC_UNINSTALLED) --verbose 2 -c --library -i $(srcdir)/stratego-xtc-c99.str -o libstratego-xtc-c99.rtree $(STRCFLAGS)
	rm libstratego-xtc-c99.str

libstratego-xtc-posix.c libstratego-xtc-posix.rtree : $(fullstrategoxtc:.str=.rtree)
	$(STRC_UNINSTALLED) -c --library -i $(srcdir)/stratego-xtc-posix.str -o libstratego-xtc-posix.rtree $(STRCFLAGS)
	rm libstratego-xtc-posix.str

libstratego-xtc-posix-xsi.c libstratego-xtc-posix-xsi.rtree : $(fullstrategoxtc:.str=.rtree)
	$(STRC_UNINSTALLED) -c --library -i $(srcdir)/stratego-xtc-posix-xsi.str -o libstratego-xtc-posix-xsi.rtree $(STRCFLAGS)
	rm libstratego-xtc-posix-xsi.str

fullstrategoxtc = \
  libxtclib.str \
  liblib.str \
  stratego-xtc-c99.str \
  stratego-xtc-posix.str \
  stratego-xtc-posix-xsi.str \
  $(wildcard stratego/xtc/*.str) \
  $(wildcard stratego/xtc/c99/*.str) \
  $(wildcard stratego/xtc/posix/*.str) \
  $(wildcard stratego/xtc/posix-xsi/*.str)
