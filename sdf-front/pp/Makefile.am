include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA   = Sdf2.pp.af

EXTRA_DIST     = Sdf2.pp $(pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA)

libexec_PROGRAMS = \
  sdf-parenthesize

EXTRA_DIST = \
  sdf-parenthesize.str \
  $(wildcard *.meta)

CLEANFILES = $(wildcard *.dep)

BOOTCLEANFILES = \
  $(wildcard *.c) \
  sdf-parenthesize.str

SCFLAGS  = --main io-$* 
STRINCLUDES = \
  -I $(top_builddir)/sig

LDADD += $(SSL_LIBS)

sdf-parenthesize.str : $(top_builddir)/syn/Sdf2.def
	$(SDF_TOOLS)/bin/sdf2parenthesize -i $< -o $@ -m Sdf2 --omod sdf-parenthesize --lang Sdf2
