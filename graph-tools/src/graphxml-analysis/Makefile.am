include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt

include $(wildcard *.dep)

SUBDIRS      	 = data

libexec_PROGRAMS = GraphXML-analysis
LDADD           += $(SSL_LIBS)

BOOTCLEANFILES 	 = GraphXML-analysis.c
CLEANFILES	 = $(wildcard *.dep)
EXTRA_DIST       = $(wildcard *.str) 

# TESTS      	 = program-check

SCFLAGS      	 = -I $(srcdir)/../graphxml \
                   -I $(ASFIX_TOOLS)/share/asfix-tools
