include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pgkdatadocdir = ${pkgdatadir}/doc

check_PROGRAMS = accept-test migrate-tuples-test annotation-props-test \
options-test annotations-test option-test apply-test parallel-test     \
char-test parse-options-test client-test reals-test connect-test       \
rename-test dir-test scoped-finite-map-test env-traversal-test	       \
server-test exec-test share-test integers-test simple-traversal-test   \
int-list-test strcmp-test io-test string-test list-basic-test	       \
substitution-test list-filter-test tables-test list-index-test	       \
template-test list-misc-test term-zip-test list-set-test time-test     \
list-sort-test tuple-test list-zip-test unification-test

SUBDIRS 	= data

SCFLAGS 	= -I $(srcdir)

pkgdata_DATA 	= $(subst .str,.rtree,$(wildcard *.str))

pgkdatadoc_DATA = $(wildcard *.str)

TESTS 		= $(check_PROGRAMS)

EXTRA_DIST 	= $(wildcard *.str) $(pkgdata_DATA)
CLEANFILES      = $(TESTS) 

BOOTCLEANFILES 	= $(pkgdata_DATA) $(subst .str,.c,$(wildcard *-test.str))

#noinst_PROGRAMS = pipe-experiment
