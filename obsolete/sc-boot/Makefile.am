SUBDIRS = src

pkgdata_DATA = conf.h

EXTRA_DIST = conf.h.src README.in reconf stdconfig

# Generate scripts
%: %.src Makefile
	sed 's#__GPP__#$(GPP)#g;\
             s#__CGEN__#$(CGEN)#g;\
	     s#__prefix__#$(prefix)#g;\
	     s#__datadir__#$(datadir)#g;\
             s#__VERSION__#$(VERSION)#g;\
	     s#__PACKAGE__#$(PACKAGE)#g;\
             s#__ATERM__#$(ATERM)#g;\
             s#__STRATEGORTS__#$(STRATEGORTS)#g;\
             s#__STRATEGOLIB__#$(STRATEGOLIB)#g;\
             s#__MAKE__#$(MAKE)#g' < $< > $@
	chmod +x $@

RPMRELEASE = 1

CONFIGURE = ./configure \
		--prefix=$(RPMPREFIX) \
		--with-aterm=$(ATERM) \
		--with-cgen=$(CGEN) \
		--with-gpp=$(GPP) \
		--with-ssl=$(STRATEGOLIB) \
		--with-srts=$(STRATEGORTS) \
		--with-rpmdir=$(RPMDIR)

SUBST = s+__SRTS_VERSION__+$(VERSION)+g;\
        s+__GPP_VERSION__+2.3+g;\
        s+__ATERM_VERSION__+1.6.7+g;\
	s+__ATERM__+$(ATERM)+g;

include Makefile.rpm

