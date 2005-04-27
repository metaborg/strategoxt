include $(top_srcdir)/Makefile.xt

SUBDIRS		  = syn sig pp xtc-tools tests
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
DIST_SUBDIRS	  = $(SUBDIRS)
EXTRA_DIST 	  = Makefile.xt c-tools.pc.in
CLEANFILES        = XTC

ACLOCAL_AMFLAGS = -I ../config

pkgconfig_DATA = c-tools.pc
