include $(top_srcdir)/Makefile.stratego
include $(libexec_PROGRAMS:%=%.c.dep)

SUBDIRS      	 = data

SCFLAGS     	 = -I $(srcdir)/../lib \
		   -I $(ASFIX_TOOLS)/share/asfix-tools \
		   --main $*

libexec_PROGRAMS = Abox-2-html 
bin_SCRIPTS 	 = abox2html
pkgdata_DATA     = boxstyle.css

BOOTCLEANFILES 	 = Abox-2-html.c
CLEANFILES      += abox2html

EXTRA_DIST  	 = $(wildcard *.str) abox2html.sh.src boxstyle.css

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__MAKE__@$(MAKE)@g;\
	     s@__pkgdatadir__@$(pkgdatadir)@g;' \
	        < $< > $@ && \
	     chmod +x $@
