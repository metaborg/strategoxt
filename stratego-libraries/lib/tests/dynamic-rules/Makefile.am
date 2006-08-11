include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

SUBDIRS = til
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

# pkgtestsdatadir   = $(pkgdatadir)/tests/dynamic-rules
# pkgtestsdata_DATA = $(wildcard *.str)

check_PROGRAMS  = dr-scope-tests dr-propconst-tests-1 dr-propconst-tests-2 dr-dce-tests dr-varunion-tests
TESTS          	= $(check_PROGRAMS)
EXTRA_DIST     	= $(wildcard *.str)
CLEANFILES     	= $(wildcard *.dep)
BOOTCLEANFILES 	= $(wildcard *.c)

STRINCLUDES    	= -I til/syn -I til/sim -I til/opt $(STRATEGO_UNINSTALLED_STRCFLAGS) $(STRATEGO_SGLR_UNINSTALLED_STRCFLAGS)
STRCFLAGS       = --format-check -1

if !XT_DIST_CHECK_SOURCES
nodist_dr_all_tests_SOURCES = dr-all-tests.c
nodist_dr_scope_tests_SOURCES = dr-scope-tests.c
nodist_dr_propconst_tests_1_SOURCES = dr-propconst-tests-1.c
nodist_dr_propconst_tests_2_SOURCES = dr-propconst-tests-2.c
nodist_dr_dce_tests_SOURCES = dr-dce-tests.c
nodist_dr_varunion_tests_SOURCES = dr-varunion-tests.c
else
dr_all_tests_SOURCES = dr-all-tests.c
dr_scope_tests_SOURCES = dr-scope-tests.c
dr_propconst_tests_1_SOURCES = dr-propconst-tests-1.c
dr_propconst_tests_2_SOURCES = dr-propconst-tests-2.c
dr_dce_tests_SOURCES = dr-dce-tests.c
dr_varunion_tests_SOURCES = dr-varunion-tests.c
endif

dr_all_tests_CPPFLAGS       = $(STRATEGO_UNINSTALLED_CFLAGS)
dr_all_tests_LDADD          = $(STRATEGO_SGLR_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LDADD)

dr_scope_tests_CPPFLAGS       = $(STRATEGO_UNINSTALLED_CFLAGS)
dr_scope_tests_LDADD          = $(STRATEGO_SGLR_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LDADD)

dr_propconst_tests_1_CPPFLAGS       = $(STRATEGO_UNINSTALLED_CFLAGS)
dr_propconst_tests_1_LDADD          = $(STRATEGO_SGLR_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LDADD)

dr_propconst_tests_2_CPPFLAGS       = $(STRATEGO_UNINSTALLED_CFLAGS)
dr_propconst_tests_2_LDADD          = $(STRATEGO_SGLR_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LDADD)

dr_dce_tests_CPPFLAGS       = $(STRATEGO_UNINSTALLED_CFLAGS)
dr_dce_tests_LDADD          = $(STRATEGO_SGLR_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LDADD)

dr_varunion_tests_CPPFLAGS       = $(STRATEGO_UNINSTALLED_CFLAGS)
dr_varunion_tests_LDADD          = $(STRATEGO_SGLR_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LDADD)
