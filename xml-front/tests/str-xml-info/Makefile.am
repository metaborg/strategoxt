include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/Makefile.xml-tools
include $(wildcard *.dep) 

check_PROGRAMS = apply-tests
TESTS          = apply-tests

apply-tests.c : match-test1.rtree build-test1.rtree

SCFLAGS        = --main main-$*
STRINCLUDES    = -I $(XML_TOOLS)/share/xml-tools \
                 -I $(XTC)/share/xtc \
                 -I $(STRATEGO_REGULAR)/share/stratego-regular

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.strxml) $(wildcard *.xhtml)
CLEANFILES     = $(wildcard *.dep) $(wildcard *.rtree)
BOOTCLEANFILES = $(wildcard *.c) 

