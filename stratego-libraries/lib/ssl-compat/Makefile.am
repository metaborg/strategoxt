include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt

allstr = $(call srcwildcard,*.str)

pkgdatadir = $(datadir)/stratego-lib
pkgdata_DATA   = $(subst .str,.rtree,$(allstr))
EXTRA_DIST     = $(allstr) $(pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA)
