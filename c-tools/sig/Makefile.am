include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS             = C.str
pkgdata_DATA     = C.rtree

EXTRA_DIST       = $(SIGS) $(pkgdata_DATA)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(SIGS) $(pkgdata_DATA)

C.str : C.def
	$(STRATEGO_REGULAR)/bin/sdf2rtg -i $< -m C | \
	$(STRATEGO_REGULAR)/bin/rtg2sig -o $@

C.def :
	ln -s $(top_srcdir)/syn/C.def $@
