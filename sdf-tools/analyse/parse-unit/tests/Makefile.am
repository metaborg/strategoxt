include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/Internal.mk
include $(wildcard *.dep)

PGEN_FLAGS = -m $*
check_DATA = Exp.tbl
check_SCRIPTS = parse-unit-checks.sh
TESTS = $(check_SCRIPTS)

PARSE_UNIT=env XTC_REPOSITORY="$(BUILD_REPOSITORY)" $(top_builddir)/../sdf-tools/analyse/parse-unit/parse-unit

TESTS_ENVIRONMENT =\
  PARSE_UNIT="$(PARSE_UNIT)" \
  SRCDIR=$(srcdir) \
  VERBOSE="1"

XT_BUILD_DIST = Exp.def
EXTRA_DIST   += $(check_SCRIPTS) Exp.sdf $(call srcwildcard,*.testsuite)
CLEANFILES   += Exp.tbl
