include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	 =  
pkgdata_DATA 	 = xtc-adapt.rtree xtc-execute.rtree xtc-methods.rtree xtc-cache.rtree 

SCFLAGS        = --main $* $(XTCFLAGS)
EXTRA_DIST	   = $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)
CLEANFILES	   = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree) 
