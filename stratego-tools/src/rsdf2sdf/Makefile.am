include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS		 = data

bin_PROGRAMS 	 = rsdf2sdf
libexec_PROGRAMS = rsdf2sdf

CLEANFILES	 = $(wildcard *.dep)
BOOTCLEANFILES 	 = rsdf2sdf.c

EXTRA_DIST 	 = $(wildcard *.str)

SCFLAGS     	 = -I $(srcdir)/../stratego \
                   -I $(ASFIX_TOOLS)/share/asfix-tools \
                   --main $*
