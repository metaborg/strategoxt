include $(srcdir)/../templates/make_rules 
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

SUBDIRS      = data

STRATEGO_PRG = visamb

bin_SCRIPTS  = $(STRATEGO_PRG)

pkgdata_DATA = visamb.pp visamb.pp.af

TESTS        = visamb1_check visamb2_check
CLEANFILES  += visamb1_check visamb2_check visamb.pp.af

EXTRA_DIST  += visamb.pp

SCFLAGS     += -I $(srcdir)/../lib \
               -I $(ASFIX_TOOLS)/share/asfix-tools

visamb1_check_prog    = visamb
visamb1_check_input   = data/input.test.tree
visamb1_check_output  = data/input.test.tree.out
visamb1_check_correct = data/input.test.tree.out.correct

visamb2_check_prog    = visamb
visamb2_check_input   = data/input.exp.tree
visamb2_check_output  = data/input.exp.tree.out
visamb2_check_correct = data/input.exp.tree.out.correct

# rule to generate imploded pretty-print tables
%.pp.af : %.pp
	$(MAKE) -f $(GPP)/share/gpp/gpp.Makefile $@
