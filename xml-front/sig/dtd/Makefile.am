include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS            = dtd.str
SDF2RTG_FLAGS   = -m $*

pkgdata_DATA    = dtd.rtree
EXTRA_DIST      = $(SIGS) $(pkgdata_DATA)
BOOTCLEANFILES	= $(SIGS) $(pkgdata_DATA) dtd.def

dtd.def : 
	$(LN_S) $(top_srcdir)/syn/dtd/dtd.def $@

