include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS             = ATerms.str
pkgdata_DATA     = ATerms.rtree

EXTRA_DIST       = $(SIGS) $(pkgdata_DATA) 
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(SIGS) $(pkgdata_DATA)

ATerms.str : ATerms.def
	$(STRATEGO_REGULAR)/bin/sdf2rtg -i $< -m ATerms | \
	$(STRATEGO_REGULAR)/bin/rtg2sig -o $@
