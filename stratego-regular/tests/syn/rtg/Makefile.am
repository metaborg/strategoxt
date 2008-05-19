include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/tests/syn/Makefile.parse-unit

SUBDIRS           = rtgs
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = $(TESTSUITES)

TESTSUITES = $(call srcwildcard,*.testsuite)

PARSE_UNIT_PTABLE = $(top_builddir)/syn/rtg.tbl

installcheck-local: $(TESTSUITES:.testsuite=.runtestsuite)
