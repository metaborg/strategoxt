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

STRSGLR = ../../../stratego-libraries/stratego-sglr/lib

STRINCLUDES    	= -I $(top_srcdir)/libraries -I til/syn -I til/sim -I til/opt -I $(STRSGLR)
STRCFLAGS       = --format-check -1

PREFIX_LIBS          = -L$(prefix)/lib -lstratego-lib -lstratego-lib-native -lstratego-runtime -L$(ATERM)/lib -lATerm -lm
PREFIX_CPPFLAGS      = -I $(prefix)/include -I $(ATERM)/include

nodist_dr_all_tests_SOURCES = dr-all-tests.c 
dr_all_tests_CPPFLAGS       = -I $(prefix)/include -I $(ATERM)/include $(PREFIX_CPPFLAGS)
dr_all_tests_LDADD          = $(STRSGLR)/libstratego-sglr.la $(PREFIX_LIBS)
