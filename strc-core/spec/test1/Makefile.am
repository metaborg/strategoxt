SINCLUDES 	= -I $(prefix)/share/stratego-lib -I $(prefix)/share/srts \
	          -I $(top_srcdir)/../asfix-tools/src/implode
AM_LDFLAGS	= -L$(prefix)/lib/stratego-lib -L$(prefix)/lib/srts -L$(ATERM)/lib -g

STRATEGORUNLIBS = -lstratego-runtime-opt -lstratego-runtime-choice-opt \
		  -lstratego-lib-native-opt -lATerm-gcc -lm

STRATEGOLIB     = -L$(STRATEGO_LIB)/lib/stratego-lib -lstratego-lib 
LDADD 		= $(STRATEGORUNLIBS)

if XT_DARWIN
AM_LDFLAGS += -bind_at_load
else
AM_LDFLAGS +=
endif


check_PROGRAMS 	= test01 test02 test03 test04 test05			    \
		  test06 test07 test08 test09 test10 test11 test12  \
		  test13 test14 test15 test16 test17 test18 test19  \
		  test20 test21 test22 test23 test24 test25 \
		  test27 test28a test28 test29 test30 test31 test32 \
		  test33 test34 test35 test36 test37 test38 test39  \
		  test40 test41 test43 test45	    \
		  test46 test47 test48 test49 test50 test51   \
		  test54 test56 test57 test58 test59 \
		  test60 test61 test62 test63 test64 test65 test66  \
                  test67 test68 test69 test70 test71 \
		  io-test10 io-test11 io-test1 io-test2 io-test3 \
                  qcons-test01 qcons-test02 qcons-test03 qcons-test04 \
		  let-test \
		  cs-test01

check_DATA = ExpStratego.tbl Expressions.str Expressions.tbl

# test26 global choice
# test44 contexts
# test50 external definitions
# test51 import liblib
# test52 override rules (old dynamic rules no longer supported)
# test53 extend rules (old dynamic rules no longer supported)
# test55 override rules (old dynamic rules no longer supported)

TESTS 		= $(check_PROGRAMS)


test50_LDADD 	= bar.o $(STRATEGORUNLIBS)
test51_LDADD 	= $(STRATEGOLIB) $(STRATEGORUNLIBS)
test70_LDADD 	= $(STRATEGOLIB) $(STRATEGORUNLIBS)
test71_LDADD 	= $(STRATEGOLIB) $(STRATEGORUNLIBS)

bar.o 		: bar.c

CLEANFILES 	= *.o *.ac *.s[0-9]* *.f* *.ac *.c.abox \
		  *.tree *.mtree *.rtree *.txt *.s5fused libtest*.c \
		  *.dep *test*.c *.out *.ttxt *.txt *.b[0-9]* 

EXTRA_DIST 	= $(wildcard *.str) Expressions.sdf ExpStratego.sdf make-rules io-test*.in bar.c

include make-rules
#include $(wildcard *.dep)

bootinstall:

