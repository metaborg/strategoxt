include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	= xtc
pkgdata_DATA 	= xtc-lib.str xtc-rep.str xtc-proc.str
SCFLAGS 	= --main $* $(XTCFLAGS)
EXTRA_DIST	= $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)
CLEANFILES	= $(wildcard *.dep)
BOOTCLEANFILES	= xtc-register.c xtc-query.c

xtc-query.o	: xtc-conf.h
xtc-register.o	: xtc-conf.h

