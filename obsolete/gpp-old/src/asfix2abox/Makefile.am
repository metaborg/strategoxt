include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	 = data

SCFLAGS     	 = -I $(srcdir)/../lib \
		   -I $(srcdir)/../ppgen \
		   -I $(ASFIX_TOOLS)/share/asfix-tools \
		   --main $*

libexec_PROGRAMS = Asfix-2-abox
bin_SCRIPTS 	 = asfix2abox

BOOTCLEANFILES 	 = Asfix-2-abox.c
CLEANFILES       = asfix2abox $(wildcard *.dep)

EXTRA_DIST  	 = $(wildcard *.str) asfix2abox.sh.src

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__MAKE__@$(MAKE)@g;\
	     s@__pkgdatadir__@$(pkgdatadir)@g;' \
	        < $< > $@ && \
	     chmod +x $@


