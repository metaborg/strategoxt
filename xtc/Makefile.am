include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS   = stratego-shell xtc-shell auto-stratego-shell

SCFLAGS        = --main main-$* --C-include "\"aterm_readline.c\"" -O 2
STRINCLUDES    = -I $(XTC)/share/xtc \
                 -I $(STRATEGO_FRONT)/share/sdf/stratego-front \
                 -I $(STRATEGO_FRONT)/share/stratego-front \
                 -I $(top_srcdir)/eval \
                 -I $(top_srcdir)/sig

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) aterm_readline.c
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = stratego-shell.c $(wildcard *.rtree)