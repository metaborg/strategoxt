include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_PROGRAMS = abox2text-tests ast2text-tests

STRCFLAGS = \
  --main main-$* \
  -I $(top_srcdir)/../gpp/syn/box \
  $(STRATEGO_GPP_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_UNINSTALLED_STRCFLAGS)
  
SCOMPILE = $(STRC_UNINSTALLED)

abox2text_tests_LDADD    = $(STRATEGO_GPP_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)
abox2text_tests_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)
ast2text_tests_LDADD     = $(STRATEGO_GPP_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)
ast2text_tests_CPPFLAGS  = $(STRATEGO_UNINSTALLED_CFLAGS)

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.pp)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

nodist_ast2text_tests_SOURCES = ast2text-tests.c
nodist_abox2text_tests_SOURCES = abox2text-tests.c
