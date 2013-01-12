include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

EXTRA_DIST      = $(wildcard *.sdf)
BOOTCLEANFILES  = TIL.def TIL.tbl TIL.rtg TIL.rtree $(wildcard *.dep)

PGEN_FLAGS     = -m $*
SDF2RTG_FLAGS  = --main TIL

TIL.def : $(wildcard *.sdf)

check_DATA = TIL.def TIL.tbl TIL.rtg TIL.rtree

if XT_DIST_CHECK_SOURCES
noinst_DATA = $(check_DATA)
EXTRA_DIST += $(check_DATA)
endif
