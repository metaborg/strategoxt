include $(srcdir)/../templates/make_rules
include $(wildcard *.dep)
include $(top_srcdir)/Makefile.xt

SCFLAGS		 = -I $(DOT_TOOLS)/share/dot-tools \
		   --keep 0 --main $* $(XTCFLAGS)

SUBDIRS     	 = data

bin_PROGRAMS     = treeviz term-to-adot term-to-dot
libexec_PROGRAMS = treeviz term-to-adot

term-to-adot	 : xtc-conf.h
treeviz	 	 : xtc-conf.h
term-to-dot	 : xtc-conf.h

CLEANFILES	 = $(wildcard *.dep)
BOOTCLEANFILES 	 = treeviz.c term-to-adot.c term-to-dot.c

# TESTS        	 = program-check

EXTRA_DIST     	 = $(wildcard *.str)

#$(wildcard *.sdf) $(wildcard *.pp)                    term-to-dot.sh.src

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__GPP__@$(GPP)@g;\
	     s@__MAKE__@$(MAKE)@g;\
	     s@__pkgdatadir__@$(pkgdatadir)@g;' \
	        < $< > $@ && \
	     chmod +x $@

