include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)


TBL = Stratego-Sdf2-tests

EXTRA_DIST = $(call srcwildcard,*.testsuite) $(TBL).sdf
TESTSUITES = symbols.testsuite

check : $(TESTSUITES:.testsuite=.runtestsuite)

%.runtestsuite : %.testsuite
	$(SDF_TOOLS)/bin/parse-unit -i $< -p $(TBL).tbl

check_DATA  = $(TBL).tbl
PGEN_FLAGS  = -m $*
SDFINCLUDES = -Idef $(top_srcdir)/syn/Stratego-Sdf2.def
CLEANFILES  = $(TBL).tbl
