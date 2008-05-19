include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/tests/syn/Makefile.parse-unit

SUBDIRS           = Document
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = $(TESTDUITES)

TESTSUITES = $(call srcwildcard,*.testsuite)
PARSE_UNIT_PTABLE = $(top_builddir)/syn/xml/xml.tbl

installcheck-local: $(TESTSUITES:.testsuite=.runtestsuite)
