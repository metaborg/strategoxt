include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS = xtar
SCFLAGS      = --main main-$*
STRINCLUDES  = \
  -I $(XTC)/share/xtc \
  -I $(SDF_FRONT)/share/sdf-front \
  -I $(STRATEGO_REGULAR)/share/stratego-regular

LDADD += $(SSL_LIBS)

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree)
