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

check_PROGRAMS 	 = build-match-laws-test bound-unbound-vars-test \
		   const-prop-test

fusion_SOURCES 	 = fusion.c

TESTS 		 = build-match-laws-test bound-unbound-vars-test \
		   const-prop-test

CLEANFILES 	 = $(wildcard *.dep)

BOOTCLEANFILES 	 = $(wildcard *.c)

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)
