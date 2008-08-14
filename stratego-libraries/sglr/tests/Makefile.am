include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(top_srcdir)/Internal.mk
include $(wildcard *.dep)

check_PROGRAMS = stratego-sglr-tests
TESTS = $(check_PROGRAMS)

DEF_FILES = ExpId.def ExpInt.def KernelStartSymbol.def ConcreteSyntax.def
check_DATA = \
  $(DEF_FILES:.def=.tbl) $(DEF_FILES:.def=.str) \
  ExpIntAmb.tbl \
  Concrete.tbl \
  CustomImplode.tbl \
  Lexical.tbl \
  ConcreteSyntax2.tbl \
  AstAttributes.tbl

stratego-sglr-tests.c : $(check_DATA)

expression_files = $(call srcwildcard,*.exp)

stratego_sglr_tests_LDADD    = $(STRATEGO_SGLR_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)
stratego_sglr_tests_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)

STRCFLAGS = \
  --main main-$* --format-check 0 \
	-I $(top_builddir)/sglr/tests \
  $(STRATEGO_SGLR_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_UNINSTALLED_STRCFLAGS)

XT_BUILD_DIST = $(DEF_FILES:.def=.str)
EXTRA_DIST   += $(call srcwildcard,*.str) $(call srcwildcard,*.meta) $(call srcwildcard,*.def) $(call srcwildcard,*.exp)
CLEANFILES   += $(DEF_FILES:.def=.tbl) $(wildcard *.c) $(wildcard *.dep) $(noinst_DATA)

TESTS_ENVIRONMENT = SRCDIR="$(abs_srcdir)"
