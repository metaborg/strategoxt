include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

allstr = $(call srcwildcard,*.str)
# why not ?
#pkgdata_DATA  = $(allstr:.str=.rtree)

pkgdata_DATA  = stratego-xt-xtc-tools.str strategoxt-xtc-tools.str

EXTRA_DIST    = $(pkgdata_DATA) $(allstr)
CLEANFILES    = $(wildcard *.dep)
#BOOTCLEANFILES = $(pkgdata_DATA)
