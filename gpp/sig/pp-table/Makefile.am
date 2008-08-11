include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = pp-table.str

pkgdata_DATA   = $(SIGS)
EXTRA_DIST     = $(SIGS) $(pkgdata_DATA) 
BOOTCLEANFILES = $(SIGS) 

SDF2RTG_FLAGS    = -m $*

VPATH += \
  $(top_builddir)/syn/pp-table/ \
  $(top_srcdir)/syn/pp-table/
