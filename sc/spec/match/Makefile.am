include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS = data

SCFLAGS	= -I $(srcdir)/../sig \
	  -I $(srcdir)/../opt \
	  -I $(srcdir)/../lib \
	  -I $(srcdir)/../front

libexec_PROGRAMS = optimize1 optimize2 compile-match 
check_PROGRAMS 	 = matrix-test

CLEANFILES 	 = *.dep $(TESTS) 

TESTS 		 = matrix-test 
# 		   match-to-matrix-test

EXTRA_DIST 	 = $(wildcard *.str)

BOOTCLEANFILES 	 = compile-match.c optimize1.c optimize2.c matrix-test.c


compile-match.c: compile-match.str
	$(SCOMPILE) $(SCFLAGS) -i $< --main compile-match-comp -o $@ -c

optimize1.c: compile-match.str
	$(SCOMPILE) $(SCFLAGS) -i $< --main optimize1-comp -o optimize1.c -c

optimize2.c: compile-match.str
	$(SCOMPILE) $(SCFLAGS) -i $< --main optimize2-comp -o optimize2.c -c
