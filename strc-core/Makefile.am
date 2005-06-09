include $(top_srcdir)/Makefile.xt

SUBDIRS           = spec
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = Makefile.xt
CLEANFILES        = XTC
libexec_SCRIPTS   = libtool

ACLOCAL_AMFLAGS   = -I ../config
XTC_IMPORT = $(STRATEGOXT)/share/strategoxt/XTC

install-exec-hook: install-xtc

install-xtc:
	$(XTC_PROG) -r $(DESTDIR)$(REPOSITORY) -t libtool -l $(libexecdir) -V X
