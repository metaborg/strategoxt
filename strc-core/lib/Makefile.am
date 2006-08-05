include $(top_srcdir)/Makefile.xt
#include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

nobase_data_DATA = libstrc.rtree
lib_LTLIBRARIES  = libstrc.la
EXTRA_DIST 	 = $(strclib) $(strclib:.str=.rtree) libstrc.rtree
CLEANFILES 	 = $(wildcard *.dep)
BOOTCLEANFILES 	 = libstrc.rtree libstrc.c $(gpplib:.str=.rtree)

strclib = \
	strc.str \
	$(wildcard stratego/strc/*.str) 

#	$(wildcard stratego/strc/front/*.str) \
#	$(wildcard stratego/strc/c/*.str) \
#	$(wildcard stratego/strc/lib/*.str) \
#	$(wildcard stratego/strc/match/*.str) \
#	$(wildcard stratego/strc/opt/*.str)

libstrc_la_SOURCES  = libstrc.c 
libstrc_la_CFLAGS   = $(AM_CFLAGS)
libstrc_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstrc_la_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)
libstrc_la_LIBADD   = 

STRCFLAGS = 

libstrc.rtree libstrc.c : $(strclib:.str=.rtree)
	$(STRC)/bin/strc -c --library -i strc.str -o libstrc.rtree -O 2 --verbose 1 $(STRCFLAGS)
	rm libstrc.str
