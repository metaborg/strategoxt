include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      = data

bin_PROGRAMS = sdf-imports
libexec_PROGRAMS = sdf-imports

EXTRA_DIST   =  $(wildcard *.str) $(wildcard *.meta) 

# Additional flags for the Stratego compiler
SCFLAGS     = -I $(srcdir)/../lib \
               -I $(ASFIX_TOOLS)/share/asfix-tools \
               -I $(GRAPH_TOOLS)/share/graph-tools

