include $(top_srcdir)/Makefile.stratego
include $(libexec_PROGRAMS:%=%.c.dep)

SUBDIRS = data

SCFLAGS 	 = -I $(srcdir)/../lib \
		   -I $(ASFIX_TOOLS)/share/asfix-tools \
		   --main $*

libexec_PROGRAMS = abox-format

BOOTCLEANFILES 	 = abox-format.c

