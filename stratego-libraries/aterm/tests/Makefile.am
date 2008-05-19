include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

check_PROGRAMS = explode-implode-tests
STRCFLAGS = --main main-$*
STRINCLUDES = $(STRATEGO_ATERM_UNINSTALLED_STRCFLAGS) $(STRATEGO_UNINSTALLED_STRCFLAGS)

explode_implode_tests_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)
explode_implode_tests_LDADD = $(STRATEGO_ATERM_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(call srcwildcard,*.str) $(call srcwildcard,*.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

if !XT_DIST_CHECK_SOURCES
nodist_explode_implode_tests_SOURCES = explode-implode-tests.c
else
explode_implode_tests_SOURCES = explode-implode-tests.c
endif
