include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS = migrate-xtc xtc 
pkgdata_DATA = 
SCFLAGS 		 = --main $* $(XTCFLAGS)
xtc_LDFLAGS  = $(AM_LDFLAGS) -static

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(pkgdata_DATA)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree)

STRINCLUDES    = -I ../sig \
		 -I ../src \
		 -I ../src/contract \
		 -I ../src/core \
		 -I ../src/dispatch \
		 -I ../src/trans \
		 -I ../src/io
