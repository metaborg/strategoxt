.PRECIOUS: %.ac %.c

TESTFILES 	= $(wildcard *-test.str)

TESTBINS 	= $(subst .str,.bin,$(TESTFILES))
TESTIBINS 	= $(subst .str,.ibin,$(TESTFILES))
TESTIRUNS 	= $(subst .str,.irun,$(TESTFILES))

TESTS 		= $(TESTBINS)

INSTALLTESTS 	= $(TESTIBINS)

check-strc: $(TESTIRUNS)

EXTRA_DIST 	= $(wildcard *.rtree) testlib.dummy

CLEANFILES 	= $(TESTS) $(TESTIBINS) *.o *.c *.ac *.s? *.s?? *.txt *.s?.check *.trm \
		  *.tree *.tree? *.dep *.c.abox *.r testlib.dummy \
		  *.rtree *.str *.bin

pkgdata_DATA 	= testlib.dummy

testlib.dummy :
	-cp $(STRATEGO_LIB)/share/stratego-lib/*.rtree .
	-cp $(STRATEGO_LIB)/share/stratego-lib/tests/*.str .
	touch $@

include $(srcdir)/../test1/make-rules
include $(wildcard *.dep)
