include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS=\
  format-check \
  parse-rtg \
  pp-rtg \
  sdf2rtg \
  rtg2sig \
  rtg2typematch \
  rtg-script

libexec_PROGRAMS = tool-doc2abox

SCFLAGS        = --main main-$*
STRINCLUDES = \
  -I $(top_srcdir)/lib \
  -I $(top_srcdir)/syn \
  -I $(top_srcdir)/pp \
  -I $(top_srcdir)/trans/interpret \
  -I $(top_srcdir)/trans/sdf2rtg \
  -I $(top_srcdir)/trans/sig \
  -I $(SDF_FRONT)/share/sdf-front \
  -I $(SDF_FRONT)/share/sdf/sdf-front \
  -I $(SDF_TOOLS)/share/sdf-tools \
  -I $(ATERM_FRONT)/share/aterm-front \
  -I $(XML_FRONT)/share/xml-front \
  -I $(XML_FRONT)/share/sdf/xml-front \
  -I $(GPP)/share/sdf/gpp \
  -I $(GPP)/share/gpp \
  $(STRATEGO_XTC_STRCFLAGS) \
  $(STRATEGO_RTG_STRCFLAGS)

LDADD += \
  $(STRATEGO_RTG_LIBS) \
  $(STRATEGO_GPP_LIBS) \
  $(SSL_LIBS)

pkgdata_DATA   = regular-xtc-tools.str tool-doc.str Makefile.regular

EXTRA_DIST     = $(pkgdata_DATA) $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) 
