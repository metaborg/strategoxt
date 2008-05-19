include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TESTSUITES = preterm.testsuite
PARSE_UNIT_PTABLE = Main.tbl

check_DATA = Main.tbl
CLEANFILES = Main.def Main.tbl
EXTRA_DIST = Main.sdf $(call srcwildcard,*.testsuite)

SDFINCLUDES = -Idef $(top_builddir)/syn/box/Stratego-Box.def

%.runtestsuite : %.testsuite
	$(SDF_TOOLS)/bin/parse-unit -i $< -p $(PARSE_UNIT_PTABLE)

check: $(TESTSUITES:.testsuite=.runtestsuite)
