include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = 

# core-wf-checker
pkgdata_DATA     = wf-check.rtree 

SCFLAGS          = --main main-$*
STRINCLUDES      = -I $(top_srcdir)/sig \
                   -I $(top_srcdir)/lib

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c)
