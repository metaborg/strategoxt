include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

BOOTCLEAN_SUBDIRS = $(SUBDIRS)

bin_PROGRAMS 	= xtc cp-file xtc-call xtc-get
pkgdata_DATA 	= xtc-lib.rtree xtc-rep.rtree \
		  xtc-proc.rtree xtc-register.rtree
SCFLAGS 	= --main $* $(XTCFLAGS)
EXTRA_DIST	= $(pkgdata_DATA) $(wildcard *.str) \
		  $(wildcard *.meta) $(pkgdata_DATA)
CLEANFILES	= $(wildcard *.dep)
BOOTCLEANFILES	= xtc.c  cp-file.c xtc-call.c xtc-get.c

check_PROGRAMS  = test1 test2 test3

check :
	./xtc -r TEST_REPOSITORY register -t test1 -t test2 -t test3 -V $(VERSION) -l `pwd`
	echo "A" > test1.inp
	echo "(((A,A),(A,A)),((A,A),(A,A)))" > test1.exp
	XTC_REPOSITORY=TEST_REPOSITORY ./test1 -i test1.inp -o test1.bo 
	$(ATERM)/bin/baffle -wt -i test1.bo -o test1.out
	diff test1.exp test1.out

