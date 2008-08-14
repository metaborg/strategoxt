

include $(top_srcdir)/Makefile.xt

SUBDIRS = pp syn

SDFINCLUDES     = -I $(top_srcdir)/syn -I $(top_builddir)/syn
PGEN_FLAGS      = -m $*
SDF2RTG_FLAGS   = -m $*

asfix_check_prog= prop1-asfix
ast_check_prog  = prop1 switch-semantics-test

check_PROGRAMS 	= $(asfix_check_prog) $(ast_check_prog)
check_DATA      = Prop.tbl Prop.str PropStratego.tbl

nodist_switch_semantics_test_SOURCES = switch-semantics-test.c
switch_semantics_test_LDADD = $(SSL_LIBS)
prop1_asfix_LDADD = $(SSL_LIBS)
nodist_prop1_SOURCES = prop1.c
nodist_prop1_asfix_SOURCES = prop1-asfix.c

TESTS = $(asfix_check_prog) $(ast_check_prog)

check-local: $(TESTSUITES:.testsuite=.runtestsuite)
check: $(asfix_check_prog) $(ast_check_prog) check1 check1-asfix check2 check3 check5

# Warning: the make check can only occur after the build of strc-core.
SCOMPILE=$(CURRENT_SCOMPILE)

# Warning: the make check can only occur after the build of strc-core.
parsestratego = $(CURRENT_PARSE_STRATEGO)

# Override default rules.
prop1-asfix.c: %.c: %.str $(check_DATA)
	$(SCOMPILE) $(STRINCLUDES) $(STRCFLAGS) $(SCFLAGS) --asfix -c -i $< -o $@ -I . -I $(srcdir)

prop1.c switch-semantics-test.c: %.c: %.str $(check_DATA)
	$(SCOMPILE) $(STRINCLUDES) $(STRCFLAGS) $(SCFLAGS) -c -i $< -o $@ -I . -I $(srcdir)

check1 : prop1.str  $(check_DATA)
	$(parsestratego) -i $< -o prop.rtree -I . -I $(srcdir)

check1-asfix : prop1-asfix.str $(check_DATA)
	$(parsestratego) -i $< -o prop-asfix.rtree --asfix -I . -I $(srcdir)

check2 : prop2.str $(check_DATA)
	$(parsestratego) -i $< -o prop2.rtree -I . -I $(srcdir)

check3 : prop3.str $(check_DATA)
	$(parsestratego) -i $< -o prop3.rtree -I $(srcdir)

check5 : anti-quote-preterm.str
	$(parsestratego) \
	  -i $< -I $(top_builddir)/syn -o anti-quote-preterm.rtree -I $(srcdir)
	$(SCOMPILE) -i anti-quote-preterm.rtree -c -o anti-quote-preterm.c -I $(srcdir)

## Redefined because the baseline is not always used.
.sdf.def :
	XTC_REPOSITORY=$(BUILD_REPOSITORY) \
	$(top_builddir)/../sdf-front/parse/pack-sdf $(SDFINCLUDES) -i $< -o $@ --dep $*.dep

.def.rtg :
	XTC_REPOSITORY=$(BUILD_REPOSITORY) \
	$(top_builddir)/../stratego-regular/xtc/sdf2rtg $(SDF2RTG_FLAGS) -i $< -o $@

.rtg.str :
	XTC_REPOSITORY=$(BUILD_REPOSITORY) \
	$(top_builddir)/../stratego-regular/xtc/rtg2sig --module `basename "$*"` -i $< -o $@


CLEANFILES = $(check_DATA) $(wildcard *.def) $(wildcard *.tbl) $(wildcard *.rtree) $(wildcard *.c)
EXTRA_DIST = $(call srcwildcard,*.str) $(call srcwildcard,*.meta) $(call srcwildcard,*.sdf)
