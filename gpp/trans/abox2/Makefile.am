include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/make_rules.tests

include $(wildcard *.dep)

SUBDIRS = data

libexec_PROGRAMS = Abox-2-text Abox-2-html
# Abox-2-latex
pkgdata_DATA     = boxstyle.css

SCFLAGS          = --main io-$*
STRINCLUDES      = -I $(top_srcdir)/sig/pp-table \
                   -I $(top_srcdir)/trans \
                   -I $(XTC)/share/xtc
LDADD += $(SSL_LIBS)

# TESTS = Abox_2_latex1_check Abox_2_latex2_check Abox_2_latex3_check
#        Abox_2_latex4_check Abox_2_latex5_check

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta) boxstyle.css
CLEANFILES       = $(wildcard *.dep) $(TESTS)
BOOTCLEANFILES   = $(wildcard *.c)

Abox_2_latex1_check_prog    = Abox-2-latex
Abox_2_latex1_check_input   = data/allignment1.abox
Abox_2_latex1_check_output  = data/allignment1.latex
Abox_2_latex1_check_correct = data/allignment1.latex.correct

Abox_2_latex2_check_prog    = Abox-2-latex
Abox_2_latex2_check_input   = data/allignment2.abox
Abox_2_latex2_check_output  = data/allignment2.latex
Abox_2_latex2_check_correct = data/allignment2.latex.correct

Abox_2_latex3_check_prog    = Abox-2-latex
Abox_2_latex3_check_input   = data/allignment3.abox
Abox_2_latex3_check_output  = data/allignment3.latex
Abox_2_latex3_check_correct = data/allignment3.latex.correct

Abox_2_latex4_check_prog    = Abox-2-latex
Abox_2_latex4_check_input   = data/allignment4.abox
Abox_2_latex4_check_output  = data/allignment4.latex
Abox_2_latex4_check_correct = data/allignment4.latex.correct

Abox_2_latex5_check_prog    = Abox-2-latex
Abox_2_latex5_check_input   = data/allignment5.abox
Abox_2_latex5_check_output  = data/allignment5.latex
Abox_2_latex5_check_correct = data/allignment5.latex.correct
