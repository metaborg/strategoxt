include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS = data

SCFLAGS	= -I $(srcdir)/../../../stratego-front/syn \
	  -I $(srcdir)/../../../stratego-front/sig \
	  -I $(srcdir)/../opt			   \
	  -I $(srcdir)/../lib			   \
	  -I $(srcdir)/../front			   \
	  --main $*-io

LDADD           += $(SSL_LIBS)

libexec_PROGRAMS = compile-match desugar-case 
#check_PROGRAMS 	 = matrix-test

nodist_compile_match_SOURCES = compile-match.c
nodist_desugar_case_SOURCES = desugar-case.c

CLEANFILES 	 = *.dep $(TESTS) 

#TESTS 		 = 
#matrix-test 
# 		   match-to-matrix-test

EXTRA_DIST 	 = $(wildcard *.str)

BOOTCLEANFILES 	 = compile-match.c desugar-case.c

