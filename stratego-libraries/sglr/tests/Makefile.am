include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

check_PROGRAMS = stratego-sglr-tests
TESTS = $(check_PROGRAMS)

check_DATA = \
  ExpId.tbl ExpId.str \
  ExpInt.tbl ExpInt.str \
  ExpIntAmb.tbl \
  ConcreteSyntax.tbl ConcreteSyntax.str \
  Concrete.tbl \
  CustomImplode.tbl \
  List.tbl \
  Lexical.tbl \
  ConcreteSyntax2.tbl \
  AstAttributes.tbl

stratego-sglr-tests.c : $(check_DATA)

SCOMPILE = $(STRC_UNINSTALLED)

if !XT_DIST_CHECK_SOURCES
nodist_stratego_sglr_tests_SOURCES = stratego-sglr-tests.c
else
stratego_sglr_tests_SOURCES = stratego-sglr-tests.c
endif

stratego_sglr_tests_LDADD    = $(STRATEGO_SGLR_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)
stratego_sglr_tests_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)

STRCFLAGS = \
  --main main-$* --format-check 0 \
  $(STRATEGO_SGLR_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_UNINSTALLED_STRCFLAGS)

EXTRA_DIST = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.def) $(wildcard *.exp)
CLEANFILES = $(wildcard *.c) $(wildcard *.dep) $(noinst_DATA)

if XT_DIST_CHECK_SOURCES
EXTRA_DIST += $(check_DATA)
endif
