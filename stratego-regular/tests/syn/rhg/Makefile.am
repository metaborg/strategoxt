include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/tests/syn/Makefile.parse-unit

SUBDIRS           = rhgs
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = $(wildcard *.testsuite)

TESTSUITES = \
  rhgs.testsuite \
  nonterms.testsuite

PARSE_UNIT_PTABLE = $(top_srcdir)/syn/rhg.tbl

installcheck-local: $(TESTSUITES:.testsuite=.runtestsuite)
