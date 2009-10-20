include $(top_srcdir)/Makefile.xt

# remove the default tar -o option to allow long path names
am__tar = ${AMTAR} chf - "$$tardir"

ACLOCAL_AMFLAGS = -I .
pkgdata_DATA = strc-java.m4

SUBDIRS           = syn trans java test tools
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
DIST_SUBDIRS      = $(SUBDIRS)
EXTRA_DIST        = bootstrap Makefile.xt

XTC_IMPORT = \
  $(STRATEGOXT)/share/strategoxt/XTC \
  $(JAVA_FRONT)/share/java-front/XTC

jar :
	$(MAKE) -C java jar

new-libs :
	$(MAKE) -C java new-libs
