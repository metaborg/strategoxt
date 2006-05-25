include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = Box.str
pkgdata_DATA   = Box.rtg $(SIGS)
SDF2RTG_FLAGS  = -m $*
EXTRA_DIST     = $(SIGS) $(pkgdata_DATA) 
CLEANFILES     = Box.def $(wildcard *.dep)
BOOTCLEANFILES = $(SIGS)

Box.def :
	ln -s $(top_srcdir)/syn/box/Box.def $@
