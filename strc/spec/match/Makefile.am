include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS = data

SCFLAGS	= -I $(STRATEGO_FRONT)/share/stratego-front \
	  -I $(srcdir)/../sig \
	  -I $(srcdir)/../opt \
	  -I $(srcdir)/../lib \
	  -I $(srcdir)/../front \
          --dr old \
	  --main $*-io

libexec_PROGRAMS = compile-match desugar-case 
#check_PROGRAMS 	 = matrix-test

CLEANFILES 	 = *.dep $(TESTS) 

#TESTS 		 = 
#matrix-test 
# 		   match-to-matrix-test

EXTRA_DIST 	 = $(wildcard *.str)

BOOTCLEANFILES 	 = compile-match.c desugar-case.c

