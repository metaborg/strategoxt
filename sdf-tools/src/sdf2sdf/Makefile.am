include $(top_srcdir)/src/templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS          = data

bin_PROGRAMS     = sdf2sdf sdf-regularize
libexec_PROGRAMS = sdf2sdf sdf-regularize

TESTS            = sdf2sdf_check
CLEANFILES       = sdf2sdf_check $(wildcard *.dep)
BOOTCLEANFILES 	 = $(wildcard *.c)
EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)

STRINCLUDES    	 = -I $(top_srcdir)/src/lib \
                   -I $(SDF_FRONT)/share/sdf-front \
                   -I $(XTC)/share/xtc
SCFLAGS          = --main $* --dr new
LDADD           += $(SSL_LIBS)

sdf2sdf_check_prog     = sdf2sdf
sdf2sdf_check_switches = --sdfcons --sdf2asdf --sdf-bracket
sdf2sdf_check_input    = data/Identifiers.sdf
sdf2sdf_check_output   = data/Identifiers.sdf.out
sdf2sdf_check_correct  = data/Identifiers.sdf.out.correct

