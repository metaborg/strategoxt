include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt

include $(wildcard *.dep)

SUBDIRS      	 = data

bin_PROGRAMS     = GraphXML-analysis
libexec_PROGRAMS = GraphXML-analysis

BOOTCLEANFILES 	 = GraphXML-analysis.c
CLEANFILES	 = $(wildcard *.dep)

# TESTS      	 = program-check

SCFLAGS      	 = -I $(srcdir)/../graphxml \
                   -I $(ASFIX_TOOLS)/share/asfix-tools
