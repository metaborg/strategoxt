include $(srcdir)/../templates/make_rules


SUBDIRS       = data

libexec_SCRIPTS = tohtml ismap2usemap
pkgdata_DATA    = tohtml.css

# Optional tests to run
# TESTS         = program-check

# List all files that should be distributed here
EXTRA_DIST      = tohtml.sh.src ismap2usemap.perl.src \
                   tohtml.css

# What should be cleaned
CLEANFILES      = tohtml ismap2usemap

% : %.sh.src Makefile
	sed 's@__BINDIR__@$(bindir)@g;\
	      s@__DATADIR__@$(pkgdatadir)@g;\
	      s@__GRAPHVIZ__@$(GRAPHVIZ)@g;\
              s@__GRAPHTOOLS__@$(GRAPH_TOOLS)@g;\
              s@__SGLR__@$(SGLR)@g;\
	      s@__LIBEXEC__@$(libexecdir)@g;\
	      s@__MAKE__@$(MAKE)@g;\
	      s@__VERSION__@$(VERSION)@g;' \
	   < $< > $@
	chmod 755 $@

% : %.perl.src Makefile
	@sed 's@__PERL__@$(PERL)@g;' < $< > $@
	chmod 755 $@

bootclean:
