include $(top_srcdir)/Makefile.stratego
include $(libexec_PROGRAMS:%=%.c.dep)

SUBDIRS      	 = data

SCFLAGS     	 = -I $(srcdir)/../lib \
		   -I $(ASFIX_TOOLS)/share/asfix-tools \
		   --main $*

libexec_PROGRAMS = Pp-gen
bin_SCRIPTS 	 = ppgen

BOOTCLEANFILES 	 = Pp-gen.c
CLEANFILES      += ppgen no_generation_for_bracket_function_check sdf.cons.tbl

TESTS        	 = no_generation_for_bracket_function_check

EXTRA_DIST  	 = $(wildcard *.str) ppgen.sh.src sdf.cons.def sdf.cons.tbl

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__MAKE__@$(MAKE)@g;\
	     s@__pkgdatadir__@$(pkgdatadir)@g;' \
	        < $< > $@ && \
	     chmod +x $@

%.tbl : %.def
	PATH=$(PGEN)/bin:$${PATH} sdf2table -m GB-Main $< -o $@

no_generation_for_bracket_function_check_prog    = Pp-gen
no_generation_for_bracket_function_check_input   = data/ppgencheck1.in
no_generation_for_bracket_function_check_output  = data/ppgencheck1.out
no_generation_for_bracket_function_check_correct = data/ppgencheck1.correct
