include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS          = data

bin_PROGRAMS 	 = sdf2sdf sdf-regularize
libexec_PROGRAMS = sdf2sdf sdf-regularize

sdf2sdf.o	 : xtc-conf.h
sdf-regularize.o : xtc-conf.h

TESTS        	 = sdf2sdf_check
CLEANFILES       = sdf2sdf_check $(wildcard *.dep) xtc-conf.h

BOOTCLEANFILES 	 = sdf2sdf.c sdf-regularize.c

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta) 

SCFLAGS     	 = -I $(srcdir)/../lib \
                   -I $(ASFIX_TOOLS)/share/asfix-tools \
		   $(XTCFLAGS) \
                   --main $*

sdf2sdf_check_prog     = sdf2sdf
sdf2sdf_check_switches = --sdfcons --sdf2asdf --sdf-bracket
sdf2sdf_check_input    = data/Identifiers.sdf
sdf2sdf_check_output   = data/Identifiers.sdf.out
sdf2sdf_check_correct  = data/Identifiers.sdf.out.correct
