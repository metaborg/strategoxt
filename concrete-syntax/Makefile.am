include $(top_srcdir)/Makefile.xt

SUBDIRS           = xtc 
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
DIST_SUBDIRS      = $(SUBDIRS)
EXTRA_DIST        = Makefile.xt \
		    svn-revision concrete-syntax.spec.in
CLEANFILES        = XTC
ACLOCAL_AMFLAGS   = -I ../config

ignore : ignore-svn ignore-targets
	svn propset -R svn:ignore -F ignore-svn .
