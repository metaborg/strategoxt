include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

SUBDIRS = til
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

# pkgtestsdatadir   = $(pkgdatadir)/tests/dynamic-rules
# pkgtestsdata_DATA = $(wildcard *.str)

check_PROGRAMS  = dr-all-tests
TESTS          	= $(check_PROGRAMS)
EXTRA_DIST     	= $(wildcard *.str)
CLEANFILES     	= $(wildcard *.dep)
BOOTCLEANFILES 	= $(wildcard *.c)

STRINCLUDES    	= -I til/syn -I til/sim -I til/opt $(STRATEGO_UNINSTALLED_STRCFLAGS) $(STRATEGO_SGLR_UNINSTALLED_STRCFLAGS)
STRCFLAGS       = --format-check -1

nodist_dr_all_tests_SOURCES = dr-all-tests.c 
dr_all_tests_CPPFLAGS       = $(STRATEGO_UNINSTALLED_CFLAGS)
dr_all_tests_LDADD          = $(STRATEGO_SGLR_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LDADD)
