include $(srcdir)/../templates/make_rules
include $(wildcard *.dep)
include $(top_srcdir)/Makefile.xt

SUBDIRS      	 = data

bin_PROGRAMS 	 = sdf2asdf
libexec_PROGRAMS = sdf2asdf

BOOTCLEANFILES 	 = sdf2asdf.c
CLEANFILES  	 = sdf2asdf_check $(wildcard *.dep)
TESTS        	 = sdf2asdf_check

EXTRA_DIST  	 = $(wildcard *.str) $(wildcard *.meta) 

SCFLAGS     	 = -I $(srcdir)/../lib -I $(ASFIX_TOOLS)/share/asfix-tools

sdf2asdf_check_prog    = sdf2asdf
sdf2asdf_check_input   = data/test.def.af
sdf2asdf_check_output  = data/test.def.af.out
sdf2asdf_check_correct = data/test.def.af.out.correct

