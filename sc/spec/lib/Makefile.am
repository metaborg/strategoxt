include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS		 = -I $(srcdir)/../sig \
	  	   -I $(srcdir)/../match \
	  	   -I $(srcdir)/../opt \
	 	   --main $*

libexec_PROGRAMS = rename-vars
check_PROGRAMS 	 = stratlib-test

CLEANFILES 	 = $(wildcard *.dep)

EXTRA_DIST 	 = $(wildcard *.str)

TESTS 	 	 = stratlib-test

BOOTCLEANFILES 	 = rename-vars.c
