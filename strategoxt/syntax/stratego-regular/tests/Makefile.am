include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS           = . syn sdf2rtg
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

SCFLAGS = --main main-$*
STRINCLUDES = -I $(top_srcdir)/pp $(STRATEGO_RTG_STRCFLAGS)

check_PROGRAMS = rtg-ppfix-tests

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

nodist_rtg_ppfix_tests_SOURCES = rtg-ppfix-tests.c
LDADD += $(STRATEGO_RTG_LIBS) $(SSL_LIBS)
