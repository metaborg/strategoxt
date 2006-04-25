
pkgdocdir 	= $(prefix)/doc/$(PACKAGE)

bin_SCRIPTS 	= autoxt 
pkgdata_DATA 	= autoxt.m4 Makefile.xt
pkgdoc_DATA 	= README
EXTRA_DIST	= autoxt.src Makefile.xt autoxt.m4 svn-revision

autoxt: autoxt.src Makefile
	sed -e 's@__pkgdatadir__@$(pkgdatadir)@g'\
            -e 's@__PREFIX__@$(prefix)@g'\
            < $< > $@ && chmod +x $@

bootclean:
