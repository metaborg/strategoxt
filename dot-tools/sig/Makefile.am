include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS             = Dot.str
pkgdata_DATA     = Dot.rtree

EXTRA_DIST       = $(SIGS) $(pkgdata_DATA)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(SIGS) $(pkgdata_DATA)

Dot.str : Dot.def
	$(STRATEGO_REGULAR)/bin/sdf2rtg -i $< -m Dot | \
	$(STRATEGO_REGULAR)/bin/rtg2sig -o $@

Dot.def :
	ln -s $(top_srcdir)/syn/Dot.def $@
