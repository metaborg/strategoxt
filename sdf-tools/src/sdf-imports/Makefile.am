include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	 = data

bin_PROGRAMS 	 = sdf-imports
libexec_PROGRAMS = sdf-imports

BOOTCLEANFILES	 = sdf-imports.c
CLEANFILES	 = $(wildcard *.dep)

sdf-imports.o	 : xtc-conf.h

EXTRA_DIST   	 =  $(wildcard *.str) $(wildcard *.meta) 

SCFLAGS     	 = -I $(srcdir)/../lib \
                   -I $(ASFIX_TOOLS)/share/asfix-tools \
                   -I $(GRAPH_TOOLS)/share/graph-tools \
		   $(XTCFLAGS)

