SUBDIRS = src ssl

EXTRA_DIST = bootstrap mprotect.m4

pkgdata_DATA = README

rpm : dist 
	rpmbuild -ta $(PACKAGE)-$(VERSION).tar.gz

bootclean :
