include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA   = xml-doc.pp.af
libexec_PROGRAMS   = xml-doc2abox 
EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(pkgdata_DATA) xml-doc.pp
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) xml-doc.pp.af

SCFLAGS        = --main main-$*
STRINCLUDES    = -I $(top_srcdir)/lib \
                 -I $(top_srcdir)/sig/xml \
                 -I $(GPP)/share/sdf/gpp \
                 -I $(GPP)/share/gpp
LDADD += $(SSL_LIBS)

