include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS=\
  format-check \
  aterm2irtg \
  parse-rtg \
  pp-rtg \
  sdf2rtg \
  sig2rtg \
  rtg2sig \
  rtg2typematch \
  rtg-script

libexec_PROGRAMS = tool-doc2abox

SCFLAGS        = --main main-$*
STRINCLUDES    = -I $(top_srcdir)/lib \
                 -I $(top_srcdir)/sig \
                 -I $(SDF_FRONT)/share/sdf-front \
                 -I $(XTC)/share/xtc \
                 -I $(GPP)/share/sdf/gpp \
                 -I $(GPP)/share/gpp
LDADD += $(SSL_LIBS)

pkgdata_DATA   = regular-xtc-tools.rtree tool-doc.rtree Makefile.regular

EXTRA_DIST     = $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree) 


