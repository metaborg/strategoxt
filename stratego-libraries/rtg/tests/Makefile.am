include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

check_PROGRAMS = format-check-tests dfta-accept-tests
STRCFLAGS = --main main-$*
STRINCLUDES = $(STRATEGO_RTG_UNINSTALLED_STRCFLAGS) $(STRATEGO_UNINSTALLED_STRCFLAGS)

format_check_tests_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)
format_check_tests_LDADD = $(STRATEGO_RTG_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)

dfta_accept_tests_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)
dfta_accept_tests_LDADD = $(STRATEGO_RTG_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(call srcwildcard,*.str) $(call srcwildcard,*.meta) $(call srcwildcard,*.rtg)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

if !XT_DIST_CHECK_SOURCES
nodist_format_check_tests_SOURCES = format-check-tests.c
nodist_dfta_accept_tests_SOURCES = dfta-accept-tests.c
else
format_check_tests_SOURCES = format-check-tests.c
dfta_accept_tests_SOURCES = dfta-accept-tests.c
endif

TESTS_ENVIRONMENT = RTGDIR="$(abs_srcdir)"
