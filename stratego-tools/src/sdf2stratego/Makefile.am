include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	 = data

bin_PROGRAMS  	 = sdf2stratego
libexec_PROGRAMS = sdf2stratego
BOOTCLEANFILES 	 = sdf2stratego.c

# TESTS        	 = sdf2stratego_check

EXTRA_DIST  	 = $(wildcard *.str) README

CLEANFILES  	 = sdf2stratego_check

SCFLAGS    	 = -I ${srcdir}/../stratego \
	           -I $(ASFIX_TOOLS)/share/asfix-tools \
	           --main $*

sdf2stratego_check_prog     = sdf2stratego
sdf2stratego_check_input    = data/prop.sdf.af
sdf2stratego_check_output   = data/prop.r.af
sdf2stratego_check_correct  = data/prop.r.af.correct
