SINCLUDES = \
  -I $(prefix)/share/stratego-lib \
  -I $(prefix)/share/srts

AM_LDFLAGS = -L$(prefix)/lib -L$(ATERM)/lib $(STR_LDFLAGS)
AM_CFLAGS = -I$(prefix)/include -I$(ATERM)/include $(STR_CFLAGS)

STRATEGORUNLIBS = -lstratego-lib-native -lstratego-runtime -lATerm -lm
STRATEGOLIB     = -L$(prefix)/lib -lstratego-lib
LDADD 		= $(STRATEGORUNLIBS)

occan_LDADD     = $(STRATEGOLIB) $(STRATEGORUNLIBS)

check_PROGRAMS 	= arity-test as-pattern assignment			    \
		  comment-test conditional-innermost congruence-arguments   \
		  congruence-thread dynamic-rules-test empty-sections	    \
		  flatten-test higher-order-arg				    \
		  implicit-var-decl improper-list-test innermost-pure	    \
		  match-arity match-automaton-test mkterm		    \
		  number-syntax-test number-test overlay-test		    \
		  overlay-test-b					    \
		  overloading-constructors-test overloading		    \
		  prop rename-test tail	    \
		  thread-test traversal-test twice unification-test occan

TESTS 		= $(check_PROGRAMS)


CLEANFILES 	= *.o *.ac *.s[0-9]* *.f* *.ac *.c.abox \
		  *.tree *.mtree *.rtree *.txt *.s5fused libtest*.c \
		  *.dep *.c *.out

EXTRA_DIST 	= $(wildcard *.str) $(wildcard *.meta) prop.res

include $(srcdir)/../test1/make-rules
include $(wildcard *.dep)

bootinstall:

nodist_arity_test_SOURCES = arity-test.c
nodist_as_pattern_SOURCES = as-pattern.c
nodist_assignment_SOURCES = assignment.c
nodist_comment_test_SOURCES = comment-test.c
nodist_conditional_innermost_SOURCES = conditional-innermost.c
nodist_congruence_arguments_SOURCES = congruence-arguments.c
nodist_congruence_thread_SOURCES = congruence-thread.c
nodist_dynamic_rules_test_SOURCES = dynamic-rules-test.c
nodist_empty_sections_SOURCES = empty-sections.c
nodist_flatten_test_SOURCES = flatten-test.c
nodist_higher_order_arg_SOURCES = higher-order-arg.c
nodist_implicit_var_decl_SOURCES = implicit-var-decl.c
nodist_improper_list_test_SOURCES = improper-list-test.c
nodist_innermost_pure_SOURCES = innermost-pure.c
nodist_match_arity_SOURCES = match-arity.c
nodist_match_automaton_test_SOURCES = match-automaton-test.c
nodist_mkterm_SOURCES = mkterm.c
nodist_number_syntax_test_SOURCES = number-syntax-test.c
nodist_number_test_SOURCES = number-test.c
nodist_overlay_test_SOURCES = overlay-test.c
nodist_overlay_test_b_SOURCES = overlay-test-b.c
nodist_overloading_constructors_test_SOURCES = overloading-constructors-test.c
nodist_overloading_SOURCES = overloading.c
nodist_prop_SOURCES = prop.c
nodist_rename_test_SOURCES = rename-test.c
nodist_tail_SOURCES = tail.c
nodist_thread_test_SOURCES = thread-test.c
nodist_traversal_test_SOURCES = traversal-test.c
nodist_twice_SOURCES = twice.c
nodist_unification_test_SOURCES = unification-test.c
nodist_occan_SOURCES = occan.c
