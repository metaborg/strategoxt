include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt

include $(wildcard *.dep)

SUBDIRS      	 = data

libexec_PROGRAMS = GraphXML2dot
LDADD           += $(SSL_LIBS)

TESTS        	 = graphxml2dot_check

BOOTCLEANFILES   = graphxml2dot_check.c GraphXML2dot.c
CLEANFILES	 = $(wildcard *.dep)
EXTRA_DIST       = $(wildcard *.str) 

STRINCLUDES = \
  -I $(srcdir)/../graphxml \
  -I $(DOT_TOOLS)/share/dot-tools \
  -I $(ASFIX_TOOLS)/share/asfix-tools

graphxml2dot_check_prog    = GraphXML2dot
graphxml2dot_check_input   = data/incomplete.sdf.gxml.af 
graphxml2dot_check_output  = data/incomplete.sdf.sg.dot.af
graphxml2dot_check_correct = data/incomplete.sdf.sg.dot.af.correct
