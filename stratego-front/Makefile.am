SUBDIRS = . syn pp sig parse test

EXTRA_DIST = stdconfig reconf conf.h.src stratego-front.spec Makefile.rpm \
	Makefile.xt

pkgdata_DATA = conf.h

check_dist : 
	$(MAKE) dist
	tar zxf $(PACKAGE)-$(VERSION).tar.gz
	cd $(PACKAGE)-$(VERSION)
	./stdconfig
	$(MAKE)
	$(MAKE) check

# Generate scripts
%: %.src Makefile
	sed 's#__GPP__#$(GPP)#g;\
             s#__CGEN__#$(CGEN)#g;\
	     s#__prefix__#$(prefix)#g;\
	     s#__datadir__#$(datadir)#g;\
	     s#__pkgdatadir__#$(pkgdatadir)#g;\
             s#__VERSION__#$(VERSION)#g;\
	     s#__PACKAGE__#$(PACKAGE)#g;\
             s#__ATERM__#$(ATERM)#g;\
             s#__STRATEGORTS__#$(STRATEGORTS)#g;\
             s#__STRATEGOLIB__#$(STRATEGOLIB)#g;\
             s#__MAKE__#$(MAKE)#g' < $< > $@
	chmod +x $@

RPMRELEASE = 1

CLEANFILES =

CONFIGURE = ./configure \
		--prefix=/usr \
		--with-sc=$(SC) \
		--with-sglr=$(SGLR) \
		--with-pgen=$(PGEN) \
		--with-asfix-tools=$(ASFIX_TOOLS) \
		--with-stratego-tools=$(STRATEGO_TOOLS) \
		--with-sdf-tools=$(SDF_TOOLS)  \
		--with-gpp=$(GPP) \
		--with-cgen=$(CGEN) \
		--with-rpmdir=$(RPMDIR)

SUBST = s+__SRTS_VERSION__+$(VERSION)+g;\
        s+__GPP_VERSION__+2.3+g;\
        s+__SGLR_VERSION__+3.7+g;\
        s+__PGEN_VERSION__+1.4+g;\
        s+__ASFIX_TOOLS_VERSION__+0.4+g;\
        s+__SDF_TOOLS_VERSION__+0.4+g;\
        s+__STRATEGO_TOOLS_VERSION__+0.4+g;\
        s+__ATERM_VERSION__+1.6.7+g;\
        s+__ATERM__+$(ATERM)+g;

#include Makefile.rpm
