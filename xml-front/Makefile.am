include $(top_srcdir)/Makefile.xt

SUBDIRS           = syn tg sig pp trans lib xtc tests
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
DIST_SUBDIRS      = $(SUBDIRS)

pkgdata_DATA = Makefile.xml-tools xml-tools.m4

EXTRA_DIST = \
  bootstrap \
  Makefile.xt \
  $(pkgdata_DATA) \
  svn-revision \
  xml-tools.spec \
  xml-tools.spec.in

# TODO: get the version of the J2RE
install-data-local::
	if [ USEJAVA ]; then $(XTC)/bin/xtc -r $(REPOSITORY) register -l $(J2RE)/bin -t java -V 1.4; fi
	$(XTC)/bin/xtc -r $(REPOSITORY) register -l $(NETX) -t netx.jar -V 0.5

fixeddist : dist
	mv $(PACKAGE)-$(VERSION).tar.gz $(PACKAGE).tar.gz