.PRECIOUS: %.ac %.c

TESTFILES 	= $(wildcard *-test.str)

TESTBINS 	= $(subst .str,.bin,$(TESTFILES))
TESTIBINS 	= $(subst .str,.ibin,$(TESTFILES))
TESTIRUNS 	= $(subst .str,.irun,$(TESTFILES))

TESTS 		= $(TESTBINS)

INSTALLTESTS 	= $(TESTIBINS)

check-strc: $(TESTIRUNS)

EXTRA_DIST 	= $(wildcard *.rtree) testlib.dummy

SINCLUDES 	= -I $(SSL)/share/ssl

CLEANFILES 	= $(TESTS) $(TESTIBINS) *.o *.c *.ac *.s? *.s?? *.txt *.s?.check *.trm \
		  *.tree *.tree? *.dep *.c.abox *.r testlib.dummy \
		  *.rtree *.str *.bin

pkgdata_DATA 	= testlib.dummy

testlib.dummy :
	-cp $(SSL)/share/ssl/*.rtree .
	-cp $(SSL)/share/ssl/tests/*.str .
	touch $@

include $(srcdir)/../test1/make-rules
include $(wildcard *.dep)
