include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = asfix-anno-comments

SCFLAGS = --main main-$*
STRINCLUDES = \
  -I $(top_srcdir)/sig \
  -I $(top_srcdir)/lib \
  -I $(XTC)/share/xtc

LDADD += $(SSL_LIBS)

EXTRA_DIST  	= $(wildcard *.str) $(wildcard *.meta)
BOOTCLEANFILES 	= asfix-anno-comments.c
CLEANFILES	= $(wildcard *.dep)
