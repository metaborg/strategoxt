include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS		 = -I $(srcdir)/../../../stratego-front/syn \
	           -I $(srcdir)/../../../stratego-front/sig \
	  	   -I $(srcdir)/../front		    \
	  	   -I $(srcdir)/../match		    \
	  	   -I $(srcdir)/../opt			    \
	 	   --main $*

LDADD           += $(SSL_LIBS)

libexec_PROGRAMS = rename-vars

# check_PROGRAMS 	 = stratlib-test
# nodist_stratlib_test_SOURCES = stratlib-test.c
# TESTS 	 	 = stratlib-test

CLEANFILES 	 = $(wildcard *.dep)

EXTRA_DIST 	 = $(wildcard *.str)  $(wildcard *.meta)



BOOTCLEANFILES 	 = rename-vars.c stratlib-test.c
