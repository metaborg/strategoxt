bin_SCRIPTS 	= autoxt
pkgdata_DATA 	= autoxt.m4 Makefile.xt Makefile.ext
pkgdocdir 	= $(prefix)/doc/$(PACKAGE)
pkgdoc_DATA 	= README
EXTRA_DIST	= autoxt.src Makefile.xt Makefile.ext autoxt.m4 

autoxt: autoxt.src Makefile
	sed 's@__pkgdatadir__@$(pkgdatadir)@g;\
             s@__PREFIX__@$(prefix)@g'\
             < $< > $@ && chmod +x $@
