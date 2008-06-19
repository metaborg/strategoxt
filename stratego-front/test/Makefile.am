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

# Warning: the make check can only occur after the build of strc-core.
prop1.c : PropStratego.tbl
prop1-asfix.c: prop1-asfix.str PropStratego.tbl
	$(CURRENT_SCOMPILE) $(STRINCLUDES) --asfix $(SCFLAGS) -i $< -o $@ -c -I .

check-local: $(TESTSUITES:.testsuite=.runtestsuite)
check: check1 check1-asfix check2 check3 check5

# Warning: the make check can only occur after the build of strc-core.
parsestratego = $(CURRENT_PARSE_STRATEGO)

check1 : prop1.str Prop.str 
	$(MAKE) clean
	$(MAKE) PropStratego.tbl
	$(parsestratego) -i $< -o prop.rtree --asfix -I . -I $(srcdir)

check1-asfix : prop1.str Prop.str
	$(MAKE) clean
	$(MAKE) PropStratego.tbl
	$(parsestratego) -i $< -o prop-asfix.rtree -I . -I $(srcdir)

check2 : prop2.str Prop.str
	$(MAKE) clean
	$(MAKE) PropStratego.tbl
	$(parsestratego) -i $< -o prop2.rtree -I . -I $(srcdir)

check3 : prop3.str Prop.str
	$(MAKE) clean
	$(parsestratego) -i $< -o prop3.rtree -I $(srcdir)

check5 : anti-quote-preterm.str
	$(parsestratego) \
	  -i $< -I $(top_builddir)/syn -o anti-quote-preterm.rtree -I $(srcdir)
	$(SCOMPILE) -i anti-quote-preterm.rtree -c -o anti-quote-preterm.c -I $(srcdir)

CLEANFILES = PropStratego.def PropStratego.tbl $(wildcard *.rtree)
EXTRA_DIST = $(call srcwildcard,*.str) $(call srcwildcard,*.meta) $(call srcwildcard,*.sdf)
