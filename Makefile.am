ACLOCAL_AMFLAGS = -I config

SUBDIRS      = . news-archive $(PKGS)
DIST_SUBDIRS =   news-archive $(DIST_PKGS)
EXTRA_DIST   = \
  README svn-revision bootstrap Makefile.xt \
  strategoxt.spec.in strategoxt.spec \
  external/aterm.pc.in external/sdf2-bundle.pc.in strategoxt.pc.in \
  xtc-uninstalled.pc.in stratego-runtime-uninstalled.pc.in stratego-lib-uninstalled.pc.in

pkgconfigdir=$(libdir)/pkgconfig
pkgconfig_DATA = external/aterm.pc external/sdf2-bundle.pc strategoxt.pc

XTC_PROG=`PKG_CONFIG_PATH=$(XTC_PKG_CONFIG_PATH) $(PKG_CONFIG) --variable=xtc xtc`

install-data-local: install-xtc

install-xtc: 
	mkdir -p `dirname $(DESTDIR)$(REPOSITORY)`
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t sglr -l $(SGLR)/bin -V 3.11
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t sdf2table -l $(PGEN)/bin -V 2.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t Sdf2.baf -l $(PGEN)/share/pgen -V 2.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t implodePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t flattenPT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t unparsePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t addPosInfo -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t ambtracker -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t baffle -l $(ATERM)/bin -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t ATERM -l $(ATERM) -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t SRTS -l $(prefix) -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t stratego-lib -l $(prefix) -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstrategolib.rtree -l $(prefix)/share/stratego-lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libxtclib.rtree -l $(prefix)/share/xtc -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t liblib.rtree -l $(prefix)/share/xtc -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-lib.la -l $(prefix)/lib/stratego-lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-xtc.la -l $(prefix)/lib/xtc -V $(VERSION)

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
