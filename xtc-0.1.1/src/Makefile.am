include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	 =  
pkgdata_DATA 	 = xtc-io.rtree xtc-core.rtree xtc-trans.rtree xtc-contract.rtree xtc-dispatch.rtree logging.rtree composition.rtree xtc-lib.rtree 

SCFLAGS        = --main $* $(XTCFLAGS)
EXTRA_DIST	   = $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)
CLEANFILES	   = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree)

SUBDIRS           = core io dispatch trans contract lib 
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

