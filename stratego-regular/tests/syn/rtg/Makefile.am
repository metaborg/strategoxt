include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/tests/syn/Makefile.parse-unit

SUBDIRS           = rtgs
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = $(wildcard *.testsuite)

TESTSUITES = \
  rtgs.testsuite \
  tree.testsuite \
  nonterms.testsuite

PARSE_UNIT_PTABLE = $(top_srcdir)/syn/rtg.tbl

installcheck-local: $(TESTSUITES:.testsuite=.runtestsuite)
