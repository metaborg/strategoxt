include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS 	 = data

SCFLAGS 	 = -I $(STRATEGO_FRONT)/share/stratego-front	 \
	   	   -I $(STRATEGO_FRONT)/share/sdf/stratego-front \
	   	   -I $(srcdir)/../sig				 \
	   	   -I $(srcdir)/../match			 \
	  	   -I $(srcdir)/../lib				 \
	  	   -I $(srcdir)/../opt				 \
	  	   --main $* --keep 0			 
		  

libexec_PROGRAMS = frontend extract extract-all rename-defs stratego-warnings \
		   repair-types
check_PROGRAMS	 = use-def-test lift-dynamic-rules-test

CLEANFILES 	 = $(wildcard *.dep) $(wildcard *.tmp)

BOOTCLEANFILES   = extract-all.c extract.c frontend.c inline.c rename-defs.c \
		   use-def-test.c lift-dynamic-rules-test.c repair-types.c

TESTS 		 = use-def-test lift-dynamic-rules-test
#needed-defs-test 
#frontend-test 
#extract-test

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)
