include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA= \
  rg-nonterm.rtree \
  rtg.rtree \
  rhg.rtree \
  irhg.rtree \
  irtg.rtree \
  regexp.rtree \
  iregexp.rtree \
  regexp-match.rtree \
  rhg-util.rtree \
  regexp-util.rtree \
  sdf-extra.rtree

EXTRA_DIST     = $(wildcard *.str) $(pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA)
