include $(top_srcdir)/Makefile.xt

SUBDIRS           = xtc 
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
DIST_SUBDIRS      = $(SUBDIRS)
EXTRA_DIST        = bootstrap Makefile.xt autoxt.m4 \
		    svn-revision acinclude.m4 concrete-syntax.spec.in

ACLOCAL_AMFLAGS   = -I .

ignore : ignore-svn ignore-targets
	svn propset -R svn:ignore -F ignore-svn .

rpm : dist
	$(RPMBUILD) -ta $(PACKAGE)-$(VERSION).tar.gz