include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS 	 = data

STRINCLUDES 	 = -I $(top_srcdir)/../stratego-front/syn	  \
	   	   -I $(STRATEGO_FRONT)/share/stratego-front	  \
	   	   -I $(STRATEGO_FRONT)/share/sdf/stratego-front  \
	   	   -I $(srcdir)/../sig				  \
	   	   -I $(srcdir)/../match			  \
	  	   -I $(srcdir)/../lib				  \
	  	   -I $(srcdir)/../opt	

SCFLAGS  	=  -I $(top_srcdir)/../stratego-front/syn	  \
	   	   -I $(STRATEGO_FRONT)/share/stratego-front	  \
	   	   -I $(STRATEGO_FRONT)/share/sdf/stratego-front  \
	   	   -I $(srcdir)/../sig				  \
	   	   -I $(srcdir)/../match			  \
	  	   -I $(srcdir)/../lib				  \
	  	   -I $(srcdir)/../opt	\
		   --dr new			\
	  	   --main $*-io			\
		   --verbose 3
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
	extract-all 			

nodist_repair_types_SOURCES = repair-types.c
nodist_pre_desugar_SOURCES = pre-desugar.c
nodist_combine_sections_SOURCES = combine-sections.c
nodist_variables_to_constructors_SOURCES = variables-to-constructors.c
nodist_raise_annotations_SOURCES = raise-annotations.c
nodist_define_lrules_SOURCES = define-lrules.c
nodist_lift_dynamic_rules_SOURCES = lift-dynamic-rules.c
nodist_stratego_desugar_SOURCES = stratego-desugar.c
nodist_use_def_SOURCES = use-def.c
nodist_check_constructors_SOURCES = check-constructors.c
nodist_expand_overlays_SOURCES = expand-overlays.c
nodist_rules_to_sdefs_SOURCES = rules-to-sdefs.c
nodist_desugar_list_matching_SOURCES = desugar-list-matching.c
nodist_desugar_default_vardec_SOURCES = desugar-default-vardec.c
nodist_introduce_congdefs_SOURCES = introduce-congdefs.c
nodist_rename_defs_SOURCES = rename-defs.c
nodist_desugar_SOURCES = desugar.c
nodist_stratego_warnings_SOURCES = stratego-warnings.c
nodist_extract_SOURCES = extract.c
nodist_extract_all_SOURCES = extract-all.c

LDADD           += $(SSL_LIBS)

check_PROGRAMS   = use-def-test lift-dynamic-rules-old-test 

CLEANFILES 	 = $(wildcard *.dep) $(wildcard *.tmp) $(wildcard *.sci.*)

BOOTCLEANFILES   = $(wildcard *.c)

TESTS 		 = use-def-test lift-dynamic-rules-old-test 
#needed-defs-test 
#frontend-test 
#extract-test

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)

nodist_lift_dynamic_rules_old_test_SOURCES = lift-dynamic-rules-old-test.c
nodist_use_def_test_SOURCES = use-def-test.c
#nodist_raise_annotations_test_SOURCES = raise-annotations-test.c

%.atree : %.str
	parse-stratego $(STRINCLUDES) -i $< | pp-aterm -o $@

%.itree : %.str
	pack-stratego $(STRINCLUDES) -i $< | pp-aterm -o $@
