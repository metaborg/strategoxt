include $(top_srcdir)/Makefile.xt

SUBDIRS           = translation-units
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = $(wildcard *.testsuite)

TESTSUITES = \
  translation-units.testsuite \
  expressions.testsuite \
  statements.testsuite

PARSE_UNIT_PTABLE = $(sdfdatadir)/C.tbl

installcheck-local: $(TESTSUITES:.testsuite=.runtestsuite)

%.runtestsuite : %.testsuite
	$(SDF_TOOLS)/bin/parse-unit -i $< -p $(PARSE_UNIT_PTABLE) --verbose 1 -o /dev/null
