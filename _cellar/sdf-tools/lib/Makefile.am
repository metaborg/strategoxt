include $(top_srcdir)/Makefile.xt

sdflib = \
  sdf/tool/options.str \
  sdf/tool/xtc.str \
  sdf/grammar/utils.str \
  sdf/symbol/implode.str\
  sdf/production/attributes.str \
  sdf/production/utils.str

nobase_pkgdata_DATA = $(sdflib)
#nobase_pkgdata_DATA = $(sdflib:.str=.rtree)

EXTRA_DIST = $(sdflib) 
#$(sdflib:.str=.rtree)
#BOOTCLEANFILES = $(sdflib:.str=.rtree)
