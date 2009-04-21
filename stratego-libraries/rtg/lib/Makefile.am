include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

nobase_data_DATA = libstratego-rtg.rtree libstratego-rtg.ctree
lib_LTLIBRARIES  = libstratego-rtg.la
EXTRA_DIST = $(rtglib) $(rtglib:.str=.rtree) $(nobase_data_DATA)
CLEANFILES = $(wildcard *.dep) 
BOOTCLEANFILES = libstratego-rtg.rtree libstratego-rtg.c $(rtglib:.str=.rtree)

rtglib = stratego-rtg.str $(wildcard stratego/rtg/*.str)

libstratego_rtg_la_SOURCES = libstratego-rtg.c libstratego-rtg-native.c
libstratego_rtg_la_CFLAGS   = $(AM_CFLAGS)
libstratego_rtg_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_rtg_la_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS) \
	-I $(top_srcdir)/runtime/lib \
	-I $(top_builddir)/runtime/lib/srts \
	-I $(top_srcdir)/lib/native
libstratego_rtg_la_LIBADD   = $(STRATEGO_SGLR_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)

STRCFLAGS = \
  $(STRATEGO_XTC_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_SGLR_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_UNINSTALLED_STRCFLAGS) \
  -I `dirname $(RTGTBL_UNINSTALLED)`

libstratego-rtg.rtree libstratego-rtg.c : $(rtglib:.str=.rtree) 
	$(STRC_UNINSTALLED) -c --library -i $(srcdir)/stratego-rtg.str -o libstratego-rtg.rtree --verbose 1 $(STRCFLAGS)
	rm libstratego-rtg.str

libstratego-rtg.ctree : $(rtglib:.str=.rtree) 
	$(STRC_UNINSTALLED) -c -F --library -i $(srcdir)/stratego-rtg.str -o libstratego-rtg.ctree -O 1 \
	  --verbose 1 $(STRCFLAGS)
