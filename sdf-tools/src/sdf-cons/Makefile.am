include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	 = data

libexec_PROGRAMS = sdf-cons sdf-rm-cons
BOOTCLEANFILES 	 = sdf-cons.c sdf-rm-cons.c
LDADD           += $(SSL_LIBS)

EXTRA_DIST  	 = KNOWN-BUGS $(wildcard *.str) $(wildcard *.meta) 

TESTS         	 = sdf_cons_check sdf_cons_injections_check 
CLEANFILES  	 = sdf_cons_check sdf_cons_injections_check $(wildcard *.dep)

SCFLAGS = --main io-$*
STRINCLUDES = -I $(ASFIX_TOOLS)/share/asfix-tools 

sdf_cons_check_prog    = sdf-cons
sdf_cons_check_input   = data/test1.sdf.af
sdf_cons_check_output  = data/test1.cons.sdf.af
sdf_cons_check_correct = data/test1-correct.sdf.af

sdf_cons_injections_check_prog     = sdf-cons 
sdf_cons_injections_check_switches = --injections
sdf_cons_injections_check_input    = data/sdf-cons-injections.sdf.af
sdf_cons_injections_check_output   = data/sdf-cons-injections.cons.sdf.af
sdf_cons_injections_check_correct  = data/sdf-cons-injections-correct.sdf.af
