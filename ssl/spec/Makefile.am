include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pgkdatadocdir = ${pkgdatadir}/doc

check_PROGRAMS =  \
list-basic-test        scoped-finite-map-test  \
annotation-props-test  list-filter-test\
annotations-test       list-index-test      share-test  \
apply-test             list-misc-test       simple-traversal-test  \
list-set-test          strcmp-test  \
char-test              list-sort-test       string-test  \
list-zip-test          substitution-test  \
migrate-tuples-test    tables-test  \
dir-test               options-test         template-test  \
env-traversal-test     option-test          term-zip-test  \
exec-test              parallel-test        posix-file-test \
time-test  \
integers-test          parse-options-test   tuple-test  \
int-list-test          reals-test           unification-test  \
io-test                rename-test

SUBDIRS 	= data

SCFLAGS 	= -I $(srcdir)

pkgdata_DATA 	= $(subst .str,.rtree,$(wildcard *.str))

pgkdatadoc_DATA = $(wildcard *.str)

TESTS 		= $(check_PROGRAMS)

EXTRA_DIST 	= $(wildcard *.str) $(pkgdata_DATA)
CLEANFILES      = $(TESTS) 

BOOTCLEANFILES 	= $(pkgdata_DATA) $(subst .str,.c,$(wildcard *-test.str))

#noinst_PROGRAMS = pipe-experiment