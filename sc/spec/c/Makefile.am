include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta) 

libexec_PROGRAMS = s2c 
check_PROGRAMS 	 = C-simplify-test 

BOOTCLEANFILES 	 = s2c.c C-simplify-test.c

CLEANFILES 	 = $(wildcard *.dep) $(TESTS)

SCFLAGS 	 = --main $* --keep 0

STRINCLUDES	 = -I $(C_TOOLS)/share/sdf/c-tools	     \
		   -I $(C_TOOLS)/share/c-tools		     \
		   -I $(STRATEGO_FRONT)/share/stratego-front \
	  	   -I ../sig				     \
	  	   -I ../match				     \
	  	   -I ../opt				     \
	  	   -I ../front				     \
	  	   -I ../lib 

TESTS = C-simplify-test 
#canonicalize-test
