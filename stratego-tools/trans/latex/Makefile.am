include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS 	= --main io-$*
STRINCLUDES     = -I $(STRATEGO_FRONT)/share/sdf/stratego-front \
                  -I $(STRATEGO_FRONT)/share/stratego-front \
                  -I $(CONCRETE_SYNTAX)/share/concrete-syntax \
                  -I $(XTC)/share/xtc

libexec_PROGRAMS = pp-stratego-latex-alltt

CLEANFILES     	= $(wildcard *.dep)
BOOTCLEANFILES  = $(wildcard *.c)
EXTRA_DIST 	= $(wildcard *.str) $(wildcard *.meta)

