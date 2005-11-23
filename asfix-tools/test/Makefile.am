include $(top_srcdir)/Makefile.xt

STRINCLUDES = \
  -I $(top_srcdir)/sig \
  -I $(top_srcdir)/lib

SUBDIRS=implode-asfix

EXTRA_DIST   	= $(wildcard *.str)
check_PROGRAMS 	= asfix-abstractions-test
TESTS 		= asfix-abstractions-test
BOOTCLEANFILES 	= asfix-abstractions-test.c

nodist_asfix_abstractions_test_SOURCES=asfix-abstractions-test.c
