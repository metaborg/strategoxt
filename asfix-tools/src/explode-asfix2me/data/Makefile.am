TESTS = test1.sh test2.sh test3.sh test4.sh test5.sh test6.sh \
	test7.sh test8.sh test9.sh test10.sh


CLEANFILES      = $(TESTS) $(TESTS:%.sh=%.out) tests.tbl

TESTSET_IN      = $(TESTS:%.sh=%.in) 
TESTSET_CORRECT = $(TESTS:%.sh=%.correct) 

testset: $(TESTSET_IN) $(TESTSET_CORRECT)


%.tbl : %.def
	sdf2table -i $< -o $@

%.in: %.trm tests.tbl
	sglr -p tests.tbl -i $< -o $@

%.correct : %.in
	../explode-asfix2me < $*.in > $*.correct

%.sh : Makefile
	( \
	   echo "../explode-asfix2me < $*.in > $*.out" ;\
	   echo "diff $*.out $*.correct" ;\
	) > $@ \
	&& chmod +x $@
	
	