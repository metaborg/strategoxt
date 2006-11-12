include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = pack-sdf unpack-sdf
libexec_PROGRAMS = sdf-desugar sdf-ensugar

pkgdata_DATA     = pack-sdf-options.str

STRCFLAGS = --main main-$* --verbose 3
STRINCLUDES = \
  -I $(top_srcdir)/sig \
  -I $(top_srcdir)/../sdf-tools/lib \
  -I $(top_srcdir)/../aterm-front/syn \
  -I $(top_srcdir)/../aterm-front/tools

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta) $(pkgdata_DATA)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c) pack-sdf-options.rtree

LDADD += $(SSL_LIBS)
