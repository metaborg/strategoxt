include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA   = xml-doc.rtg xml-doc.str xml-doc.rtree 

EXTRA_DIST     = $(pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA)

SDF2RTG_FLAGS  = --main xml

xml-doc.def : 
	$(LN_S) $(top_srcdir)/syn/xml/xml.def $@
