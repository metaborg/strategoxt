include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = Asfix-2-abox Ast-2-abox sdf-2-pp-table

SCFLAGS     = --main io-$*
STRINCLUDES = -I $(top_srcdir)/trans \
              -I $(top_srcdir)/sig/pp-table \
              -I $(top_srcdir)/xtc-tools \
              -I $(ASFIX_TOOLS)/share/asfix-tools \
              -I $(XTC)/share/xtc

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

