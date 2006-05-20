include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

noinst_PROGRAMS = cgen-aterm
STRCFLAGS       = --main main-$*
LDADD += $(SSL_LIBS)

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) 
