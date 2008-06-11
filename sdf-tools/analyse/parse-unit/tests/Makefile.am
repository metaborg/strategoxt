include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

PGEN_FLAGS = -m $*
check_DATA = Exp.tbl
check_SCRIPTS = parse-unit-checks.sh
TESTS = $(check_SCRIPTS)

TESTS_ENVIRONMENT =\
  PARSE_UNIT="$(prefix)/bin/parse-unit$(EXEEXT)"\
  SRCDIR=$(srcdir) \
  VERBOSE="1"

EXTRA_DIST = $(check_SCRIPTS) Exp.sdf $(call srcwildcard,*.testsuite)
