include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS          = data

pkgdata_DATA     = Vis-amb.str
libexec_PROGRAMS = Vis-amb nonterminal-tree
SCFLAGS          = --main $*

STRINCLUDES = \
  -I $(top_srcdir)/lib \
  -I $(top_srcdir)/sig \
  -I $(SDF_FRONT)/share/sdf-front 

LDADD += $(SSL_LIBS)

EXTRA_DIST 	 = $(wildcard *.str)
BOOTCLEANFILES   = Vis-amb.c nonterminal-tree.c
CLEANFILES       = visamb1_check visamb2_check $(wildcard *.dep)

TESTS            = visamb1_check visamb2_check

visamb1_check_prog    = Vis-amb
visamb1_check_input   = data/input.test.tree
visamb1_check_output  = data/input.test.tree.out
visamb1_check_correct = data/input.test.tree.out.correct

visamb2_check_prog    = Vis-amb
visamb2_check_input   = data/input.exp.tree
visamb2_check_output  = data/input.exp.tree.out
visamb2_check_correct = data/input.exp.tree.out.correct
