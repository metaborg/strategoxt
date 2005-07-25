include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS 	 = data

STRINCLUDES = -I $(srcdir)/../../../stratego-front/syn	     \
	           -I $(srcdir)/../../../stratego-front/sig/ \
	   	   -I $(srcdir)/../match		     \
	  	   -I $(srcdir)/../lib			     \
	  	   -I $(srcdir)/../opt	

SCFLAGS  	=  --main $*-io			\
		   --verbose 1
# 		--keep 10


libexec_PROGRAMS =				\
	repair-types				\
	pre-desugar				\
	combine-sections			\
	variables-to-constructors		\
	raise-annotations			\
	define-lrules				\
        stratego-desugar			\
	use-def					\
	check-constructors			\
	expand-overlays				\
	rules-to-sdefs				\
	desugar-list-matching			\
	desugar-default-vardec			\
	introduce-congdefs			\
	rename-defs				\
	desugar					\
	stratego-warnings			\
	extract					\
	extract-all				\
	lift-dynamic-rules

LDADD           += $(SSL_LIBS)

check_PROGRAMS   = use-def-test 

CLEANFILES 	 = $(wildcard *.dep) $(wildcard *.tmp) $(wildcard *.sci.*)

BOOTCLEANFILES   = $(wildcard *.c)

TESTS 		 = use-def-test 
#needed-defs-test 
#frontend-test 
#extract-test

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)

nodist_use_def_test_SOURCES = use-def-test.c
#nodist_raise_annotations_test_SOURCES = raise-annotations-test.c

%.atree : %.str
	$(STRATEGO_FRONT)/bin/parse-stratego $(STRINCLUDES) -i $< --assimilation off | $(ATERM_FRONT)/bin/pp-aterm -o $@

%.itree : %.str
	$(STRC)/libexec/strc-core/pack-stratego $(STRINCLUDES) -i $< | $(ATERM_FRONT)/bin/pp-aterm -o $@
