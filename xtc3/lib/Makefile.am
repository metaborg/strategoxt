include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA 	 = $(subst .str,.rtree,$(wildcard *.str)) 

EXTRA_DIST	 = $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)
BOOTCLEANFILES   = $(pkgdata_DATA)

SUBDIRS           = core io dispatch trans contract  
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

