include $(top_srcdir)/Makefile.xt

SUBDIRS           = syn s2j xtc
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
DIST_SUBDIRS      = $(SUBDIRS)
EXTRA_DIST        = bootstrap Makefile.xt

fixeddist : dist
	mv $(PACKAGE)-$(VERSION).tar.gz $(PACKAGE).tar.gz

install-data-local::
	$(XTC)/bin/xtc -r $(DREPOSITORY) import ${STRATEGOXT}/share/strategoxt/XTC
	$(XTC)/bin/xtc -r $(DREPOSITORY) import ${JAVA_FRONT}/share/java-front/XTC


