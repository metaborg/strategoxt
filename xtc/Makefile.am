include $(top_srcdir)/Makefile.xt
SUBDIRS           = src tools
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = Makefile.xt

rpm : dist
	rpmbuild -ta $(PACKAGE)-$(VERSION).tar.gz


