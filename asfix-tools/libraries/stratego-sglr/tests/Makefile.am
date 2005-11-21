include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_PROGRAMS = stratego-sglr-tests
TESTS = $(check_PROGRAMS)

noinst_DATA = ExpId.tbl ExpId.str ExpInt.tbl ExpInt.str ExpIntAmb.tbl 

STRINCLUDES = $(STRATEGO_SGLR_STRCFLAGS)

LDADD     += $(STRATEGO_SGLR_LIBS) $(SSL_LIBS) 
STRCFLAGS  = --main main-$* --format-check 0

EXTRA_DIST = \
  $(wildcard *.str) \
  $(wildcard *.meta) \
  $(wildcard *.def) \
  $(wildcard *.exp)

CLEANFILES = $(wildcard *.c) $(wildcard *.dep)

nodist_stratego_sglr_tests_SOURCES = stratego-sglr-tests.c
