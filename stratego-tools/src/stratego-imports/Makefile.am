include $(srcdir)/../make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS		 = data

bin_SCRIPTS = stratego-imports

stratego-imports :
	echo "#! /bin/sh" > $@
	echo "$(SC)/bin/pack-stratego --imports \$$*" >> $@
	chmod +x $@

CLEANFILES       = stratego-imports

# stratego-imports is obsolete; use pack-stratego --imports
#
#SUBDIRS		 = data
#
#bin_PROGRAMS 	 = stratego-imports
#libexec_PROGRAMS = stratego-imports
#BOOTCLEANFILES 	 = stratego-imports.c
#
#TESTS        	 = stratego_imports1_check \
#                   stratego_imports2_check \
#                   stratego_imports3_check
#
#EXTRA_DIST       = $(wildcard *.str)
#
#CLEANFILES       = stratego_imports1_check \
#                   stratego_imports2_check \
#                   stratego_imports3_check
#
#SCFLAGS     	 = -I $(srcdir)/../stratego \
#                   -I $(ASFIX_TOOLS)/share/asfix-tools \
#                   -I $(GRAPH_TOOLS)/share/graph-tools
#
#stratego_imports1_check_prog     = stratego-imports
#stratego_imports1_check_switches = -S -I data
#stratego_imports1_check_input    = test1.r
#stratego_imports1_check_output   = data/test.out
#stratego_imports1_check_correct  = data/test.out.correct
#
#stratego_imports2_check_prog     = stratego-imports
#stratego_imports2_check_switches = -S -l -I data
#stratego_imports2_check_input    = test1.r
#stratego_imports2_check_output   = data/test-l.out
#stratego_imports2_check_correct  = data/test-l.out.correct
#
#stratego_imports3_check_prog     = stratego-imports
#stratego_imports3_check_switches = -S --graphxml -I data
#stratego_imports3_check_input    = test1.r
#stratego_imports3_check_output   = data/test.xml
#stratego_imports3_check_correct  = data/test.xml.correct
#
