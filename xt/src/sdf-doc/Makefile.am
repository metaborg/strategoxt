include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt


# define any subdir here
SUBDIRS      = data


# What scipts to build
bin_SCRIPTS  = get-sort-graph

pkgdata_DATA = sdf-doc.make

# Optional tests to run
TESTS        = sdf2gxml2dot-check

# List all files that should be distributed here
EXTRA_DIST  = get-sort-graph.sh.src sdf-doc.make.src \
               sdf2gxml2dot-check.sh.src

CLEANFILES  = sdf2gxml2dot-check get-sort-graph sdf-doc.make

% : %.sh.src Makefile
	@sed 's@__DATADIR__@$(pkgdatadir)@g;\
              s@__GRAPHTOOLS__@$(GRAPH_TOOLS)@g;\
              s@__SDFTOOLS__@$(SDF_TOOLS)@g'\
           < $< > $@ && \
	chmod 755 $@

%.make : %.make.src Makefile
	@sed 's@__BINDIR__@$(bindir)@g;\
              s@__DATADIR__@$(pkgdatadir)@g;\
              s@__GB__@$(GB)@g;\
              s@__GRAPHVIZ__@$(GRAPHVIZ)@g;\
              s@__GRAPHTOOLS__@$(GRAPH_TOOLS)@g;\
              s@__SDFTOOLS__@$(SDF_TOOLS)@g;\
              s@__ASFIXTOOLS__@$(ASFIX_TOOLS)@g;\
              s@__LIBEXEC__@$(libexecdir)@g;\
              s@__MAKE__@$(MAKE)@g;\
              s@__VERSION__@$(VERSION)@g;' \
           < $< > $@
	chmod 755 $@
