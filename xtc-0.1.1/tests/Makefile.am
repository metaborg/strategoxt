include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_PROGRAMS = xtc-test test1 test2 test3
SCFLAGS        = --main main-$*
STRINCLUDES    = -I ../sig \
		 -I ../src \
		 -I ../src/core \
		 -I ../src/trans \
		 -I ../src/dispatch \
		 -I ../src/contract \
		 -I ../src/io

output         = $(wildcard *.exp) $(wildcard *.out) $(wildcard *.inp) \
		 $(wildcard *.bo) test.XTC save.XTC dump.XTC strategoxt.XTC

EXTRA_DIST     = $(wildcard *.str) repository1.XTC
CLEANFILES     = $(wildcard *.dep) $(output)
BOOTCLEANFILES = $(wildcard *.c)

check: check1 check2

# Check1: - Register test components in testing repository test.XTC
#         - Run test1 component and diff with expected result
check1:
	../tools/xtc -r test.XTC register -t test1 -t test2 -t test3 \
	-V $(VERSION) -l `pwd` --verbose 10
	echo "A" > test1.inp
	echo "(((A,A),(A,A)),((A,A),(A,A)))" > test1.exp
	XTC_REPOSITORY=test.XTC ./test1 -i test1.inp -o test1.bo --check --enforce --verbose 10
	$(ATERM)/bin/baffle -wt -i test1.bo -o test1.out
	diff test1.exp test1.out

# Check2: - Import strategoxt repository (migrate if needed) in test.XTC
#         - Run xtc-test testsuite on test.XTC
check2:
	../tools/migrate-xtc -i $(STRATEGOXT)/share/strategoxt/XTC \
	  -o strategoxt.XTC && \
	../tools/xtc -r test.XTC import `pwd`/strategoxt.XTC || \
	../tools/xtc -r test.XTC import $(REPOSITORY)
	./xtc-test -r test.XTC --verbose 10	

