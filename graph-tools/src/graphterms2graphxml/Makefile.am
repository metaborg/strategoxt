include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = graph-term2GraphXML
libexec_PROGRAMS = graph-term2GraphXML
LDADD           += $(SSL_LIBS)

BOOTCLEANFILES	 = graph-term2GraphXML.c
CLEANFILES	 = $(wildcard *.dep)

STRINCLUDES = \
  -I $(srcdir)/../graphxml \
  -I $(srcdir)/../graphterms \
  -I $(ASFIX_TOOLS)/share/asfix-tools
