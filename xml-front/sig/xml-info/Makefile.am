include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

METAMODS   = xml-info.str   xml-info-typematch.str
P_METAMODS = xml-info.rtree xml-info-typematch.rtree

pkgdata_DATA   = $(P_METAMODS)
EXTRA_DIST     = $(METAMODS) $(pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA) $(METAMODS) $(wildcard *.dep) xml-info.rtg

xml-info.rtg : 
	$(LN_S) $(top_srcdir)/tg/xml-info/xml-info.rtg $@

# rtg -> typematch
%-typematch.str : %.rtg
	$(STRATEGO_REGULAR)/bin/rtg2typematch -i $< -o $@
