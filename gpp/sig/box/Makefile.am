include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = Box.str
pkgdata_DATA   = Box.rtg $(SIGS)
SDF2RTG_FLAGS  = -m $*
EXTRA_DIST     = $(SIGS) $(pkgdata_DATA) 
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(SIGS)

VPATH += $(top_srcdir)/syn/box/
