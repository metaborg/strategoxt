include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS 	 = data

SCFLAGS 	 = -I $(STRATEGO_FRONT)/share/stratego-front	 \
	   	   -I $(STRATEGO_FRONT)/share/sdf/stratego-front \
	   	   -I $(srcdir)/../sig				 \
	   	   -I $(srcdir)/../match			 \
	  	   -I $(srcdir)/../lib				 \
	  	   -I $(srcdir)/../opt				 \
	           --dr new					 \
	  	   --main $*-io
#		   --verbose 10 
#--keep 10

libexec_PROGRAMS =				\
	repair-types				\
	pre-desugar				\
	combine-sections			\
	variables-to-constructors		\
	raise-annotations			\
	define-lrules				\
	lift-dynamic-rules			\
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
	extract-all 			

LDADD           += $(SSL_LIBS)

check_PROGRAMS   = use-def-test lift-dynamic-rules-old-test \
		   raise-annotations-test

CLEANFILES 	 = $(wildcard *.dep) $(wildcard *.tmp) $(wildcard *.sci.*)

BOOTCLEANFILES   = $(wildcard *.c)

TESTS 		 = use-def-test lift-dynamic-rules-old-test \
		   raise-annotations-test
#needed-defs-test 
#frontend-test 
#extract-test

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)

nodist_lift_dynamic_rules_old_test_SOURCES = lift-dynamic-rules-old-test.c
nodist_use_def_test_SOURCES = use-def-test.c
nodist_raise_annotations_test_SOURCES = raise-annotations-test.c
