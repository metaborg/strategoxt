include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA 	 = $(subst .str,.rtree,$(wildcard *.str)) 

STRINCLUDES      = -I $(top_srcdir)/syn

EXTRA_DIST	 = $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)
BOOTCLEANFILES   = $(pkgdata_DATA)
