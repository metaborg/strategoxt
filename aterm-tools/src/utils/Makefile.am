include $(wildcard *.dep)
include $(top_srcdir)/Makefile.xt

bin_PROGRAMS     = annos-to-term
SCFLAGS          = --main $*
LDADD           += $(SSL_LIBS)

BOOTCLEANFILES	 = annos-to-term.c
CLEANFILES       = $(wildcard *.dep)
EXTRA_DIST       = $(wildcard *.str)
