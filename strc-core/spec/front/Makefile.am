include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS 	 = data

STRINCLUDES = -I $(srcdir)/../../../stratego-front/syn	     \
	           -I $(srcdir)/../../../stratego-front/sig/ \
	   	   -I $(srcdir)/../match		     \
	  	   -I $(srcdir)/../lib			     \
	  	   -I $(srcdir)/../opt			     \
		   -I $(top_srcdir)/lib

SCFLAGS  	=  --main $*-io			\
		   --verbose 1
# 		--keep 10


libexec_PROGRAMS = report-ambs stratego-ensugar

#	repair-types				\
#	pre-desugar				\
#        stratego-ensugar			\
#	combine-sections			\
#	variables-to-constructors		\
#	raise-annotations			\
#	define-lrules				\
#        stratego-desugar			\
#	use-def					\
#	check-constructors			\
#	expand-overlays				\
#	rules-to-sdefs				\
#	desugar-list-matching			\
#	desugar-default-vardec			\
#	introduce-congdefs			\
#	rename-defs				\
#	desugar					\
#	stratego-warnings			\
#	extract					\
#	extract-all				\
#	lift-dynamic-rules			\
#	frontend

LIB_STRC = -L$(top_srcdir)/lib -lstrc
#
#repair_types_LDADD 		= $(LIB_STRC) $(SSL_LIBS)			
#pre_desugar_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#stratego_ensugar_LDADD 		= $(LIB_STRC) $(SSL_LIBS)			
#combine_sections_LDADD 		= $(LIB_STRC) $(SSL_LIBS)			
#variables_to_constructors_LDADD = $(LIB_STRC) $(SSL_LIBS)	
#raise_annotations_LDADD 	= $(LIB_STRC) $(SSL_LIBS)	
#define_lrules_LDADD 		= $(LIB_STRC) $(SSL_LIBS)	
#stratego_desugar_LDADD 		= $(LIB_STRC) $(SSL_LIBS)			
#use_def_LDADD 			= $(LIB_STRC) $(SSL_LIBS)			
#check_constructors_LDADD 	= $(LIB_STRC) $(SSL_LIBS)			
#expand_overlays_LDADD 		= $(LIB_STRC) $(SSL_LIBS)			
#rules_to_sdefs_LDADD 		= $(LIB_STRC) $(SSL_LIBS)		
#desugar_list_matching_LDADD 	= $(LIB_STRC) $(SSL_LIBS)			
#desugar_default_vardec_LDADD 	= $(LIB_STRC) $(SSL_LIBS)			
#introduce_congdefs_LDADD 	= $(LIB_STRC) $(SSL_LIBS)			
#rename_defs_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#desugar_LDADD 			= $(LIB_STRC) $(SSL_LIBS)		
#stratego_warnings_LDADD 	= $(LIB_STRC) $(SSL_LIBS)			
#extract_LDADD 			= $(LIB_STRC) $(SSL_LIBS)
#extract_all_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#lift_dynamic_rules_LDADD 	= $(LIB_STRC) $(SSL_LIBS)                      
report_ambs_LDADD 		= $(LIB_STRC) $(SSL_LIBS)
#frontend_LDADD 			= $(LIB_STRC) $(SSL_LIBS)



check_PROGRAMS   = use-def-test 

CLEANFILES 	 = $(wildcard *.dep) $(wildcard *.tmp) $(wildcard *.sci.*)

BOOTCLEANFILES   = $(wildcard *.c)

TESTS 		 = use-def-test 
#needed-defs-test 
#frontend-test 
#extract-test

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)

nodist_use_def_test_SOURCES = use-def-test.c
use_def_test_LDADD = $(LIB_STRC) $(SSL_LIBS)

#nodist_raise_annotations_test_SOURCES = raise-annotations-test.c

%.atree : %.str
	$(STRATEGO_FRONT)/bin/parse-stratego $(STRINCLUDES) -i $< --assimilation off | $(ATERM_FRONT)/bin/pp-aterm -o $@

%.itree : %.str
	$(STRC)/libexec/strc-core/pack-stratego $(STRINCLUDES) -i $< | $(ATERM_FRONT)/bin/pp-aterm -o $@
