include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.stratego

include $(wildcard *.dep)

SUBDIRS      	= data

bin_PROGRAMS 	= GraphXML2dot
libexec_PROGRAMS = GraphXML2dot

TESTS        	= graphxml2dot_check

BOOTCLEANFILES  = graphxml2dot_check.c GraphXML2dot.c

SCFLAGS      	= -I $(srcdir)/../graphxml \
		  -I $(srcdir)/../dot \
		  -I $(ASFIX_TOOLS)/share/asfix-tools

graphxml2dot_check_prog    = GraphXML2dot
graphxml2dot_check_input   = data/incomplete.sdf.gxml.af 
graphxml2dot_check_output  = data/incomplete.sdf.sg.dot.af
graphxml2dot_check_correct = data/incomplete.sdf.sg.dot.af.correct
