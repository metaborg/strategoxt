include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = sdf-desugar sdf-ensugar

SCFLAGS          = --main main-$*
STRINCLUDES      = -I $(top_srcdir)/sig

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c)