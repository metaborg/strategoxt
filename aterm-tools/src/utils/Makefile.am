include $(wildcard *.dep)
include $(top_srcdir)/Makefile.xt

SUBDIRS          = data

bin_PROGRAMS     = annos-to-term
SCFLAGS          = --main $*

BOOTCLEANFILES	 = annos-to-term.c
CLEANFILES       = $(wildcard *.dep)
EXTRA_DIST       = $(wildcard *.str)
