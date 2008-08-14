include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/Internal.mk
include $(top_srcdir)/tests/Makefile.parse-unit
include $(wildcard *.dep)


TBL = Stratego-Sdf2-tests

XT_BUILD_DIST = $(TBL:=.sdf) $(TBL:=.def)
EXTRA_DIST   += $(call srcwildcard,*.testsuite) $(TBL:=.sdf)
CLEANFILES   += $(TBL:=.tbl)

PARSE_UNIT_PTABLE = $(TBL:=.tbl)
TESTSUITES = symbols.testsuite

check_DATA  = $(TBL:=.tbl)
PGEN_FLAGS  = -m $*
SDFINCLUDES = -Idef $(top_builddist)/syn/Stratego-Sdf2.def
