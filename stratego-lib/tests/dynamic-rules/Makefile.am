include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS = til
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

STRC=$(prefix)

pkgtestsdatadir   = $(pkgdatadir)/tests/dynamic-rules
pkgtestsdata_DATA = $(wildcard *.str)

check_PROGRAMS = \
  dr-all-tests

TESTS          	= $(check_PROGRAMS)
EXTRA_DIST     	= $(wildcard *.str)

CLEANFILES     	= $(wildcard *.dep)
BOOTCLEANFILES 	= $(wildcard *.c)

STRINCLUDES    	= -I $(top_srcdir)/libraries -I til/syn -I til/sim -I til/opt $(STRATEGO_SGLR_STRCFLAGS)
STRCFLAGS       = --format-check -1

nodist_dr_all_tests_SOURCES = dr-all-tests.c 
dr_all_tests_CPPFLAGS       = -I $(prefix)/include -I $(ATERM)/include
dr_all_tests_LDADD          = $(STRATEGO_SGLR_LIBS)
