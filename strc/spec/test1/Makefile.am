SINCLUDES 	= -I $(SSL)/share/ssl -I $(SRTS)/share/srts
AM_LDFLAGS	= -L$(SRTS)/lib/srts -L$(ATERM)/lib 

check_PROGRAMS 	= test02 test03 test04 test05			    \
		  test06 test07 test08 test09 test10 test11 test12  \
		  test13 test14 test15 test16 test17 test18 test19  \
		  test20 test21 test22 test23 test24 test25 \
		  test27 test28a test28 test29 test30 test31 test32 \
		  test33 test34 test35 test36 test37 test38 test39  \
		  test40 test41 test42 test43 test44 test45	    \
		  test46 test47 test48 test49 test50 test51 test52  \
		  test53 test54 test55 test56 test57 test58 test59  \
		  io-test10 io-test11 io-test1 io-test2 io-test3  

# test26 global choice

TESTS 		= $(check_PROGRAMS)

STRATEGORUNLIBS = -lstratego.opt -lstratego-choice.opt -lstratego-lib.opt -lATerm-gcc -lm
LDADD 		= $(STRATEGORUNLIBS)
test50_LDADD 	= bar.o $(STRATEGORUNLIBS)
test51_LDADD 	= -L$(SRTS)/lib/srts -lliblib $(STRATEGORUNLIBS)

bar.o 		: bar.c

CLEANFILES 	= *.o *.ac *.s[0-9]* *.f* *.ac *.c.abox \
		  *.tree *.mtree *.rtree *.txt *.s5fused libtest*.c \
		  *.dep *test*.c *.out

EXTRA_DIST 	= $(wildcard *.str) make-rules io-test*.in bar.c

include make-rules
include $(wildcard *.dep)

bootinstall:



