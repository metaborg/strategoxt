include $(top_srcdir)/Makefile.xt

SUBDIRS 	  = . native libraries spec ssl-compat tests 
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST 	  = README Makefile.xt stratego-lib.pc.in svn-revision

ACLOCAL_AMFLAGS   = -I ../config -I ./config

pkgconfig_DATA = stratego-lib.pc
