include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_PROGRAMS = abox2text-tests ast2text-tests

STRCFLAGS = \
  --main main-$* \
  -I ../lib \
  -I ../../stratego-sglr/lib \
  -I $(top_srcdir)/../gpp/syn/box

LDADD += ../lib/libstratego-gpp.la ../../stratego-sglr/lib/libstratego-sglr.la $(SSL_LIBS) 

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.pp)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

nodist_ast2text_tests_SOURCES = ast2text-tests.c
nodist_abox2text_tests_SOURCES = abox2text-tests.c
