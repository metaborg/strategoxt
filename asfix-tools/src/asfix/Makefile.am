include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt

SUBDIRS      	= data

ASFIX_LIB    	= $(wildcard *.r)
EXTRA_DIST   	= $(ASFIX_LIB)

pkgdata_DATA 	= $(ASFIX_LIB)

CLEANFILES   	= asfix-abstractions-test

check_PROGRAMS 	= asfix-abstractions-test
TESTS 		= asfix-abstractions-test

BOOTCLEANFILES 	= asfix-abstractions-test.c
