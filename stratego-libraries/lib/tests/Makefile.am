include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

SUBDIRS = . dynamic-rules
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

STRC=$(prefix)

pkgtestsdatadir  = $(datadir)/stratego-lib/tests
pkgtestsdata_DATA= $(wildcard *.str)

check_PROGRAMS = \
  char-test \
  collect-test \
  dynamic-rules-lowlevel-test \
  dynamic-rules-highlevel-test \
  env-traversal-test \
  int-list-test \
  integers-test \
  iteration-test \
  list-basic-test \
  list-filter-test \
  list-index-test \
  list-misc-test \
  list-set-test \
  list-sort-test \
  list-zip-test \
  old-parse-options-test \
  parse-options-test \
  placeholder-test \
  reals-test \
  rename-test \
  scoped-finite-map-test \
  sets-test  \
  share-test  \
  simple-traversal-test \
  strcmp-test \
  string-test \
  string-misc-test \
  substitution-test \
  tables-test \
  term-zip-test \
  tuple-test \
  unification-test \
  system-io-file-test

if XT_STD_POSIX
check_PROGRAMS +=  system-posix-test
endif

if XT_STD_POSIX_XSI
check_PROGRAMS +=  system-posix-test system-posix-xsi-test
endif

if XT_STD_NONE
check_PROGRAMS +=  system-posix-test system-posix-xsi-test
endif

TESTS          	= $(check_PROGRAMS)
EXTRA_DIST     	= $(wildcard *.str)

CLEANFILES     	= $(wildcard *.dep)
BOOTCLEANFILES 	= $(wildcard *.c)

STRINCLUDES = -I $(top_srcdir)/lib/spec
AM_CPPFLAGS = $(STRATEGO_LIB_UNINSTALLED_CFLAGS) $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS) $(ATERM_CFLAGS)
LDADD       = $(STRATEGO_LIB_UNINSTALLED_LIBS) $(STRATEGO_RUNTIME_UNINSTALLED_LIBS) $(ATERM_LIBS)

if !XT_DIST_CHECK_SOURCES
nodist_char_test_SOURCES          = char-test.c 
nodist_collect_test_SOURCES       = collect-test.c
nodist_dynamic_rules_lowlevel_test_SOURCES = dynamic-rules-lowlevel-test.c 
nodist_dynamic_rules_highlevel_test_SOURCES = dynamic-rules-highlevel-test.c 
nodist_env_traversal_test_SOURCES = env-traversal-test.c 
nodist_int_list_test_SOURCES      = int-list-test.c 
nodist_integers_test_SOURCES      = integers-test.c 
nodist_iteration_test_SOURCES     = iteration-test.c 
nodist_list_basic_test_SOURCES    = list-basic-test.c 
nodist_list_filter_test_SOURCES   = list-filter-test.c
nodist_list_index_test_SOURCES    = list-index-test.c
nodist_list_misc_test_SOURCES     = list-misc-test.c
nodist_list_set_test_SOURCES      = list-set-test.c 
nodist_list_sort_test_SOURCES     = list-sort-test.c 
nodist_list_zip_test_SOURCES      = list-zip-test.c 
nodist_parse_options_test_SOURCES = parse-options-test.c 
nodist_old_parse_options_test_SOURCES = old-parse-options-test.c 
nodist_placeholder_test_SOURCES   = placeholder-test.c 
nodist_reals_test_SOURCES         = reals-test.c 
nodist_rename_test_SOURCES        = rename-test.c 
nodist_scoped_finite_map_test_SOURCES = scoped-finite-map-test.c 
nodist_sets_test_SOURCES          = sets-test.c 
nodist_share_test_SOURCES         = share-test.c
nodist_simple_traversal_test_SOURCES = simple-traversal-test.c 
nodist_strcmp_test_SOURCES        = strcmp-test.c 
nodist_string_test_SOURCES        = string-test.c 
nodist_string_misc_test_SOURCES   = string-misc-test.c 
nodist_substitution_test_SOURCES  = substitution-test.c 
nodist_tables_test_SOURCES        = tables-test.c
nodist_term_zip_test_SOURCES      = term-zip-test.c 
nodist_tuple_test_SOURCES         = tuple-test.c
nodist_unification_test_SOURCES   = unification-test.c

nodist_system_io_file_test_SOURCES = system-io-file-test.c
nodist_system_posix_test_SOURCES = system-posix-test.c
nodist_system_posix_xsi_test_SOURCES = system-posix-xsi-test.c
else
char_test_SOURCES          = char-test.c 
collect_test_SOURCES       = collect-test.c
dynamic_rules_lowlevel_test_SOURCES = dynamic-rules-lowlevel-test.c 
dynamic_rules_highlevel_test_SOURCES = dynamic-rules-highlevel-test.c 
env_traversal_test_SOURCES = env-traversal-test.c 
int_list_test_SOURCES      = int-list-test.c 
integers_test_SOURCES      = integers-test.c 
iteration_test_SOURCES     = iteration-test.c 
list_basic_test_SOURCES    = list-basic-test.c 
list_filter_test_SOURCES   = list-filter-test.c
list_index_test_SOURCES    = list-index-test.c
list_misc_test_SOURCES     = list-misc-test.c
list_set_test_SOURCES      = list-set-test.c 
list_sort_test_SOURCES     = list-sort-test.c 
list_zip_test_SOURCES      = list-zip-test.c 
parse_options_test_SOURCES = parse-options-test.c 
old_parse_options_test_SOURCES = old-parse-options-test.c 
placeholder_test_SOURCES   = placeholder-test.c 
reals_test_SOURCES         = reals-test.c 
rename_test_SOURCES        = rename-test.c 
scoped_finite_map_test_SOURCES = scoped-finite-map-test.c 
sets_test_SOURCES          = sets-test.c 
share_test_SOURCES         = share-test.c
simple_traversal_test_SOURCES = simple-traversal-test.c 
strcmp_test_SOURCES        = strcmp-test.c 
string_test_SOURCES        = string-test.c 
string_misc_test_SOURCES   = string-misc-test.c 
substitution_test_SOURCES  = substitution-test.c 
tables_test_SOURCES        = tables-test.c
term_zip_test_SOURCES      = term-zip-test.c 
tuple_test_SOURCES         = tuple-test.c
unification_test_SOURCES   = unification-test.c

system_io_file_test_SOURCES = system-io-file-test.c
system_posix_test_SOURCES = system-posix-test.c
system_posix_xsi_test_SOURCES = system-posix-xsi-test.c
endif
