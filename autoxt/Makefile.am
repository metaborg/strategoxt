
pkgdocdir 	= $(prefix)/doc/$(PACKAGE)
pkgtemplatedir	= $(pkgdatadir)/package

bin_SCRIPTS 	= autoxt 
#genxtpack
pkgdata_DATA 	= autoxt.m4 Makefile.xt Makefile.ext
pkgdoc_DATA 	= README

EXTRA_DIST	= autoxt.src Makefile.xt Makefile.ext autoxt.m4

autoxt: autoxt.src Makefile
	sed 's@__pkgdatadir__@$(pkgdatadir)@g;\
             s@__PREFIX__@$(prefix)@g'\
             < $< > $@ && chmod +x $@

genxtpack: genxtpack.src Makefile
	sed 's@__pkgdatadir__@$(pkgdatadir)@g;\
             s@__PREFIX__@$(prefix)@g'\
             < $< > $@ && chmod +x $@

bootclean:

rpm : dist
	rpmbuild -ta $(PACKAGE)-$(VERSION).tar.gz
