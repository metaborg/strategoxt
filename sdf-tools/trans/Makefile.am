include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = gen-sdf-mix gen-renamed-sdf-module sdf2parenthesize
libexec_PROGRAMS = sdf2ast-conflicts sdf-spread-cons
LDADD       += $(SSL_LIBS)

STRCFLAGS       = --main main-$*
STRINCLUDES   = -I $(XTC)/share/xtc \
                -I $(top_srcdir)/lib \
                -I $(top_srcdir)/../sdf-front/syn \
                -I $(SDF_FRONT)/share/sdf-front

# FIXME: remove bootstrap problem workaround for STR-603
# -I $(SDF_FRONT)/share/sdf/sdf-front

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

%.meta-str : %.str
	parse-stratego -i $< $(STRINCLUDES) | pp-stratego --abstract 

%.meta-rtree : %.str
	sglr -2tA -p $(SDF_FRONT)/share/sdf/sdf-front/Stratego-Sdf2.tbl -i $< | implode-asfix | pp-aterm

%.meta-visamb : %.str
	sglr -2tA -p $(SDF_FRONT)/share/sdf/sdf-front/Stratego-Sdf2.tbl -i $< | visamb

