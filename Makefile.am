ACLOCAL_AMFLAGS = -I config

SUBDIRS      = . news-archive $(PKGS)
DIST_SUBDIRS = news-archive $(DIST_PKGS)
EXTRA_DIST   = $(EXTRA_FILES)
EXTRA_FILES  = README svn-revision bootstrap strategoxt.spec.in strategoxt.spec Makefile.xt

install-data-local: install-xtc

install-xtc: 
	mkdir -p `dirname $(DESTDIR)$(REPOSITORY)`
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t sglr -l $(SGLR)/bin -V 3.11
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t sdf2table -l $(PGEN)/bin -V 2.1
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t Sdf2.baf -l $(PGEN)/share/pgen -V 2.1
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t implodePT -l $(PT_SUPPORT)/bin -V 1.1
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t unparsePT -l $(PT_SUPPORT)/bin -V 1.1
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t addPosInfo -l $(PT_SUPPORT)/bin -V 1.1
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t baffle -l $(ATERM)/bin -V X
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t ATERM -l $(ATERM) -V X
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t SRTS -l $(prefix) -V X
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t SSL -l $(prefix) -V X
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t libstrategolib.rtree -l $(prefix)/share/ssl -V $(VERSION)
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t libxtclib.rtree -l $(prefix)/share/xtc -V $(VERSION)
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t liblib.rtree -l $(prefix)/share/xtc -V $(VERSION)
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t libstratego-lib.la -l $(prefix)/lib/ssl -V $(VERSION)
	$(BASELINE_XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t libstratego-xtc.la -l $(prefix)/lib/xtc -V $(VERSION)

if !XT_USING_BASELINE
all-local: $(BASELINE_DESTDIR)/srts.dummy $(BASELINE_DESTDIR)/ssl.dummy $(BASELINE_DESTDIR)/xtc.dummy
install-exec-local: $(BASELINE_DESTDIR)/srts.dummy $(BASELINE_DESTDIR)/ssl.dummy $(BASELINE_DESTDIR)/xtc.dummy

clean-local:
	rm -rf $(BASELINE_DESTDIR)

$(BASELINE_DESTDIR)/srts.dummy :
	cd srts && \
	$(MAKE) $(AM_MAKEFLAGS) && \
	$(MAKE) $(AM_MAKEFLAGS) DESTDIR=$(BASELINE_DESTDIR) install && \
	cp -fp   src/*.la  $(BASELINE_DESTDIR)/$(prefix)/lib/srts/ && \
	cp -LRfp src/.libs $(BASELINE_DESTDIR)/$(prefix)/lib/srts/ && \
	touch $(BASELINE_DESTDIR)/srts.dummy

$(BASELINE_DESTDIR)/ssl.dummy :
	cd ssl && \
	$(MAKE) $(AM_MAKEFLAGS) && \
	$(MAKE) $(AM_MAKEFLAGS) DESTDIR=$(BASELINE_DESTDIR) install && \
	cp -fp   libraries/*.la  $(BASELINE_DESTDIR)/$(prefix)/lib/ssl/ && \
	cp -LRfp libraries/.libs $(BASELINE_DESTDIR)/$(prefix)/lib/ssl/ && \
	cp -fp   native/ssl/*.la  $(BASELINE_DESTDIR)/$(prefix)/lib/ssl/ && \
	cp -LRfp native/ssl/.libs $(BASELINE_DESTDIR)/$(prefix)/lib/ssl/ && \
	touch $(BASELINE_DESTDIR)/ssl.dummy

$(BASELINE_DESTDIR)/xtc.dummy :
	cd $(XTC_DIR) && \
	$(MAKE) $(AM_MAKEFLAGS) && \
	mkdir -p $(BASELINE_DESTDIR)/$(prefix)/lib/xtc/ && \
	$(MAKE) $(AM_MAKEFLAGS) DESTDIR=$(BASELINE_DESTDIR) install && \
	cp -fp   libraries/*.la  $(BASELINE_DESTDIR)/$(prefix)/lib/xtc/ && \
	cp -LRfp libraries/.libs $(BASELINE_DESTDIR)/$(prefix)/lib/xtc/ && \
	touch $(BASELINE_DESTDIR)/xtc.dummy
endif

relname:
	echo -n $(distdir) > relname

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

svnignore :
	svn propset -R svn:ignore -F svn-ignore .
