include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS            = Repository.str Runtime.str 
pkgdata_DATA    = $(subst .str,.rtree,$(SIGS)) #Repository.rtg

EXTRA_DIST      = $(SIGS) $(pkgdata_DATA)
CLEANFILES      = 
BOOTCLEANFILES	= $(pkgdata_DATA)

#SIG2RTG_FLAGS   = -I $(SSL)/share/ssl
#.rtree.rtg :
#	$(STRATEGO_REGULAR)/bin/sig2rtg -i $< -o $@ $(SIG2RTG_FLAGS) --ast