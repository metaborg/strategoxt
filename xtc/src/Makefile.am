include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	= xtc cp-file
pkgdata_DATA 	= xtc-lib.rtree xtc-rep.rtree \
		  xtc-proc.rtree xtc-register.rtree
SCFLAGS 	= --main $* $(XTCFLAGS)
EXTRA_DIST	= $(pkgdata_DATA) $(wildcard *.str) \
		  $(wildcard *.meta) $(pkgdata_DATA)
CLEANFILES	= $(wildcard *.dep)
BOOTCLEANFILES	= xtc.c 
