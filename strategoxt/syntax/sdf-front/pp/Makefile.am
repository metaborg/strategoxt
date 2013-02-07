include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA   = Sdf2.pp.af

libexec_PROGRAMS = \
  core-sdf-parenthesize

EXTRA_DIST = \
  Sdf2.pp $(pkgdata_DATA) \
  core-sdf-parenthesize.str \
  $(wildcard *.meta)

CLEANFILES = $(wildcard *.dep)

BOOTCLEANFILES = \
  $(pkgdata_DATA) \
  $(wildcard *.c) \
  sdf-parenthesize.str

SCFLAGS  = --main io-$* 
STRINCLUDES = \
  -I $(top_builddir)/sig

LDADD += $(SSL_LIBS)

core-sdf-parenthesize.str : $(top_builddir)/syn/Sdf2.def
	$(SDF_TOOLS)/bin/sdf2parenthesize -i $< -o $@ -m Sdf2 --omod core-sdf-parenthesize --lang Sdf2
