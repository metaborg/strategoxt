include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/test/syn/Makefile.parse-unit
include $(wildcard *.dep)

TESTSUITES = \
  preterm.testsuite \
  $(srcdir)/../Stratego/strategies.testsuite \
  $(srcdir)/../Stratego/comments.testsuite

PARSE_UNIT_PTABLE = StrategoStrategoForTesting.tbl

check_DATA = StrategoStrategoForTesting.tbl
CLEANFILES = StrategoStrategoForTesting.def StrategoStrategoForTesting.tbl StrategoStratego.def
EXTRA_DIST = StrategoStrategoForTesting.sdf $(call srcwildcard,*.testsuite)

SDFINCLUDES = -Idef StrategoStratego.def
PGEN_FLAGS  = -m $*

StrategoStratego.def:
	-rm -f $@
	if test -e $(top_srcdir)/syn/StrategoStratego.def; then \
	  $(LN_S) $(top_srcdir)/syn/StrategoStratego.def $@; \
	else \
	  $(LN_S) $(top_builddir)/syn/StrategoStratego.def $@; \
	fi

StrategoStrategoForTesting.tbl: StrategoStratego.def
