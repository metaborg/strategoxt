BASE = ..
include $(BASE)/Makefile.incl

SUBDIRS = thesis paper

MANIFEST := Makefile refs.bib wrs-survey.bib macros.ltx

all clean clean-stuff install depend test:
	for subdir in $(SUBDIRS); do \
	  (cd $$subdir && $(MAKE) -w $@) || exit 1; \
	done
