include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

EXTRA_DIST 	 = $(call srcwildcard,*.str) $(call srcwildcard,*.meta) 

check_PROGRAMS   = bound-unbound-vars-test	\
	           const-prop-test		\
		   fusion-test			\
		   build-match-laws-test	\
		   C-simplify-test		\
	           stratlib-test		\
		   canonicalize-ng-test		\
		   escaping-variables		\
		   use-def-test		

TESTS 		= $(check_PROGRAMS)

nodist_bound_unbound_vars_test_SOURCES  = bound-unbound-vars-test.c
nodist_build_match_laws_test_SOURCES    = build-match-laws-test.c
nodist_canonicalize_ng_test_SOURCES     = canonicalize-ng-test.c
nodist_const_prop_test_SOURCES          = const-prop-test.c
nodist_C_simplify_test_SOURCES          = C-simplify-test.c
nodist_escaping_variables_SOURCES       = escaping-variables.c
nodist_escaping_variables_test_SOURCES  = escaping-variables-test.c
nodist_fusion_test_SOURCES              = fusion-test.c
nodist_use_def_test_SOURCES             = use-def-test.c

BOOTCLEANFILES 	 = $(wildcard *.c)

CLEANFILES 	 = $(wildcard *.dep) $(TESTS)

SCFLAGS 	 = --main $*-io --keep 0 --verbose 1

STRINCLUDES	 = -I $(top_srcdir)/lib

LIB_STRC 	 = -L$(top_srcdir)/lib -lstrc

LDADD            = $(LIB_STRC) $(SSL_LIBS)

#use_def_test_LDADD = $(LIB_STRC) $(SSL_LIBS)
#C_simplify_test_LDADD	= $(LIB_STRC) $(SSL_LIBS)
#escaping_variables_test_LDADD = $(LIB_STRC) $(SSL_LIBS)	 	 
#canonicalize_ng_test_LDADD      = $(LIB_STRC) $(SSL_LIBS)

#######################################################################
#
# for debugging

%.str.ast : %.str
	$(STRATEGO_FRONT)/bin/parse-stratego -i $< -o $@ $(STRINCLUDES) 

%.str.txt : %.str.ast
	$(STRATEGO_FRONT)/bin/pp-stratego -i $< -o $@ -a

%.atree : %.str
	(STRATEGO_FRONT)/bin/parse-stratego $(STRINCLUDES) -i $< --assimilation off | $(ATERM_FRONT)/bin/pp-aterm -o $@

%.itree : %.str
	$(STRC)/libexec/strc-core/pack-stratego $(STRINCLUDES) -i $< | $(ATERM_FRONT)
/bin/pp-aterm -o $@
