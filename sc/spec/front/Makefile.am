include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS 	 = data

SCFLAGS 	 = -I $(srcdir)/../sig \
	   	   -I $(srcdir)/../match \
	  	   -I $(srcdir)/../lib \
	  	   -I $(srcdir)/../opt \
	  	   --main $* \
	  	   --keep 1

libexec_PROGRAMS = frontend extract extract-all rename-defs inline 
check_PROGRAMS	 = use-def-test

CLEANFILES 	 = $(wildcard *.dep)

BOOTCLEANFILES   = extract-all.c extract.c frontend.c inline.c rename-defs.c

TESTS 		 = use-def-test
#needed-defs-test 
#frontend-test 
#extract-test

EXTRA_DIST 	 = check-constructors.str frontend.str		    \
		   needed-defs-test.str check-constructors-test.str \
		   frontend-test.str normalize-spec.str desugar.str \
		   inline.str rename-defs.str extract-all.str	    \
		   inlining.str spec-to-sdefs.str extract.str	    \
		   mul-contexts.str use-def.str extract-test.str    \
		   needed-defs.str


