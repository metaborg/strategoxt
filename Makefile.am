EXTRA_DIST   = $(EXTRA_FILES)

EXTRA_FILES  = README README.in bootstrap acinclude.m4 StrategoXT.spec

SUBDIRS      = emacs $(PKGS)

all: install

rpm : dist
	rpmbuild -ta $(PACKAGE)-$(VERSION).tar.gz

check clean install uninstall:
	PATH=$(bindir):$${PATH}; export PATH ;\
	ulimit -s 20000 ;\
	for subdir in $(SUBDIRS); do \
	   ( cd $$subdir && $(MAKE) $@ ) || exit 1 ;\
	done

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
	scp *.tar.gz */*.tar.gz $(WWWSTRATEGO)

upload-stratego:
	scp StrategoXT-$(VERSION).tar.gz $(WWWSTRATEGO)

upload-srts:
	scp srts/srts-*.tar.gz $(WWWSTRATEGO)

upload-sc-boot:
	scp sc-boot/sc-boot-*.tar.gz $(WWWSTRATEGO)

upload-gpp-boot:
	scp gpp-boot/gpp-boot-*.tar.gz $(WWWSTRATEGO)

upload-sc:
	scp sc/sc-*.tar.gz $(WWWSTRATEGO)

upload-ssl:
	scp ssl/ssl-*.tar.gz $(WWWSTRATEGO)

upload-stratego-front:
	scp stratego-front/stratego-front-*.tar.gz $(WWWSTRATEGO)

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
