include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS          = data

libexec_PROGRAMS = Vis-amb nonterminal-tree
pkgdata_DATA     = Vis-amb.str

BOOTCLEANFILES   = Vis-amb.c nonterminal-tree.c

TESTS            = visamb1_check visamb2_check

SCFLAGS          = -I $(srcdir)/../asfix --main $*

CLEANFILES       = visamb1_check visamb2_check $(wildcard *.dep)

EXTRA_DIST 	 = $(wildcard *.str)

visamb1_check_prog    = Vis-amb
visamb1_check_input   = data/input.test.tree
visamb1_check_output  = data/input.test.tree.out
visamb1_check_correct = data/input.test.tree.out.correct

visamb2_check_prog    = Vis-amb
visamb2_check_input   = data/input.exp.tree
visamb2_check_output  = data/input.exp.tree.out
visamb2_check_correct = data/input.exp.tree.out.correct
