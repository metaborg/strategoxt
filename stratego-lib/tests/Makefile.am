include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

STRC=$(prefix)

pkgtestsdatadir  = $(pkgdatadir)/tests
pkgtestsdata_DATA= $(wildcard *.str)

check_PROGRAMS = \
  annotation-props-test \
  char-test \
  collect-test \
  dir-test \
  dynamic-rules-lowlevel-test \
  dynamic-rules-highlevel-test \
  env-traversal-test \
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
  parallel-test \
  parse-options-test \
  placeholder-test \
  posix-error-test \
  posix-file-test \
  posix-process-test \
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
  template-test \
  term-zip-test \
  time-test \
  tuple-test \
  unification-test

TESTS          	= $(check_PROGRAMS)
EXTRA_DIST     	= $(wildcard *.str)

CLEANFILES     	= $(wildcard *.dep)
BOOTCLEANFILES 	= $(wildcard *.c)

STRINCLUDES    	= -I $(top_srcdir)/libraries -I $(top_srcdir)/ssl-compat -I $(top_srcdir)/spec -I $(SRTS)/share/srts

NOSHARED_PREFIX_LIBS = -L$(prefix)/lib -lstratego-lib-native -lstratego-runtime -L$(ATERM)/lib -lATerm -lm
PREFIX_LIBS          = -L$(prefix)/lib -lstratego-lib -lstratego-lib-native -lstratego-runtime -L$(ATERM)/lib -lATerm -lm
PREFIX_CPPFLAGS      = -I $(prefix)/include -I $(ATERM)/include

nodist_annotation_props_test_SOURCES = annotation-props-test.c 
annotation_props_test_CPPFLAGS       = $(PREFIX_CPPFLAGS)
annotation_props_test_LDADD          = $(PREFIX_LIBS)

nodist_char_test_SOURCES          = char-test.c 
char_test_CPPFLAGS                = $(PREFIX_CPPFLAGS)
char_test_LDADD                   = $(PREFIX_LIBS)

nodist_collect_test_SOURCES       = collect-test.c
collect_test_CPPFLAGS             = $(PREFIX_CPPFLAGS)
collect_test_LDADD                = $(PREFIX_LIBS)

nodist_dir_test_SOURCES           = dir-test.c
dir_test_CPPFLAGS                 = $(PREFIX_CPPFLAGS)
dir_test_LDADD                    = $(PREFIX_LIBS)

nodist_dynamic_rules_lowlevel_test_SOURCES = dynamic-rules-lowlevel-test.c 
dynamic_rules_lowlevel_test_CPPFLAGS       = $(PREFIX_CPPFLAGS)
dynamic_rules_lowlevel_test_LDADD          = $(PREFIX_LIBS)

nodist_dynamic_rules_highlevel_test_SOURCES = dynamic-rules-highlevel-test.c 
dynamic_rules_highlevel_test_CPPFLAGS       = $(PREFIX_CPPFLAGS)
dynamic_rules_highlevel_test_LDADD          = $(PREFIX_LIBS)

nodist_env_traversal_test_SOURCES = env-traversal-test.c 
env_traversal_test_CPPFLAGS       = $(PREFIX_CPPFLAGS)
env_traversal_test_LDADD          = $(PREFIX_LIBS)

nodist_file_test_SOURCES          = file-test.c 
file_test_CPPFLAGS                = $(PREFIX_CPPFLAGS)
file_test_LDADD                   = $(PREFIX_LIBS)

nodist_int_list_test_SOURCES      = int-list-test.c 
int_list_test_CPPFLAGS            = $(PREFIX_CPPFLAGS)
int_list_test_LDADD               = $(NOSHARED_PREFIX_LIBS)

nodist_integers_test_SOURCES      = integers-test.c 
integers_test_CPPFLAGS            = $(PREFIX_CPPFLAGS)
integers_test_LDADD               = $(NOSHARED_PREFIX_LIBS)

nodist_io_test_SOURCES            = io-test.c 
io_test_CPPFLAGS                  = $(PREFIX_CPPFLAGS)
io_test_LDADD                     = $(NOSHARED_PREFIX_LIBS)

nodist_iteration_test_SOURCES     = iteration-test.c 
iteration_test_CPPFLAGS           = $(PREFIX_CPPFLAGS)
iteration_test_LDADD              = $(NOSHARED_PREFIX_LIBS)

nodist_list_basic_test_SOURCES    = list-basic-test.c 
list_basic_test_CPPFLAGS          = $(PREFIX_CPPFLAGS)
list_basic_test_LDADD             = $(NOSHARED_PREFIX_LIBS)

nodist_list_filter_test_SOURCES   = list-filter-test.c
list_filter_test_CPPFLAGS         = $(PREFIX_CPPFLAGS)
list_filter_test_LDADD            = $(NOSHARED_PREFIX_LIBS)

nodist_list_index_test_SOURCES    = list-index-test.c
list_index_test_CPPFLAGS          = $(PREFIX_CPPFLAGS)
list_index_test_LDADD             = $(NOSHARED_PREFIX_LIBS)

nodist_list_misc_test_SOURCES     = list-misc-test.c
list_misc_test_CPPFLAGS           = $(PREFIX_CPPFLAGS)
list_misc_test_LDADD              = $(NOSHARED_PREFIX_LIBS)

nodist_list_set_test_SOURCES      = list-set-test.c 
list_set_test_CPPFLAGS            = $(PREFIX_CPPFLAGS)
list_set_test_LDADD               = $(NOSHARED_PREFIX_LIBS)

