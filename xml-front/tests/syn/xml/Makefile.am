include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/tests/syn/Makefile.parse-unit

SUBDIRS           = Document
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = $(wildcard *.testsuite)

TESTSUITES = document.testsuite content.testsuite attribute.testsuite
PARSE_UNIT_PTABLE = $(top_srcdir)/syn/xml/xml.tbl

installcheck-local: $(TESTSUITES:.testsuite=.runtestsuite)
