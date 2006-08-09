SINCLUDES = \
  -I $(top_srcdir)/../stratego-libraries/lib/spec \
  -I $(prefix)/share/stratego-lib \
  -I $(prefix)/share/srts \
  -I $(top_srcdir)/../asfix-tools/src/implode \
  -I $(top_srcdir)/lib

AM_LDFLAGS = -L$(prefix)/lib -L$(ATERM)/lib $(STR_LDFLAGS)
AM_CFLAGS = -I$(prefix)/include -I$(ATERM)/include $(STR_CFLAGS)

STRATEGORUNLIBS = -lstratego-lib-native -lstratego-runtime -lATerm -lm
STRATEGOLIB     = -L$(prefix)/lib -lstratego-lib
LDADD 		= $(STRATEGORUNLIBS)



classictests =									 \
		  test01 test02 test03 test04 test05				 \
		  test06 test07 test08 test09 test10 test11 test12		 \
		  test13 test14 test15 test16 test17 test18 test19		 \
		  test20 test21 test22 test23 test24 test25			 \
		  test27 test28a test28b test28 test29 test30 test31 test32	 \
		  test33 test34 test35 test36 test37 test38 test39		 \
		  test40 test41 test43 test45					 \
		  test46 test47 test49 test50 test51 test53		 \
		  test54 test56 test57 test58 test59				 \
		  test60 test61 test62 test63 test64 test65			 \
                  test67 test68 test69 test70 test72 test73 test74		 \
		  test75 test76 test77 test78 test79 test80 test81 test82 test83 \
		  test84 test85 test86 test87 test88 test89 test90		 \
		  test91 test92 test93 test94 test95 test96			 \
		  test97 test98	test99 test100				 \
		  io-test10 io-test11 io-test1 io-test2 io-test3 io-test4	 \
                  qcons-test01 qcons-test02 qcons-test03 qcons-test04		 \
                  test-chain01 test-chain02 test-chain03			 \
		  let-test							 \
		  nested-defs01							 \
		  cs-test01							 \
	          static-links


ngtests =									 \
		  test01 test02 test03 test04 test05				 \
		  test06 test07 test08 test09 test10 test11 test12		 \
		  test13 test14 test15 test16 test17 test18 test19		 \
		  test20 test21 test22 test23 test24 test25			 \
		  test27 test28a test28b test29 test30 test31 test32	 \
		  test34 test35 test36 test37 test38 test39		 \
		  test40 test41 test43 test45					 \
		  test46 test47 test49 test50 test51 test53		 \
		  test54 test58 test59				 \
		  test60 test61 test62 test63 test64 test65			 \
                  test67 test68 test69 test70 test72 test73 test74		 \
		  test75 test76 test77 test78 test79 test80 test81 test82 test83 \
		  test84 test85 test86 test87 test88 test89 test90		 \
		  test91 test92 test93 test94 test95 test96			 \
		  test97 test98	test99 test100					 \
		  io-test10 io-test11 io-test1 io-test2 io-test3 io-test4	 \
                  qcons-test01 qcons-test02 qcons-test03 qcons-test04		 \
                  test-chain01 test-chain02 test-chain03			 \
		  let-test							 \
		  nested-defs01							 \
		  cs-test01							 \
	          static-links

check_PROGRAMS 	= $(ngtests)
#$(classictests) 
#$(ngtests)

check_DATA = ExpStratego.tbl Expressions.str Expressions.tbl

# test26 global choice
# test44 contexts

TESTS 		= $(check_PROGRAMS)

cs_test01_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
io_test10_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
io_test11_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
io_test1_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
io_test2_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
io_test3_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
io_test4_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
let_test_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test13_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test16_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test17_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test18_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test19_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test21_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test22_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test28_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test29_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test31_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test33_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test34_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test37_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test38_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test40_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test44_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test46_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test48_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test49_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test50_LDADD = bar.o $(STRATEGORUNLIBS)
test51_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test53_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test54_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test56_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test57_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test60_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test67_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test68_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test69_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test70_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test72_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test73_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test74_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test75_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test76_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test77_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test78_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test79_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test80_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test81_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test82_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test83_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test85_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test86_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test87_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test88_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test89_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test90_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test91_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test92_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test93_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test94_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test95_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test96_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test99_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)

test100_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)

test_chain01_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test_chain02_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)
test_chain03_LDADD = $(STRATEGOLIB) $(STRATEGORUNLIBS)

bar.o 		: bar.c

CLEANFILES 	= *.o *.ac *.s[0-9]* *.f* *.ac *.c.abox \
		  *.tree *.mtree *.rtree *.txt *.s5fused libtest*.c \
		  *.dep *test*.c *.out *.ttxt *.txt *.b[0-9]*  *.opt*

EXTRA_DIST = $(wildcard *.str) $(wildcard *.meta) Expressions.sdf \
             ExpStratego.sdf make-rules io-test*.in bar.c	  \
             static-links-include.h

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
nodist_test28b_SOURCES = test28b.c
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
nodist_test53_SOURCES = test53.c
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
#nodist_test66_SOURCES = test66.c
nodist_test67_SOURCES = test67.c
nodist_test68_SOURCES = test68.c
nodist_test69_SOURCES = test69.c
nodist_test70_SOURCES = test70.c
nodist_test72_SOURCES = test72.c
nodist_test73_SOURCES = test73.c
nodist_test74_SOURCES = test74.c
nodist_test75_SOURCES = test75.c
nodist_test76_SOURCES = test76.c
nodist_test77_SOURCES = test77.c
nodist_test78_SOURCES = test78.c
nodist_test79_SOURCES = test79.c
nodist_test80_SOURCES = test80.c
nodist_test81_SOURCES = test81.c
nodist_test82_SOURCES = test82.c
nodist_test83_SOURCES = test83.c
nodist_test84_SOURCES = test84.c
nodist_test85_SOURCES = test85.c
nodist_test86_SOURCES = test86.c
nodist_test87_SOURCES = test87.c
nodist_test88_SOURCES = test88.c
nodist_test89_SOURCES = test89.c
nodist_test90_SOURCES = test90.c
nodist_test91_SOURCES = test91.c
nodist_test92_SOURCES = test92.c
nodist_test93_SOURCES = test93.c
nodist_test94_SOURCES = test94.c
nodist_test95_SOURCES = test95.c
nodist_test96_SOURCES = test96.c
nodist_test97_SOURCES = test97.c
nodist_test98_SOURCES = test98.c
nodist_test99_SOURCES = test99.c
nodist_test100_SOURCES = test100.c

nodist_test_chain01_SOURCES = test-chain01.c
nodist_test_chain02_SOURCES = test-chain02.c
nodist_test_chain03_SOURCES = test-chain03.c

nodist_io_test10_SOURCES = io-test10.c
nodist_io_test11_SOURCES = io-test11.c
nodist_io_test1_SOURCES = io-test1.c
nodist_io_test2_SOURCES = io-test2.c
nodist_io_test3_SOURCES = io-test3.c
nodist_io_test4_SOURCES = io-test4.c

nodist_qcons_test01_SOURCES = qcons-test01.c
nodist_qcons_test02_SOURCES = qcons-test02.c
nodist_qcons_test03_SOURCES = qcons-test03.c
nodist_qcons_test04_SOURCES = qcons-test04.c

nodist_let_test_SOURCES = let-test.c

nodist_nested_defs01_SOURCES = nested-defs01.c

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

gcc-version : 
	gcc --version
