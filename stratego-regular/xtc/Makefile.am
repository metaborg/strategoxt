include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS=\
  format-check \
  aterm2irtg \
  parse-rhg \
  parse-rtg \
  pp-rhg \
  pp-rtg \
  sdf2rtg \
  sig2rtg \
  rtg2sig \
  rtg2typematch 

libexec_PROGRAMS = tool-doc2abox

SCFLAGS        = --main main-$*
STRINCLUDES    = -I $(top_srcdir)/lib \
                 -I $(SDF_FRONT)/share/sdf-front \
                 -I $(XTC)/share/xtc \
                 -I $(GPP)/share/sdf/gpp \
                 -I $(GPP)/share/gpp

pkgdata_DATA   = regular-xtc-tools.rtree tool-doc.rtree Makefile.regular

EXTRA_DIST     = $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) $(wildcard *.rtree) 

format_check_LDADD = $(SSL_LIBS)
aterm2irtg_LDADD = $(SSL_LIBS)
parse_rhg_LDADD = $(SSL_LIBS)
parse_rtg_LDADD = $(SSL_LIBS)
pp_rhg_LDADD = $(SSL_LIBS)
pp_rtg_LDADD = $(SSL_LIBS)
sig2rtg_LDADD = $(SSL_LIBS)
rtg2sig_LDADD = $(SSL_LIBS)
rtg2typematch_LDADD = $(SSL_LIBS)
tool_doc2abox_LDADD = $(SSL_LIBS)

