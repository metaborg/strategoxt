include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS	= -I $(STRATEGO_FRONT)/share/stratego-front \
	  -I $(srcdir)/../sig \
	  -I $(srcdir)/../match \
	  -I $(srcdir)/../lib \
	  -I $(srcdir)/../front \
	  --main $*-io
#	  --keep 10

libexec_PROGRAMS = fusion inline dead-def-elim const-prop dead-var-elim	\
		   lift-definitions canonicalize bound-unbound-vars	\
		   worker-wrapper simplify1 simplify2 simplify3		\
		   define-congruences defs-to-external-defs

check_PROGRAMS 	 = build-match-laws-test bound-unbound-vars-test \
		   const-prop-test
nodist_build_match_laws_test_SOURCES = build-match-laws-test.c
nodist_bound_unbound_vars_test_SOURCES = bound-unbound-vars-test.c
nodist_const_prop_test_SOURCES = const-prop-test.c

fusion_SOURCES 	 = fusion.c

TESTS 		 = build-match-laws-test bound-unbound-vars-test \
		   const-prop-test

CLEANFILES 	 = $(wildcard *.dep)

BOOTCLEANFILES 	 = fusion.c dead-def-elim.c inline.c const-prop.c dead-var-elim.c \
		   build-match-laws-test.c  lift-definitions.c			  \
		   canonicalize.c bound-unbound-vars.c				  \
		   bound-unbound-vars-test.c					  \
		   const-prop-test.c worker-wrapper.c simplify1.c		  \
		   simplify2.c simplify3.c					  \
		   define-congruences.c

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)
