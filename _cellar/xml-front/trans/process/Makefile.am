include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = \
  xml-doc-strip-whitespace \
  xml-doc2xml-info \
  xml-info2xml-doc

pkgdata_DATA = xml-text-tools.str xml-doc2xml-info.str
#pkgdata_DATA = xml-text-tools.rtree xml-doc2xml-info.rtree

SCFLAGS     = --main main-$*
STRINCLUDES = \
  -I $(top_srcdir)/lib \
  -I $(top_srcdir)/sig/xml-info \
  -I $(top_srcdir)/sig/xml \
  -I $(XTC)/share/xtc \
  -I $(XML_FRONT)/share/sdf/xml-front

LDADD += $(SSL_LIBS)

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(pkgdata_DATA)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) 

