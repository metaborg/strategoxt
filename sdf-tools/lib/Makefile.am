include $(top_srcdir)/Makefile.xt

sdflib = \
  sdf/tool/options.str \
  sdf/symbol/implode.str

nobase_pkgdata_DATA = $(sdflib:.str=.rtree)

EXTRA_DIST = $(sdflib) $(sdflib:.str=.rtree)
BOOTCLEANFILES = $(sdflib:.str=.rtree)
