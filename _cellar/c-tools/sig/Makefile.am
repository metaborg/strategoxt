include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS             = C.str C.rtg
pkgdata_DATA     = C.rtree C.rtg C.rtg-nf

EXTRA_DIST       = $(SIGS) $(pkgdata_DATA)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(SIGS) $(pkgdata_DATA) C.def

C.rtg : C.def
	$(STRATEGO_REGULAR)/bin/sdf2rtg -i $< -o $@ -m C 

C.str : C.rtg
	$(STRATEGO_REGULAR)/bin/rtg2sig -i $< -o $@

C.def :
	ln -s $(top_builddir)/syn/C.def $@
