include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = pack-sdf unpack-sdf
libexec_PROGRAMS = sdf-desugar sdf-ensugar

SCFLAGS          = --main main-$*
STRINCLUDES      = -I $(top_srcdir)/sig \
                   -I $(top_srcdir)/xtc \
                   -I $(ATERM_FRONT)/share/aterm-front

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c)

unpack_sdf_LDADD  = $(SSL_LIBS)
sdf_desugar_LDADD = $(SSL_LIBS)
sdf_ensugar_LDADD = $(SSL_LIBS)
