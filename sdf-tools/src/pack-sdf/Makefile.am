include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS = data

bin_PROGRAMS 	 = pack-sdf
libexec_PROGRAMS = pack-sdf
TESTS        	 = pack_sdf_check
CLEANFILES 	 = pack_sdf_check $(wildcard *.dep)
BOOTCLEANFILES 	 = pack-sdf.c 
EXTRA_DIST  	 = $(wildcard *.str) $(wildcard *.meta) 

SCFLAGS      = --main io-$*
STRINCLUDES  = -I $(top_srcdir)/src/lib \
               -I $(XTC)/share/xtc \
               -I $(ASFIX_TOOLS)/share/asfix-tools

pack_sdf_check_prog     = pack-sdf
pack_sdf_check_switches = -I data -dep data/syntax-test.def -o /dev/null
pack_sdf_check_input    = data/syntax-test.sdf
pack_sdf_check_output   = data/syntax-test.def.dep
pack_sdf_check_correct  = data/syntax-test.def.dep.correct


