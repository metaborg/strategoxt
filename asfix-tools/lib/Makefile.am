include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt

ASFIX_LIB     = $(call srcwildcard,*.str)
XT_BUILD_DIST = $(ASFIX_LIB:.str=.rtree)
XT_EXTRA_DIST = $(ASFIX_LIB)
pkgdata_DATA  = $(ASFIX_LIB:.str=.rtree)
