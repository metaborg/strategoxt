include $(top_srcdir)/Makefile.xt
SUBDIRS           = libraries src tools
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = Makefile.xt autoxt.m4 bootstrap
CLEANFILES        = XTC

ACLOCAL_AMFLAGS = -I .

rpm : dist
	rpmbuild -ta $(PACKAGE)-$(VERSION).tar.gz


