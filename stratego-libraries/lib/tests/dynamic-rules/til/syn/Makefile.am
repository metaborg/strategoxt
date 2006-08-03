include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

EXTRA_DIST      = $(wildcard *.sdf)
BOOTCLEANFILES  = TIL.def TIL.tbl TIL.rtg TIL.rtree $(wildcard *.dep)

PGEN_FLAGS     = -m $*
SDF2RTG_FLAGS  = --main TIL

TIL.def : $(wildcard *.sdf)

check : TIL.def TIL.tbl TIL.rtg TIL.rtree
