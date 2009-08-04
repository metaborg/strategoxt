include $(top_srcdir)/Makefile.xt

ACLOCAL_AMFLAGS = -I .

SUBDIRS           = syn trans java test
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
DIST_SUBDIRS      = $(SUBDIRS)
EXTRA_DIST        = bootstrap Makefile.xt

XTC_IMPORT = \
  $(STRATEGOXT)/share/strategoxt/XTC \
  $(JAVA_FRONT)/share/java-front/XTC

jar :
	$(MAKE) -C java jar
