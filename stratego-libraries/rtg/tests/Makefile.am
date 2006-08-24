include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

check_PROGRAMS = format-check-tests
STRCFLAGS = --main main-$*
STRINCLUDES = $(STRATEGO_RTG_UNINSTALLED_STRCFLAGS) $(STRATEGO_UNINSTALLED_STRCFLAGS)

format_check_tests_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)
format_check_tests_LDADD = $(STRATEGO_RTG_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.rtg)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

if !XT_DIST_CHECK_SOURCES
nodist_format_check_tests_SOURCES = format-check-tests.c
else
format_check_tests_SOURCES = format-check-tests.c
endif
