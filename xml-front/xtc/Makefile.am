include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS = \
  parse-xml-doc \
  pp-xml-doc \
  parse-xml-info \
  pp-xml-info \
  xml-interpret \
  parse-dtd \
  parse-dtdinst \
  xslt-meta-explode \
  xslt-meta-proc \
  auto-xml-tools

pkgdata_DATA   = xml-xtc-tools.rtree dtdinst.jnlp

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(pkgdata_DATA)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) xml-xtc-tools.rtree

SCFLAGS      = --main main-$* 
STRINCLUDES  = -I $(XTC)/share/xtc \
               -I $(STRATEGO_REGULAR)/share/stratego-regular \
               -I $(top_srcdir)/sig/xml-info \
               -I $(top_srcdir)/lib

XTC_IMPORT = $(STRATEGOXT)/share/strategoxt/XTC
