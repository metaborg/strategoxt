include $(top_srcdir)/Makefile.xt

SUBDIRS 	  = . native libraries spec ssl-compat tests 
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
CLEANFILES        = XTC
EXTRA_DIST 	  = README Makefile.xt stratego-lib.pc.in

ACLOCAL_AMFLAGS   = -I ../config

pkgconfig_DATA = stratego-lib.pc
