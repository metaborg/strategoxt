ACLOCAL_AMFLAGS = -I config

SUBDIRS      = . news-archive $(PKGS)
DIST_SUBDIRS =   news-archive $(DIST_PKGS)
EXTRA_DIST   = \
  README svn-revision bootstrap Makefile.xt \
  strategoxt.spec.in strategoxt.spec \
  external/sdf2-bundle.pc.in strategoxt.pc.in \
  xtc-uninstalled.pc.in stratego-runtime-uninstalled.pc.in stratego-lib-uninstalled.pc.in

pkgconfigdir=$(libdir)/pkgconfig
pkgconfig_DATA = external/sdf2-bundle.pc strategoxt.pc

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
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libATerm.la -l $(ATERM)/lib -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t SRTS-include -l $(prefix)/include -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t stratego-lib-include -l $(prefix)/include -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstrategolib.rtree -l $(prefix)/share/stratego-lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libxtclib.rtree -l $(prefix)/share/xtc -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t liblib.rtree -l $(prefix)/share/xtc -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-runtime.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-lib-native.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-lib.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-xtc.la -l $(prefix)/lib -V $(VERSION)

all-local: $(XTC_REPS)
	mkdir -p `dirname $(BUILD_REPOSITORY)`
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t sglr -l $(SGLR)/bin -V 3.11
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t sdf2table -l $(PGEN)/bin -V 2.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t Sdf2.baf -l $(PGEN)/share/pgen -V 2.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t implodePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t flattenPT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t unparsePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t addPosInfo -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t ambtracker -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t baffle -l $(ATERM)/bin -V X
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t ATERM -l $(ATERM) -V X
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t libATerm.la -l $(ATERM)/lib -V X
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t SRTS-include -l `pwd`/srts/src -V X
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t stratego-lib-include -l foo -V X
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import `pwd`/asfix-tools/XTC
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import `pwd`/gpp/XTC
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import `pwd`/stratego-lib/XTC
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import `pwd`/xtc/XTC
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import `pwd`/aterm-front/XTC
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import `pwd`/sdf-front/XTC
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import `pwd`/stratego-regular/XTC
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import `pwd`/concrete-syntax/XTC  
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import `pwd`/sdf-tools/XTC       
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import `pwd`/strc-core/XTC
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import `pwd`/c-tools/XTC          
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import `pwd`/stratego-front/XTC  
	$(XTC_PROG) -r $(BUILD_REPOSITORY) import `pwd`/xml-front/XTC

XTC_REPS = asfix-tools/XTC c-tools/XTC stratego-front/XTC \
	   strc-core/XTC concrete-syntax/XTC gpp/XTC	  \
	   stratego-lib/XTC xtc/XTC stratego-regular/XTC  \
	   sdf-front/XTC sdf-tools/XTC xml-front/XTC	  \

%/XTC : 
	echo "[]" > $@

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
