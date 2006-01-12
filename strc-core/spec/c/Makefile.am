include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta) 

libexec_PROGRAMS = s2c s2c-ng escaping-variables

#s2c-classic 

check_PROGRAMS 	 = C-simplify-test escaping-variables-test

nodist_C_simplify_test_SOURCES = C-simplify-test.c
nodist_escaping_variables_test_SOURCES = escaping-variables-test.c

BOOTCLEANFILES = s2c.c s2c-ng.c C-simplify-test.c escaping-variables.c \
		 escaping-variables-test.c

CLEANFILES 	 = $(wildcard *.dep) $(TESTS)

SCFLAGS 	 = --main $* --keep 0

STRINCLUDES	 = -I $(C_TOOLS)/share/sdf/c-tools	    \
		   -I $(C_TOOLS)/share/c-tools		    \
		   -I $(srcdir)/../../../stratego-front/syn \
	           -I $(srcdir)/../../../stratego-front/sig \
	  	   -I ../match				    \
	  	   -I ../opt				    \
	  	   -I ../front				    \
	  	   -I ../lib 

LDADD           += $(SSL_LIBS)

TESTS = C-simplify-test 
#canonicalize-test


%.str.ast : %.str
	$(STRATEGO_FRONT)/bin/parse-stratego -i $< -o $@ $(STRINCLUDES) 

%.str.txt : %.str.ast
	$(STRATEGO_FRONT)/bin/pp-stratego -i $< -o $@ -a

