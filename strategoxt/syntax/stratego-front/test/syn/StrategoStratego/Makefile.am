include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/test/syn/Makefile.parse-unit
include $(wildcard *.dep)

TESTSUITES = \
  preterm.testsuite \
  $(srcdir)/../Stratego/strategies.testsuite \
  $(srcdir)/../Stratego/comments.testsuite

PARSE_UNIT_PTABLE = StrategoStrategoForTesting.tbl

check_DATA = StrategoStrategoForTesting.tbl
CLEANFILES = StrategoStrategoForTesting.def StrategoStrategoForTesting.tbl
EXTRA_DIST = StrategoStrategoForTesting.sdf $(wildcard *.testsuite)

SDFINCLUDES = -Idef $(top_srcdir)/syn/StrategoStratego.def
PGEN_FLAGS  = -m $*
