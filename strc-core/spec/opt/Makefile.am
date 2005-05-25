include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS	= -I $(STRATEGO_FRONT)/share/stratego-front \
	  -I $(srcdir)/../sig \
	  -I $(srcdir)/../match \
	  -I $(srcdir)/../lib \
	  -I $(srcdir)/../front \
	  --main $*-io \
	  --dr new
#	  --keep 10

LDADD           += $(SSL_LIBS)

libexec_PROGRAMS = simplify1 simplify2 simplify3		    \
		   fusion inline dead-def-elim const-prop	    \
		   dead-var-elim				    \
		   lift-definitions canonicalize bound-unbound-vars \
		   worker-wrapper				    \
		   define-congruences defs-to-external-defs	    \
		   effects-analysis

nodist_simplify1_SOURCES = simplify1.c
nodist_simplify2_SOURCES = simplify2.c
nodist_simplify3_SOURCES = simplify3.c
nodist_fusion_SOURCES = fusion.c
nodist_inline_SOURCES = inline.c
nodist_dead_def_elim_SOURCES = dead-def-elim.c
nodist_const_prop_SOURCES = const-prop.c
nodist_dead_var_elim_SOURCES = dead-var-elim.c
nodist_lift_definitions_SOURCES = lift-definitions.c
nodist_canonicalize_SOURCES = canonicalize.c
nodist_bound_unbound_vars_SOURCES = bound-unbound-vars.c
nodist_worker_wrapper_SOURCES = worker-wrapper.c
nodist_define_congruences_SOURCES = define-congruences.c
nodist_defs_to_external_defs_SOURCES = defs-to-external-defs.c
nodist_effects_analysis_SOURCES = effects-analysis.c

check_PROGRAMS 	 = build-match-laws-test bound-unbound-vars-test \
		   const-prop-test bound-unbound-vars-debug \
		   bound-unbound-vars-debug-norm\
		   bound-unbound-vars-debug-sci-opt17

nodist_build_match_laws_test_SOURCES=build-match-laws-test.c
nodist_bound_unbound_vars_test_SOURCES=bound-unbound-vars-test.c
nodist_const_prop_test_SOURCES=const-prop-test.c
nodist_bound_unbound_vars_debug_SOURCES=bound-unbound-vars-debug.c
nodist_bound_unbound_vars_debug_norm_SOURCES=bound-unbound-vars-debug-norm.c
nodist_bound_unbound_vars_debug_sci_opt17_SOURCES=bound-unbound-vars-debug-sci-opt17.c

TESTS 		 = build-match-laws-test bound-unbound-vars-test \
		   const-prop-test

CLEANFILES 	 = $(wildcard *.dep)
BOOTCLEANFILES 	 = $(wildcard *.c)
EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)


buv-test : 
	./bound-unbound-vars-debug -i buv-test.in 2> buv-test.log -o buv-test.out
	pp-stratego -a --annotations -p Stratego-Sugar-pretty.pp.af -i buv-test.out -o buv-test.out.txt

buv-test-norm : 
	./bound-unbound-vars-debug-norm -i buv-test.in 2> buv-test.log -o buv-test.out --verbose 10
	echo foodoo
	pp-stratego -a --annotations -p Stratego-Sugar-pretty.pp.af -i buv-test.out -o buv-test.out.txt

buv-test-sci-opt17 : 
	./bound-unbound-vars-debug-sci-opt17 -i buv-test.in 2> buv-test.log -o buv-test.out --verbose 10
	echo foodoo
	pp-stratego -a --annotations -p Stratego-Sugar-pretty.pp.af -i buv-test.out -o buv-test.out.txt
