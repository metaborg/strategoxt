include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = pack-sdf
libexec_PROGRAMS = sdf-desugar sdf-ensugar

SCFLAGS          = --main main-$*
STRINCLUDES      = -I $(top_srcdir)/sig/version-2.1\
                   -I $(XTC)/share/xtc \
                   -I $(ASFIX_TOOLS)/share/asfix-tools

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c)