include $(top_srcdir)/Makefile.stratego
include $(wildcard *.dep)

SUBDIRS      = data

EXTRA_DIST   = explode-asfix2me.str asfix2me.str

bin_PROGRAMS = explode-asfix2me

SCFLAGS      = -I $(srcdir)/../asfix --main $*

BOOTCLEANFILES = explode-asfix2me.c
