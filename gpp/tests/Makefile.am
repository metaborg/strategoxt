include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS        = --main main-$*
check_PROGRAMS = ast2text-tests

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.pp)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

nodist_ast2text_tests_SOURCES = ast2text-tests.c
LDADD += $(SSL_LIBS)
