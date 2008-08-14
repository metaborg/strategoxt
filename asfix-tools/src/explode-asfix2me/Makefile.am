include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS = data

libexec_PROGRAMS = explode-asfix2me
STRCFLAGS        = --main $*
STRINCLUDES      = -I $(top_srcdir)/sig

LDADD += $(SSL_LIBS)

XT_BUILD_DIST 	= explode-asfix2me.c
EXTRA_DIST  	 += explode-asfix2me.str
CLEANFILES	   += $(wildcard *.dep)
