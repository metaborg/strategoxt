include $(top_srcdir)/Makefile.docbook

MAN_BOOK  = book
man1_MANS = strc.1 pack-sdf.1 ppgen.1

noinst_DATA = index.html

book.xml-included : strc.xml pack-sdf.xml ppgen.xml

EXTRA_DIST = $(wildcard *.xml) $(wildcard *.1) $(wildcard *.html)
CLEANFILES = $(wildcard *.xml-included) $(wildcard *.1)
