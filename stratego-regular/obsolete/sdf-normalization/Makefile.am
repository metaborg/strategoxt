include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = core-sdf-normalize

SCFLAGS       = --main main-$*
STRINCLUDES   = -I $(top_srcdir)/sig \
                -I $(top_srcdir)/lib \
                -I $(XTC)/share/xtc \
                -I $(SDF_FRONT)/share/sdf-front \
                -I $(SDF_FRONT)/share/sdf/sdf-front

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)