include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS  = implode-irhg implode-irtg
pkgdata_DATA  = implode-iregexp.rtree implode-irhg.rtree

SCFLAGS       = --main main-$*
STRINCLUDES   = -I $(top_srcdir)/sig \
                -I $(top_srcdir)/lib
LDADD += $(SSL_LIBS)

EXTRA_DIST     = $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree)


