include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	 = data

SCFLAGS     	 = -I $(srcdir)/../lib \
		   -I $(ASFIX_TOOLS)/share/asfix-tools \
		   --main $*

libexec_PROGRAMS = Ast-2-abox
bin_SCRIPTS 	 = ast2abox

BOOTCLEANFILES 	 = Ast-2-abox.c
CLEANFILES       = ast2abox $(wildcard *.dep)

EXTRA_DIST  	 = $(wildcard *.str) ast2abox.sh.src 

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__MAKE__@$(MAKE)@g;\
	     s@__pkgdatadir__@$(pkgdatadir)@g;' \
	        < $< > $@ && \
	     chmod +x $@

