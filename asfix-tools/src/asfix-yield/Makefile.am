include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	= data

bin_PROGRAMS	 = asfix-yield
bin_SCRIPTS 	 = asource
libexec_SCRIPTS  = asource
libexec_PROGRAMS = asfix-yield

TESTS        	= asfix_yield1_check asfix_yield2_check
CLEANFILES   	= asfix_yield1_check asfix_yield2_check $(wildcard *.dep) asfix-yield asource
BOOTCLEANFILES 	= asfix-yield.c

SCFLAGS       	= -I $(srcdir)/../asfix 

asource	: asfix-yield
	ln $< $@

#install-exec-local:
#	$(RM) ${bindir}/asource ${libexecdir}/asource
#	ln -sf asfix-yield ${bindir}/asource
#	ln -sf asfix-yield ${libexecdir}/asource

asfix_yield1_check_prog    = asfix-yield
asfix_yield1_check_input   = data/tiny.tree
asfix_yield1_check_output  = data/tiny.txt
asfix_yield1_check_correct = data/tiny.sil

asfix_yield2_check_prog    = asfix-yield
asfix_yield2_check_input   = data/aterms.tree
asfix_yield2_check_output  = data/aterms.txt
asfix_yield2_check_correct = data/aterms.sdf
