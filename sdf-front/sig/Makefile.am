include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS             = Sdf2.str
pkgdata_DATA     = Sdf2.rtree

EXTRA_DIST       = $(SIGS) $(pkgdata_DATA) 
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(SIGS) $(pkgdata_DATA)

Sdf2.str : $(top_srcdir)/syn/version-pgen-2.0/Sdf2.def
	$(STRATEGO_REGULAR)/bin/sdf2rtg -i $< -m Sdf2 | \
	$(STRATEGO_REGULAR)/bin/rtg2sig -o $@
