include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA  = xml-doc.rtg
SDF2RTG_FLAGS = --main xml

EXTRA_DIST     = xml-doc.rtg
BOOTCLEANFILES = $(EXTRA_DIST) $(pkgdata_DATA)

xml-doc.def : 
	$(LN_S) -s $(top_srcdir)/syn/xml/xml.def $@
