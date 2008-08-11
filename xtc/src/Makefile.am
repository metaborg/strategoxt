include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

BOOTCLEAN_SUBDIRS = $(SUBDIRS)

bin_PROGRAMS 	= xtc 
pkgdata_DATA 	= xtc-lib.str xtc-dir.str

STRCFLAGS 	= --main $* -I $(srcdir) \
  $(STRATEGO_XTC_STRCFLAGS) \
  $(STRATEGO_LIB_STRCFLAGS) \
  $(STRATEGO_RUNTIME_STRCFLAGS)
xtc_CFLAGS	= \
  $(STRATEGO_XTC_CFLAGS) \
  $(STRATEGO_LIB_CFLAGS) \
  $(STRATEGO_RUNTIME_CFLAGS)
xtc_LDADD       = \
  $(STRATEGO_XTC_LIBS) \
  $(STRATEGO_LIB_LIBS) \
  $(STRATEGO_RUNTIME_LIBS)

EXTRA_DIST	= $(call srcwildcard,*.str) $(call srcwildcard,*.meta)
CLEANFILES	= $(wildcard *.dep)
BOOTCLEANFILES	= $(wildcard *.c)

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
	./xtc -r TEST_REPOSITORY2 import $(BUILD_REPOSITORY)
	./xtc -r TEST_REPOSITORY2 query -t sglr

nodist_test1_SOURCES = test1.c 
test1_LDADD = \
  $(STRATEGO_XTC_LIBS) \
  $(STRATEGO_LIB_LIBS) \
  $(STRATEGO_RUNTIME_LIBS)

nodist_test2_SOURCES = test2.c 
test2_LDADD = \
  $(STRATEGO_XTC_LIBS) \
  $(STRATEGO_LIB_LIBS) \
  $(STRATEGO_RUNTIME_LIBS)

nodist_test3_SOURCES = test3.c
test3_LDADD = \
  $(STRATEGO_XTC_LIBS) \
  $(STRATEGO_LIB_LIBS) \
  $(STRATEGO_RUNTIME_LIBS)
