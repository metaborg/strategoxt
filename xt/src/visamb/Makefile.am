include $(srcdir)/../templates/make_rules 
include $(top_srcdir)/Makefile.xt

include $(wildcard *.dep)

SUBDIRS      	= data

bin_PROGRAMS 	= visamb
BOOTCLEANFILES 	= visamb.c
visamb.o	: xtc-conf.h

pkgdata_DATA 	= visamb.pp visamb.pp.af

TESTS        	= visamb1_check visamb2_check
CLEANFILES   	= visamb1_check visamb2_check visamb.pp.af $(wildcard *.dep) xtc-conf.h

EXTRA_DIST   	= visamb.pp visamb.pp.af

SCFLAGS      	= -I $(srcdir)/../lib \
                  -I $(ASFIX_TOOLS)/share/asfix-tools \
		  --main $* \
		  $(XTCFLAGS)

visamb1_check_prog    = visamb
visamb1_check_input   = data/input.test.tree
visamb1_check_output  = data/input.test.tree.out
visamb1_check_correct = data/input.test.tree.out.correct

visamb2_check_prog    = visamb
visamb2_check_input   = data/input.exp.tree
visamb2_check_output  = data/input.exp.tree.out
visamb2_check_correct = data/input.exp.tree.out.correct

#%.pp.af : %.pp
#	$(MAKE) -f $(GPP)/share/gpp/gpp.Makefile $@
