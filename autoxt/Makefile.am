
pkgdocdir 	= $(prefix)/doc/$(PACKAGE)

bin_SCRIPTS 	= autoxt 
pkgdata_DATA 	= autoxt.m4 Makefile.xt
pkgdoc_DATA 	= README

CLEANFILES      = XTC
EXTRA_DIST	= autoxt.src Makefile.xt autoxt.m4

autoxt: autoxt.src Makefile
	sed 's@__pkgdatadir__@$(pkgdatadir)@g;\
             s@__PREFIX__@$(prefix)@g'\
             < $< > $@ && chmod +x $@

bootclean:
