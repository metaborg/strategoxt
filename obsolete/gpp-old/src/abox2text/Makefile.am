include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	 = data

SCFLAGS     	 = -I $(srcdir)/../lib \
		   -I $(ASFIX_TOOLS)/share/asfix-tools \
		   --main $*

libexec_PROGRAMS = Abox-2-text 
bin_SCRIPTS 	 = abox2text

BOOTCLEANFILES 	 = Abox-2-text.c
CLEANFILES       = abox2text $(wildcard *.dep)

EXTRA_DIST  	 = $(wildcard *.str) abox2text.sh.src

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__MAKE__@$(MAKE)@g;\
	     s@__pkgdatadir__@$(pkgdatadir)@g;' \
	        < $< > $@ && \
	     chmod +x $@


