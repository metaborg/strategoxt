include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS 	 = data

SCFLAGS 	 = -I $(srcdir)/../lib \
		   -I $(ASFIX_TOOLS)/share/asfix-tools \
		   --main $*

libexec_PROGRAMS = abox-format

BOOTCLEANFILES 	 = abox-format.c
CLEANFILES 	 = $(wildcard *.dep)
