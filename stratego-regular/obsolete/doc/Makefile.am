include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/Makefile.docbook

MAN_BOOK  = book
man1_MANS = sdf2rtg.1

book.xml-included : sdf2rtg.xml

EXTRA_DIST = $(wildcard *.xml) $(wildcard *.1)
CLEANFILES = $(wildcard *.xml-included) $(wildcard *.1)
