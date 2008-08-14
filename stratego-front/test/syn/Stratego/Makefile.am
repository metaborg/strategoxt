include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/test/syn/Makefile.parse-unit
include $(wildcard *.dep)

TESTSUITES        = strategies.testsuite dynrules.testsuite comments.testsuite
PARSE_UNIT_PTABLE = StrategoForTesting.tbl

check_DATA     = StrategoForTesting.tbl
XT_BUILD_DIST  = StrategoForTesting.def
CLEANFILES    += StrategoForTesting.tbl Stratego.def
EXTRA_DIST    += StrategoForTesting.sdf $(call srcwildcard,*.testsuite)

SDFINCLUDES = -Idef Stratego.def
PGEN_FLAGS  = -m $*

Stratego.def: $(top_builddist)/syn/Stratego.def
	-@rm -f $@
	$(LN_S) $< $@

StrategoForTesting.def: Stratego.def
