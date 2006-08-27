include $(top_srcdir)/Makefile.xt

SUBDIRS = runtime lib build-tools xtc sglr gpp rtg
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST = \
  Makefile.xt MakefileLocal.xt svn-revision \
  stratego-rtg.pc.in \
  stratego-sglr.pc.in \
  stratego-gpp.pc.in \
  stratego-xtc.pc.in \
  stratego-lib.pc.in \
  stratego-runtime.pc.in

ACLOCAL_AMFLAGS = -I ./config

pkgconfig_DATA = stratego-sglr.pc stratego-gpp.pc stratego-lib.pc stratego-xtc.pc tratego-runtime.pc stratego-rtg.pc
