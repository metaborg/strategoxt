include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = gen-renamed-sdf-module sdf-spread-cons sdf2parenthesize
libexec_PROGRAMS = sdf2ast-conflicts
LDADD       += $(SSL_LIBS)

SCFLAGS       = --main io-$* --dr new
STRINCLUDES   = -I $(XTC)/share/xtc \
                -I $(SDF_FRONT)/share/sdf-front \
                -I $(SDF_FRONT)/share/sdf/sdf-front

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

%.meta-str : %.str
	parse-stratego -i $< $(STRINCLUDES) | pp-stratego --abstract 

%.meta-rtree : %.str
	sglr -2tA -p $(SDF_FRONT)/share/sdf/sdf-front/Stratego-Sdf2.tbl -i $< | implode-asfix | pp-aterm

%.meta-visamb : %.str
	sglr -2tA -p $(SDF_FRONT)/share/sdf/sdf-front/Stratego-Sdf2.tbl -i $< | visamb

