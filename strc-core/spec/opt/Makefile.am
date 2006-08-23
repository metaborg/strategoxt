include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS	= -I $(srcdir)/../../../stratego-front/syn/ \
	  -I $(srcdir)/../../../stratego-front/sig/ \
	  -I $(srcdir)/../match			    \
	  -I $(srcdir)/../lib			    \
	  -I $(srcdir)/../front			    \
	  -I $(srcdir)/../c			    \
          -I $(top_srcdir)/lib			    \
	  --main $*-io	
#--ast	  --keep 10

LDADD           += $(SSL_LIBS)

LIB_STRC = -L$(top_srcdir)/lib -lstrc

#libexec_PROGRAMS = simplify1 simplify2 simplify3		   \
#		   fusion inline dead-def-elim			   \
#		   lift-definitions canonicalize-ng   \
#		   bound-unbound-vars				   \
#		   worker-wrapper				   \
#		   define-congruences defs-to-external-defs	   \
#		   const-prop dead-var-elim			 

#		   effects-analysis
#		   dead-var-elim
#		   const-prop				    

check_PROGRAMS 	 = bound-unbound-vars-test canonicalize-ng-test

#		   const-prop-test 

#build-match-laws-test fusion-test

#bound_unbound_vars_LDADD 	= $(LIB_STRC) $(SSL_LIBS)
#bound_unbound_vars_test_LDADD 	= $(LIB_STRC) $(SSL_LIBS)
#build_match_laws_test_LDADD 	= $(LIB_STRC) $(SSL_LIBS)
#canonicalize_ng_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#canonicalize_ng_test_LDADD 	= $(LIB_STRC) $(SSL_LIBS)
#const_prop_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#const_prop_test_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#dead_def_elim_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#dead_var_elim_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#define_congruences_LDADD 	= $(LIB_STRC) $(SSL_LIBS)
#defs_to_external_defs_LDADD 	= $(LIB_STRC) $(SSL_LIBS)
#fusion_LDADD 			= $(LIB_STRC) $(SSL_LIBS)
#fusion_test_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#inline_LDADD 			= $(LIB_STRC) $(SSL_LIBS)
#inlining_LDADD 			= $(LIB_STRC) $(SSL_LIBS)
#lift_definitions_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#simplify1_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#simplify2_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#simplify3_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#worker_wrapper_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#
#nodist_build_match_laws_test_SOURCES = build-match-laws-test.c
#nodist_bound_unbound_vars_test_SOURCES = bound-unbound-vars-test.c
#nodist_const_prop_test_SOURCES = const-prop-test.c
#nodist_fusion_test_SOURCES = fusion-test.c
#
#nodist_build_match_laws_test_SOURCES=build-match-laws-test.c
#nodist_bound_unbound_vars_test_SOURCES=bound-unbound-vars-test.c
##nodist_const_prop_test_SOURCES=const-prop-test.c

TESTS 		 = bound-unbound-vars-test canonicalize-ng-test
#const-prop-test 

CLEANFILES 	 = $(wildcard *.dep)
BOOTCLEANFILES 	 = $(wildcard *.c)
EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)
