include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	 = data

libexec_PROGRAMS = sdf-bracket
BOOTCLEANFILES 	 = sdf-bracket.c

TESTS        	 = sdf_bracket_check
CLEANFILES  	 = sdf_bracket_check $(wildcard *.dep)

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta) 

SCFLAGS     =  --main io-$*
STRINCLUDES = -I $(ASFIX_TOOLS)/share/asfix-tools

sdf_bracket_check_prog    = sdf-bracket
sdf_bracket_check_input   = data/sdf-bracket.sdf.af
sdf_bracket_check_output  = data/sdf-bracket.sdf.af.out
sdf_bracket_check_correct = data/sdf-bracket.sdf.af.correct
