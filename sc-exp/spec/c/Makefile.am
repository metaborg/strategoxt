include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta) 

libexec_PROGRAMS = s2c canonicalize 
check_PROGRAMS 	 = C-simplify-test 

BOOTCLEANFILES 	 = s2c.c canonicalize.c C-simplify-test.c

CLEANFILES 	 = $(wildcard *.dep) $(TESTS)

SCFLAGS 	 = --main $*

STRINCLUDES	 = -I $(C_TOOLS)/share/sdf/c-tools \
		   -I $(C_TOOLS)/share/c-tools \
		   -I $(STRATEGO_FRONT)/share/stratego-front \
	  	   -I ../match				  

TESTS = C-simplify-test 
#canonicalize-test
