EXTRA_DIST   = $(EXTRA_FILES)

EXTRA_FILES  = README README.in bootstrap acinclude.m4 StrategoXT.spec

SUBDIRS      = $(PKGS)

all: install

rpm : dist
	rpmbuild -ta $(PACKAGE)-$(VERSION).tar.gz

# check clean install uninstall:
#	PATH=$(bindir):$${PATH}; export PATH ;\
#	ulimit -s 20000 ;\
#	for subdir in $(SUBDIRS); do \
#	   ( cd $$subdir && $(MAKE) $@ ) || exit 1 ;\
#	done

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

WWWSTRATEGO=sunshine.cs.uu.nl:/users/ftp/stratego/StrategoXT

upload:
	scp StrategoXT-$(VERSION).tar.gz $(WWWSTRATEGO)

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