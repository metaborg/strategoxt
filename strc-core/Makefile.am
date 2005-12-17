include $(top_srcdir)/Makefile.xt

SUBDIRS           = spec
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = Makefile.xt svn-revision
libexec_SCRIPTS   = libtool

ACLOCAL_AMFLAGS   = -I ../config

install-exec-hook: install-xtc

install-xtc:
	$(XTC_PROG) -r $(DESTDIR)$(REPOSITORY) -t libtool -l $(libexecdir) -V X
