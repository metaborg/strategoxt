include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	 =  
pkgdata_DATA 	 = xtc-repository.rtree xtc-register.rtree xtc-search.rtree 

SCFLAGS        = --main $* $(XTCFLAGS)
EXTRA_DIST	   = $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.strpth) $(wildcard *.meta)
CLEANFILES	   = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree) 
