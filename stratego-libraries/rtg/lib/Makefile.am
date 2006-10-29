include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

nobase_data_DATA = libstratego-rtg.rtree
lib_LTLIBRARIES  = libstratego-rtg.la
EXTRA_DIST = $(rtglib) $(rtglib:.str=.rtree) libstratego-rtg.rtree
CLEANFILES = $(wildcard *.dep) 
BOOTCLEANFILES = rtg-aterm.c libstratego-rtg.rtree libstratego-rtg.c $(rtglib:.str=.rtree)

rtglib = stratego-rtg.str $(wildcard stratego/rtg/*.str)

libstratego_rtg_la_SOURCES = libstratego-rtg.c rtg-aterm.c
libstratego_rtg_la_CFLAGS   = $(AM_CFLAGS)
libstratego_rtg_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_rtg_la_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS) \
	-I $(top_srcdir)/runtime/lib \
	-I $(top_builddir)/runtime/lib/srts \
	-I $(top_srcdir)/lib/native
libstratego_rtg_la_LIBADD   = $(STRATEGO_SGLR_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)

STRCFLAGS = $(STRATEGO_SGLR_UNINSTALLED_STRCFLAGS) $(STRATEGO_UNINSTALLED_STRCFLAGS)

rtg-aterm.c :
	$(top_builddir)/build-tools/cgen-aterm --name STRRTG_get_rtg_parsetable -i $(RTGTBL_UNINSTALLED) > $@

libstratego-rtg.rtree libstratego-rtg.c : $(rtglib:.str=.rtree) 
	$(STRC_UNINSTALLED) -c --library -i $(srcdir)/stratego-rtg.str -o libstratego-rtg.rtree --verbose 1 $(STRCFLAGS)
	rm libstratego-rtg.str
