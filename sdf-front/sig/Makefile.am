include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS             = Sdf2.str
pkgdata_DATA     = Sdf2.rtree

EXTRA_DIST       = $(SIGS) $(pkgdata_DATA) 
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(SIGS) $(pkgdata_DATA) Sdf2.def

SDF2RTG_FLAGS = -m $*

Sdf2.def : $(top_srcdir)/syn/Sdf2.def
	ln -s $< $@
