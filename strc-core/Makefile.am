include $(top_srcdir)/Makefile.xt

SUBDIRS           = spec
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = $(wilcard *.pkg) bootstrap Makefile.xt autoxt.m4

ACLOCAL_AMFLAGS   = -I .

libexec_SCRIPTS   = libtool

XTC_IMPORT = $(STRATEGOXT)/share/strategoxt/XTC

install-exec-hook: install-xtc

install-xtc:
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t libtool -l $(libexecdir) -V X
