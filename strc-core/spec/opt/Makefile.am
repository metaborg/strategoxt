include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS	= -I $(srcdir)/../../../stratego-front/syn/ \
	  -I $(srcdir)/../../../stratego-front/sig/ \
	  -I $(srcdir)/../match			    \
	  -I $(srcdir)/../lib			    \
	  -I $(srcdir)/../front			    \
	  --main $*-io				    \
	  --dr new
#	  --keep 10

LDADD           += $(SSL_LIBS)

libexec_PROGRAMS = simplify1 simplify2 simplify3		    \
		   fusion inline dead-def-elim const-prop	    \
		   lift-definitions canonicalize bound-unbound-vars \
		   worker-wrapper				    \
		   define-congruences defs-to-external-defs	    

#		   effects-analysis
#		   dead-var-elim				    

check_PROGRAMS 	 = bound-unbound-vars-test 

#		   const-prop-test 

#build-match-laws-test fusion-test

nodist_build_match_laws_test_SOURCES = build-match-laws-test.c
nodist_bound_unbound_vars_test_SOURCES = bound-unbound-vars-test.c
#nodist_const_prop_test_SOURCES = const-prop-test.c
nodist_fusion_test_SOURCES = fusion-test.c

nodist_build_match_laws_test_SOURCES=build-match-laws-test.c
nodist_bound_unbound_vars_test_SOURCES=bound-unbound-vars-test.c
#nodist_const_prop_test_SOURCES=const-prop-test.c

TESTS 		 = bound-unbound-vars-test 
#const-prop-test 

CLEANFILES 	 = $(wildcard *.dep)
BOOTCLEANFILES 	 = $(wildcard *.c)
EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)
