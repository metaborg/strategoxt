include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = core-sdf-grammar2rtg core-sdf-mark-prods

SCFLAGS       = --main main-$*
STRINCLUDES   = -I $(top_srcdir)/sig \
                -I $(top_srcdir)/trans/sdf-normalization \
                -I $(top_srcdir)/lib \
                -I $(top_srcdir)/syn \
                -I $(SDF_FRONT)/share/sdf-front \
                -I $(SDF_FRONT)/share/sdf/sdf-front \
                -I $(SDF_TOOLS)/share/sdf-tools

LDADD += $(SSL_LIBS)


EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)