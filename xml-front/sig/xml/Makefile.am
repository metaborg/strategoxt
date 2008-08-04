include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA   = xml-doc.rtg xml-doc.str xml-doc.str
#pkgdata_DATA   = xml-doc.rtg xml-doc.str xml-doc.rtree 

EXTRA_DIST     = $(pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA) xml-doc.def

SDF2RTG_FLAGS  = --main xml

VPATH += $(top_builddir)/syn/xml/ $(top_srcdir)/syn/xml/
xml-doc.def: xml.def
	$(LN_S) $< $@
