include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      = data

bin_PROGRAMS  = fdl2sdf

#TESTS        = sdf2sdf_check

#CLEANFILES  += sdf2sdf_check

BOOTCLEANFILES = fdl2sdf.c

EXTRA_DIST  = $(wildcard *.str) $(wildcard *.meta) 

SCFLAGS     = -I $(srcdir) \
               -I $(srcdir)/../lib \
               -I $(ASFIX_TOOLS)/share/asfix-tools \
               --main $*

