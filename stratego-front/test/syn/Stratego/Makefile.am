include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/test/syn/Makefile.parse-unit
include $(wildcard *.dep)

TESTSUITES        = strategies.testsuite dynrules.testsuite comments.testsuite
PARSE_UNIT_PTABLE = StrategoForTesting.tbl

check_DATA = StrategoForTesting.tbl
CLEANFILES = StrategoForTesting.def StrategoForTesting.tbl Stratego.def
EXTRA_DIST = StrategoForTesting.sdf $(call srcwildcard,*.testsuite)

SDFINCLUDES = -Idef Stratego.def
PGEN_FLAGS  = -m $*

Stratego.def:
	-rm -f $@
	if test -e $(top_srcdir)/syn/Stratego.def; then \
	  $(LN_S) $(top_srcdir)/syn/Stratego.def $@; \
	else \
	  $(LN_S) $(top_builddir)/syn/Stratego.def $@; \
	fi

StrategoForTesting.tbl: Stratego.def
