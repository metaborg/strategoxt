include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = asfix2abox abox2html abox2latex
libexec_PROGRAMS = Asfix-2-abox Abox-2-html Abox-2-latex
pkgdata_DATA     = boxstyle.css

STRCFLAGS = --main io-$*
STRINCLUDES = \
  -I $(XTC)/share/xtc \
  -I $(top_srcdir)/sig/pp-table \
  -I $(SDF_FRONT)/share/sdf-front \
  -I $(SDF_TOOLS)/share/sdf-tools \
  $(STRATEGO_GPP_STRCFLAGS)

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) boxstyle.css
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) 

LDADD += $(SSL_LIBS)

Abox_2_latex_LDADD = $(STRATEGO_GPP_LIBS) $(SSL_LIBS)
