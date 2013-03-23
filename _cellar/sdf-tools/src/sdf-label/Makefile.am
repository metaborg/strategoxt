include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = sdf-label
LDADD           += $(SSL_LIBS)

BOOTCLEANFILES 	 = sdf-label.c
CLEANFILES  	 = $(wildcard *.dep)

SCFLAGS     = --main io-$*
STRINCLUDES = -I $(ASFIX_TOOLS)/share/asfix-tools

EXTRA_DIST  = $(wildcard *.str) $(wildcard *.meta)
