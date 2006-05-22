include $(top_srcdir)/Makefile.xt

SUBDIRS           = build-tools stratego-sglr gpp
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = Makefile.xt svn-revision stratego-sglr.pc.in stratego-gpp.pc.in

ACLOCAL_AMFLAGS = -I ../config

pkgconfig_DATA = stratego-sglr.pc stratego-gpp.pc
