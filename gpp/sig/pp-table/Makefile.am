include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = pp-table.str

pkgdata_DATA   = $(SIGS)
XT_BUILD_DIST  = $(pkgdata_DATA)

SDF2RTG_FLAGS    = -m $*

VPATH += $(top_builddist)/syn/pp-table/
