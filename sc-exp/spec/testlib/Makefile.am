.PRECIOUS: %.ac %.c

TESTS 		= $(subst .str,.bin,$(wildcard *-test.str))

EXTRA_DIST 	= $(wildcard *.rtree) testlib.dummy

SINCLUDES 	= -I $(SSL)/share/ssl

CLEANFILES 	= $(TESTS) *.o *.c *.ac *.s? *.s?.check *.trm \
		  *.tree *.tree? *.dep *.c.abox *.r testlib.dummy

pkgdata_DATA 	= testlib.dummy

testlib.dummy :
	-cp $(SSL)/share/ssl/*.rtree .
	-cp $(SSL)/share/ssl/tests/*.str .
	touch $@

include $(srcdir)/../test1/make-rules
include $(wildcard *.dep)
