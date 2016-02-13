include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

METAMODS   = xml-info.str   xml-info-typematch.str
P_METAMODS = xml-info.str xml-info-typematch.str
#P_METAMODS = xml-info.rtree xml-info-typematch.rtree

pkgdata_DATA   = $(P_METAMODS) xml-info.rtg
EXTRA_DIST     = $(METAMODS) $(pkgdata_DATA) xml-info.rtg
BOOTCLEANFILES = $(wildcard *.dep)

#BOOTCLEANFILES = $(P_METAMODS) $(METAMODS) $(wildcard *.dep)

# rtg -> typematch
%-typematch.str : %.rtg
	$(STRATEGO_REGULAR)/bin/rtg2typematch -i $< -o $@
