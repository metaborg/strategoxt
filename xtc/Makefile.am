include $(top_srcdir)/Makefile.xt
SUBDIRS           = libraries src . tools
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = Makefile.xt xtc.pc.in svn-revision
CLEANFILES        = XTC

ACLOCAL_AMFLAGS = -I ../config
pkgconfig_DATA  = xtc.pc

all-local: 
	mkdir -p `dirname $(BUILD_REPOSITORY)`
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t sglr -l $(SGLR)/bin -V 3.11
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t sdf2table -l $(PGEN)/bin -V 2.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t Sdf2.baf -l $(PGEN)/share/pgen -V 2.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t implodePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t flattenPT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t unparsePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t addPosInfo -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t ambtracker -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t baffle -l $(ATERM)/bin -V X
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t ATERM -l $(ATERM) -V X
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t libATerm.la -l $(ATERM)/lib -V X
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t SRTS-include -l `pwd`/srts/src -V X
	$(XTC_PROG) register -r $(BUILD_REPOSITORY) -t stratego-lib-include -l foo -V X

install-data-local: install-xtc

install-xtc: 
	mkdir -p `dirname $(DESTDIR)$(REPOSITORY)`
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t sglr -l $(SGLR)/bin -V 3.11
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t sdf2table -l $(PGEN)/bin -V 2.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t Sdf2.baf -l $(PGEN)/share/pgen -V 2.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t implodePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t flattenPT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t unparsePT -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t addPosInfo -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t ambtracker -l $(PT_SUPPORT)/bin -V 1.1
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t baffle -l $(ATERM)/bin -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t ATERM -l $(ATERM) -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libATerm.la -l $(ATERM)/lib -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t SRTS-include -l $(prefix)/include -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t stratego-lib-include -l $(prefix)/include -V X
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstrategolib.rtree -l $(prefix)/share/stratego-lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libxtclib.rtree -l $(prefix)/share/xtc -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t liblib.rtree -l $(prefix)/share/xtc -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-runtime.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-lib-native.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-lib.la -l $(prefix)/lib -V $(VERSION)
	$(XTC_PROG) register -r $(DESTDIR)$(REPOSITORY) -t libstratego-xtc.la -l $(prefix)/lib -V $(VERSION)
