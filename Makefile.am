ACLOCAL_AMFLAGS = -I config

SUBDIRS      = . news-archive manpages $(PKGS)
DIST_SUBDIRS =   news-archive manpages $(DIST_PKGS)
CLEANFILES   = $(BUILD_REPOSITORY)

EXTRA_DIST   = \
  README svn-revision bootstrap Makefile.xt \
  strategoxt.spec.in strategoxt.spec \
  strategoxt.pc.in \
  xtc-uninstalled.pc.in \
  stratego-runtime-uninstalled.pc.in \
  stratego-lib-uninstalled.pc.in \
  stratego-sglr-uninstalled.pc.in

pkgconfigdir=$(libdir)/pkgconfig
pkgconfig_DATA = strategoxt.pc

relname:
	echo -n $(distdir) > relname

make-%:
	for subdir in $(PKGS) ; do \
           (cd $$subdir; $(MAKE) $*) ; \
	done

install-%: %
	for subdir in $(PKGS) ; do \
           cp -f $< $$subdir ; \
	done

bootclean :
	@for dir in $(PKGS); do \
	   (cd $$dir && $(MAKE) bootclean) ; \
	done

bootstep :
	$(MAKE) bootclean 
	$(MAKE) 
	$(MAKE) check 
	$(MAKE) install

svnignore :
	svn propset -R svn:ignore -F svn-ignore .
