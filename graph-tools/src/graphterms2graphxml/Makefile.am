include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	 = data

bin_PROGRAMS     = graph-term2GraphXML
libexec_PROGRAMS = graph-term2GraphXML

BOOTCLEANFILES	 = graph-term2GraphXML.c
CLEANFILES	 = $(wildcard *.dep)

SCFLAGS      	 = -I $(srcdir)/../graphxml \
                   -I $(srcdir)/../graphterms \
	       	   -I $(ASFIX_TOOLS)/share/asfix-tools
