include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_PROGRAMS = lib-test test1 test2 test3 inherit-test

SCFLAGS        = --main main-$* -O 2
STRINCLUDES    = -I $(top_srcdir)/syn \
		 -I $(top_srcdir)/sig \
		 -I $(top_srcdir)/lib \
		 -I $(top_srcdir)/lib/contract \
		 -I $(top_srcdir)/lib/core \
		 -I $(top_srcdir)/lib/dispatch \
		 -I $(top_srcdir)/lib/trans \
		 -I $(top_srcdir)/lib/io 

output         = $(wildcard *.exp) $(wildcard *.out) $(wildcard *.inp) \
		 $(wildcard *.bo) XTC.test XTC.save XTC.dump

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.xtc) XTC.lib-test
CLEANFILES     = $(wildcard *.dep) $(output)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree)

inherit_xtd    = $(top_srcdir)/def/sglr-xtd.xtd

check: check1 check2 check3 

# Check1: - Register test components in testing repository XTC.test
#         - Run test1 component and diff with expected result
check1: test1 test2 test3
	$(top_srcdir)/src/xtc -r XTC.test -I $(top_srcdir)/def \
	register -t test1 -t test2 -t test3 -V $(VERSION) -l `pwd` \
	--verbose 10
	echo "A" > test1.inp
	echo "(((A,A),(A,A)),((A,A),(A,A)))" > test1.exp
	XTC_REPOSITORY=XTC.test ./test1 -i test1.inp -o test1.bo \
	--check --enforce --verbose 10
	$(ATERM)/bin/baffle -wt -i test1.bo -o test1.out
	diff test1.exp test1.out

# Check2: - Import strategoxt repository (migrate if needed) in XTC.test
#         - Run xtc-test testsuite on test.XTC
check2: lib-test
	$(top_srcdir)/src/xtc -r XTC.test import \
	$(STRATEGOXT)/share/strategoxt/XTC 
	./lib-test -r XTC.test --verbose 10

# Check3: - Tests inheritance mechanism of XTC
check3: inherit-test
	rm -f XTC.test

	$(top_srcdir)/src/xtc -r XTC.test import \
	$(STRATEGOXT)/share/strategoxt/XTC 

	$(top_srcdir)/src/xtc -r XTC.test -I $(top_srcdir)/def \
	register -t sglr-xtd -l `pwd`
	$(top_srcdir)/src/xtc -r XTC.test -I $(top_srcdir)/def \
	register -t Xtd.tbl -V $(VERSION) -l $(top_srcdir)/syn

	XTC_REPOSITORY=XTC.test ./inherit-test -i $(inherit_xtd) \
	--verbose 10 | $(ATERM)/bin/baffle -wt -o inherit-test.out

	$(top_srcdir)/src/parse-xtd -i $(inherit_xtd) | \
	$(ATERM)/bin/baffle -wt -o parse-xtd.out

	diff inherit-test.out parse-xtd.out
