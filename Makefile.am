SUBDIRS      = . $(PKGS)
EXTRA_DIST   = $(EXTRA_FILES)
EXTRA_FILES  = README README.in svn-revision bootstrap acinclude.m4 strategoxt.spec.in strategoxt.spec

all-local: pre-pkgs/build/srts.dummy pre-pkgs/install/xtc.dummy
install-exec-local: pre-pkgs/build/srts.dummy pre-pkgs/install/xtc.dummy

# installs a local srts for building the StrategoXT packages
# TODO: configure srts with cpl if necessary
# TODO: remove the dummy on a clean or whatever.
pre-pkgs/build/srts.dummy :
	mkdir -p pre-pkgs &&\
	mkdir -p pre-pkgs/build &&\
	cp -rfp srts pre-pkgs/build/ &&\
	cd pre-pkgs/build/srts &&\
	./configure --prefix=@abs_top_srcdir@/pre-pkgs/build --with-aterm=$(ATERM) &&\
	$(MAKE) &&\
	$(MAKE) install &&\
	touch @abs_top_srcdir@/pre-pkgs/build/srts.dummy

pre-pkgs/install/xtc.dummy :
	mkdir -p pre-pkgs/install &&\
	cp -rfp xtc pre-pkgs/install/ &&\
	cd pre-pkgs/install/xtc &&\
	./configure --prefix=@abs_top_srcdir@/pre-pkgs/install --with-srts=@abs_top_srcdir@/pre-pkgs/build --with-aterm=$(ATERM) --with-stratego-xt=$(STRATEGOXT) &&\
	$(MAKE) &&\
	$(MAKE) install &&\
	touch @abs_top_srcdir@/pre-pkgs/install/xtc.dummy

rpm : dist
	$(RPMBUILD) -ta $(PACKAGE_TARNAME)-$(VERSION).tar.gz

dailydist : dist
	mv $(PACKAGE_TARNAME)-$(VERSION).tar.gz $(PACKAGE_TARNAME)-dailydist.tar.gz 

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

source-tree.txt : 
	tree -d | grep -v CVS \
		| grep -v autom4te-2.53.cache \
		| grep -v data \
		| grep -v config \
		> $@