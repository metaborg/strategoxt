include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      = data

bin_PROGRAMS = norm-lit de-norm-lit \
               sdf-normalize sdf-de-normalize \
               unfold-literal

libexec_PROGRAMS = norm-lit de-norm-lit \
               sdf-normalize sdf-de-normalize \
               unfold-literal

BOOTCLEANFILES =  norm-lit.c de-norm-lit.c \
               sdf-normalize.c sdf-de-normalize.c \
               unfold-literal.c

pkgdata_DATA = sdf-de-normalize.str

TESTS        = sdf_normalize_check\
	       sdf_denormalize_check\
	       sdf_denormalize_cons_check

EXTRA_DIST   = $(wildcard *.str) $(wildcard *.meta) 

CLEANFILES  = sdf_normalize_check \
	      sdf_denormalize_check \
	      sdf_denormalize_cons_check

SCFLAGS     = -I $(srcdir)/../lib \
	      -I $(srcdir)/../sdf-bracket \
              -I $(ASFIX_TOOLS)/share/asfix-tools \
	      --main $*

sdf_normalize_check_prog    = sdf-normalize
sdf_normalize_check_input   = data/Test1.def.af
sdf_normalize_check_output  = data/Test1.def.af.out
sdf_normalize_check_correct = data/Test1.def.af.out.correct

sdf_denormalize_check_prog    = sdf-de-normalize
sdf_denormalize_check_input   = data/test1.pico.norm.af.correct
sdf_denormalize_check_output  = data/test1.pico.def.af
sdf_denormalize_check_correct = data/test1.pico.def.af.correct

sdf_denormalize_cons_check_prog    = sdf-de-normalize
sdf_denormalize_cons_check_input   = data/test2.pico.norm.af.out
sdf_denormalize_cons_check_output  = data/test2.pico.def.af
sdf_denormalize_cons_check_correct = data/test2.pico.def.af.correct
