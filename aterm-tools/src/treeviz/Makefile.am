include $(srcdir)/../templates/make_rules
#include $(srcdir)/../templates/make_rules.stratego
include $(wildcard *.dep)

include $(top_srcdir)/Makefile.stratego

SUBDIRS     	 = data

bin_PROGRAMS     = treeviz term-to-adot
bin_SCRIPTS	 = term-to-dot
libexec_PROGRAMS = treeviz term-to-adot

pkgdata_DATA 	 = dot-pretty.pp

CLEANFILES	+= $(wildcard *.dep)
BOOTCLEANFILES 	 = treeviz.c term-to-adot.c

# TESTS        	 = program-check

EXTRA_DIST     	 = $(wildcard *.str) $(wildcard *.sdf) $(wildcard *.pp) \
                   term-to-dot.sh.src

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__GPP__@$(GPP)@g;\
	     s@__MAKE__@$(MAKE)@g;\
	     s@__pkgdatadir__@$(pkgdatadir)@g;' \
	        < $< > $@ && \
	     chmod +x $@

