include $(top_srcdir)/Makefile.xt
SUBDIRS 	  = src
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST 	  = Makefile.xt $(PACKAGE).spec

rpm : dist
	rpmbuild -ta $(PACKAGE)-$(VERSION).tar.gz



