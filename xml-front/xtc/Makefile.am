include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS = \
  parse-xml-doc \
  pp-xml-doc \
  parse-xml-info \
  pp-xml-info 

pkgdata_DATA   = xml-xtc-tools.rtree

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.c) $(pkgdata_DATA)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) xml-xtc-tools.rtree

SCFLAGS      = --main main-$* 
STRINCLUDES  = -I $(XTC)/share/xtc \
               -I $(top_srcdir)/sig/xml-info \
               -I $(top_srcdir)/lib

LDADD += $(SSL_LIBS)

