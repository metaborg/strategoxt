include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      = data

bin_PROGRAMS = sdf-doc sdf2sg
libexec_PROGRAMS = sdf-doc sdf2sg

BOOTCLEANFILES = sdf-doc.c sdf2sg.c

TESTS        = sdf-doc-check

EXTRA_DIST  = sdf-doc-check $(wildcard *.str) $(wildcard *.meta) 

# Additional flags for the Stratego compiler
SCFLAGS      = -I $(ASFIX_TOOLS)/share/asfix-tools \
                -I $(srcdir)/../lib -I $(srcdir)/../sdf-wf \
                -I $(GRAPH_TOOLS)/share/graph-tools

