include $(top_srcdir)/Makefile.xt

SUBDIRS           = xtc 
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
DIST_SUBDIRS      = $(SUBDIRS)
EXTRA_DIST        = bootstrap Makefile.xt \
		    svn-revision acinclude.m4 concrete-syntax.spec.in

ignore : ignore-svn ignore-targets
	svn propset -R svn:ignore -F ignore-svn .

rpm : dist
	$(RPMBUILD) -ta $(PACKAGE)-$(VERSION).tar.gz