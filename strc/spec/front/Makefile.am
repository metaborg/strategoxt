include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS 	 = data

SCFLAGS 	 = -I $(STRATEGO_FRONT)/share/stratego-front	 \
	   	   -I $(STRATEGO_FRONT)/share/sdf/stratego-front \
	   	   -I $(srcdir)/../sig				 \
	   	   -I $(srcdir)/../match			 \
	  	   -I $(srcdir)/../lib				 \
	  	   -I $(srcdir)/../opt				 \
	  	   --main $*-io

libexec_PROGRAMS = extract extract-all rename-defs stratego-warnings \
		   repair-types desugar pre-desugar normalize-spec use-def \
		   check-constructors spec-to-sdefs 

check_PROGRAMS	 = use-def-test lift-dynamic-rules-test

CLEANFILES 	 = $(wildcard *.dep) $(wildcard *.tmp)

BOOTCLEANFILES = extract-all.c extract.c frontend.c inline.c  \
		 rename-defs.c use-def-test.c		      \
		 lift-dynamic-rules-old-test.c repair-types.c \
		 pre-desugar.c				     

TESTS 		 = use-def-test lift-dynamic-rules-old-test
#needed-defs-test 
#frontend-test 
#extract-test

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)
