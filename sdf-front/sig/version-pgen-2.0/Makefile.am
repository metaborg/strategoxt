include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS             = Sdf2.str
pkgdata_DATA     = Sdf2.rtree

EXTRA_DIST       = $(SIGS) $(pkgdata_DATA) 
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(SIGS) $(pkgdata_DATA)

Sdf2.str :
	$(bindir)/sdf2rtg -i $(top_srcdir)/syn/version-pgen-2.0/Sdf2.def -m Sdf2 | $(bindir)/rtg2sig -o $@
