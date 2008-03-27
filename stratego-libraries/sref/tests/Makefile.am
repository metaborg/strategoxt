include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

check_PROGRAMS = stratego-sref-tests
TESTS = $(check_PROGRAMS)

check_DATA =

stratego-sref-tests.c : $(check_DATA)

if !XT_DIST_CHECK_SOURCES
nodist_stratego_sref_tests_SOURCES = stratego-sref-tests.c
else
stratego_sref_tests_SOURCES = stratego-sref-tests.c
endif

stratego_sref_tests_LDADD    = $(STRATEGO_SREF_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)
stratego_sref_tests_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)  $(STRATEGO_SREF_UNINSTALLED_CFLAGS)

STRCFLAGS =					\
  --main main-$* --format-check 0		\
  $(STRATEGO_SREF_UNINSTALLED_STRCFLAGS)	\
  $(STRATEGO_UNINSTALLED_STRCFLAGS)

EXTRA_DIST = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.def) $(wildcard *.exp)
CLEANFILES = $(wildcard *.c) $(wildcard *.dep) $(noinst_DATA)

if XT_DIST_CHECK_SOURCES
EXTRA_DIST += $(check_DATA)
endif
