SUBDIRS = . syn pp sig parse test

EXTRA_DIST = stdconfig reconf conf.h.src

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


