include $(top_srcdir)/Makefile.docbook

MAN_BOOK  = book
man1_MANS = strc.1 pack-sdf.1 ppgen.1

book.xml-included : strc.xml pack-sdf.xml ppgen.xml

EXTRA_DIST = $(wildcard *.xml) $(wildcard *.1)
CLEANFILES = $(wildcard *.xml-included) $(wildcard *.1)
