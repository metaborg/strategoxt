include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt

SUBDIRS      	= data

ASFIX_LIB    	= $(subst .str,.rtree,$(wildcard *.str))
EXTRA_DIST   	= $(wildcard *.str) $(ASFIX_LIB)
pkgdata_DATA 	= $(ASFIX_LIB)

STRINCLUDES     = -I $(SDF_FRONT)/share/sdf-front

check_PROGRAMS 	= asfix-abstractions-test
TESTS 		= asfix-abstractions-test

BOOTCLEANFILES 	= asfix-abstractions-test.c
