include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA  = xml-doc.rtree

EXTRA_DIST     = xml-doc.rtree xml-doc.str
BOOTCLEANFILES = xml-doc.rtree xml-doc.str xml-doc.rtg

xml-doc.rtg : 
	$(LN_S) $(top_srcdir)/xml-doc.rtg $@