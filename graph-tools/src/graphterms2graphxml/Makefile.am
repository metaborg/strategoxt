include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = graph-term2GraphXML
LDADD           += $(SSL_LIBS)

BOOTCLEANFILES	 = graph-term2GraphXML.c
CLEANFILES	 = $(wildcard *.dep)
EXTRA_DIST       = $(wildcard *.str) 

STRINCLUDES = \
  -I $(srcdir)/../graphxml \
  -I $(srcdir)/../graphterms \
  -I $(ASFIX_TOOLS)/share/asfix-tools
