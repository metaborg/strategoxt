include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS = data

SCFLAGS	= -I $(srcdir)/../../../stratego-front/syn \
	  -I $(srcdir)/../../../stratego-front/sig \
	  -I $(srcdir)/../opt			   \
	  -I $(srcdir)/../lib			   \
	  -I $(srcdir)/../front			   \
	  --main $*-io				   \
	  -I $(top_srcdir)/lib

LIB_STRC = -L$(top_srcdir)/lib -lstrc

LDADD           += $(SSL_LIBS)

compile_match_LDADD 	= $(LIB_STRC) $(SSL_LIBS)
desugar_case_LDADD 	= $(LIB_STRC) $(SSL_LIBS)

libexec_PROGRAMS = compile-match desugar-case 
#check_PROGRAMS 	 = matrix-test

CLEANFILES 	 = *.dep $(TESTS) 

#TESTS 		 = 
#matrix-test 
# 		   match-to-matrix-test

EXTRA_DIST 	 = $(wildcard *.str)

BOOTCLEANFILES 	 = compile-match.c desugar-case.c

