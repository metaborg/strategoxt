include $(top_srcdir)/Makefile.xt

pkgdata_DATA      = stratego-shell.m4
EXTRA_DIST        = $(pkgdata_DATA) bootstrap Makefile.xt
SUBDIRS           = syn sig eval xtc tests
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

XTC_IMPORT = $(STRATEGOXT)/share/strategoxt/XTC


fixeddist : dist
	mv $(PACKAGE)-$(VERSION).tar.gz $(PACKAGE).tar.gz