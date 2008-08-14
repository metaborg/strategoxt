include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/test/syn/Makefile.parse-unit
include $(wildcard *.dep)

TESTSUITES = \
  preterm.testsuite \
  $(srcdir)/../Stratego/strategies.testsuite \
  $(srcdir)/../Stratego/comments.testsuite

PARSE_UNIT_PTABLE = StrategoStrategoForTesting.tbl

check_DATA     = StrategoStrategoForTesting.tbl
XT_BUILD_DIST  = StrategoStrategoForTesting.def
CLEANFILES    += StrategoStrategoForTesting.tbl StrategoStratego.def
EXTRA_DIST    += StrategoStrategoForTesting.sdf $(call srcwildcard,*.testsuite)

SDFINCLUDES = -Idef StrategoStratego.def
PGEN_FLAGS  = -m $*


StrategoStratego.def: $(top_builddist)/syn/StrategoStratego.def
	-@rm -f $@
	$(LN_S) $< $@

StrategoStrategoForTesting.def: StrategoStratego.def
