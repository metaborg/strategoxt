include $(top_srcdir)/Makefile.xt
include Makefile.parse-unit

SDFINCLUDES     = -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS      = -m $*

check_PROGRAMS 	= prop1 switch-semantics-test
check_DATA      = PropStratego.tbl 

nodist_switch_semantics_test_SOURCES = switch-semantics-test.c
switch_semantics_test_LDADD = $(SSL_LIBS)
nodist_prop1_SOURCES = prop1.c

TESTSUITES        = strategies.testsuite dynrules.testsuite comments.testsuite
PARSE_UNIT_PTABLE = $(top_srcdir)/syn/StrategoForTesting.tbl

TESTS = prop1 switch-semantics-test

installcheck-local: $(TESTSUITES:.testsuite=.runtestsuite)
check: check1 check1-asfix check2 check3 check4

check1 : Prop.str
	$(MAKE) clean
	$(srcdir)/../parse/parse-stratego -i prop1.str -o prop.rtree --verbose 10 --asfix

check1-asfix : Prop.str
	$(MAKE) clean
	$(srcdir)/../parse/parse-stratego -i prop1.str -o prop-asfix.rtree --verbose 10

check2 : Prop.str
	$(MAKE) clean
	$(srcdir)/../parse/parse-stratego -i prop2.cr -o prop2.rtree --verbose 10

check3 : Prop.str
	$(MAKE) clean
	$(srcdir)/../parse/parse-stratego -i prop3.str -o prop3.rtree --verbose 10

check4 : Prop.str
	$(MAKE) clean
	ls
	$(MAKE) PropStratego.def
	$(srcdir)/../parse/parse-stratego -i prop2.cr -o prop2.rtree --verbose 10

CLEANFILES = PropStratego.def PropStratego.tbl $(wildcard *.rtree)

EXTRA_DIST = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.sdf) \
	     $(wildcard *.cr) $(wildcard *.syn) $(wildcard *.testsuite) Makefile.parse-unit

