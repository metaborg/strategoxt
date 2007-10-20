include $(top_srcdir)/Makefile.xt

SUBDIRS = pp syn

SDFINCLUDES     = -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS      = -m $*
SDF2RTG_FLAGS   = -m $*

check_PROGRAMS 	= prop1 prop1-asfix switch-semantics-test
check_DATA      = PropStratego.tbl 

nodist_switch_semantics_test_SOURCES = switch-semantics-test.c
switch_semantics_test_LDADD = $(SSL_LIBS)
prop1_asfix_LDADD = $(SSL_LIBS)
nodist_prop1_SOURCES = prop1.c
nodist_prop1_asfix_SOURCES = prop1-asfix.c

TESTS = prop1 switch-semantics-test prop1-asfix

prop1.c : PropStratego.tbl
prop1-asfix.c: prop1-asfix.str PropStratego.tbl
	$(top_srcdir)/../strc-core/tools/strc $(STRINCLUDES) --asfix $(SCFLAGS) -i $< -o $@ -c -I .

check-local: $(TESTSUITES:.testsuite=.runtestsuite)
check: check1 check1-asfix check2 check3 check5

parsestratego = $(top_srcdir)/../strc-core/tools/parse-stratego

check1 : Prop.str 
	$(MAKE) clean
	$(MAKE) PropStratego.tbl
	$(parsestratego) -i prop1.str -o prop.rtree --asfix -I .

check1-asfix : Prop.str
	$(MAKE) clean
	$(MAKE) PropStratego.tbl
	$(parsestratego) -i prop1.str -o prop-asfix.rtree -I .

check2 : Prop.str
	$(MAKE) clean
	$(MAKE) PropStratego.tbl
	$(parsestratego) -i prop2.str -o prop2.rtree -I .

check3 : Prop.str
	$(MAKE) clean
	$(parsestratego) -i prop3.str -o prop3.rtree

check5 :
	XTC_REPOSITORY=$(BUILD_REPOSITORY) $(parsestratego) \
	  -i anti-quote-preterm.str -I $(top_builddir)/syn -o anti-quote-preterm.rtree
	$(SCOMPILE) -i anti-quote-preterm.rtree -c -o anti-quote-preterm.c

CLEANFILES = PropStratego.def PropStratego.tbl $(wildcard *.rtree)
EXTRA_DIST = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.sdf)
