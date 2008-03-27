include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

check_PROGRAMS = stratego-lazy-tests
TESTS = $(check_PROGRAMS)

check_DATA =

stratego-lazy-tests.c : $(check_DATA)

if !XT_DIST_CHECK_SOURCES
nodist_stratego_lazy_tests_SOURCES = stratego-lazy-tests.c
else
stratego_lazy_tests_SOURCES = stratego-lazy-tests.c
endif

stratego_lazy_tests_LDADD    = $(STRATEGO_LAZY_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)
stratego_lazy_tests_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)  $(STRATEGO_LAZY_UNINSTALLED_CFLAGS)

STRCFLAGS = \
  --main main-$* --format-check 0 \
  $(STRATEGO_LAZY_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_UNINSTALLED_STRCFLAGS)

EXTRA_DIST = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.def) $(wildcard *.exp)
CLEANFILES = $(wildcard *.c) $(wildcard *.dep) $(noinst_DATA)

if XT_DIST_CHECK_SOURCES
EXTRA_DIST += $(check_DATA)
endif
