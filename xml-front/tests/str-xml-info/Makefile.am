include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep) 

check_PROGRAMS = apply-tests
TESTS          = apply-tests

apply-tests.c : match-test1.rtree build-test1.rtree

SCFLAGS        = --main main-$*
STRINCLUDES    = -I $(XML_FRONT)/share/xml-front \
                 -I $(XTC)/share/xtc 

LDADD         += $(SSL_LIBS)

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.strxml) $(wildcard *.xhtml)
CLEANFILES     = $(wildcard *.dep) $(wildcard *.rtree)
BOOTCLEANFILES = $(wildcard *.c) 

%.rtree : %.strxml
	$(XML_FRONT)/libexec/parse-stratego-xml-info -i $< | \
	$(XML_FRONT)/libexec/process-stratego-xml-doc | \
	$(XML_FRONT)/libexec/process-stratego-xml-info | \
	$(STRATEGO_FRONT)/libexec/meta-explode | \
	$(STRATEGO_FRONT)/libexec/stratego-desugar -o $@

nodist_apply_tests_SOURCES = apply-tests.c
