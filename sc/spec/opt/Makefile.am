include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS	= -I $(srcdir)/../sig \
	  -I $(srcdir)/../match \
	  -I $(srcdir)/../lib \
	  -I $(srcdir)/../front \
	  --main $*

libexec_PROGRAMS = fusion
check_PROGRAMS 	 = build-match-laws-test

fusion_SOURCES 	 = fusion.c

TESTS 		 = build-match-laws-test

CLEANFILES 	 = $(wildcard *.dep)

BOOTCLEANFILES 	 = fusion.c

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)
