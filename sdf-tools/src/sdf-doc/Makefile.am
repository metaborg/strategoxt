include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      = data

bin_PROGRAMS     = sdf-doc sdf2sg
libexec_PROGRAMS = sdf-doc sdf2sg

sdf2sg_LDADD = $(SSL_LIBS)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = sdf-doc.c sdf2sg.c

TESTS        = sdf-doc-check

EXTRA_DIST  = sdf-doc-check $(wildcard *.str) $(wildcard *.meta) 

SCFLAGS      = -I $(ASFIX_TOOLS)/share/asfix-tools \
                -I $(srcdir)/../lib -I $(srcdir)/../sdf-wf \
                -I $(GRAPH_TOOLS)/share/graph-tools

