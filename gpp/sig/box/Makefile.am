include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = Box.str
pkgdata_DATA   = Box.rtg $(SIGS)
SDF2RTG_FLAGS  = -m $*

XT_BUILD_DIST  = $(SIGS) $(pkgdata_DATA) 
CLEANFILES    += $(wildcard *.dep)

VPATH += $(top_builddist)/syn/box/
