include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA= \
  rg-nonterm.rtree \
  rtg.rtree \
  irtg.rtree \
  sdf-extra.rtree

EXTRA_DIST     = $(wildcard *.str) $(pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA)
