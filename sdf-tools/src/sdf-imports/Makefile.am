include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	 = sdf-imports
libexec_PROGRAMS = sdf-imports

BOOTCLEANFILES	 = sdf-imports.c
CLEANFILES	 = $(wildcard *.dep)
EXTRA_DIST   	 = $(wildcard *.str) $(wildcard *.meta) 

STRINCLUDES = \
  -I $(srcdir)/../lib \
  -I $(ASFIX_TOOLS)/share/asfix-tools \
  -I $(GRAPH_TOOLS)/share/graph-tools \
  -I $(XTC)/share/xtc 

