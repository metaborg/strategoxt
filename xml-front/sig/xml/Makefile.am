include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA   = xml-doc.rtg xml-doc.str xml-doc.str
#pkgdata_DATA   = xml-doc.rtg xml-doc.str xml-doc.rtree 

EXTRA_DIST     = $(pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA) xml-doc.def

SDF2RTG_FLAGS  = --main xml

xml-doc.def : 
	$(LN_S) $(top_builddir)/syn/xml/xml.def $@
