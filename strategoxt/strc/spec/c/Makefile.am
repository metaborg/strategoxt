include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta) 

#libexec_PROGRAMS = s2c-ng escaping-variables

check_PROGRAMS 	 = C-simplify-test escaping-variables-test

nodist_C_simplify_test_SOURCES = C-simplify-test.c
nodist_escaping_variables_test_SOURCES = escaping-variables-test.c

BOOTCLEANFILES = s2c.c s2c-ng.c C-simplify-test.c escaping-variables.c \
		 escaping-variables-test.c

CLEANFILES 	 = $(wildcard *.dep) $(TESTS)

SCFLAGS 	 = --main $*-io --keep 0 --verbose 1

STRINCLUDES	 = -I $(srcdir)/../../../stratego-front/syn \
	           -I $(srcdir)/../../../stratego-front/sig \
		   -I $(srcdir)/../../../c-tools/syn	    \
		   -I $(srcdir)/../../../c-tools/sig	    \
	  	   -I ../match				    \
	  	   -I ../opt				    \
	  	   -I ../front				    \
	  	   -I ../lib 				    \
		   -I $(top_srcdir)/lib

LIB_STRC 	 = -L$(top_srcdir)/lib -lstrc

LDADD           += $(SSL_LIBS)

#s2c_ng_LDADD	 	= $(LIB_STRC) $(SSL_LIBS)
C_simplify_test_LDADD	= $(LIB_STRC) $(SSL_LIBS)
#escaping_variables_LDADD = $(LIB_STRC) $(SSL_LIBS)
escaping_variables_test_LDADD = $(LIB_STRC) $(SSL_LIBS)	 	 

TESTS = C-simplify-test escaping-variables-test
#canonicalize-test


%.str.ast : %.str
	$(STRATEGO_FRONT)/bin/parse-stratego -i $< -o $@ $(STRINCLUDES) 

%.str.txt : %.str.ast
	$(STRATEGO_FRONT)/bin/pp-stratego -i $< -o $@ -a

