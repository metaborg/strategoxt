include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/Makefile.docbook

MAN_BOOK  = book
man1_MANS = parse-xml-info.1 parse-xml-doc.1 pp-xml-doc.1

book.xml-included : parse-xml-info.xml parse-xml-doc.xml pp-xml-doc.xml

EXTRA_DIST = $(wildcard *.xml) $(wildcard *.1)
CLEANFILES = $(wildcard *.xml-included) $(wildcard *.1)