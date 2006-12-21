include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS           = tests
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

bin_PROGRAMS     = pp-aterm map-aterm
libexec_PROGRAMS = explode-aterm implode-aterm

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) 

STRCFLAGS   = --main io-$*
STRINCLUDES = \
  -I $(XTC)/share/xtc \
  -I $(GPP)/share/sdf/gpp \
  -I $(GPP)/share/gpp \
  -I $(top_srcdir)/syn \
  $(STRATEGO_GPP_STRCFLAGS) \
  $(STRATEGO_ATERM_STRCFLAGS)

pp_aterm_LDADD = $(STRATEGO_GPP_LIBS) $(STRATEGO_ATERM_LIBS) $(SSL_LIBS)
LDADD += $(STRATEGO_ATERM_LIBS) $(SSL_LIBS)
