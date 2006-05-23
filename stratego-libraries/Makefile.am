include $(top_srcdir)/Makefile.xt

SUBDIRS           = runtime lib build-tools xtc sglr gpp 
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST = \
  Makefile.xt MakefileLocal.xt svn-revision \
  stratego-sglr.pc.in stratego-gpp.pc.in stratego-lib.pc.in stratego-runtime.pc.in

ACLOCAL_AMFLAGS = -I ../config -I ./config

pkgconfig_DATA = stratego-sglr.pc stratego-gpp.pc stratego-lib.pc stratego-runtime.pc
