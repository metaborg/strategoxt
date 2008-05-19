include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS = syn sig tests
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

bin_PROGRAMS = parse-unit

# FIXME: should be replace by looking inside the uninstalled pkg-config files.
UNINSTALLED_LIB = \
  $(top_builddir)/../stratego-libraries$(LIB_STAGE)/sglr/lib/libstratego-sglr.la \
  $(top_builddir)/../stratego-libraries$(LIB_STAGE)/aterm/lib/libstratego-aterm.la

parse_unit_LDADD = $(STRATEGO_SGLR_LIBS) $(STRATEGO_ATERM_LIBS) $(SSL_LIBS)

STRCFLAGS   = --main main-$* 
# FIXME: should use the build libraries instead of the baseline.
STRINCLUDES = \
  -I $(XTC)/share/xtc \
  -I $(ATERM_FRONT)/share/aterm-front \
  -I $(top_builddir)/../aterm-front$(STRC_STAGE)/syn \
  $(STRATEGO_SGLR_STRCFLAGS) \
  -I sig

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

LDADD += $(SSL_LIBS)
