include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

BOOTCLEAN_SUBDIRS = $(SUBDIRS)

bin_PROGRAMS 	= xtc
pkgdata_DATA 	= xtc-lib.rtree xtc-rep.rtree \
		  xtc-proc.rtree xtc-register.rtree
SCFLAGS 	= --main $* $(XTCFLAGS)
xtc_LDFLAGS     = $(AM_LDFLAGS) -static

EXTRA_DIST	= $(pkgdata_DATA) $(wildcard *.str) \
		  $(wildcard *.meta) $(pkgdata_DATA)
CLEANFILES	= $(wildcard *.dep)
BOOTCLEANFILES	= $(wildcard *.c) $(pkgdata_DATA)

check_PROGRAMS  = test1 test2 test3

check: check1 check2

check1 :
	./xtc -r TEST_REPOSITORY register -t test1 -t test2 -t test3 \
		-V $(VERSION) -l `pwd` --verbose 10
	echo "A" > test1.inp
	echo "(((A,A),(A,A)),((A,A),(A,A)))" > test1.exp
	XTC_REPOSITORY=TEST_REPOSITORY ./test1 -i test1.inp -o test1.bo 
	$(ATERM)/bin/baffle -wt -i test1.bo -o test1.out
	diff test1.exp test1.out

check2 :
	./xtc -r TEST_REPOSITORY2 import $(REPOSITORY)
	./xtc -r TEST_REPOSITORY2 query -t sglr

nodist_test1_SOURCES = test1.c 
nodist_test2_SOURCES = test2.c 
nodist_test3_SOURCES = test3.c
