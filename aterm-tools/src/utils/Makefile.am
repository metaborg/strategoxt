include $(wildcard *.dep)
include $(top_srcdir)/Makefile.stratego

SCFLAGS 	 = --main $@
SUBDIRS      	 = data
bin_PROGRAMS 	 = PpTerm annos-to-term
bin_SCRIPTS	 = pp-term annos-to-term
libexec_PROGRAMS = PpTerm 
BOOTCLEANFILES	 = PpTerm.c annos-to-term.c
EXTRA_DIST	 = $(wildcard *.str) $(wildcard *.sdf) $(wildcard *.pp) pp-term.sh.src

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__GPP__@$(GPP)@g;\
	     s@__MAKE__@$(MAKE)@g;\
	     s@__pkgdatadir__@$(pkgdatadir)@g;' \
	        < $< > $@ && \
	     chmod +x $@

