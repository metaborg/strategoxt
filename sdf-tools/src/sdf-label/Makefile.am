include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	 = data

bin_PROGRAMS 	 = sdf-label sdf-rmlabel
libexec_PROGRAMS = sdf-label sdf-rmlabel
LDADD           += $(SSL_LIBS)

BOOTCLEANFILES 	 = sdf-label.c sdf-rmlabel.c
TESTS        	 = sdf_rmlabel_check sdf_label_check
CLEANFILES  	 = sdf_rmlabel_check sdf_label_check $(wildcard *.dep)

SCFLAGS = \
  -I $(ASFIX_TOOLS)/share/asfix-tools \
  -I $(srcdir)/../lib \
  --main $*

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta) 

sdf_label_check_prog    = sdf-label
sdf_label_check_input   = data/add-label.sdf.af
sdf_label_check_output  = data/add-label.sdf.af.out
sdf_label_check_correct = data/add-label.sdf.af.correct

sdf_rmlabel_check_prog    = sdf-rmlabel
sdf_rmlabel_check_input   = data/rm-label.asfix
sdf_rmlabel_check_output  = data/rm-label.asfix.out
sdf_rmlabel_check_correct = data/rm-label.asfix.correct
