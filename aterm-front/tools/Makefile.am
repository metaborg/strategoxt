include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS           = tests
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

bin_PROGRAMS     = pp-aterm map-aterm
libexec_PROGRAMS = explode-aterm implode-aterm
pkgdata_DATA = \
  pp-aterm-options.str ugly-print.str ugly-print.meta \
  explode-aterm.str implode-aterm.str

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(pkgdata_DATA)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) 

STRCFLAGS     = --main io-$*
STRINCLUDES = -I $(XTC)/share/xtc \
              -I $(GPP)/share/sdf/gpp \
              -I $(GPP)/share/gpp \
              -I $(top_srcdir)/syn \
              $(STRATEGO_GPP_STRCFLAGS)

pp_aterm_LDADD = $(STRATEGO_GPP_LIBS) $(SSL_LIBS)
LDADD += $(SSL_LIBS)
