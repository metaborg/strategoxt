include $(top_srcdir)/Makefile.xt

SUBDIRS           = syn sig lib libraries src tests def 
BOOTCLEAN_SUBDIRS = syn sig lib libraries src tests 
EXTRA_DIST        = Makefile.xt bootstrap autoxt.m4 
CLEANFILES        = XTC
ACLOCAL_AMFLAGS = -I .

install-data-local::
	$(XTC)/bin/xtc -r $(DESTDIR)$(REPOSITORY) \
	register -l $(CURL)/bin -t curl -V 7.10.6

