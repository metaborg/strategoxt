include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	 = data

SCFLAGS     	 = -I $(srcdir)/../lib \
		   -I $(ASFIX_TOOLS)/share/asfix-tools \
		   --main $*

libexec_PROGRAMS = Abox-2-latex 
bin_SCRIPTS 	 = abox2latex
pkgdata_DATA     = default.abbrevs

BOOTCLEANFILES 	 = Abox-2-latex.c
CLEANFILES       = abox2latex $(wildcard *.dep)

EXTRA_DIST  	 = $(wildcard *.str) abox2latex.sh.src default.abbrevs

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__MAKE__@$(MAKE)@g;\
	     s@__pkgdatadir__@$(pkgdatadir)@g;' \
	        < $< > $@ && \
	     chmod +x $@


