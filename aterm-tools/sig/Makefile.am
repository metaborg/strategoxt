include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = ATerm.str ATerm-Layout.str ATerm-Literals.str

pkgdata_DATA     = $(subst .str,.rtree,$(SIGS))

EXTRA_DIST       = $(SIGS) $(pkgdata_DATA) 
CLEANFILES       = ATerm.def $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c) $(SIGS) $(pkgdata_DATA)

ATerm.def :
	ln -s $(top_srcdir)/syn/ATerm.def $@

$(SIGS) : ATerm.def