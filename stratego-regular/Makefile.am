include $(top_srcdir)/Makefile.xt

pkgdata_DATA = stratego-regular.m4 

EXTRA_DIST   = $(pkgdata_DATA) bootstrap Makefile.xt stratego-regular.spec stratego-regular.spec.in
SUBDIRS      = syn sig pp lib trans xtc tests
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

XTC_IMPORT = $(STRATEGOXT)/share/strategoxt/XTC

fixeddist : dist
	mv $(PACKAGE)-$(VERSION).tar.gz $(PACKAGE).tar.gz