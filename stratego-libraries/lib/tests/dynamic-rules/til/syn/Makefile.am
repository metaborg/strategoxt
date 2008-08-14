include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/Internal.mk
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

check_DATA = TIL.def TIL.tbl TIL.rtg TIL.rtree

XT_BUILD_DIST   = TIL.def TIL.rtg TIL.rtree
EXTRA_DIST     += $(call srcwildcard,*.sdf)
CLEANFILES     += $(wildcard *.dep)

PGEN_FLAGS     = -m $*
SDF2RTG_FLAGS  = --main TIL

TIL.def : $(call srcwildcard,*.sdf)
