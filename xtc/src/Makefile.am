include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	= xtc
pkgdata_DATA 	= xtc-lib.str xtc-rep.str xtc-proc.str xtc-register.rtree
SCFLAGS 	= --main $* $(XTCFLAGS)
EXTRA_DIST	= $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta) $(pkgdata_DATA)
CLEANFILES	= $(wildcard *.dep)
BOOTCLEANFILES	= xtc.c 

xtc.o		: xtc-conf.h

