SUBDIRS      = . $(PKGS)
EXTRA_DIST   = $(EXTRA_FILES)
EXTRA_FILES  = README README.in svn-revision bootstrap acinclude.m4 strategoxt.spec.in strategoxt.spec

all-local: pre-pkgs/build/srts.dummy pre-pkgs/install/xtc.dummy
install-exec-local: pre-pkgs/build/srts.dummy pre-pkgs/install/xtc.dummy

# installs a local srts for building the StrategoXT packages
# TODO: remove the dummy on a clean or whatever.
pre-pkgs/build/srts.dummy :
	mkdir -p pre-pkgs &&\
	mkdir -p pre-pkgs/build &&\
	cp -rfp srts pre-pkgs/build/ &&\
	cd pre-pkgs/build/srts &&\
	./configure --prefix=`cd ..; pwd` --with-aterm=$(ATERM) --with-cpl=$(CPL) --with-strc=$(STRATEGOXT)  --with-ssl=$(STRATEGOXT) &&\
	$(MAKE) &&\
	$(MAKE) install &&\
	cd ../srts.dummy

pre-pkgs/install/xtc.dummy :
	mkdir -p pre-pkgs/install &&\
	cp -rfp xtc pre-pkgs/install/ &&\
	cd pre-pkgs/install/xtc &&\
	./configure --prefix=`cd ..; pwd` --with-srts=`cd ../../build; pwd` --with-aterm=$(ATERM) --with-stratego-xt=$(STRATEGOXT) &&\
	$(MAKE) &&\
	$(MAKE) install &&\
	cd ../xtc.dummy

rpm : dist
	$(RPMBUILD) -ta $(PACKAGE_TARNAME)-$(VERSION).tar.gz

fixeddist : dist
	mv $(PACKAGE)-$(VERSION).tar.gz $(PACKAGE).tar.gz

revision-dist : dist
	mv $(PACKAGE)-$(VERSION).tar.gz $(PACKAGE)-$(VERSION)-$(SVN_REVISION).tar.gz 

package-dist :
	PATH=$(bindir):$${PATH}; export PATH ;\
	ulimit -s 20000 ;\
	for subdir in $(PKGS); do \
	   ( cd $$subdir && $(MAKE) dist ) || exit 1 ;\
	done

make-%:
	for subdir in $(PKGS) ; do \
           (cd $$subdir; $(MAKE) $*) ; \
	done

config:
	for subdir in $(PKGS) ; do \
           (cd $$subdir; stdconfig) ; \
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

source-tree.txt : 
	tree -d | grep -v CVS \
		| grep -v autom4te-2.53.cache \
		| grep -v data \
		| grep -v config \
		> $@