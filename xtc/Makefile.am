include $(top_srcdir)/Makefile.xt
SUBDIRS           = libraries src tools
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = Makefile.xt xtc.pc.in
CLEANFILES        = XTC

ACLOCAL_AMFLAGS = -I ../config

pkgconfigdir=$(libdir)/pkgconfig
pkgconfig_DATA = xtc.pc
