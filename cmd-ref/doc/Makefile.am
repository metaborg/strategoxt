include $(top_srcdir)/Makefile.docbook

noinst_DATA = book.docbook

book.xml-included : strc.xml pack-sdf.xml ppgen.xml

EXTRA_DIST = $(wildcard *.xml) book.docbook
CLEANFILES = book.docbook
