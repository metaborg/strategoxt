include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS	= -I $(STRATEGO_FRONT)/share/stratego-front \
	  -I $(srcdir)/../sig \
	  -I $(srcdir)/../match \
	  -I $(srcdir)/../lib \
	  -I $(srcdir)/../front \
	  --main $*-io  -O 5 
#	  --keep 10

libexec_PROGRAMS = fusion inline dead-def-elim const-prop dead-var-elim \
		   lift-definitions canonicalize bound-unbound-vars \
		   worker-wrapper
check_PROGRAMS 	 = build-match-laws-test bound-unbound-vars-test \
		   const-prop-test

fusion_SOURCES 	 = fusion.c

TESTS 		 = build-match-laws-test bound-unbound-vars-test \
		   const-prop-test

CLEANFILES 	 = $(wildcard *.dep)

BOOTCLEANFILES 	 = fusion.c dead-def-elim.c inline.c const-prop.c dead-var-elim.c \
		   build-match-laws-test.c  lift-definitions.c \
		   canonicalize.c bound-unbound-vars.c bound-unbound-vars-test.c \
		   const-prop-test.c worker-wrapper.c

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)