nodist_test01_SOURCES = test01.c
nodist_test02_SOURCES = test02.c
nodist_test03_SOURCES = test03.c
nodist_test04_SOURCES = test04.c
nodist_test05_SOURCES = test05.c
nodist_test06_SOURCES = test06.c
nodist_test07_SOURCES = test07.c
nodist_test08_SOURCES = test08.c
nodist_test09_SOURCES = test09.c
nodist_test10_SOURCES = test10.c
nodist_test11_SOURCES = test11.c
nodist_test12_SOURCES = test12.c
nodist_test13_SOURCES = test13.c
nodist_test14_SOURCES = test14.c
nodist_test15_SOURCES = test15.c
nodist_test16_SOURCES = test16.c
nodist_test17_SOURCES = test17.c
nodist_test18_SOURCES = test18.c
nodist_test19_SOURCES = test19.c
nodist_test20_SOURCES = test20.c
nodist_test21_SOURCES = test21.c
nodist_test22_SOURCES = test22.c
nodist_test23_SOURCES = test23.c
nodist_test24_SOURCES = test24.c
nodist_test25_SOURCES = test25.c
nodist_test27_SOURCES = test27.c
nodist_test28a_SOURCES = test28a.c
nodist_test28_SOURCES = test28.c
nodist_test29_SOURCES = test29.c
nodist_test30_SOURCES = test30.c
nodist_test31_SOURCES = test31.c
nodist_test32_SOURCES = test32.c
nodist_test33_SOURCES = test33.c
nodist_test34_SOURCES = test34.c
nodist_test35_SOURCES = test35.c
nodist_test36_SOURCES = test36.c
nodist_test37_SOURCES = test37.c
nodist_test38_SOURCES = test38.c
nodist_test39_SOURCES = test39.c
nodist_test40_SOURCES = test40.c
nodist_test41_SOURCES = test41.c
nodist_test43_SOURCES = test43.c
#nodist_test44_SOURCES = test44.c
nodist_test45_SOURCES = test45.c
nodist_test46_SOURCES = test46.c
nodist_test47_SOURCES = test47.c
nodist_test48_SOURCES = test48.c
nodist_test49_SOURCES = test49.c
nodist_test50_SOURCES = test50.c
nodist_test51_SOURCES = test51.c
#nodist_test52_SOURCES = test52.c
#nodist_test53_SOURCES = test53.c
nodist_test54_SOURCES = test54.c
#nodist_test55_SOURCES = test55.c
nodist_test56_SOURCES = test56.c
nodist_test57_SOURCES = test57.c
nodist_test58_SOURCES = test58.c
nodist_test59_SOURCES = test59.c
nodist_test60_SOURCES = test60.c
nodist_test61_SOURCES = test61.c
nodist_test62_SOURCES = test62.c
nodist_test63_SOURCES = test63.c
nodist_test64_SOURCES = test64.c
nodist_test65_SOURCES = test65.c
nodist_test66_SOURCES = test66.c
nodist_test67_SOURCES = test67.c
nodist_test68_SOURCES = test68.c
nodist_test69_SOURCES = test69.c
nodist_test70_SOURCES = test70.c
nodist_test71_SOURCES = test71.c

nodist_io_test10_SOURCES = io-test10.c
nodist_io_test11_SOURCES = io-test11.c
nodist_io_test1_SOURCES = io-test1.c
nodist_io_test2_SOURCES = io-test2.c
nodist_io_test3_SOURCES = io-test3.c

nodist_qcons_test01_SOURCES = qcons-test01.c
nodist_qcons_test02_SOURCES = qcons-test02.c
nodist_qcons_test03_SOURCES = qcons-test03.c
nodist_qcons_test04_SOURCES = qcons-test04.c

nodist_let_test_SOURCES = let-test.c

nodist_cs_test01_SOURCES = cs-test01.c

SDF2RTG_FLAGS = --main $*
PGEN_FLAGS = -m $*
SDFINCLUDES = -I $(top_srcdir)/../stratego-front/syn

.def.rtg :
	$(STRATEGO_REGULAR)/bin/sdf2rtg $(SDF2RTG_FLAGS) -i $< -o $@

.rtg.str :
	$(STRATEGO_REGULAR)/bin/rtg2sig --module `basename "$*"` -i $< -o $@

.sdf.def :
	$(SDF_FRONT)/bin/pack-sdf $(SDFINCLUDES) -i $< -o $@ --dep $*.dep

.def.tbl :
	$(PGEN)/bin/sdf2table $(PGEN_FLAGS) -i $< -o $@

cs-test01.tree : ExpStratego.tbl Expressions.def Expressions.str

ExpStratego.def : Expressions.sdf ExpStratego.sdf


%.atree : %.str
	$(top_srcdir)/../stratego-front/parse/parse-stratego -i $< -o $@ --assimilation off --verbose 4

%.btree : %.str
	$(top_srcdir)/../stratego-front/parse/parse-stratego -i $< -o $@ --assimilation on --verbose 4
