SUBDIRS      = . news-archive $(PKGS)
DIST_SUBDIRS = news-archive $(DIST_PKGS)
EXTRA_DIST   = $(EXTRA_FILES)
EXTRA_FILES  = README svn-revision bootstrap acinclude.m4 strategoxt.spec.in strategoxt.spec

all-local: $(BUILD_SRTS_DEST)/srts.dummy $(INSTALL_XTC_DEST)/xtc.dummy
install-exec-local: $(BUILD_SRTS_DEST)/srts.dummy $(INSTALL_XTC_DEST)/xtc.dummy

clean-local:
	rm -rf $(BUILD_SRTS_DEST)
	rm -rf $(INSTALL_XTC_DEST)

$(BUILD_SRTS_DEST)/srts.dummy :
	cd srts && \
	$(MAKE) $(AM_MAKEFLAGS) && \
	$(MAKE) $(AM_MAKEFLAGS) DESTDIR=$(BUILD_SRTS_DEST) install && \
	cp -fp   libraries/*.la  $(BUILD_SRTS_DEST)/$(prefix)/lib/srts/ && \
	cp -LRfp libraries/.libs $(BUILD_SRTS_DEST)/$(prefix)/lib/srts/ && \
	cp -fp   ssl/*.la  $(BUILD_SRTS_DEST)/$(prefix)/lib/srts/ && \
	cp -LRfp ssl/.libs $(BUILD_SRTS_DEST)/$(prefix)/lib/srts/ && \
	cp -fp   src/*.la  $(BUILD_SRTS_DEST)/$(prefix)/lib/srts/ && \
	cp -LRfp src/.libs $(BUILD_SRTS_DEST)/$(prefix)/lib/srts/ && \
	touch $(BUILD_SRTS_DEST)/srts.dummy

$(INSTALL_XTC_DEST)/xtc.dummy :
	cd xtc && \
	$(MAKE) $(AM_MAKEFLAGS) && \
	$(MAKE) $(AM_MAKEFLAGS) DESTDIR=$(INSTALL_XTC_DEST) install && \
	touch $(INSTALL_XTC_DEST)/xtc.dummy

fixeddist : dist
	mv $(PACKAGE)-$(VERSION).tar.gz $(PACKAGE).tar.gz

relname:
	echo -n $(distdir) > relname

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

install-data-local: install-xtc

install-xtc: 
	mkdir -p `dirname $(DESTDIR)$(REPOSITORY)`
	$(INSTALL_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t sglr -l $(SGLR)/bin -V 3.11
	$(INSTALL_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t sdf2table -l $(PGEN)/bin -V 2.1
	$(INSTALL_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t Sdf2.baf -l $(PGEN)/share/pgen -V 2.1
	$(INSTALL_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t implodePT -l $(PT_SUPPORT)/bin -V 1.1
	$(INSTALL_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t unparsePT -l $(PT_SUPPORT)/bin -V 1.1
	$(INSTALL_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t addPosInfo -l $(PT_SUPPORT)/bin -V 1.1
	$(INSTALL_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t baffle -l $(ATERM)/bin -V X
	$(INSTALL_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t ATERM -l $(ATERM) -V X
	$(INSTALL_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t SRTS -l $(prefix) -V X
	$(INSTALL_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t liblib.rtree -l $(prefix)/share/srts -V $(VERSION)
	$(INSTALL_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t libliblib.la -l $(prefix)/lib/srts -V $(VERSION)


