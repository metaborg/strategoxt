include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS	= -I $(STRATEGO_FRONT)/share/stratego-front \
	  -I $(srcdir)/../sig \
	  -I $(srcdir)/../match \
	  -I $(srcdir)/../lib \
	  -I $(srcdir)/../front \
	  --main $*-io --verbose 1

libexec_PROGRAMS = fusion inline dead-def-elim const-prop dead-var-elim
check_PROGRAMS 	 = build-match-laws-test

fusion_SOURCES 	 = fusion.c

TESTS 		 = build-match-laws-test

CLEANFILES 	 = $(wildcard *.dep)

BOOTCLEANFILES 	 = fusion.c dead-def-elim.c inline.c const-prop.c dead-var-elim.c \
		   build-match-laws-test.c  

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)
