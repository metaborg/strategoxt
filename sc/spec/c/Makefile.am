include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

EXTRA_DIST 	 = $(wildcard *.str) 

libexec_PROGRAMS = s2c canonicalize 
check_PROGRAMS 	 = C-simplify-test 

BOOTCLEANFILES 	 = s2c.c canonicalize.c 

CLEANFILES 	 = $(wildcard *.dep) $(TESTS)

SCFLAGS 	 = --main $* -I ../sig			    \
	  	   -I $(CGEN)/share/cgen		    \
	  	   -I $(STRATEGOFRONT)/share/stratego-front \
	  	   -I ../match				    \
	  	   -CI -g				    \
	  	   -CL -g				    \
	  	   --norm

TESTS = C-simplify-test 
#canonicalize-test
