include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS = data

libexec_PROGRAMS = explode-asfix2me
STRCFLAGS        = --main $*
STRINCLUDES      = -I $(top_srcdir)/sig

LDADD += $(SSL_LIBS)

EXTRA_DIST  	= explode-asfix2me.str
BOOTCLEANFILES 	= explode-asfix2me.c
CLEANFILES	= $(wildcard *.dep)
