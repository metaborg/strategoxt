include $(top_srcdir)/Makefile.xt

BUILDDIRS = lib tools
TESTSDIRS = tests

SUBDIRS = $(BUILDDIRS)
if XT_STAGE_CHECK
SUBDIRS 	  += $(TESTSDIRS)
endif

BOOTCLEAN_SUBDIRS = $(BUILDDIRS) $(TESTSDIRS)
EXTRA_DIST        = Makefile.xt svn-revision
libexec_SCRIPTS   = libtool

ACLOCAL_AMFLAGS   = -I ../config

install-exec-hook: install-xtc

install-xtc:
	$(XTC_PROG) -r $(DESTDIR)$(REPOSITORY) -t libtool -l $(libexecdir) -V X
