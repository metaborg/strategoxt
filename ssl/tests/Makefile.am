include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_PROGRAMS = \
  annotation-props-test \
  annotations-test \
  apply-test \
  char-test \
  dir-test \
  env-traversal-test \
  exec-test \
  file-test \
  int-list-test \
  integers-test \
  io-test \
  iteration-test \
  list-basic-test \
  list-filter-test \
  list-index-test \
  list-misc-test \
  list-set-test \
  list-sort-test \
  list-zip-test \
  migrate-tuples-test \
  option-test \
  options-test \
  parallel-test \
  parse-options-test \
  posix-error-test \
  posix-file-test \
  posix-process-test \
  reals-test \
  rename-test \
  scoped-finite-map-test \
  share-test  \
  simple-traversal-test \
  strcmp-test \
  string-test \
  substitution-test \
  tables-test \
  template-test \
  term-zip-test \
  time-test \
  tuple-test \
  unification-test

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(wildcard *.str)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)