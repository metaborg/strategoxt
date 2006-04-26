include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

noinst_DATA     = TIL.def TIL.tbl
pkgtildatadir   = $(pkgdatadir)/tests/dynamic-rules/til/syn
pkgtildata_DATA = TIL.rtg TIL.rtree
EXTRA_DIST      = $(wildcard *.sdf)
BOOTCLEANFILES  = TIL.def TIL.tbl TIL.rtg TIL.rtree $(wildcard *.dep)

PGEN_FLAGS     = -m $*
SDF2RTG_FLAGS  = --main TIL

TIL.def : $(wildcard *.sdf)