nodist_list_sort_test_SOURCES     = list-sort-test.c 
list_sort_test_CPPFLAGS           = $(PREFIX_CPPFLAGS)
list_sort_test_LDADD              = $(PREFIX_LIBS)

nodist_list_zip_test_SOURCES      = list-zip-test.c 
list_zip_test_CPPFLAGS            = $(PREFIX_CPPFLAGS)
list_zip_test_LDADD               = $(NOSHARED_PREFIX_LIBS)

nodist_parallel_test_SOURCES      = parallel-test.c
parallel_test_CPPFLAGS            = $(PREFIX_CPPFLAGS)
parallel_test_LDADD               = $(NOSHARED_PREFIX_LIBS)

nodist_parse_options_test_SOURCES = parse-options-test.c 
parse_options_test_CPPFLAGS       = $(PREFIX_CPPFLAGS)
parse_options_test_LDADD          = $(NOSHARED_PREFIX_LIBS)

nodist_placeholder_test_SOURCES   = placeholder-test.c 
placeholder_test_CPPFLAGS         = $(PREFIX_CPPFLAGS)
placeholder_test_LDADD            = $(NOSHARED_PREFIX_LIBS)

nodist_posix_error_test_SOURCES   = posix-error-test.c 
posix_error_test_CPPFLAGS         = $(PREFIX_CPPFLAGS)
posix_error_test_LDADD            = $(NOSHARED_PREFIX_LIBS)

nodist_posix_file_test_SOURCES    = posix-file-test.c 
posix_file_test_CPPFLAGS          = $(PREFIX_CPPFLAGS)
posix_file_test_LDADD             = $(NOSHARED_PREFIX_LIBS)

nodist_posix_process_test_SOURCES = posix-process-test.c 
posix_process_test_CPPFLAGS       = $(PREFIX_CPPFLAGS)
posix_process_test_LDADD          = $(NOSHARED_PREFIX_LIBS)

nodist_reals_test_SOURCES         = reals-test.c 
reals_test_CPPFLAGS               = $(PREFIX_CPPFLAGS)
reals_test_LDADD                  = $(NOSHARED_PREFIX_LIBS)

nodist_rename_test_SOURCES        = rename-test.c 
rename_test_CPPFLAGS              = $(PREFIX_CPPFLAGS)
rename_test_LDADD                 = $(NOSHARED_PREFIX_LIBS)

nodist_scoped_finite_map_test_SOURCES = scoped-finite-map-test.c 
scoped_finite_map_test_CPPFLAGS       = $(PREFIX_CPPFLAGS)
scoped_finite_map_test_LDADD          = $(NOSHARED_PREFIX_LIBS)

nodist_sets_test_SOURCES          = sets-test.c 
sets_test_CPPFLAGS                = $(PREFIX_CPPFLAGS)
sets_test_LDADD                   = $(NOSHARED_PREFIX_LIBS)

nodist_share_test_SOURCES         = share-test.c
share_test_CPPFLAGS               = $(PREFIX_CPPFLAGS)
share_test_LDADD                  = $(NOSHARED_PREFIX_LIBS)

nodist_simple_traversal_test_SOURCES = simple-traversal-test.c 
simple_traversal_test_CPPFLAGS       = $(PREFIX_CPPFLAGS)
simple_traversal_test_LDADD          = $(NOSHARED_PREFIX_LIBS)

nodist_strcmp_test_SOURCES        = strcmp-test.c 
strcmp_test_CPPFLAGS              = $(PREFIX_CPPFLAGS)
strcmp_test_LDADD                 = $(NOSHARED_PREFIX_LIBS)

nodist_string_test_SOURCES        = string-test.c 
string_test_CPPFLAGS              = $(PREFIX_CPPFLAGS)
string_test_LDADD                 = $(NOSHARED_PREFIX_LIBS)

nodist_string_misc_test_SOURCES   = string-misc-test.c 
string_misc_test_CPPFLAGS         = $(PREFIX_CPPFLAGS)
string_misc_test_LDADD            = $(NOSHARED_PREFIX_LIBS)

nodist_substitution_test_SOURCES  = substitution-test.c 
substitution_test_CPPFLAGS        = $(PREFIX_CPPFLAGS)
substitution_test_LDADD           = $(NOSHARED_PREFIX_LIBS)

nodist_tables_test_SOURCES        = tables-test.c
tables_test_CPPFLAGS              = $(PREFIX_CPPFLAGS)
tables_test_LDADD                 = $(NOSHARED_PREFIX_LIBS)

nodist_template_test_SOURCES      = template-test.c 
template_test_CPPFLAGS            = $(PREFIX_CPPFLAGS)
template_test_LDADD               = $(NOSHARED_PREFIX_LIBS)

nodist_term_zip_test_SOURCES      = term-zip-test.c 
term_zip_test_CPPFLAGS            = $(PREFIX_CPPFLAGS)
term_zip_test_LDADD               = $(NOSHARED_PREFIX_LIBS)

nodist_time_test_SOURCES          = time-test.c 
time_test_CPPFLAGS                = $(PREFIX_CPPFLAGS)
time_test_LDADD                   = $(NOSHARED_PREFIX_LIBS)

nodist_tuple_test_SOURCES         = tuple-test.c
tuple_test_CPPFLAGS               = $(PREFIX_CPPFLAGS)
tuple_test_LDADD                  = $(NOSHARED_PREFIX_LIBS)

nodist_unification_test_SOURCES   = unification-test.c
unification_test_CPPFLAGS         = $(PREFIX_CPPFLAGS)
unification_test_LDADD            = $(NOSHARED_PREFIX_LIBS)
