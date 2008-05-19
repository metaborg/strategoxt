include $(top_srcdir)/Makefile.xt

TESTSUITES        = box.testsuite
PARSE_UNIT_PTABLE = $(top_builddir)/syn/box/Box.tbl
EXTRA_DIST        = $(call srcwildcard,*.testsuite)

%.runtestsuite : %.testsuite
	$(SDF_TOOLS)/bin/parse-unit -i $< -p $(PARSE_UNIT_PTABLE)

check: $(TESTSUITES:.testsuite=.runtestsuite)
