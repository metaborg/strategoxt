include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS 	 = data

SCFLAGS 	 = -I $(srcdir)/../sig \
	   	   -I $(srcdir)/../match \
	  	   -I $(srcdir)/../lib \
	  	   -I $(srcdir)/../opt \
	  	   --main $* \
	  	   --keep 1 --verbose 1 

libexec_PROGRAMS = frontend extract extract-all rename-defs inline 
check_PROGRAMS	 = use-def-test lift-dynamic-rules-test

CLEANFILES 	 = $(wildcard *.dep) $(wildcard *.tmp)

BOOTCLEANFILES   = extract-all.c extract.c frontend.c inline.c rename-defs.c

TESTS 		 = use-def-test lift-dynamic-rules-test
#needed-defs-test 
#frontend-test 
#extract-test

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)
