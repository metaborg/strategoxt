SUBDIRS      = $(PKGS)
EXTRA_DIST   = $(EXTRA_FILES)
EXTRA_FILES  = README README.in bootstrap acinclude.m4 strategoxt.spec.in strategoxt.spec

all : install-buildtime-pre-pkgs

# installs a local srts for building the StrategoXT packages
# TODO: configure srts with cpl if necessary
install-buildtime-pre-pkgs :
	mkdir -p pre-pkgs &&\
	mkdir -p pre-pkgs/build &&\
	cp -rf srts pre-pkgs/build/ &&\
	cd pre-pkgs/build/srts &&\
	./configure --prefix=@abs_top_srcdir@/pre-pkgs/build --with-aterm=$(ATERM) &&\
	make &&\
	make install

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