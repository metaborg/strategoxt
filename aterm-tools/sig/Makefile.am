include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = ATerms.str IntCon.str Literals.str RealCon.str Whitespace.str

pkgdata_DATA     = $(subst .str,.rtree,$(SIGS))

EXTRA_DIST       = $(SIGS) $(pkgdata_DATA) 
CLEANFILES       = ATerms.def $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c) $(SIGS) $(pkgdata_DATA)

ATerms.def :
	ln -s $(top_srcdir)/syn/ATerms.def $@

$(SIGS) : ATerms.def